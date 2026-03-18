/*
 * XREFs of MmGetSectionRange @ 0x140864C1C
 * Callers:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     MmLockLoadedDataTableEntry @ 0x1404C3C10 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmGetSectionRange(__int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _DWORD *v11; // rax
  unsigned int v12; // r8d
  int *v13; // rdx
  int v14; // r9d
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx

  v6 = -1073741275;
  v7 = MmLockLoadedDataTableEntry(a1);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 48);
    v10 = a1 - v9;
    v11 = RtlImageNtHeader(v9);
    v12 = 0;
    v13 = (_DWORD *)((char *)v11 + *((unsigned __int16 *)v11 + 10) + 40);
    while ( v12 < *((unsigned __int16 *)v11 + 3) )
    {
      v14 = *v13;
      v15 = (unsigned int)*(v13 - 1);
      if ( *v13 < (unsigned int)*(v13 - 2) )
        v14 = *(v13 - 2);
      if ( v10 >= v15 && v10 < (unsigned int)(v14 + v15) )
      {
        v16 = v15 + *(_QWORD *)(v8 + 48);
        *a3 = v14;
        *a2 = v16;
        v6 = 0;
        break;
      }
      v13 += 10;
      ++v12;
    }
    MmUnlockLoadedDataTableEntry(v8);
  }
  return v6;
}
