/*
 * XREFs of ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18006FBB4
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800262D8 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18006FB50 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180092A70 (--$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180092AB8 (-RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180095760 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C1C4 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x18015C20C (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C2A4 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     wil::init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___ @ 0x18006FC4C (wil--init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 *     _Init_thread_footer @ 0x18009AF8C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009AFF4 (_Init_thread_header.c)
 */

struct KernelContextProvider *KernelContextProvider::GetInstance(void)
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  int inited; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = (unsigned int)tls_index;
  v1 = 32LL;
  if ( dword_180254F78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180254F78);
    if ( dword_180254F78 == -1 )
    {
      atexit(KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180254F78);
    }
  }
  v6 = 0;
  inited = wil::init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___(v0, v1, &v6);
  if ( inited < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x380,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)inited,
      v4);
  return qword_180254F70;
}
