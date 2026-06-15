/*
 * XREFs of sub_1400455D8 @ 0x1400455D8
 * Callers:
 *     sub_1400597A0 @ 0x1400597A0 (sub_1400597A0.c)
 *     sub_1400B4860 @ 0x1400B4860 (sub_1400B4860.c)
 * Callees:
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 */

__int64 __fastcall sub_1400455D8(__int64 a1)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v1 = dword_1400B700C == 0;
  *(_QWORD *)a1 = off_1400BAD90;
  *(_QWORD *)(a1 + 104) = off_1400BAD78;
  if ( !v1 )
  {
    EtwUnregisterTraceGuids(qword_1400B7020);
    qword_1400B7020 = 0LL;
    TraceHandle = 0LL;
  }
  v3 = *(void **)(a1 + 152);
  if ( v3 )
    sub_14001D6A8(v3);
  sub_140016F18((void **)(a1 + 136));
  v4 = *(void **)(a1 + 128);
  if ( v4 )
    sub_14001D6A8(v4);
  v5 = *(void **)(a1 + 120);
  if ( v5 )
    sub_14001D6A8(v5);
  return sub_140045678(a1);
}
