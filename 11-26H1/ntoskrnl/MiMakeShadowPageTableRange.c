/*
 * XREFs of MiMakeShadowPageTableRange @ 0x14087BC3C
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14087BC3C (MiMakeShadowPageTableRange.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 * Callees:
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiSetPfnShareCount @ 0x1403CDFF0 (MiSetPfnShareCount.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14042A570 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x14087BC3C (MiMakeShadowPageTableRange.c)
 */

void __fastcall MiMakeShadowPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  int v8; // r15d
  _QWORD *v9; // rbx
  __int64 v10; // rbx

  v6 = a1;
  v7 = a2;
  v8 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v6 = *(_QWORD *)(a3 + 16LL * a4);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a4 + 8) )
    v7 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v6 <= v7; v6 += 8LL )
  {
    if ( (MiReadWriteAnyLevelShadowPte(v6, a4, 0, *(ULONG_PTR *)&CLFS_LSN_NULL_EXT) & 1) == 0 )
    {
      if ( a4 )
      {
        v10 = *(_QWORD *)(a5 + 72);
        MiSimpleUnlinkPageEx(a5 + 72, v10);
        v9 = (_QWORD *)(48 * v10 - 0x220000000000LL);
        MiSetPfnShareCount((__int64)v9, 0LL);
        ++*(_QWORD *)(a5 + 112);
      }
      else
      {
        v9 = 0LL;
      }
      MiInitializeShadowPageTable(v6, v9, a4);
    }
    if ( a4 > *(_DWORD *)(a5 + 132) )
      MiMakeShadowPageTableRange((__int64)(v6 << 25) >> 16, ((__int64)(v6 << 25) >> 16) + 4088, v8, a4 - 1, a5);
  }
}
