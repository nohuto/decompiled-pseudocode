/*
 * XREFs of MiMapMemoryDumpMdl @ 0x1404BCF5C
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x1404BCF20 (MmMapMemoryDumpMdl.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x140514654 (MmMapMemoryDumpMdlEx2.c)
 *     MmMapMemoryDumpMdlEx @ 0x1406FB890 (MmMapMemoryDumpMdlEx.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiMapMemoryDumpMdl(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // r12
  __int64 *v11; // r15
  unsigned __int64 *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned __int64 result; // rax
  __int64 v16; // rbx
  int v17; // ebp
  int ProtectionPfnCompatible; // eax
  _BYTE v20[12]; // [rsp+40h] [rbp-118h] BYREF
  int v21; // [rsp+4Ch] [rbp-10Ch]
  int v22; // [rsp+5Ch] [rbp-FCh]

  memset_0(v20, 0, 0xC8uLL);
  v7 = *(unsigned int *)(a3 + 44);
  v8 = ((unsigned int)(v7 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v7 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  v9 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *(_QWORD *)(a3 + 24) = a1 + v7;
  v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v11 = (__int64 *)(a3 + 48);
  v12 = v9;
  MiInitializeTbFlushList((__int64)v20, (__int64)&unk_140E37340, 20, 9, 1);
  do
  {
    if ( *v12 )
    {
      if ( (*v12 & 1) != 0 )
      {
        MiInsertTbFlushEntry((__int64)v20, v10, 1LL, 0);
        if ( v22 == v21 )
          MiFlushTbList((__int64)v20);
      }
      *v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    }
    ++v12;
    v10 += 4096LL;
    --v8;
  }
  while ( v8 );
  if ( v22 )
    MiFlushTbList((__int64)v20);
  v13 = *(unsigned int *)(a3 + 44);
  v14 = v13 + *(_DWORD *)(a3 + 40);
  result = (v14 & 0xFFF) != 0;
  *(_QWORD *)(a3 + 24) = a1 + v13;
  v16 = (v14 >> 12) + (unsigned int)result;
  if ( (a4 & 2) != 0 )
  {
    *(_WORD *)(a3 + 10) &= 0xFFDEu;
  }
  else
  {
    v17 = a4 & 1;
    do
    {
      ProtectionPfnCompatible = 4;
      if ( !v17 )
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * *v11 - 0x220000000000LL);
      result = MiMakeValidPte((unsigned __int64)v9, *v11, ProtectionPfnCompatible | 0xA0000000);
      *v9 = result;
      ++v11;
      ++v9;
      --v16;
    }
    while ( v16 );
    *(_WORD *)(a3 + 10) |= 0x11u;
  }
  return result;
}
