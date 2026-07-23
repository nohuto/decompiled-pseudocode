/*
 * XREFs of PnprMmAddRange @ 0x1407B2EE4
 * Callers:
 *     PnprMmConstruct @ 0x1407B3018 (PnprMmConstruct.c)
 * Callees:
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnprMmAddRange(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // r15d
  unsigned __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 Pool2; // rax
  _QWORD *v9; // rbx
  _QWORD *i; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx

  v3 = a2 >> 12;
  v4 = 0;
  v5 = a3 >> 12;
  while ( v5 )
  {
    v7 = v5;
    if ( v5 > 0x80000000 )
      v7 = 0x80000000LL;
    Pool2 = ExAllocatePool2(0x40uLL);
    v9 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      v12 = PnprContext;
      v4 = -1073741670;
      v13 = *(_DWORD *)(PnprContext + 33288);
      if ( !v13 )
        v13 = 3972;
      *(_DWORD *)(PnprContext + 33288) = v13;
      v14 = *(_DWORD *)(v12 + 33292);
      if ( !v14 )
        v14 = 10;
      *(_DWORD *)(v12 + 33292) = v14;
      return v4;
    }
    *(_QWORD *)(Pool2 + 16) = v3;
    *(_QWORD *)(Pool2 + 24) = v7;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 48;
    *(_DWORD *)(Pool2 + 32) = (v7 + 32) & 0xFFFFFFE0;
    RtlSetAllBits((PRTL_BITMAP)(Pool2 + 32));
    for ( i = (_QWORD *)a1[1]; i != a1; i = (_QWORD *)i[1] )
    {
      if ( i[2] < v9[2] )
        break;
    }
    v11 = *i;
    if ( *(_QWORD **)(*i + 8LL) != i )
      __fastfail(3u);
    *v9 = v11;
    v3 += v7;
    v9[1] = i;
    v5 -= v7;
    *(_QWORD *)(v11 + 8) = v9;
    *i = v9;
  }
  return v4;
}
