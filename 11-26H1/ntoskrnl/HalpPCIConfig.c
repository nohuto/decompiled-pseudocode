/*
 * XREFs of HalpPCIConfig @ 0x14042CDA0
 * Callers:
 *     HalpAcpiAccessSecureAddress @ 0x14024EA50 (HalpAcpiAccessSecureAddress.c)
 *     HalpWritePCIConfig @ 0x14042C470 (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x14042CBF0 (HalpReadPCIConfig.c)
 *     HaliPciInterfaceWriteConfig @ 0x14042CD60 (HaliPciInterfaceWriteConfig.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     HalpPCIReleaseConfigSpaceLock @ 0x14042D150 (HalpPCIReleaseConfigSpaceLock.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x14042D1B8 (HalpPciMapMmConfigPhysicalAddress.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpPciAccessIoConfigSpace @ 0x14058E828 (HalpPciAccessIoConfigSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

ULONG_PTR *__fastcall HalpPCIConfig(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        ULONG_PTR *a4,
        unsigned int BugCheckParameter3,
        unsigned int Size,
        int a7)
{
  ULONG_PTR *v7; // r13
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rbp
  unsigned int v10; // r10d
  ULONG_PTR *result; // rax
  char v12; // bl
  unsigned int v13; // esi
  unsigned int v14; // r14d
  unsigned __int8 CurrentIrql; // r12
  __int64 v16; // r8
  unsigned __int16 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // eax
  unsigned int v23; // r8d
  signed __int32 v34[8]; // [rsp+0h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  unsigned int v36; // [rsp+28h] [rbp-60h]
  unsigned int v37; // [rsp+30h] [rbp-58h]
  ULONG_PTR *v38; // [rsp+38h] [rbp-50h]
  unsigned __int16 v39; // [rsp+90h] [rbp+8h]

  v39 = a1;
  v7 = a4;
  v8 = a3;
  v9 = (unsigned __int8)a2;
  v10 = (unsigned __int16)a1;
  if ( HalpIommuSkipPciConfigDisabled )
    goto LABEL_6;
  result = (ULONG_PTR *)HalpIommuList;
  a4 = &HalpIommuList;
  v12 = 0;
  if ( (ULONG_PTR *)HalpIommuList == &HalpIommuList )
    goto LABEL_6;
  do
  {
    a2 = (unsigned int *)result;
    result = (ULONG_PTR *)*result;
    a1 = a2[116];
    if ( (a1 & 8) != 0 && a2[118] == v10 && a2[119] == (_DWORD)v9 )
    {
      v23 = a2[120];
      a1 = (unsigned int)v8 ^ v23;
      if ( (((unsigned __int8)v8 ^ *((_BYTE *)a2 + 480)) & 0x1F) == 0
        && (((unsigned __int8)v8 ^ (unsigned __int8)v23) & 0xE0) == 0 )
      {
        v12 = 1;
      }
    }
  }
  while ( result != &HalpIommuList );
  if ( !v12 )
  {
LABEL_6:
    v13 = Size;
    if ( qword_140FBB4A8 )
    {
      v14 = BugCheckParameter3;
      v38 = v7;
      v37 = Size;
      v36 = BugCheckParameter3;
      LODWORD(BugCheckParameter4) = (unsigned __int8)v8 >> 5;
      LOBYTE(a1) = a7 == 1;
      result = (ULONG_PTR *)guard_dispatch_icall_no_overrides(a1, v10);
      if ( (int)result >= 0 )
        return result;
      if ( (_DWORD)result != -1073741822 )
        KeBugCheckEx(0xC0u, v9, v8, BugCheckParameter3, (int)result);
    }
    else
    {
      v14 = BugCheckParameter3;
    }
    if ( LOBYTE(HalpDeviceBlockUnblockPushLock.Timer.DueTime.LowPart) )
    {
      CurrentIrql = 15;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)&HalpPCIConfigLock, 0LL) )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&HalpPCIConfigLock);
      }
      else
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&HalpPCIConfigLock);
      }
    }
    if ( v14 + Size > 0x1000 )
    {
      v17 = v39;
    }
    else
    {
      v16 = 0LL;
      if ( HalpPciAmdK8SpecialLocationHack == -1 )
      {
        _RAX = 0LL;
        __asm { cpuid }
        if ( (_DWORD)_RBX != 1752462657 )
          goto LABEL_59;
        if ( (_DWORD)_RDX != 1769238117 )
          goto LABEL_59;
        if ( (_DWORD)_RCX != 1145913699 )
          goto LABEL_59;
        _RAX = 1LL;
        __asm { cpuid }
        if ( (_RAX & 0xF00) != 0xF00 || (_RAX & 0xFF00000) != 0 )
        {
LABEL_59:
          HalpPciAmdK8SpecialLocationHack = 0;
          goto LABEL_21;
        }
        HalpPciAmdK8SpecialLocationHack = 1;
      }
      else if ( HalpPciAmdK8SpecialLocationHack != 1 )
      {
LABEL_21:
        v17 = v39;
        goto LABEL_22;
      }
      v17 = v39;
      if ( v39 || (_BYTE)v9 || (v8 & 0x1F) < 0x18 )
      {
LABEL_22:
        while ( (unsigned int)v16 < HalpPciMcfgTableCount )
        {
          v18 = HalpPciMcfgTable + 16LL * (unsigned int)v16;
          if ( v17 == *(_WORD *)(v18 + 52)
            && (unsigned __int8)v9 >= *(_BYTE *)(v18 + 54)
            && (unsigned __int8)v9 <= *(_BYTE *)(v18 + 55) )
          {
            v19 = (unsigned __int8)v8 >> 5;
            v20 = *(_QWORD *)(v18 + 44) + ((v19 + 8 * ((v8 & 0x1F) + 32 * v9)) << 12);
            if ( !v20 )
              break;
            v21 = HalpPciMapMmConfigPhysicalAddress(v20, v19, v16, a4);
            if ( Size )
            {
              do
              {
                v22 = guard_dispatch_icall_no_overrides(v21, v7);
                v14 += v22;
                v7 = (ULONG_PTR *)((char *)v7 + v22);
                v13 -= v22;
              }
              while ( v13 );
            }
            _InterlockedOr(v34, 0);
            return (ULONG_PTR *)HalpPCIReleaseConfigSpaceLock(CurrentIrql);
          }
          v16 = (unsigned int)(v16 + 1);
        }
      }
    }
    if ( !(unsigned __int8)HalpPciAccessIoConfigSpace(v17, (unsigned __int8)v9, v8, (_DWORD)v7, v14, Size, a7) && !a7 )
      memset_0(v7, 255, Size);
    return (ULONG_PTR *)HalpPCIReleaseConfigSpaceLock(CurrentIrql);
  }
  else if ( !a7 )
  {
    return (ULONG_PTR *)memset_0(v7, 255, Size);
  }
  return result;
}
