/*
 * XREFs of ??0?$atomic@PEAX@std@@QEAA@QEAX@Z @ 0x1800683C4
 * Callers:
 *     ??0PnpDevice@@AEAA@XZ @ 0x180068320 (--0PnpDevice@@AEAA@XZ.c)
 *     ??0ConsumerControlManager@@AEAA@XZ @ 0x1800E4F50 (--0ConsumerControlManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$_Atomic_nonobject_pointer@PEAX@std@@QEAA@AEBQEAX@Z @ 0x180079BB8 (--0-$_Atomic_nonobject_pointer@PEAX@std@@QEAA@AEBQEAX@Z.c)
 */

__int64 __fastcall std::atomic<void *>::atomic<void *>(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  std::_Atomic_nonobject_pointer<void *>::_Atomic_nonobject_pointer<void *>(a1, &v4);
  return v2;
}
