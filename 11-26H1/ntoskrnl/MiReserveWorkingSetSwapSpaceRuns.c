/*
 * XREFs of MiReserveWorkingSetSwapSpaceRuns @ 0x140AC3D0C
 * Callers:
 *     MiReserveWorkingSetSwapSpace @ 0x140AC3C54 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 */

unsigned __int64 __fastcall MiReserveWorkingSetSwapSpaceRuns(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 PageFilePte; // rax
  __int64 v11; // rdx
  unsigned int FreePageFileSpace; // eax

  v5 = a2;
  if ( *(unsigned int *)(*(_QWORD *)(a1 + 8LL * a3 + 22304) + 20LL) >= a2 )
  {
    v8 = a5;
    if ( a5 < a5 + 80 )
    {
      v9 = 80LL;
      do
      {
        if ( !v5 )
          break;
        PageFilePte = MiMakePageFilePte(a4);
        *(_QWORD *)v8 = v11 ^ (v11 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
        FreePageFileSpace = MiFindFreePageFileSpace(a1, v8, v5, 0x29u);
        *(_DWORD *)(v8 + 8) = FreePageFileSpace;
        if ( (unsigned __int64)FreePageFileSpace * (v9 >> 4) < v5 )
          break;
        v5 -= FreePageFileSpace;
        v8 += 16LL;
        v9 -= 16LL;
      }
      while ( v8 < a5 + 80 );
    }
  }
  return v5;
}
