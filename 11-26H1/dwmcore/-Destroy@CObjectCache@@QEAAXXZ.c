/*
 * XREFs of ?Destroy@CObjectCache@@QEAAXXZ @ 0x18028C314
 * Callers:
 *     ??1CThreadContext@@AEAA@XZ @ 0x18028C1D8 (--1CThreadContext@@AEAA@XZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18028C350 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CObjectCache::Destroy(CObjectCache *this)
{
  _QWORD *v1; // rdi
  void *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  while ( v1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    operator delete(v3);
  }
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
}
