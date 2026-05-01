/*
 * XREFs of ?Release@CRefThread@@UEAAKXZ @ 0x1801BA950
 * Callers:
 *     ?Release@CDuiRefThread@@UEAAKXZ @ 0x18020E950 (-Release@CDuiRefThread@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRefThread::Release(CRefThread *this)
{
  DWORD v1; // esi
  void *v2; // rdi
  unsigned __int32 v3; // ebx

  v1 = *((_DWORD *)this + 4);
  v2 = (void *)*((_QWORD *)this + 3);
  v3 = _InterlockedDecrement(*((volatile signed __int32 **)this + 1));
  if ( !v3 )
    (*(void (__fastcall **)(CRefThread *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  if ( v1 != GetCurrentThreadId() )
  {
    if ( v2 )
      SetEvent(v2);
    else
      PostThreadMessageW(v1, 0, 0LL, 0LL);
  }
  return v3;
}
