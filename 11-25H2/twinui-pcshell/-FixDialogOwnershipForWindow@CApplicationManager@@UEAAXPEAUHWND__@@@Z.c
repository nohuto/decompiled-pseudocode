/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801EA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?destroy@?$__func@V_lambda_1e29e45a324d9aede31372fdd231015a_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x180200FE0 (-destroy@-$__func@V_lambda_1e29e45a324d9aede31372fdd231015a_@@$$A6AJK@Z@__function@wistd@@UEAAXX.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a4ddc0003037f7a24bab5cc4f0a20547___ @ 0x1802E33A8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a4ddc0003037f7a24bab5cc4f0a20547___.c)
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::_lambda_c20ddfa74c13e3309a3b622ad13c0825_ @ 0x1802E3928 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--_lambda_c20ddfa74c13e3309a3b622ad13c0825_.c)
 */

void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  __int64 v2; // rcx
  int v3; // eax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( *((_QWORD *)this + 68) )
  {
    lambda_c20ddfa74c13e3309a3b622ad13c0825_::_lambda_c20ddfa74c13e3309a3b622ad13c0825_(v4, &v6, (char *)this + 544);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_a4ddc0003037f7a24bab5cc4f0a20547___(v2, v4);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x103F,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v3);
    wistd::__function::__func<_lambda_1e29e45a324d9aede31372fdd231015a_,long (unsigned long)>::destroy(v4);
  }
}
