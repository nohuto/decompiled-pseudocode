/*
 * XREFs of MmMapMdl @ 0x1404DAA40
 * Callers:
 *     <none>
 * Callees:
 *     MiMappingHasIoReferences @ 0x14024F7D4 (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiFreeUltraMdlContext @ 0x1404DAC8C (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x1404DACD8 (MiGetUltraMdlContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _SLIST_ENTRY *v5; // r13
  unsigned int ProtectionMask; // esi
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v10; // r14
  unsigned int v11; // ebx
  _KWAIT_BLOCK **p_WaitBlockList; // rcx
  unsigned __int64 v13; // rdi
  __int64 UltraMdlContext; // rax
  unsigned __int8 CurrentIrql; // cl
  char v16; // r9
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v18; // r15
  int v19; // r12d
  int v20; // ebp
  __int64 v21; // rcx
  _KWAIT_BLOCK **v22; // rcx
  _DWORD v23[18]; // [rsp+30h] [rbp-48h] BYREF

  v23[0] = 0;
  v5 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a2);
  if ( ProtectionMask == -1
    || ProtectionMask == 24
    || (ProtectionMask & 7) == 5
    || (ProtectionMask & 2) != 0
    || (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    return 3221225541LL;
  }
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    guard_dispatch_icall_no_overrides(v8, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  else
  {
    v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
    v11 = v10;
    if ( MmProtectFreedNonPagedPool )
      v11 = v10 + 1;
    if ( v11 <= 0x200 )
    {
      UltraMdlContext = MiGetUltraMdlContext();
      v5 = (_SLIST_ENTRY *)UltraMdlContext;
      if ( UltraMdlContext )
      {
        CurrentIrql = KeGetCurrentIrql();
        v16 = 4;
        if ( CurrentIrql != 2 )
          v16 = 0;
        UltraMapping = MiGetUltraMapping(UltraMdlContext + 8, 3uLL, v11, v16);
        v13 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
          goto LABEL_20;
      }
    }
    p_WaitBlockList = (_KWAIT_BLOCK **)&unk_140E34BC0;
    if ( (ProtectionMask & 0x18) == 0 )
      p_WaitBlockList = &stru_140E366D8.WaitBlockList;
    v13 = MiReservePtes((__int64)p_WaitBlockList, v11, v7, v8);
    if ( v13 )
    {
LABEL_20:
      v18 = *(unsigned int *)(a1 + 44) + ((__int64)(v13 << 25) >> 16);
      v19 = MiFillSystemPtes((_QWORD *)v13, v10, a1 + 48, ProtectionMask, 0, v23);
      if ( v19 >= 0 )
      {
        v20 = v23[0] & 1;
        if ( (v23[0] & 1) != 0 )
          MiMappingHasIoReferences(v18);
        v19 = 0;
        guard_dispatch_icall_no_overrides(a4, v18);
        if ( v20 )
          MiClearMappingAndDereferenceIoSpace(v18, v10);
      }
      if ( v5 )
      {
        if ( v11 )
        {
          v21 = v11;
          do
          {
            *(_QWORD *)v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            v13 += 8LL;
            --v21;
          }
          while ( v21 );
        }
        MiFreeUltraMdlContext(v5);
      }
      else
      {
        v22 = (_KWAIT_BLOCK **)&unk_140E34BC0;
        if ( (ProtectionMask & 0x18) == 0 )
          v22 = &stru_140E366D8.WaitBlockList;
        MiReleasePtes((__int64)v22, (unsigned __int64 *)v13, v11);
      }
      return (unsigned int)v19;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
