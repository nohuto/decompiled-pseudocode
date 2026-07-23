/*
 * XREFs of PpmHeteroInitializeInitTableCollection @ 0x14060E5BC
 * Callers:
 *     PpmHeteroCheckInitTableBitIntel @ 0x1407E8890 (PpmHeteroCheckInitTableBitIntel.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall PpmHeteroInitializeInitTableCollection(int a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  __int64 v4; // rbp
  __int64 Pool2; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  int v8; // ecx
  __int64 v9; // rcx

  v1 = PpmHeteroWorkloadClasses;
  v2 = 0;
  if ( !PpmHeteroInitTableCollection )
  {
    v4 = (unsigned int)(10 * PpmHeteroWorkloadClasses * a1);
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = a1;
      v6 = Pool2 + v4 + 264;
      *(_DWORD *)(Pool2 + 4) = v1;
      *(_DWORD *)(Pool2 + 8) = 0;
      v7 = (_QWORD *)(Pool2 + 40);
      *(_DWORD *)(Pool2 + 12) = 10;
      *(_BYTE *)(Pool2 + 16) = 0;
      do
      {
        v8 = a1 * v2++;
        v9 = (unsigned int)(v1 * v8);
        *(v7 - 2) = v9 + Pool2 + 264;
        *(v7 - 1) = v9 + v6;
        *v7 = v9 + v6 + v4;
        v7 += 3;
      }
      while ( v2 < 0xA );
      PpmHeteroInitTableCollection = Pool2;
      PpmHeteroInitTableState = 1;
    }
  }
}
