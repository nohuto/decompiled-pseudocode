/*
 * XREFs of ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180478DF4
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18047C400 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18047C6CC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180017238 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B3920 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$PreviousDeferredRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY0L@$$CBD@Z @ 0x180476F74 (--$PreviousDeferredRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$Q.c)
 *     ??1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1804787E4 (--1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18047E220 (-StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboar.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8
  int *v10; // rbx
  int *v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  DWORD v15; // edx
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+24h] [rbp-DCh] BYREF
  RTL_SRWLOCK *v19; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v20[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"DeferredRequestCreated");
  v20[0] = &TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::`vftable';
  LOBYTE(v8) = a4;
  TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::StartActivity(v20, a2, a3, v8);
  wil::AcquireSRWLockExclusive(&v19, (RTL_SRWLOCK *)(a1 + 424));
  v10 = (int *)(a1 + 408);
  v11 = (int *)(a1 + 412);
  if ( *(_BYTE *)(a1 + 404) )
  {
    v17 = *v10;
    v18 = *v11;
    TouchKeyboardExperienceTelemetryLogger::PreviousDeferredRequestCanceled<unsigned int,unsigned int,char const (&)[11]>(
      &v18,
      &v17,
      v9);
    *(_DWORD *)(a1 + 408) = 0;
    *(_DWORD *)(a1 + 412) = 11;
  }
  *(_BYTE *)(a1 + 404) = 1;
  *(_BYTE *)(a1 + 405) = a4;
  *v10 = a3;
  *v11 = a2;
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 96LL))(*(_QWORD *)(a1 + 104));
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 104) + 80LL))(
            *(_QWORD *)(a1 + 104),
            500000LL,
            0LL);
    v13 = v12;
    if ( v12 >= 0 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v20,
        v15);
      v13 = 0;
      goto LABEL_9;
    }
    v14 = 2187LL;
  }
  else
  {
    v14 = 2186LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v12);
LABEL_9:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
  TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::~DeferredRequestCreated((TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated *)v20);
  return v13;
}
