/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x14003666C
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1400358A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1400362C0 (ACPIBuildProcessDevicePhasePrx.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x14001DB20 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIIsEqualHandle @ 0x140023D94 (AMLIIsEqualHandle.c)
 *     WPP_RECORDER_SF_sqss @ 0x140040DCC (WPP_RECORDER_SF_sqss.c)
 *     ACPIInitRemovePowerNodes @ 0x140052648 (ACPIInitRemovePowerNodes.c)
 *     WPP_RECORDER_SF_sLqss @ 0x14005A398 (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        ULONG_PTR BugCheckParameter2,
        __int64 *BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned int v9; // r13d
  unsigned int v10; // esi
  __int64 Pool2; // r15
  unsigned int i; // r12d
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r14
  _QWORD **v20; // r9
  _QWORD *j; // r8
  ULONG_PTR v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 **v28; // rdx
  __int64 v29; // rax
  const char *v30; // rdx
  __int64 v31; // r8
  const char *v32; // rdx
  __int64 v34[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v7 = a3;
  v9 = 0;
  v10 = *v4;
  if ( !a4 )
  {
    if ( v10 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *v4);
    v10 -= 2;
    v9 = 2;
  }
  if ( v10 )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL * v10, 1349542721LL);
    if ( Pool2 )
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      *(_QWORD *)(BugCheckParameter2 + 8 * v6 + 408) = Pool2;
      for ( i = 0; i < v10; ++i )
      {
        v13 = *(_QWORD *)(v7 + 32);
        v14 = v9 + 1LL;
        v34[0] = 0LL;
        v15 = 5 * v14;
        if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v13 + 40 * v14), BugCheckParameter3, v34, 0) < 0 )
        {
          v32 = byte_140075A82;
          if ( BugCheckParameter2 )
          {
            v16 = *(_QWORD *)(BugCheckParameter2 + 8);
            if ( (v16 & 0x200000000000LL) != 0 && (v16 & 0x400000000000LL) != 0 )
              v32 = *(const char **)(BugCheckParameter2 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v32, v16, 13);
          KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v13 + 8 * v15));
        }
        v17 = v34[0];
        if ( !v34[0] || *(_WORD *)(*(_QWORD *)v34[0] + 66LL) != 11 )
        {
          v30 = byte_140075A82;
          if ( BugCheckParameter2 )
          {
            v31 = *(_QWORD *)(BugCheckParameter2 + 8);
            if ( (v31 & 0x200000000000LL) != 0 && (v31 & 0x400000000000LL) != 0 )
              v30 = *(const char **)(BugCheckParameter2 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 2;
            WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v30, 10, 14);
          }
          KeBugCheckEx(0xA5u, 0x12uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v13 + 8 * v15));
        }
        v18 = *(_QWORD *)(*(_QWORD *)v34[0] + 104LL);
        v19 = 56LL * i;
        *(_QWORD *)(v19 + Pool2 + 8) = v18;
        *(_DWORD *)(v19 + Pool2 + 16) = *(_DWORD *)(v18 + 44);
        *(_QWORD *)(v19 + Pool2 + 32) = BugCheckParameter2;
        *(_DWORD *)(v19 + Pool2 + 20) = a4;
        if ( a4 )
        {
          if ( a4 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x400000) != 0 )
            _InterlockedOr64((volatile signed __int64 *)(v18 + 16), 0x220uLL);
        }
        else
        {
          *(_BYTE *)(v19 + Pool2 + 24) = 1;
        }
        v20 = (_QWORD **)(*(_QWORD *)(v19 + Pool2 + 8) + 48LL);
        for ( j = *v20; ; j = (_QWORD *)*j )
        {
          if ( j == v20 )
            goto LABEL_30;
          v22 = *(j - 1);
          if ( v22 != BugCheckParameter2
            && AMLIIsEqualHandle(*(_QWORD **)(v22 + 760), *(_QWORD **)(BugCheckParameter2 + 760))
            && ((*(_DWORD *)(v22 + 1008) & 0x20000) == 0 || *(_DWORD *)(v22 + 896) == *(_DWORD *)(*(_QWORD *)v23 + 40LL)) )
          {
            break;
          }
        }
        ACPIInitRemovePowerNodes(v22);
        if ( (*(_DWORD *)(v22 + 1008) & 0x20000) != 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
          v24 = *(_QWORD *)(v22 + 880);
          if ( *(_QWORD *)(v24 + 8) != v22 + 880 )
            goto LABEL_35;
          v25 = *(_QWORD **)(v22 + 888);
          if ( *v25 != v22 + 880 )
            goto LABEL_35;
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          ACPIInitDereferenceDeviceExtensionLocked(v22);
          KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
        }
        v17 = v34[0];
LABEL_30:
        v26 = *(_QWORD *)(v19 + Pool2 + 8) + 48LL;
        v27 = (__int64 *)(v19 + Pool2 + 40);
        v28 = *(__int64 ***)(*(_QWORD *)(v19 + Pool2 + 8) + 56LL);
        if ( *v28 != (__int64 *)v26 )
LABEL_35:
          __fastfail(3u);
        *v27 = v26;
        v27[1] = (__int64)v28;
        *v28 = v27;
        *(_QWORD *)(v26 + 8) = v27;
        if ( i >= v10 - 1 )
          v29 = 0LL;
        else
          v29 = v19 + Pool2 + 56;
        *(_QWORD *)(v19 + Pool2) = v29;
        AMLIDereferenceHandleEx(v17);
        v7 = a3;
        ++v9;
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
