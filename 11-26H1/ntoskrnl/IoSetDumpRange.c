/*
 * XREFs of IoSetDumpRange @ 0x1405CA2F0
 * Callers:
 *     IopAddPageDumpRange @ 0x1405CB010 (IopAddPageDumpRange.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     IopAddPageToPageMap @ 0x1404E236C (IopAddPageToPageMap.c)
 *     DumpCtlCheckErrorLocation @ 0x1405C897C (DumpCtlCheckErrorLocation.c)
 *     DumpCtlCheckExitStatus @ 0x1405C89A0 (DumpCtlCheckExitStatus.c)
 */

__int64 __fastcall IoSetDumpRange(__int64 a1, char *a2, __int64 a3, char a4)
{
  int v4; // eax
  unsigned __int64 v5; // r15
  char *v6; // rbp
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // ebx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v13; // eax
  int v14; // edi
  char v15; // r9
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // edx
  unsigned int i; // edx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  char v27; // r12
  PHYSICAL_ADDRESS v28; // rax
  int v29; // eax
  unsigned int v30; // edx

  v4 = a4 & 0xF;
  v5 = a3;
  v6 = a2;
  if ( (a4 & 0x30) != 0 && v4 == 2 )
  {
    v8 = IopAddPageToPageMap(
           *(_QWORD *)(a1 + 24),
           *(unsigned __int64 **)(a1 + 16),
           *(_QWORD *)(a1 + 32),
           (unsigned __int64)a2,
           a3,
           *(_BYTE *)(a1 + 40) & 1,
           a4);
    v9 = DumpCtlCheckErrorLocation(v8, 17301505);
    v10 = (v9 >> 31) & 1;
LABEL_4:
    v11 = v10 + 17301504;
LABEL_38:
    v14 = v9;
    goto LABEL_39;
  }
  if ( v4 == 1 )
  {
    PhysicalAddress = MmGetPhysicalAddress(a2);
    v13 = IopAddPageToPageMap(
            *(_QWORD *)(a1 + 24),
            *(unsigned __int64 **)(a1 + 16),
            *(_QWORD *)(a1 + 32),
            (unsigned __int64)PhysicalAddress.QuadPart >> 12,
            v5,
            *(_BYTE *)(a1 + 40) & 1,
            0);
    v9 = DumpCtlCheckErrorLocation(v13, 17301506);
    v10 = (v9 >> 31) & 2;
    goto LABEL_4;
  }
  if ( v4 != 2 )
  {
    v27 = 1;
    v11 = 17301510;
    while ( v5 )
    {
      if ( MmIsAddressValidEx((__int64)v6) )
      {
        v28 = MmGetPhysicalAddress(v6);
        v29 = IopAddPageToPageMap(
                *(_QWORD *)(a1 + 24),
                *(unsigned __int64 **)(a1 + 16),
                *(_QWORD *)(a1 + 32),
                (unsigned __int64)v28.QuadPart >> 12,
                1LL,
                *(_BYTE *)(a1 + 40) & 1,
                0);
        if ( v29 == -1073741789 )
        {
          v14 = DumpCtlCheckErrorLocation(0xC0000023, 17301510);
          if ( v14 < 0 )
            goto LABEL_39;
        }
        else if ( v29 < 0 )
        {
          v27 = 0;
        }
      }
      v6 += 4096;
      --v5;
    }
    if ( v27 == 1 )
      return 0;
    v9 = DumpCtlCheckErrorLocation(0xC0000141, 17301509);
    v11 = v30 - 5;
    if ( v9 < 0 )
      v11 = v30;
    goto LABEL_38;
  }
  v14 = DumpCtlCheckErrorLocation(0xC0000141, 17301511);
  v16 = 0;
  v11 = ((v14 >> 31) & 7) + 17301504;
  while ( v16 < *(_DWORD *)MmPhysicalMemoryBlock )
  {
    v17 = 16LL * v16;
    v18 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v17 + 16);
    if ( v18 > (unsigned __int64)v6 )
      break;
    v19 = *(_QWORD *)((char *)MmPhysicalMemoryBlock + v17 + 24) + v18;
    if ( v19 > (unsigned __int64)v6 )
    {
      if ( v5 <= v19 - (unsigned __int64)v6 )
      {
        v20 = IopAddPageToPageMap(
                *(_QWORD *)(a1 + 24),
                *(unsigned __int64 **)(a1 + 16),
                *(_QWORD *)(a1 + 32),
                (unsigned __int64)v6,
                v5,
                *(_BYTE *)(a1 + 40) & 1,
                v15);
        v21 = 17301507;
LABEL_23:
        v14 = DumpCtlCheckErrorLocation(v20, v21);
        if ( v14 < 0 )
          v11 = v26;
        goto LABEL_39;
      }
      break;
    }
    ++v16;
  }
  if ( SpecialMemoryRanges )
  {
    for ( i = 0; ; ++i )
    {
      v11 = ((v14 >> 31) & 7) + 17301504;
      if ( i >= *(_DWORD *)SpecialMemoryRanges )
        break;
      v23 = 16LL * i;
      v24 = *(_QWORD *)(v23 + SpecialMemoryRanges + 16);
      if ( v24 > (unsigned __int64)v6 )
        break;
      v25 = *(_QWORD *)(v23 + SpecialMemoryRanges + 24) + v24;
      if ( v25 > (unsigned __int64)v6 )
      {
        if ( v5 > v25 - (unsigned __int64)v6 )
          break;
        v20 = IopAddPageToPageMap(
                *(_QWORD *)(a1 + 24),
                *(unsigned __int64 **)(a1 + 16),
                *(_QWORD *)(a1 + 32),
                (unsigned __int64)v6,
                v5,
                *(_BYTE *)(a1 + 40) & 1,
                v15);
        v21 = 17301508;
        goto LABEL_23;
      }
    }
  }
LABEL_39:
  if ( v14 != -1073741503 )
  {
    if ( v14 >= 0 )
      return (unsigned int)v14;
LABEL_43:
    DumpCtlCheckExitStatus(v11, (unsigned int)v14);
    return (unsigned int)v14;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    goto LABEL_43;
  return 0;
}
