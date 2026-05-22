/*
 * XREFs of ??0?$_Atomic_nonobject_pointer@PEAX@std@@QEAA@AEBQEAX@Z @ 0x180079BB8
 * Callers:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18001EF40 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$atomic@PEAX@std@@QEAA@QEAX@Z @ 0x1800683C4 (--0-$atomic@PEAX@std@@QEAA@QEAX@Z.c)
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x18009DAAC (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Atomic_nonobject_pointer<void *>::_Atomic_nonobject_pointer<void *>(_QWORD *a1, _QWORD *a2)
{
  *a1 = *a2;
  return a1;
}
