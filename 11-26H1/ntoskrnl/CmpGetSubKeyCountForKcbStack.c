/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x140AE2444
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpStartKeyNodeStack @ 0x140943CD8 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140944174 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x140944480 (CmpCleanupKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1409452B4 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  int started; // ebx
  _BYTE v10[8]; // [rsp+20h] [rbp-78h] BYREF
  char v11; // [rsp+28h] [rbp-70h] BYREF

  memset_0(v10, 0, 0x50uLL);
  v5 = &v11;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v5);
    v5 = (char *)(v6 + 32);
  }
  while ( v7 != 1 );
  started = CmpStartKeyNodeStack((__int64)v10, *(_WORD *)(a1 + 2));
  if ( started >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack((__int64)v10, a1, 0LL);
    started = CmpGetSubKeyCountForKeyNodeStack(v10, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v10);
  return (unsigned int)started;
}
