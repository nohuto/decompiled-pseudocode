/*
 * XREFs of CheckBridgePin @ 0x14004141C
 * Callers:
 *     PropertyJackDescriptionBasicSupport @ 0x140033500 (PropertyJackDescriptionBasicSupport.c)
 *     PropertyJackDescriptionGet @ 0x140041120 (PropertyJackDescriptionGet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckBridgePin(__int64 a1, unsigned int a2, bool *a3)
{
  if ( !a1 || a2 >= *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    return 3221226021LL;
  *a3 = *(_DWORD *)(176LL * a2 + *(_QWORD *)(*(_QWORD *)a1 + 40LL) + 68) == 4;
  return 0LL;
}
