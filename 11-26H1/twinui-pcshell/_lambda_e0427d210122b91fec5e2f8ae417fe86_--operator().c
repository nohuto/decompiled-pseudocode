/*
 * XREFs of _lambda_e0427d210122b91fec5e2f8ae417fe86_::operator() @ 0x1802EA6B0
 * Callers:
 *     ?GetMobodyApplicationNoLock@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802EAAF0 (-GetMobodyApplicationNoLock@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall lambda_e0427d210122b91fec5e2f8ae417fe86_::operator()(_QWORD *a1, __int64 a2)
{
  _BYTE v5[80]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(v5, 0, sizeof(v5));
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 344LL))(a2, v5);
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
    (**(void (__fastcall ***)(__int64, GUID *, _QWORD))a2)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, *a1);
  return *(_QWORD *)*a1 == 0LL;
}
