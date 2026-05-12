/*
 * XREFs of sub_140033E20 @ 0x140033E20
 * Callers:
 *     sub_1400329EC @ 0x1400329EC (sub_1400329EC.c)
 *     sub_140033A28 @ 0x140033A28 (sub_140033A28.c)
 *     sub_140042038 @ 0x140042038 (sub_140042038.c)
 *     sub_14006AE00 @ 0x14006AE00 (sub_14006AE00.c)
 *     sub_1400A9E40 @ 0x1400A9E40 (sub_1400A9E40.c)
 *     sub_140178190 @ 0x140178190 (sub_140178190.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140033E20(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    qword_140168848 = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
