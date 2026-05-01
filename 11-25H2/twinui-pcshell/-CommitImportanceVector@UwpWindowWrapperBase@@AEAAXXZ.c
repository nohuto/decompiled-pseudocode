/*
 * XREFs of ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18011209C
 * Callers:
 *     _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x1801108C8 (_lambda_fe0fa93ea00b211fee91aac62f93999b_--operator().c)
 *     ?ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x180111FC0 (-ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     _lambda_0d0dc26f2e1703fa8279b79796d53b0f_::operator() @ 0x1804385C4 (_lambda_0d0dc26f2e1703fa8279b79796d53b0f_--operator().c)
 *     _lambda_20c9707ab79eec934759cb2bec9fa53e_::operator() @ 0x180438808 (_lambda_20c9707ab79eec934759cb2bec9fa53e_--operator().c)
 *     _lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator() @ 0x180438A68 (_lambda_2a43ebb49f2e9221dd99f0faba3896bb_--operator().c)
 *     _lambda_732b9d0d4e46444a8cf28034daf59b80_::operator() @ 0x180439428 (_lambda_732b9d0d4e46444a8cf28034daf59b80_--operator().c)
 *     _lambda_8032610bc69c7d33d4f231d1bb122a3b_::operator() @ 0x1804396FC (_lambda_8032610bc69c7d33d4f231d1bb122a3b_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180070C64 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x180112194 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::CommitImportanceVector(UwpWindowWrapperBase *this)
{
  const union _RM_ACTIVITY_IMPORTANCE *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int *v5; // rbx
  _DWORD *v6; // rcx
  ViewManagerInteropTraceLogging *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 564) )
  {
    v2 = (UwpWindowWrapperBase *)((char *)this + 252);
    if ( *((_DWORD *)this + 64) != *((_DWORD *)this + 63) )
    {
      v3 = *((_QWORD *)this + 14);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC8E,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v4);
        *((_DWORD *)this + 64) = *(_DWORD *)v2;
        v5 = (int *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16, &v9);
        v6 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
        if ( v6 )
        {
          if ( *v6 )
          {
            ViewManagerInteropTraceLogging::Instance();
            ViewManagerInteropTraceLogging::CommitImportanceVector_(v7, *v5, v2);
          }
        }
      }
    }
  }
}
