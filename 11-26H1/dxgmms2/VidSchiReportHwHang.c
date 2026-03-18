/*
 * XREFs of VidSchiReportHwHang @ 0x140048588
 * Callers:
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x14000ECF0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x140025CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x140026270 (VidSchiDecrementContextReference.c)
 *     ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x14004CB70 (-DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z.c)
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x1400541C8 (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     VidSchiUnwaitAllContexts @ 0x1400558A4 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     VidSchiBlockDriverCallback @ 0x140099458 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1400C45C0 (VidSchiMarkTdrFaultingDevice.c)
 *     VidSchiCheckGPUTimeout @ 0x1400C53D0 (VidSchiCheckGPUTimeout.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r15d
  __int64 v9; // r8
  __int64 result; // rax
  __int64 *v11; // rsi
  __int64 v12; // rsi
  signed __int64 v13; // rbx
  signed __int64 v14; // rdi
  signed __int64 v15; // rcx
  signed __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdi
  ULONG TimeIncrement; // eax
  ULONG v23; // r15d
  __int64 v24; // rsi
  LARGE_INTEGER v25; // r12
  __int64 v26; // rbx
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rax
  struct _VIDSCH_CONTEXT *v31; // rdi
  _BYTE *v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rdx
  _BYTE *v35; // r8
  _BYTE *v36; // rax
  int v37; // eax
  __int64 v38; // rax
  _BYTE *v39; // r8
  __int64 v40; // rcx
  _BYTE *v41; // rdx
  _BYTE *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _BYTE *v50; // rdx
  _BYTE *v51; // rcx
  _BYTE *v52; // rax
  __int64 v53; // rax
  bool IsRecoveryRequired; // al
  __int64 v55; // rdx
  unsigned int i; // ebx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rax
  bool v61; // cf
  __int64 v62; // rax
  unsigned int v63; // ebx
  signed __int32 v64[8]; // [rsp+0h] [rbp-A9h] BYREF
  unsigned int v65; // [rsp+30h] [rbp-79h] BYREF
  int v66; // [rsp+34h] [rbp-75h]
  unsigned int v67; // [rsp+38h] [rbp-71h]
  int v68; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned int v69; // [rsp+40h] [rbp-69h] BYREF
  signed __int64 v70; // [rsp+48h] [rbp-61h]
  struct _VIDSCH_CONTEXT *v71; // [rsp+50h] [rbp-59h]
  int v72; // [rsp+58h] [rbp-51h]
  __int64 v73; // [rsp+60h] [rbp-49h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-41h] BYREF
  __int64 v75; // [rsp+70h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-31h] BYREF
  _DXGKARG_RESETENGINE v77; // [rsp+90h] [rbp-19h] BYREF
  PVOID BackTrace[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v79; // [rsp+B0h] [rbp+7h]
  __int64 v80; // [rsp+C0h] [rbp+17h]

  v72 = a3;
  v71 = 0LL;
  v75 = 0LL;
  v67 = -1;
  v65 = -1;
  v70 = 0LL;
  v73 = 0LL;
  v68 = 0;
  *(_QWORD *)&v77.NodeOrdinal = 0LL;
  v69 = 0;
  v66 = 0;
  v80 = 0LL;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)BackTrace = 0LL;
  v79 = 0LL;
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  WdLogSingleEntry5(3LL, BackTrace[0], BackTrace[1], v79, *((_QWORD *)&v79 + 1), v80);
  v9 = *(_QWORD *)(a1 + 3264);
  WdLogGlobalForLineNumber = 887;
  if ( v9 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(a1 + 16), v9);
    result = 1LL;
    WdLogGlobalForLineNumber = 895;
    return result;
  }
  if ( a3 == 1 || (unsigned int)(a3 - 9) <= 2 )
  {
    if ( !a4 )
      a4 = **(_QWORD **)(a1 + 696);
    *(_QWORD *)(a1 + 3272) = a4;
    v70 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 96), 0LL, 0LL);
  }
  else
  {
    if ( a3 == 2 )
    {
      KeFlushQueuedDpcs();
      if ( *(_DWORD *)(a1 + 792) )
      {
        v11 = (__int64 *)(a1 + 3272);
        if ( a4 )
        {
          *v11 = a4;
        }
        else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, a1 + 3272) )
        {
          return 0LL;
        }
        v12 = *v11;
        if ( *(_DWORD *)(v12 + 3016) )
        {
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 96), 0LL, 0LL);
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 120), 0LL, 0LL);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 96), 0LL, 0LL);
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 120), 0LL, 0LL);
          if ( v13 == v15 && v14 == v16 )
          {
            v73 = *(_QWORD *)(v12 + 40);
            v17 = *(unsigned int *)(v12 + 1576);
            v70 = v15;
            v18 = *(_QWORD *)(v12 + 8 * v17 + 1584);
            v71 = (struct _VIDSCH_CONTEXT *)v18;
            if ( v18 )
            {
              VidSchiIncrementContextReference(v18);
              v75 = *(_QWORD *)(v18 + 104);
            }
            ++*(_DWORD *)(v12 + 508);
          }
          else
          {
            v8 = 1;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v66 = 0;
          if ( !v8 )
            goto LABEL_29;
        }
      }
      return 0LL;
    }
    if ( a3 != 3 )
      goto LABEL_29;
    KeFlushQueuedDpcs();
    if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(
                          (KSPIN_LOCK *)a1,
                          &v68,
                          &v69,
                          (unsigned __int64 *)&v77.NodeOrdinal,
                          0LL,
                          &v65) )
      return 0LL;
    v19 = v65;
    v67 = v65;
    if ( v65 < 0x10 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
      v20 = *(_QWORD *)(a1 + 8 * v19 + 3448);
      if ( v20 )
        v66 = *(_DWORD *)(v20 + 78944);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
LABEL_29:
  ++*(_DWORD *)(a1 + 3280);
  v21 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  PerformanceFrequency.QuadPart = 0LL;
  v23 = TimeIncrement;
  v24 = v21 - a2;
  v25 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v26 = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  *(_QWORD *)(a1 + 3264) = RecoveryContext;
  WdLogSingleEntry5(3LL, *(_QWORD *)(a1 + 16), v21, v23, KeGetCurrentThread(), RecoveryContext);
  WdLogGlobalForLineNumber = 1121;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
    3LL,
    *(_QWORD *)(a1 + 16),
    (LARGE_INTEGER)v25.QuadPart,
    (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
    v26);
  v28 = *(_QWORD *)(a1 + 3264);
  WdLogGlobalForLineNumber = 1123;
  if ( !v28 )
    goto LABEL_97;
  *(_QWORD *)(v28 + 8) = a1 + 3260;
  v29 = v72;
  *(_DWORD *)(v28 + 16) = v72;
  if ( v29 == 3 )
    *(_BYTE *)(v28 + 2921) = 1;
  if ( !*(_QWORD *)(v28 + 32) )
  {
    v30 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v28 + 32) = v30;
    _InterlockedIncrement64((volatile signed __int64 *)(v30 + 24));
    *(_QWORD *)(v28 + 40) = -1LL;
  }
  v31 = v71;
  ++*(_DWORD *)(*(_QWORD *)(v28 + 32) + 3256LL);
  if ( !*(_QWORD *)(v28 + 48) && v31 )
  {
    VidSchiIncrementContextReference((__int64)v31);
    *(_QWORD *)(v28 + 48) = v31;
  }
  v32 = (_BYTE *)(a1 + 3285);
  v33 = 15LL;
  if ( *(_BYTE *)(a1 + 3285) )
  {
    if ( a1 == -3285 )
      goto LABEL_46;
    v34 = 15LL;
    v35 = (_BYTE *)(v28 + 2821);
    do
    {
      if ( v34 == -2147483631 )
        break;
      if ( !*v32 )
        break;
      *v35++ = *v32++;
      --v34;
    }
    while ( v34 );
    v36 = v35 - 1;
    if ( v34 )
      v36 = v35;
    *v36 = 0;
    if ( !v34 )
LABEL_46:
      *(_BYTE *)(v28 + 2821) = 0;
    v37 = *(_DWORD *)(a1 + 3300);
  }
  else
  {
    if ( !v75 )
      goto LABEL_62;
    v38 = *(_QWORD *)(v75 + 48);
    if ( !v38 || !*(_QWORD *)(v38 + 8) )
      goto LABEL_62;
    *(_QWORD *)(v28 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 13) + 48LL) + 8LL) + 56LL);
    v39 = *(_BYTE **)(*(_QWORD *)(*((_QWORD *)v31 + 13) + 48LL) + 2648LL);
    if ( !v39 )
      goto LABEL_59;
    v40 = 15LL;
    v41 = (_BYTE *)(v28 + 2821);
    do
    {
      if ( v40 == -2147483631 )
        break;
      if ( !*v39 )
        break;
      *v41++ = *v39++;
      --v40;
    }
    while ( v40 );
    v42 = v41 - 1;
    if ( v40 )
      v42 = v41;
    *v42 = 0;
    if ( !v40 )
LABEL_59:
      *(_BYTE *)(v28 + 2821) = 0;
    v37 = *((_DWORD *)v31 + 36);
  }
  *(_DWORD *)(v28 + 2836) = v37;
LABEL_62:
  v43 = *(_QWORD *)(v28 + 32);
  *(_DWORD *)(v28 + 144) = 69640;
  *(_DWORD *)(v28 + 148) = DpiGetDriverVersion(*(_QWORD *)(v43 + 216));
  *(_QWORD *)(v28 + 24) = v24;
  v44 = *(_QWORD *)(a1 + 3272);
  if ( v44 )
    v45 = *(unsigned __int16 *)(v44 + 4);
  else
    v45 = 0;
  v46 = v67;
  *(_DWORD *)(v28 + 56) = v45;
  *(_QWORD *)(v28 + 64) = v70;
  *(_QWORD *)(v28 + 72) = v73;
  *(_DWORD *)(v28 + 88) = v68;
  *(_QWORD *)(v28 + 96) = *(_QWORD *)&v77.NodeOrdinal;
  *(_DWORD *)(v28 + 92) = v69;
  *(_DWORD *)(v28 + 80) = v46;
  if ( (_DWORD)v46 != -1 )
  {
    v47 = *(_QWORD *)(a1 + 8 * v46 + 3448);
    if ( v47 )
    {
      v48 = *(_QWORD *)(v47 + 16);
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 48);
        if ( v49 )
        {
          *(_QWORD *)(v28 + 2808) = *(_QWORD *)(v49 + 2656);
          v50 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v46 + 3448) + 16LL) + 48LL) + 2648LL);
          if ( !v50 )
            goto LABEL_77;
          v51 = (_BYTE *)(v28 + 2821);
          do
          {
            if ( v33 == -2147483631 )
              break;
            if ( !*v50 )
              break;
            *v51++ = *v50++;
            --v33;
          }
          while ( v33 );
          v52 = v51 - 1;
          if ( v33 )
            v52 = v51;
          *v52 = 0;
          if ( !v33 )
LABEL_77:
            *(_BYTE *)(v28 + 2821) = 0;
        }
      }
    }
  }
  v53 = v66;
  *(_DWORD *)(v28 + 84) = v66;
  if ( (_DWORD)v53 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(a1 + 16), v53);
    WdLogGlobalForLineNumber = 1232;
  }
  *(_QWORD *)(v28 + 104) = DXGADAPTER::GetDbgOwnerTag(*(DXGADAPTER **)(v28 + 32));
  IsRecoveryRequired = TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v28);
  v55 = *(_QWORD *)(a1 + 16);
  if ( IsRecoveryRequired )
  {
    WdLogSingleEntry2(3LL, v55, *(_QWORD *)(a1 + 3264));
    WdLogGlobalForLineNumber = 1252;
    *(_DWORD *)(a1 + 3260) = 1;
    VidSchiBlockDriverCallback(a1);
    *(_DWORD *)(a1 + 44) = 23;
    RtlClearAllBitsEx(a1 + 648);
    *(_BYTE *)(a1 + 3284) &= ~8u;
    if ( v31 )
      VidSchiMarkTdrFaultingDevice(*((_QWORD *)v31 + 13));
    if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL)) >= 0x6002 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 84); ++i )
      {
        if ( !*(_BYTE *)(a1 + 63) )
        {
          v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 8LL * i) + 96LL);
          if ( *(_DWORD *)(v57 + 3016) )
          {
            v58 = *(unsigned __int16 *)(v57 + 4);
            v59 = *(_QWORD *)(a1 + 696);
            *(_QWORD *)&v77.NodeOrdinal = 0LL;
            v77.LastAbortedFenceId = 0;
            v60 = v59 + 8 * v58;
            v61 = (unsigned int)v58 < *(_DWORD *)(a1 + 768);
            if ( (unsigned int)v58 >= *(_DWORD *)(a1 + 768) )
              v60 = v59;
            v77.EngineOrdinal = *(unsigned __int16 *)(*(_QWORD *)v60 + 6LL);
            if ( v61 )
              v59 += 8 * v58;
            v77.NodeOrdinal = *(unsigned __int16 *)(*(_QWORD *)v59 + 8LL);
            if ( (int)ADAPTER_RENDER::DdiResetEngine(*(ADAPTER_RENDER **)(a1 + 8), &v77) < 0 )
            {
              *(_BYTE *)(a1 + 3284) |= 4u;
              break;
            }
          }
        }
      }
    }
    v62 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(v62 + 3094) = 0;
    _InterlockedOr(v64, 0);
    *(_BYTE *)(v62 + 3093) = 1;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 768LL) + 7040LL) = 1;
    VidSchiCompleteAllPendingCommand(a1);
    VidSchiUnwaitAllContexts(a1);
    VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)a1, 0LL, 9, 0xFFFFFFFD, 0);
    v63 = 1;
    goto LABEL_98;
  }
  WdLogSingleEntry1(3LL, v55);
  WdLogGlobalForLineNumber = 1346;
  TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v28, 0, 1);
  *(_QWORD *)(a1 + 3264) = 0LL;
LABEL_97:
  v63 = 0;
LABEL_98:
  if ( v71 )
    VidSchiDecrementContextReference(v71, 0);
  return v63;
}
