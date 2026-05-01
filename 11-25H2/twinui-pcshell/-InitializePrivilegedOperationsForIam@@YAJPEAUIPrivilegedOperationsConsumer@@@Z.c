/*
 * XREFs of ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180091418
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18004B774 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18009146C (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 */

__int64 __fastcall InitializePrivilegedOperationsForIam(struct IPrivilegedOperationsConsumer *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !PrivilegedOperationsService::s_this )
  {
    v1 = -2147467259;
    v3 = 854LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v1);
    return v1;
  }
  v1 = PrivilegedOperationsService::InitializePrivilegedOperationsForIam(a1, a1);
  if ( (v1 & 0x80000000) != 0 )
  {
    v3 = 855LL;
    goto LABEL_6;
  }
  return v1;
}
