/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1400280E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  char v2; // bl
  _QWORD *v3; // rsi
  int v5; // edi
  char *i; // rax
  char *v7; // r15
  int v8; // r12d
  int v9; // r13d
  PVOID v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rax
  const char *v13; // rax
  const char *v14; // rcx
  __int64 v15; // rdx
  _QWORD v17[2]; // [rsp+58h] [rbp-9h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+7h]
  KIRQL NewIrql[16]; // [rsp+70h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+8Ch] [rbp+2Bh]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  v22 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v5 = 0;
  *(_OWORD *)NewIrql = 0LL;
  if ( (v1 & 4) != 0 )
  {
    v17[1] = 0LL;
    v17[0] = v3 + 100;
    v20 = 816LL;
    SpinLock = &AcpiDeviceTreeLock;
    v21 = 2;
    for ( i = (char *)ACPIExtListStartEnum(v17); ; i = ACPIExtListEnumNext((__int64)v17) )
    {
      v7 = i;
      if ( *(_QWORD *)&NewIrql[8] + v20 == v17[0] || v5 < 0 )
        break;
      if ( v21 == 1 )
      {
        ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      }
      v8 = *(_DWORD *)(a1 + 84);
      v9 = *(_DWORD *)(a1 + 80);
      v10 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
      v11 = (__int64)v10;
      if ( v10 )
      {
        if ( *((_DWORD *)v7 + 183) )
        {
          _InterlockedIncrement((volatile signed __int32 *)v7 + 183);
          memset(v10, 0, 0x88uLL);
          *(_DWORD *)(v11 + 16) = 1599293264;
          *(_QWORD *)(v11 + 128) = &AcpiBuildRunMethodList;
          *(_DWORD *)(v11 + 24) = 3;
          *(_QWORD *)(v11 + 40) = v7;
          *(_DWORD *)(v11 + 80) = v9;
          *(_DWORD *)(v11 + 84) = v8;
          *(_DWORD *)(v11 + 20) = 4108;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v12 = (__int64 *)qword_140090F58;
          if ( *(__int64 **)qword_140090F58 != &AcpiBuildQueueList )
            __fastfail(3u);
          *(_QWORD *)v11 = &AcpiBuildQueueList;
          *(_QWORD *)(v11 + 8) = v12;
          *v12 = v11;
          qword_140090F58 = v11;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v5 = 259;
        }
        else
        {
          ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v10);
          v5 = -1073741130;
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
    if ( v21 )
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
  }
  v13 = byte_140075A82;
  v14 = byte_140075A82;
  if ( v3 )
  {
    v15 = v3[1];
    v2 = (char)v3;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = (const char *)v3[76];
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = (const char *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      6,
      65,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v5,
      v2,
      (__int64)v13,
      (__int64)v14);
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
