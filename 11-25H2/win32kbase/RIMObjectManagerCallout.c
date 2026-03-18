/*
 * XREFs of RIMObjectManagerCallout @ 0x140118F14
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     RawInputManagerObjectClose @ 0x1401E6D1C (RawInputManagerObjectClose.c)
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 *     RawInputManagerObjectOkToClose @ 0x1401E71C8 (RawInputManagerObjectOkToClose.c)
 *     RawInputManagerObjectOpen @ 0x1401E7200 (RawInputManagerObjectOpen.c)
 */

__int64 __fastcall RIMObjectManagerCallout(int a1, __int64 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = a1 - 27;
  if ( !v2 )
    return RawInputManagerObjectOpen(a2);
  v4 = v2 - 1;
  if ( !v4 )
    return RawInputManagerObjectOkToClose(a2);
  v5 = v4 - 1;
  if ( !v5 )
    return RawInputManagerObjectClose(a2);
  if ( v5 == 1 )
    return RawInputManagerObjectDelete(a2);
  return 3221225485LL;
}
