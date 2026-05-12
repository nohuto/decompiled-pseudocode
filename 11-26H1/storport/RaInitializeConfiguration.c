/*
 * XREFs of RaInitializeConfiguration @ 0x1401BE310
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaInitializeConfiguration(_DWORD *a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  int v10; // ebp
  char v11; // di
  int v12; // ecx
  __int64 v13; // rax
  __int64 Pool; // rax
  __int64 result; // rax
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax

  if ( a5 )
    v10 = a1[2];
  else
    v10 = *(_DWORD *)(a2 + 4);
  memset_0(a1, 0, 0xE0uLL);
  a1[2] = v10;
  v11 = 1;
  a1[6] = -1;
  a1[8] = -1;
  a1[9] = -1;
  *a1 = 224;
  a1[5] = 1;
  *((_WORD *)a1 + 48) = -32767;
  *((_WORD *)a1 + 73) = 264;
  *(_WORD *)((char *)a1 + 81) = 257;
  *(_WORD *)((char *)a1 + 87) = 1;
  *(_DWORD *)((char *)a1 + 90) = 16843009;
  *((_BYTE *)a1 + 95) = 0;
  *((_BYTE *)a1 + 196) = 0;
  if ( *(_DWORD *)a2 == 208 )
  {
    *((_BYTE *)a1 + 98) = (*(_DWORD *)(a2 + 188) & 2) != 0;
    v12 = (*(_DWORD *)(a2 + 184) & 1) != 0 ? 250 : 20;
  }
  else
  {
    *((_BYTE *)a1 + 98) = 0;
    v12 = 20;
    if ( *(_DWORD *)a2 == 176 )
      v12 = 250;
  }
  a1[53] = v12;
  *((_BYTE *)a1 + 144) = (_BYTE)Mm64BitPhysicalAddress != 0 ? 0x80 : 0;
  *((_BYTE *)a1 + 94) = *(_BYTE *)(a2 + 93);
  a1[35] = *(_DWORD *)(a2 + 72);
  a1[34] = *(_DWORD *)(a2 + 68);
  *((_BYTE *)a1 + 89) = *(_BYTE *)(a2 + 88);
  v13 = *(unsigned int *)(a2 + 76);
  a1[13] = v13;
  if ( !(_DWORD)v13 || a6 == 1 && *((_QWORD *)a1 + 7) )
  {
    *((_QWORD *)a1 + 7) = 0LL;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, 16 * v13, 1129341266LL, 0LL);
    *((_QWORD *)a1 + 7) = Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  ConfigurationInformation = IoGetConfigurationInformation();
  *((_BYTE *)a1 + 85) = ConfigurationInformation->AtDiskPrimaryAddressClaimed;
  *((_BYTE *)a1 + 86) = ConfigurationInformation->AtDiskSecondaryAddressClaimed;
  *(_QWORD *)((char *)a1 + 73) = -1LL;
  a1[7] = 17;
  a1[1] = a3;
  a1[25] = a4;
  if ( *(_DWORD *)a2 != 208 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
    v11 = 0;
  *((_BYTE *)a1 + 99) = v11;
  result = 0LL;
  a1[51] = 1000;
  a1[52] = 255;
  a1[54] = 4000000;
  return result;
}
