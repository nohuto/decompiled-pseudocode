/*
 * XREFs of MiIdentifyResidentPage @ 0x1402D3820
 * Callers:
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 */

__int64 __fastcall MiIdentifyResidentPage(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v5; // rbp
  __int64 BaseResidentPage; // rax
  __int64 v7; // r10
  int v8; // edx
  unsigned int v9; // r9d
  unsigned int v10; // r14d
  unsigned __int64 v11; // r15
  int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 LeafVa; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 LeafPfnBuddy; // rax

  v5 = 48 * a1 - 0x220000000000LL;
  BaseResidentPage = MiGetBaseResidentPage(v5);
  v7 = BaseResidentPage;
  v8 = 3;
  v9 = *(_BYTE *)(BaseResidentPage + 34) & 7;
  if ( (*(_QWORD *)(BaseResidentPage + 40) & 0x10000000000LL) != 0 )
  {
    v8 = 3 - ((*(_DWORD *)(BaseResidentPage + 36) >> 27) & 3);
    if ( v8 == 3 )
      v8 = 3;
  }
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = MiPageSizes[v8];
  v14 = a1 & ~(v13 - 1);
  v15 = v13 + v14 - a1;
  if ( v9 == 6 )
  {
    if ( ((*(_QWORD *)(BaseResidentPage + 40) >> 60) & 7) == 1 )
    {
      v12 = 1;
    }
    else
    {
      v20 = *(_QWORD *)(BaseResidentPage + 16) >> 2;
      v21 = *(_QWORD *)(v7 + 16) >> 16;
      if ( (*(_QWORD *)(v7 + 16) & 0x400LL) != 0 )
        LOBYTE(v21) = v20;
      if ( (v21 & 1) != 0 )
        *a3 |= 0x80uLL;
    }
    v11 = *(_QWORD *)(v7 + 8);
    if ( v11 )
    {
      if ( ((*(_QWORD *)(v7 + 40) >> 60) & 7) != 1 )
        v11 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
      for ( i = (__int64)(v11 << 25) >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v11 = i;
      }
      v11 += 8 * (a1 - v14);
      if ( (unsigned __int64)MiGetLeafVa(v11) < 0x7FFFFFFF0000LL )
      {
        if ( (*(_QWORD *)v7 & 0xFFFFFFFFFFuLL) <= 0x40000 )
        {
          v9 = 1;
        }
        else
        {
          LeafPfnBuddy = MiGetLeafPfnBuddy(v7, 1LL);
          if ( (LeafPfnBuddy < 0xFFFFDE0000000000uLL || LeafPfnBuddy >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL)
            && LeafPfnBuddy )
          {
            if ( *(_QWORD *)LeafPfnBuddy != 399680LL )
              v10 = *(_DWORD *)(LeafPfnBuddy + 464);
          }
          else
          {
            v9 = 1;
          }
        }
      }
    }
  }
  if ( v7 != v5 )
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 == 6 )
  {
    v18 = *a3 & 0xFFFFFFFFFFFFFE8FuLL | 0x160;
    *a3 = v18;
    if ( v12 )
    {
      *a3 = v18 & 0xFE000000000001F9uLL | ((unsigned __int64)v10 << 9) | 9;
      return v15;
    }
    if ( (unsigned int)MiGetSystemRegionType(v11) == 4 )
    {
      *a3 = v18 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v11 - 344) << 9) | 3;
      a3[2] = 0xFFFFF6FB7DBED000uLL;
      return v15;
    }
    LeafVa = MiGetLeafVa(v11);
    if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 4 )
    {
      a3[2] = LeafVa;
      *a3 = v18 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      return v15;
    }
    a3[2] = LeafVa & 0xFFFFFFFFFFFFF000uLL;
    if ( LeafVa < 0x7FFFFFFF0000LL )
      v16 = v18 & 0xFE000000000001FDuLL | ((unsigned __int64)v10 << 9) | 0xD;
    else
      v16 = v18 & 0xFFFFFFFFFFFFFFF0uLL | 6;
  }
  else
  {
    if ( v9 == 5 )
      v9 = 1;
    v16 = *a3 & 0xF1FFFFFFFFFFFF8FuLL | (16LL * v9);
  }
  *a3 = v16;
  return v15;
}
