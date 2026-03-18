/*
 * XREFs of ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x18002F990
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013223C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Clo_ea_18013223C.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?IsCurrent@CDisplayManager@@QEBA_N_N@Z @ 0x18018E6A0 (-IsCurrent@CDisplayManager@@QEBA_N_N@Z.c)
 *     ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x180202DC0 (--0CRenderThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     McTemplateU0qttttt_EventWriteTransfer @ 0x18020EDEC (McTemplateU0qttttt_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScheduler::WaitForWork(CScheduler *this, struct IMessageLoopExtensions *a2)
{
  __int64 v3; // r8
  char *EventW; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  HANDLE *v8; // rbx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  DWORD *v12; // rdi
  bool v13; // r12
  unsigned __int8 v14; // r15
  unsigned __int8 v15; // si
  unsigned __int8 v16; // di
  unsigned __int8 v17; // bl
  CDisplayManager *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 RemoteSessionOcclusionEvent; // rax
  signed int LastError; // eax
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  ULONGLONG *v28; // [rsp+68h] [rbp-98h] BYREF
  char *v29; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+84h] [rbp-7Ch]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+90h] [rbp-70h] BYREF
  int *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  BOOL *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  HANDLE *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  void *retaddr; // [rsp+138h] [rbp+38h]

  *((_QWORD *)this + 6) = qword_1803DE6E8;
  v3 = qword_1803DE6F0;
  if ( (unsigned __int64)(qword_1803DE6F0 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( qword_1803DE6D8 )
    {
      if ( byte_1803DE702 )
      {
        RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &qword_1803DE6F0,
          RemoteSessionOcclusionEvent);
      }
      else
      {
        EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
        v29 = EventW;
        if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL
          && (*(int (__fastcall **)(CDisplayManager *, char *, char *))(*(_QWORD *)qword_1803DE6D8 + 176LL))(
               qword_1803DE6D8,
               EventW,
               (char *)&qword_1803DE6F8 + 4) >= 0 )
        {
          wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
            &qword_1803DE6F0,
            &v29);
          EventW = v29;
        }
        if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(EventW);
      }
      v3 = qword_1803DE6F0;
    }
    else
    {
      v3 = 0LL;
    }
  }
  *((_QWORD *)this + 7) = v3;
  v6 = (unsigned int)(v3 != 0) + 4;
  CRenderThreadWaitTick::CRenderThreadWaitTick((CRenderThreadWaitTick *)&v28, (volatile unsigned __int64 *)a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFW_Start,
      v7,
      1u,
      (PEVENT_DATA_DESCRIPTOR)&v29);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Compositor_Context,
      &WaitForWork_Start,
      v7,
      1u,
      (PEVENT_DATA_DESCRIPTOR)&v29);
  v23 = 0;
  v8 = (HANDLE *)((char *)this + 24);
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, _QWORD, char *, __int64, _DWORD, int *))(*(_QWORD *)a2 + 32LL))(
           a2,
           (unsigned int)v6,
           (char *)this + 24,
           0xFFFFFFFFLL,
           0,
           &v23);
    if ( v9 >= 0 )
    {
      v10 = v23;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x82u, 0LL);
      v10 = -1;
      v23 = -1;
    }
    if ( v10 < (unsigned int)v6 )
      break;
    v11 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 3LL);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x91u, 0LL);
  }
  HIDWORD(v29) = 258;
  v12 = (DWORD *)&v29;
  v30 = 258;
  v31 = 258LL;
  do
  {
    *v12++ = WaitForSingleObject(*v8++, 0);
    --v6;
  }
  while ( v6 );
  v13 = !v23 || !(_DWORD)v29;
  v14 = v23 == 1 || !HIDWORD(v29);
  v15 = v23 == 2 || !v30;
  v16 = v23 == 3 || !(_DWORD)v31;
  v17 = v23 == 4 || !HIDWORD(v31);
  if ( !CancelWaitableTimer(*((HANDLE *)this + 1)) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT(LastError, retaddr);
  }
  *((_DWORD *)this + 4) = -1;
  if ( v16 )
    CDisplayManager::IsCurrent(v18, 1);
  if ( v17 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT,
        v19,
        1u,
        (PEVENT_DATA_DESCRIPTOR)&v29);
    *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 754LL) = 1;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qttttt_EventWriteTransfer(v16, v15, v23, v13, v14, v15, v16, v17);
  v20 = dword_1803DE938;
  if ( v13 )
  {
    v20 = dword_1803DE938 | 8;
    dword_1803DE938 |= 8u;
  }
  if ( ((v13 | (unsigned __int8)(2 * v14)) & 2) != 0 )
  {
    v20 |= 0x10u;
    dword_1803DE938 = v20;
  }
  if ( (v13 | (unsigned __int8)(2 * v14)) & 4 | (4 * v15) & 4 )
  {
    v20 |= 2u;
    dword_1803DE938 = v20;
  }
  if ( (((unsigned __int8)(v13 | (2 * v14)) | (unsigned __int8)((8 * v17) | (4 * v15))) & 8) != 0 )
    dword_1803DE938 = v20 | 4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    v27 = v15;
    v26 = v14;
    v25 = v13;
    v24 = v23;
    v33 = &v24;
    v35 = &v25;
    v37 = &v26;
    v39 = &v27;
    v41 = (HANDLE *)&v29;
    LODWORD(v29) = v17;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFW_Stop,
      v17,
      6u,
      &v32);
  }
  *v28 = GetTickCount64();
}
