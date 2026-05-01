/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801DD910
 * Callers:
 *     <none>
 * Callees:
 *     ?destroy@?$__func@V_lambda_1e29e45a324d9aede31372fdd231015a_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x180025190 (-destroy@-$__func@V_lambda_1e29e45a324d9aede31372fdd231015a_@@$$A6AJK@Z@__function@wistd@@UEAAXX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e4366f95ae92c13d208444968732da25___ @ 0x1802DC8B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e4366f95ae92c13d208444968732da25___.c)
 *     ??$move@AEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@std@@YA$$QEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@AEAV1@@Z @ 0x1802DCDC4 (--$move@AEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@std@@YA$$QEAV_lambda_cde4a48620a5d22db59.c)
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_ @ 0x1802DCFBC (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--_lambda_945e3f99e324f0975fc3b8cf1a6859ea_.c)
 */

void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  if ( *((_QWORD *)this + 68) )
  {
    lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_(v7, &v9, (char *)this + 544);
    v4 = std::move<_lambda_cde4a48620a5d22db594fe5feaac6c81_ &>(v7, v2, v3);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_e4366f95ae92c13d208444968732da25___(v5, v4);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x103C,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6);
    wistd::__function::__func<_lambda_1e29e45a324d9aede31372fdd231015a_,long (unsigned long)>::destroy((__int64)v7);
  }
}
