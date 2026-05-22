/*
 * XREFs of ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18001EF40
 * Callers:
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18001ED5C (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 * Callees:
 *     ??0?$_Atomic_nonobject_pointer@PEAX@std@@QEAA@AEBQEAX@Z @ 0x180079BB8 (--0-$_Atomic_nonobject_pointer@PEAX@std@@QEAA@AEBQEAX@Z.c)
 */

__int64 __fastcall std::atomic<unsigned __int64>::atomic<unsigned __int64>(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0LL;
  std::_Atomic_nonobject_pointer<void *>::_Atomic_nonobject_pointer<void *>(a1, v3);
  return v1;
}
