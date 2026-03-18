/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x1408640D0
 * Callers:
 *     MiBackSystemImageWithPagefile @ 0x140864164 (MiBackSystemImageWithPagefile.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     MiSnapDriverRange @ 0x140AC95AC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v2 = 0;
  do
  {
    v2 = MiSnapDriverRange(a1, v2, 8, 0, (__int64)&v4, (__int64)&v5);
    if ( v4 )
      MiMakeDriverPagesPrivate(a1, v4, v5, 4u);
  }
  while ( v2 );
  result = MiGetBaseLoaderPortion(a1);
  *(_DWORD *)(result + 184) |= 0x10u;
  return result;
}
