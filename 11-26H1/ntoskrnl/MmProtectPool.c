/*
 * XREFs of MmProtectPool @ 0x14024F9E4
 * Callers:
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 *     RtlpHpEnvProtectVA @ 0x14063C06C (RtlpHpEnvProtectVA.c)
 * Callees:
 *     MiFindLargeMapping @ 0x1402509BC (MiFindLargeMapping.c)
 *     MiProtectNonPagedPool @ 0x140250A90 (MiProtectNonPagedPool.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r9
  unsigned int ProtectionMask; // r14d
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  int SystemRegionType; // eax
  void *v9; // rsi
  int v10; // r12d
  __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rdx
  int v19; // [rsp+30h] [rbp-30h]
  unsigned __int64 v20; // [rsp+38h] [rbp-28h]
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF
  char v22; // [rsp+B0h] [rbp+50h]
  int v23; // [rsp+B8h] [rbp+58h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x20000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v6 = a1 + v4 - 1;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  v9 = &unk_140E37200;
  if ( SystemRegionType == 5 )
  {
    v10 = 0;
    goto LABEL_8;
  }
  if ( SystemRegionType != 4 || (unsigned int)MiFindLargeMapping(a1, v6) )
    return 0LL;
  v10 = 1;
  v9 = &unk_140E375C0;
LABEL_8:
  v23 = v10;
  v11 = 0LL;
  v12 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = v12;
  v21 = 0LL;
  v13 = 0LL;
  v22 = MiLockWorkingSetShared(v9);
  while ( v7 <= v12 )
  {
    if ( !v11 )
      goto LABEL_16;
    if ( (v7 & 0xFFF) == 0 )
    {
      if ( v13 )
      {
        MiFlushTbList(v13);
        MiReleaseProcessorFlushList();
        v21 = 0LL;
      }
      MiUnlockPageTableInternal(v9, v11);
LABEL_16:
      v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v9, v11, 0LL);
    }
    if ( v10 )
    {
      MiProtectNonPagedPool(v7, ProtectionMask, &v21);
      goto LABEL_19;
    }
    v16 = MiProtectPagedPool(v7, ProtectionMask, &v21);
    if ( v16 <= 1 )
      goto LABEL_25;
    if ( v16 <= 2 )
    {
      v13 = v21;
    }
    else
    {
      v19 = 0;
      v17 = v7 << 25;
      if ( v16 == 3 )
      {
        v19 = MiCopyOnWrite(v17 >> 16, v7, -1, 0, 0LL);
        if ( v19 >= 0 )
        {
          v12 = v20;
          v7 -= 8LL;
LABEL_25:
          v10 = v23;
LABEL_19:
          v13 = v21;
          goto LABEL_20;
        }
      }
      v13 = v21;
      if ( (_QWORD)v21 )
      {
        MiFlushTbList(v21);
        MiReleaseProcessorFlushList();
        v21 = 0LL;
        v13 = 0LL;
      }
      MiUnlockPageTableInternal(v9, v11);
      LOBYTE(v18) = v22;
      MiUnlockWorkingSetShared(v9, v18);
      if ( v16 == 3 )
      {
        MiCopyOnWriteCheckConditions(v9, (unsigned int)v19, 0LL);
      }
      else if ( v16 == 4 )
      {
        MmAccessFault(0LL, v17 >> 16);
      }
      MiLockWorkingSetShared(v9);
      MiLockPageTableInternal(v9, v11, 0LL);
      v12 = v20;
    }
    v10 = v23;
    v7 -= 8LL;
LABEL_20:
    v7 += 8LL;
  }
  if ( v13 )
  {
    MiFlushTbList(v13);
    MiReleaseProcessorFlushList();
  }
  if ( v11 )
    MiUnlockPageTableInternal(v9, v11);
  LOBYTE(v14) = v22;
  MiUnlockWorkingSetShared(v9, v14);
  return 1LL;
}
