/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x140AF9D60
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x1409806EC (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140492C70 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpStartKeyNodeStack @ 0x140981CC8 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140982164 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x140982470 (CmpCleanupKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1409832A4 (CmpPopulateKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // r9
  __int64 v7; // r9
  __int64 v8; // r10
  int started; // ebx
  __int16 v11; // [rsp+20h] [rbp-78h] BYREF
  char v12; // [rsp+28h] [rbp-70h] BYREF

  memset_0(&v11, 0, 0x50uLL);
  v6 = &v12;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v6);
    v6 = (char *)(v7 + 32);
  }
  while ( v8 != 1 );
  started = CmpStartKeyNodeStack((__int64)&v11, *(_WORD *)(a2 + 2));
  if ( started >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack((__int64)&v11, a2, a3);
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, &v11);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)&v11);
  return (unsigned int)started;
}
