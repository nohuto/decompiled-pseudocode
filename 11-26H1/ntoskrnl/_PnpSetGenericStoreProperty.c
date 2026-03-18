/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x14090A5B4
 * Callers:
 *     PiDqIrpPropertySet @ 0x14098D708 (PiDqIrpPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x1409DC180 (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x14090A5FC (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x14090ABAC (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(int a1, int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3, a4, a5, a6, a7);
  else
    return PnpDeletePropertyWorker(a1, a2, a3, a4, 0);
}
