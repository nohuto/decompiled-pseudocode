/*
 * XREFs of ??0?$atomic@I@std@@QEAA@I@Z @ 0x18008C47C
 * Callers:
 *     ??0?$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x180030724 (--0-$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@.c)
 * Callees:
 *     ??0?$_Atomic_integral_facade@I@std@@QEAA@AEBI@Z @ 0x1800861BC (--0-$_Atomic_integral_facade@I@std@@QEAA@AEBI@Z.c)
 */

__int64 __fastcall std::atomic<unsigned int>::atomic<unsigned int>(_DWORD *a1, int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  std::_Atomic_integral_facade<unsigned int>::_Atomic_integral_facade<unsigned int>(a1, &v4);
  return v2;
}
