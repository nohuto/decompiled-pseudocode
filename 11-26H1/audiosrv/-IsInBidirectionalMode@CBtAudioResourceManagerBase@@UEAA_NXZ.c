/*
 * XREFs of ?IsInBidirectionalMode@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800E46E0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

bool __fastcall CBtAudioResourceManagerBase::IsInBidirectionalMode(CBtAudioResourceManagerBase *this)
{
  struct _Mtx_internal_imp_t *v1; // rdi
  CBtAudioResourceManagerBase *v2; // rbx

  v1 = (CBtAudioResourceManagerBase *)((char *)this + 520);
  v2 = this;
  std::_Mutex_base::lock((CBtAudioResourceManagerBase *)((char *)this + 520));
  LOBYTE(v2) = *((_DWORD *)v2 + 150) != 0;
  _Mtx_unlock(v1);
  return (char)v2;
}
