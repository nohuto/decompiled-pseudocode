/*
 * XREFs of MiCheckMdlSlabFragmentation @ 0x1402A6D4C
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402A6920 (MiFreeUnusedSlabPages.c)
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140207480 (MiGetSlabCurrentTime.c)
 */

__int64 __fastcall MiCheckMdlSlabFragmentation(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9
  signed __int64 v13; // rcx
  unsigned __int64 v15; // r11
  char v16; // r8
  char v17; // r8
  ULONG64 SlabCurrentTime; // rax
  unsigned int v19; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v19 = 0;
  v5 = 3000000000LL;
  v6 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3]);
  v7 = v6 * *(_QWORD *)(a1 + 120);
  if ( !v7 )
    return v3;
  v8 = *(_QWORD *)(a1 + 96);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    if ( v8 < v9 + v6 )
      return v3;
    v8 -= v9;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(v10 + 22464);
  if ( v8 >= v11 / 0xA )
  {
    v15 = *(_QWORD *)(v10 + 22288);
    LOBYTE(v19) = 10;
    if ( v11 > v15 / 0xA )
    {
      if ( v11 > v15 >> 2 )
      {
        if ( v11 > v15 >> 1 )
          goto LABEL_18;
        v5 = 600000000LL;
        v16 = 13;
      }
      else
      {
        v5 = 300000000LL;
        v16 = 12;
      }
    }
    else
    {
      v5 = 100000000LL;
      v16 = 11;
    }
    LOBYTE(v19) = v16;
LABEL_18:
    if ( v8 < (v11 >> 1) + (v11 >> 2) )
      goto LABEL_24;
    LOBYTE(v19) = 20;
    if ( v5 >= 0x11E1A300 )
      v5 = 300000000LL;
    if ( v11 > v15 / 0x14 )
      goto LABEL_24;
    v5 = 0LL;
    v17 = 21;
LABEL_23:
    LOBYTE(v19) = v17;
LABEL_24:
    if ( a2 )
      return v19;
    SlabCurrentTime = MiGetSlabCurrentTime();
    if ( SlabCurrentTime
       - *(_QWORD *)(56320LL * *(unsigned int *)(a1 + 132) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 56120) >= v5
      && SlabCurrentTime - *(_QWORD *)(a1 + 168) >= 0x2FAF080
      && (*(_WORD *)(a1 + 138) & 1) == 0 )
    {
      return v19;
    }
    return v3;
  }
  v12 = 100 * v8 / v7;
  v13 = 5 * (10 - v7 / 0xFA00);
  if ( v13 < 10 )
    v13 = 10LL;
  if ( v12 > v13 )
  {
    v17 = 100;
    BYTE2(v19) = v12;
    HIBYTE(v19) = v13;
    goto LABEL_23;
  }
  return v3;
}
