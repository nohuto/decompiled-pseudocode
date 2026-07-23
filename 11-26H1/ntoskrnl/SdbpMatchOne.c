/*
 * XREFs of SdbpMatchOne @ 0x14088B7E0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpMatchList @ 0x14088B4CC (SdbpMatchList.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchOne(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v6; // ebx
  unsigned int v7; // r14d
  unsigned int matched; // edi
  int v12; // [rsp+40h] [rbp-38h]
  int v13[4]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  v7 = a5;
  v13[0] = 0;
  v14 = 0;
  matched = SdbpMatchList(v13, &v14, a2, a3, a5, a6, 1, 0, v12);
  if ( !matched || v14 )
    v6 = v13[0];
  else
    LOBYTE(v6) = (unsigned int)SdbFindFirstTag(a3, v7, 4099LL) == 0;
  *a1 = v6;
  return matched;
}
