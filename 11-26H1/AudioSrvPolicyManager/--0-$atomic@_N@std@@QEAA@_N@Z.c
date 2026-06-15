/*
 * XREFs of ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x180045B90
 * Callers:
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x180045D24 (--0CSerialWorkQueue@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z @ 0x180045B80 (--0-$_Atomic_storage@_N$00@std@@QEAA@AEB_N@Z.c)
 */

__int64 __fastcall std::atomic<bool>::atomic<bool>(_BYTE *a1)
{
  __int64 v1; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  std::_Atomic_storage<bool,1>::_Atomic_storage<bool,1>(a1, v3);
  return v1;
}
