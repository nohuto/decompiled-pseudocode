/*
 * XREFs of MxMarkActiveDriverBits @ 0x140D076E8
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 *     MxMarkActiveDriverBits @ 0x140D076E8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
 *     KeZeroSinglePage @ 0x140735370 (KeZeroSinglePage.c)
 *     MxMarkActiveDriverBits @ 0x140D076E8 (MxMarkActiveDriverBits.c)
 */

int __fastcall MxMarkActiveDriverBits(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  int v8; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx

  v5 = 0LL;
  v6 = (unsigned __int64)a2;
  v7 = a3;
  v8 = a4;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(_QWORD *)(a4 + 16LL * a5);
  v10 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( a3 > v10 )
    v7 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( v6 <= v7 )
  {
    do
    {
      v10 = *(_QWORD *)v6;
      if ( (*(_QWORD *)v6 & 1) != 0 )
      {
        ++v5;
        v11 = (__int64)(v6 << 25) >> 16;
        if ( a5 == 1 )
        {
          v12 = ((v11 << 25 >> 16) - a1[4]) >> 21;
          v13 = a1[1] + (v12 >> 3);
          if ( (*(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x800LL) == 0 )
          {
            MiSplitBitmapPages(11LL);
            KeZeroSinglePage((_OWORD *)(v13 & 0xFFFFFFFFFFFFF000uLL));
          }
          if ( *a1 <= v12 )
            *a1 = v12 + 1;
          v14 = a1[1];
          LODWORD(v10) = *(char *)((v12 >> 3) + v14) | (1 << (v12 & 7));
          *(_BYTE *)((v12 >> 3) + v14) = v10;
        }
        else
        {
          LODWORD(v10) = MxMarkActiveDriverBits((_DWORD)a1, (__int64)(v6 << 25) >> 16, (int)v11 + 4088, v8, a5 - 1);
        }
      }
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    if ( v5 )
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].WaitListEntry.Blink, v5);
  }
  return v10;
}
