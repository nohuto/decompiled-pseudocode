/*
 * XREFs of ?Release@CRunnableTask@@UEAAKXZ @ 0x180602FF0
 * Callers:
 *     ?Release@CRunnableTask@@W7EAAKXZ @ 0x180603030 (-Release@CRunnableTask@@W7EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBA@EAAKXZ @ 0x180603040 (-Release@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBI@EAAKXZ @ 0x180603050 (-Release@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WCA@EAAKXZ @ 0x180603060 (-Release@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRunnableTask::Release(CRunnableTask *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
    (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 128LL))(this, 1LL);
  return v1;
}
