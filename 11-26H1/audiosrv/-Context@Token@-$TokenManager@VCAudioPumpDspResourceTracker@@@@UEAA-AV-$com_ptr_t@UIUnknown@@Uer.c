/*
 * XREFs of ?Context@Token@?$TokenManager@VCAudioPumpDspResourceTracker@@@@UEAA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800C1F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TokenManager<CAudioPumpDspResourceTracker>::Token::Context(__int64 a1, _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 40);
  *a2 = 0LL;
  (**v3)(v3, &GUID_00000000_0000_0000_c000_000000000046, a2);
  return a2;
}
