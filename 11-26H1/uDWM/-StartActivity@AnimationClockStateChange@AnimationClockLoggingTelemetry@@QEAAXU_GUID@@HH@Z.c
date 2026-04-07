/*
 * XREFs of ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180024ED0
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180024AB0 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180025070 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025138 (-EnsureWatchingCurrentThread@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflecto.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002515C (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18008D328 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this,
        struct _GUID *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // r14
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+38h] [rbp-69h] BYREF
  __int64 v14; // [rsp+40h] [rbp-61h] BYREF
  __int64 v15; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v16[2]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v17; // [rsp+58h] [rbp-49h]
  unsigned __int16 *v18; // [rsp+68h] [rbp-39h] BYREF
  int v19; // [rsp+70h] [rbp-31h]
  int v20; // [rsp+74h] [rbp-2Dh]
  void *v21; // [rsp+78h] [rbp-29h]
  int v22; // [rsp+80h] [rbp-21h]
  int v23; // [rsp+84h] [rbp-1Dh]
  __int64 *v24; // [rsp+88h] [rbp-19h]
  __int64 v25; // [rsp+90h] [rbp-11h]
  __int64 *v26; // [rsp+98h] [rbp-9h]
  __int64 v27; // [rsp+A0h] [rbp-1h]
  struct _GUID *v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  char *v30; // [rsp+B8h] [rbp+17h]
  __int64 v31; // [rsp+C0h] [rbp+1Fh]
  unsigned __int64 *v32; // [rsp+C8h] [rbp+27h]
  __int64 v33; // [rsp+D0h] [rbp+2Fh]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = *(_QWORD *)(wil::details::static_lazy<AnimationClockLogging>::get() + 8);
  if ( *(_DWORD *)v8 > 4u )
  {
    v13 = __PAIR64__(a3, a4);
    CurrentThreadId = GetCurrentThreadId();
    v10 = *((_QWORD *)this + 34);
    v11 = 0LL;
    LODWORD(v14) = CurrentThreadId;
    v15 = 0LL;
    if ( !*(_BYTE *)(v10 + 4) || _tlgGuidIsZero((const struct _GUID *)(v10 + 24)) )
      v12 = v11;
    v17 = v11;
    v32 = &v13;
    v33 = 4LL;
    v30 = (char *)&v13 + 4;
    v31 = 4LL;
    v26 = &v14;
    v28 = a2;
    v24 = &v15;
    v16[1] = 260;
    v18 = *(unsigned __int16 **)(v8 + 8);
    v29 = 16LL;
    v27 = 4LL;
    v25 = 8LL;
    v16[0] = 184549376;
    v19 = *v18;
    v21 = &unk_1800FED2B;
    v20 = 2;
    v22 = 93;
    v23 = 1;
    HIDWORD(v14) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    ((void (__fastcall *)(_QWORD, _DWORD *, __int64, __int64, int, unsigned __int16 **, unsigned __int64, __int64, __int64))EtwEventWriteTransfer)(
      *(_QWORD *)(v8 + 32),
      v16,
      v10 + 8,
      v12,
      7,
      &v18,
      v13,
      v14,
      v15);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(this);
}
