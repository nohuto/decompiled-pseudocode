/*
 * XREFs of MmGetSectionRange @ 0x14086AFFC
 * Callers:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     MmLockLoadedDataTableEntry @ 0x1404BD460 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmGetSectionRange(__int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  void *v9; // rcx
  unsigned __int64 v10; // rdi
  PIMAGE_NT_HEADERS v11; // rax
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
    v9 = *(void **)(v7 + 48);
    v10 = a1 - (_QWORD)v9;
    v11 = RtlImageNtHeader(v9);
    v12 = 0;
    v13 = (int *)((char *)&v11->OptionalHeader.AddressOfEntryPoint + v11->FileHeader.SizeOfOptionalHeader);
    while ( v12 < v11->FileHeader.NumberOfSections )
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
