/*
 * XREFs of SdbpMatchAll @ 0x140719160
 * Callers:
 *     <none>
 * Callees:
 *     SdbpMatchList @ 0x14088B4CC (SdbpMatchList.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchAll(_DWORD *a1, int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v6; // ebx
  unsigned int v7; // r14d
  unsigned int matched; // edi
  int v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  v7 = a5;
  v12 = 0;
  v13 = 0;
  matched = SdbpMatchList((unsigned int)&v12, (unsigned int)&v13, a2, a3, a5, a6, 0, 0);
  if ( !matched || v13 )
    v6 = v12;
  else
    LOBYTE(v6) = (unsigned int)SdbFindFirstTag(a3, v7, 4099LL) == 0;
  *a1 = v6;
  return matched;
}
