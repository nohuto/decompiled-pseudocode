/*
 * XREFs of PnpClearDeviceTemporaryProperties @ 0x140B19254
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpClearDeviceTemporaryProperties(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v3 = (__int64 *)&off_14000BF20;
  v5 = 3LL;
  do
  {
    result = PnpSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, a1, 1, a2, 0LL, *v3++, 0, 0LL, 0, 0);
    --v5;
  }
  while ( v5 );
  return result;
}
