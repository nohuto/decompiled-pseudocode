/*
 * XREFs of IommupMapDeviceInternal @ 0x14059F814
 * Callers:
 *     IommuMapDevice @ 0x14059ED30 (IommuMapDevice.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IommupHvGetDeviceSvmCapabilities @ 0x1405A0BD8 (IommupHvGetDeviceSvmCapabilities.c)
 *     IommupHvMapDevice @ 0x1405A0F9C (IommupHvMapDevice.c)
 *     IommupHvUnmapDevice @ 0x1405A1180 (IommupHvUnmapDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IommupMapDeviceInternal(KSPIN_LOCK *a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  int DeviceSvmCapabilities; // r15d
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  char v14; // r14
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  _QWORD *v24; // rax
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v26; // rax
  KSPIN_LOCK v27; // rcx
  _QWORD *v28; // rcx
  KSPIN_LOCK v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r9
  _QWORD *v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  __int64 v36; // [rsp+40h] [rbp-38h] BYREF
  int v37; // [rsp+98h] [rbp+20h] BYREF

  v37 = 0;
  v6 = 0LL;
  v36 = 0LL;
  v7 = 0LL;
  if ( HalpHvIommu )
  {
    BugCheckParameter2 = *(_QWORD *)(a2 + 32);
    DeviceSvmCapabilities = IommupHvGetDeviceSvmCapabilities(*(_QWORD *)a2, &v36, &v37);
    if ( DeviceSvmCapabilities < 0 )
      return (unsigned int)DeviceSvmCapabilities;
    v8 = v36;
    DeviceSvmCapabilities = IommupHvMapDevice(*(_QWORD *)(a2 + 32), v12, v36, a3);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 32);
    BugCheckParameter2 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL);
    v37 = *(_DWORD *)(v8 + 464);
    if ( !*(_QWORD *)(v8 + 216) )
      return (unsigned int)-1073741637;
    DeviceSvmCapabilities = guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16), *(_QWORD *)(a2 + 40));
  }
  if ( DeviceSvmCapabilities < 0 )
    return (unsigned int)DeviceSvmCapabilities;
  v13 = (_QWORD *)HalpMmAllocCtxAlloc(v11, 4184LL);
  if ( v13 )
  {
    v14 = HalpHvIommu;
    if ( !HalpHvIommu )
    {
      v15 = *(_DWORD *)(a2 + 56);
      if ( !v15 )
      {
        v16 = (*a3 >> 12) & 0x1F;
        *(_QWORD *)(a2 + 64) = 0LL;
        *(_DWORD *)(a2 + 60) = v16;
      }
      *(_DWORD *)(a2 + 56) = v15 + 1;
    }
    *(_QWORD *)(a2 + 88) = v13;
    memset_0(v13, 0, 0x1058uLL);
    v13[5] = BugCheckParameter2;
    *((_DWORD *)v13 + 8) = v37;
    v13[9] = a2;
    v13[3] = v8;
    *((_DWORD *)v13 + 12) = *a3;
    v13[2] = 0LL;
    v13[8] = v13 + 7;
    v13[7] = v13 + 7;
    v18 = v8 + 392;
    if ( v14 )
      v18 = v8 + 24;
    *((_DWORD *)v13 + 20) = *(_DWORD *)(v18 + 16);
    v19 = (_QWORD *)HalpMmAllocCtxAlloc(v17, 64LL);
    v6 = v19;
    if ( v19 )
    {
      memset_0(v19, 0, 0x40uLL);
      v6[5] = v13;
      v21 = HalpMmAllocCtxAlloc(v20, 40LL);
      v7 = (_QWORD *)v21;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 16) = v8;
        v24 = (_QWORD *)(v21 + 24);
        v24[1] = v24;
        *v24 = v24;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
        KxAcquireSpinLock(a1 + 3);
        v26 = a1 + 6;
        v27 = a1[6];
        if ( *(KSPIN_LOCK **)(v27 + 8) == a1 + 6 )
        {
          *v13 = v27;
          v13[1] = v26;
          *(_QWORD *)(v27 + 8) = v13;
          v28 = a1 + 4;
          *v26 = v13;
          v29 = a1[4];
          v30 = (_QWORD *)v29;
          if ( (KSPIN_LOCK *)v29 == a1 + 4 )
            goto LABEL_36;
          do
          {
            v31 = v30[2];
            v32 = v30;
            if ( v31 == v8 )
              break;
            v30 = (_QWORD *)*v30;
          }
          while ( v30 != v28 );
          if ( !v32 || v31 != v8 )
          {
LABEL_36:
            if ( *(_QWORD **)(v29 + 8) != v28 )
              goto LABEL_46;
            *v7 = v29;
            v32 = v7;
            v7[1] = v28;
            *(_QWORD *)(v29 + 8) = v7;
            *v28 = v7;
            v7 = 0LL;
          }
          v33 = v32 + 3;
          v34 = v32[3];
          if ( *(_QWORD **)(v34 + 8) == v32 + 3 )
          {
            *v6 = v34;
            v6[1] = v33;
            *(_QWORD *)(v34 + 8) = v6;
            *v33 = v6;
            v6 = 0LL;
            KxReleaseSpinLock(a1 + 3);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            goto LABEL_42;
          }
        }
LABEL_46:
        __fastfail(3u);
      }
    }
  }
  DeviceSvmCapabilities = -1073741670;
  if ( HalpHvIommu )
    IommupHvUnmapDevice(BugCheckParameter2);
  else
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16), *(_QWORD *)(a2 + 40));
  if ( v13 )
  {
    v23 = HalpHvIommu == 0;
    *(_QWORD *)(a2 + 88) = 0LL;
    v13[9] = 0LL;
    if ( v23 )
    {
      v23 = (*(_DWORD *)(a2 + 56))-- == 1;
      if ( v23 )
      {
        *(_DWORD *)(a2 + 60) = 0;
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
        _InterlockedExchange64((volatile __int64 *)(a2 + 64), 1LL);
      }
    }
    HalpMmAllocCtxFree(v22, (__int64)v13);
  }
LABEL_42:
  if ( v7 )
    HalpMmAllocCtxFree(v22, (__int64)v7);
  if ( v6 )
    HalpMmAllocCtxFree(v22, (__int64)v6);
  return (unsigned int)DeviceSvmCapabilities;
}
