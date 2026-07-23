/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x1409ACB6C
 * Callers:
 *     PiDqIrpPropertySet @ 0x14094E168 (PiDqIrpPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x140A193D0 (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x1409AD164 (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(int a1, int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3, a4, a5, a6, a7);
  else
    return PnpDeletePropertyWorker(a1, a2, a3, a4, 0);
}
