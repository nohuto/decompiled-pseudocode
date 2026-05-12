/*
 * XREFs of BuildNvmeGetLogPageCommand @ 0x140118E4C
 * Callers:
 *     NvmeAdapterGetControllerLogPageAsync @ 0x1400E9344 (NvmeAdapterGetControllerLogPageAsync.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall BuildNvmeGetLogPageCommand(
        unsigned int a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        int a7,
        char a8,
        _BYTE *a9)
{
  int v11; // ebp
  unsigned int v12; // eax
  int v13; // ecx
  __int64 result; // rax

  v11 = (a4 >> 2) - 1;
  memset_0(a9, 0, 0x40uLL);
  a9[40] = a3;
  v12 = *((_DWORD *)a9 + 10) & 0xFFFF7FFF;
  *a9 = 2;
  *((_DWORD *)a9 + 1) = -1;
  v13 = v12 | (a8 != 0 ? 0x8000 : 0);
  *((_DWORD *)a9 + 10) = v13;
  if ( HIWORD(a1) && (HIWORD(a1) > 1u || (a1 & 0xFF00) >= 0x300) )
    *((_WORD *)a9 + 21) = v11;
  else
    *((_DWORD *)a9 + 10) = v13 ^ (v13 ^ (v11 << 16)) & 0xFFF0000;
  result = 0LL;
  *((_WORD *)a9 + 23) = 0;
  if ( a5 )
  {
    result = (unsigned int)a6 & 0xFFFFFFFC;
    *((_WORD *)a9 + 22) = HIWORD(v11);
    *((_DWORD *)a9 + 13) = HIDWORD(a6);
    *((_DWORD *)a9 + 12) = result;
  }
  return result;
}
