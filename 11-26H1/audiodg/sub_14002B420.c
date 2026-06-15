/*
 * XREFs of sub_14002B420 @ 0x14002B420
 * Callers:
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_14002B420(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  while ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v2 + 40) == 2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 40LL);
      if ( v3 )
      {
        sub_1400B6010(v3);
        sub_1400B6010(v3);
        sub_1400B6010(v3);
      }
    }
  }
  return 0LL;
}
