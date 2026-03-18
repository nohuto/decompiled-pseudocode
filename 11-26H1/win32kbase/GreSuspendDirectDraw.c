/*
 * XREFs of GreSuspendDirectDraw @ 0x140190090
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

__int64 __fastcall GreSuspendDirectDraw(ULONG_PTR P4, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = P4;
  if ( !P4 )
    EngBugCheckEx(0x164u, 0x2FuLL, 0LL, 0LL, 0LL);
  return GrepSuspendDirectDraw(&v4, a2, a3);
}
