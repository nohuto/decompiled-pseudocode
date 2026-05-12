/*
 * XREFs of sub_1400E1B60 @ 0x1400E1B60
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 *     sub_140194D2C @ 0x140194D2C (sub_140194D2C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400E1B60(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 v5; // rbx
  int v6; // ecx
  __int16 v7; // ax

  v5 = 0LL;
  if ( a2 )
  {
    if ( a2 <= *(_WORD *)(a1 + 20) )
      v5 = 192LL * a2 + *(_QWORD *)(a1 + 728) - 192LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 712);
  }
  if ( !a3 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 104));
    *(_QWORD *)(v5 + 88) = a1;
    *(_WORD *)(v5 + 136) = a2;
    if ( a2 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      v7 = 0;
    }
    else
    {
      v6 = *(unsigned __int16 *)(a1 + 6);
      v7 = 1;
    }
    *(_DWORD *)(v5 + 124) = v6;
    *(_WORD *)(v5 + 150) = v7;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  *(_QWORD *)(v5 + 112) &= ~4uLL;
  *(_DWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 140) = 0LL;
  *(_WORD *)(v5 + 148) = 0;
  *(_WORD *)(v5 + 152) = 0;
}
