/*
 * XREFs of HUBDSM_RequestingDeviceCycleForUnknownDevice @ 0x140023A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_RequestingDeviceCycleForUnknownDevice(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
    3011LL);
  return 1000LL;
}
