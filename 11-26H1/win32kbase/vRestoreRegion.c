/*
 * XREFs of vRestoreRegion @ 0x140035B00
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall vRestoreRegion(__int64 *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*a1 + 168);
  if ( v2 )
  {
    v4 = (*(_DWORD *)(v2 + 76))-- == 1;
    v5 = v2;
    if ( v4 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *(_QWORD *)(*a1 + 168) = 0LL;
  }
  result = *(_QWORD *)(*a1 + 160);
  if ( result )
  {
    v4 = (*(_DWORD *)(result + 76))-- == 1;
    v5 = result;
    if ( v4 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    result = *a1;
    *(_QWORD *)(*a1 + 160) = 0LL;
  }
  return result;
}
