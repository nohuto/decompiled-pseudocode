/*
 * XREFs of ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x180099554
 * Callers:
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18001ED5C (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ??0MPCRawInputProvider@@QEAA@XZ @ 0x180094654 (--0MPCRawInputProvider@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z @ 0x180099578 (--0-$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z.c)
 */

__int64 __fastcall std::atomic<bool>::atomic<bool>(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  std::_Atomic_storage<bool,1>::_Atomic_storage<bool,1>(a1, v3);
  return v1;
}
