/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x14086A4B0
 * Callers:
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
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
