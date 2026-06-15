/*
 * XREFs of sub_1400888A0 @ 0x1400888A0
 * Callers:
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 *     sub_140086EA4 @ 0x140086EA4 (sub_140086EA4.c)
 *     sub_140087348 @ 0x140087348 (sub_140087348.c)
 *     sub_140087390 @ 0x140087390 (sub_140087390.c)
 *     sub_140088900 @ 0x140088900 (sub_140088900.c)
 *     sub_140088910 @ 0x140088910 (sub_140088910.c)
 *     sub_140088920 @ 0x140088920 (sub_140088920.c)
 *     sub_140088930 @ 0x140088930 (sub_140088930.c)
 *     sub_140088940 @ 0x140088940 (sub_140088940.c)
 *     sub_140088950 @ 0x140088950 (sub_140088950.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400888A0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400178AC((volatile signed __int32 *)(a1 + 60));
  if ( !v1 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v1;
}
