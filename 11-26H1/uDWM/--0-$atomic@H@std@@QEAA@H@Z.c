/*
 * XREFs of ??0?$atomic@H@std@@QEAA@H@Z @ 0x180086194
 * Callers:
 *     ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x18008617C (--0atomic_ref_count@impl@winrt@@QEAA@I@Z.c)
 * Callees:
 *     ??0?$_Atomic_integral_facade@I@std@@QEAA@AEBI@Z @ 0x1800861BC (--0-$_Atomic_integral_facade@I@std@@QEAA@AEBI@Z.c)
 */

__int64 __fastcall std::atomic<int>::atomic<int>(__int64 a1)
{
  __int64 v1; // rcx
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 1;
  std::_Atomic_integral_facade<unsigned int>::_Atomic_integral_facade<unsigned int>(a1, v3);
  return v1;
}
