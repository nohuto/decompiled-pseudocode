/*
 * XREFs of ndisReceiveWorkerThread @ 0x140044080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

_UNKNOWN **__fastcall ndisReceiveWorkerThread(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r12
  char *v3; // rbx
  char *v4; // rdi
  KIRQL v5; // si
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // r15
  char *v10; // rcx
  LARGE_INTEGER v11; // rdx
  char **v12; // rax
  _UNKNOWN **result; // rax
  __int64 v14; // [rsp+28h] [rbp-41h]
  char v15[4]; // [rsp+28h] [rbp-41h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+38h] [rbp-31h] BYREF
  __int128 v18; // [rsp+3Ah] [rbp-2Fh]
  __m256i v19; // [rsp+4Ah] [rbp-1Fh]
  int v20; // [rsp+6Ah] [rbp+1h]
  __int16 v21; // [rsp+6Eh] [rbp+5h]
  char v22[8]; // [rsp+70h] [rbp+7h]
  _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+1Fh] BYREF

  *(_QWORD *)v22 = a1;
  ProcNumber = 0;
  Affinity = 0LL;
  v1 = a1;
  PreviousAffinity = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v1;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x10u,
      (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids,
      *(_DWORD *)v15);
  }
  v2 = v1;
  Affinity.Mask = 1LL << ProcNumber.Number;
  v3 = (char *)qword_14011D440 + 64 * (unsigned __int64)v1;
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    ndisWaitForKernelObject(v3 + 32);
    v4 = 0LL;
    v5 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v3 + 2);
    v6 = *(char **)v3;
    if ( *(char **)v3 != v3 )
    {
      if ( *((char **)v6 + 1) != v3 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
LABEL_23:
        __fastfail(3u);
      *(_QWORD *)v3 = v7;
      v4 = v6;
      *(_QWORD *)(v7 + 8) = v3;
      *((_QWORD *)v6 + 1) = 0LL;
      *(_QWORD *)v6 = 0LL;
      --*((_DWORD *)v3 + 6);
    }
    v8 = v2 << 7;
    if ( *(char **)v3 == v3 )
    {
      *((_DWORD *)qword_14011D438 + v2) = 0;
      KeCancelTimer((PKTIMER)((char *)qword_14011D430 + v8));
    }
    else
    {
      v10 = (char *)qword_14011D430 + v8;
      v11.QuadPart = -1LL;
      if ( DueTime.QuadPart )
        v11 = DueTime;
      KeSetTimer((PKTIMER)v10, v11, (PKDPC)v10 + 1);
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v3 + 2);
    if ( v4 )
      break;
LABEL_16:
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
  v9 = (char *)ndisPerCpuPoisonPills + 32 * v2;
  if ( v4 != v9 )
  {
    if ( (_BYTE)word_14011EFA4 )
    {
      v20 = 0;
      *(_OWORD *)&v19.m256i_u64[2] = 0LL;
      v21 = 0;
      v18 = 0LL;
      WnodeEventItem = 56;
      v19.m256i_i64[0] = 0LL;
      *(_QWORD *)((char *)&v18 + 6) = qword_14011EF98;
      *(__int32 *)((char *)&v19.m256i_i32[6] + 2) = 0x20000;
      BYTE2(v18) = 22;
      *(GUID *)&v19.m256i_u16[3] = EtwGuidNdisReceive;
      v19.m256i_i8[30] = 0;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    (*((void (__fastcall **)(_QWORD))v4 + 2))(*((_QWORD *)v4 + 3));
    if ( (_BYTE)word_14011EFA4 )
    {
      *(__int64 *)((char *)&v19.m256i_i64[2] + 6) = 0x2000000000000LL;
      v18 = 0LL;
      WnodeEventItem = 48;
      v19.m256i_i64[0] = 0LL;
      *(_QWORD *)((char *)&v18 + 6) = qword_14011EF98;
      BYTE2(v18) = 23;
      *(GUID *)&v19.m256i_u16[3] = EtwGuidNdisReceive;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    goto LABEL_16;
  }
  if ( *(char **)v3 != v3 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v3 + 2);
    v12 = (char **)*((_QWORD *)v3 + 1);
    if ( *v12 != v3 )
      goto LABEL_23;
    *(_QWORD *)v9 = v3;
    *((_QWORD *)v9 + 1) = v12;
    *v12 = v9;
    *((_QWORD *)v3 + 1) = v9;
    ++*((_DWORD *)v3 + 6);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v3 + 2);
    KeReleaseSemaphore((PRKSEMAPHORE)v3 + 1, 0, 1, 0);
    goto LABEL_16;
  }
  if ( v5 != 2 )
    KeLowerIrql(v5);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = *(_DWORD *)v22;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4u,
                          0xCu,
                          0x11u,
                          (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids,
                          v14);
  }
  return result;
}
