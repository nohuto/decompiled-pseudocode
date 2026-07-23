/*
 * XREFs of IoBoostThreadIo @ 0x1404EE9D0
 * Callers:
 *     <none>
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     PsBoostThreadIoEx @ 0x140248200 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall IoBoostThreadIo(LegacyAutoBoost *a1, __int64 a2, char a3, int a4)
{
  int v4; // edi

  v4 = a2;
  if ( a4 )
    return 3221225485LL;
  if ( a3 == 1 )
  {
    LOBYTE(a2) = 1;
    PsBoostThreadIoEx(a1, a2, 1, 0LL);
  }
  else
  {
    PsBoostThreadIoEx(a1, 0LL, 1, 0LL);
    IoBoostThreadIoPriority((KSPIN_LOCK *)a1, v4, 0x80000000);
  }
  return 0LL;
}
