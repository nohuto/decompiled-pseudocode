/*
 * XREFs of RaSetBusData @ 0x14005C97C
 * Callers:
 *     StorPortSetBusDataByOffset @ 0x14004F840 (StorPortSetBusDataByOffset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaSetBusData(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 56))(*(_QWORD *)(a1 + 16));
}
