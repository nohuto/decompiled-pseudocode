/*
 * XREFs of ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1801501E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x180150460 (-UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1801504CC (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     IsRegisterManipulationThreadPresent @ 0x18022198C (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalManipulationManager::ManipulationThreadMain(
        CGlobalManipulationManager *this,
        __int64 a2,
        __int64 a3)
{
  struct IMessageSession **v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  signed int LastError; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_THREAD_STARTUP,
      a3,
      1u,
      &v13);
  v4 = (struct IMessageSession **)((char *)this + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  v5 = CoreUICreateEx(1LL, (char *)this + 24);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT(v5, retaddr);
  EnterCriticalSection(&stru_1803DCB88);
  byte_1803DCB84 = 0;
  LeaveCriticalSection(&stru_1803DCB88);
  EnterCriticalSection(&stru_1803DCB48);
  byte_1803DCB44 = 0;
  LeaveCriticalSection(&stru_1803DCB48);
  if ( (unsigned __int8)IsRegisterManipulationThreadPresent() )
  {
    if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback, this) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT(LastError, retaddr);
    }
    CGlobalManipulationManager::UpdateMMCSSTask(this);
    v8 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v4,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CGlobalManipulationManager *)((char *)this + 32));
    if ( v8 < 0 )
      ModuleFailFastForHRESULT(v8, retaddr);
    v9 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 272LL))(
           *v4,
           hEvent,
           CGlobalManipulationManager::ManipulationThreadMain_::_25_::_lambda_1_::_lambda_invoker_cdecl_,
           this);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT(v9, retaddr);
    v10 = (*(__int64 (__fastcall **)(struct IMessageSession *, void * near *, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 272LL))(
            *v4,
            CManipulationManager::s_rghWaitEvents,
            CGlobalManipulationManager::ManipulationThreadMain_::_30_::_lambda_2_::_lambda_invoker_cdecl_,
            this);
    if ( v10 < 0 )
      ModuleFailFastForHRESULT(v10, retaddr);
    v11 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 272LL))(
            *v4,
            qword_1803DE788,
            CGlobalManipulationManager::ManipulationThreadMain_::_35_::_lambda_3_::_lambda_invoker_cdecl_,
            this);
    if ( v11 < 0 )
      ModuleFailFastForHRESULT(v11, retaddr);
    SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v4 + 232LL))(*v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  }
  CManipulationManager::s_dwManipulationThreadId = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_THREAD_CLEANUP,
      v6,
      1u,
      &v13);
  return 0LL;
}
