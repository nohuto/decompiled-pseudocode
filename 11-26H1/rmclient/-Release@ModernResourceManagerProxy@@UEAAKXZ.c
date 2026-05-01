/*
 * XREFs of ?Release@ModernResourceManagerProxy@@UEAAKXZ @ 0x180018600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ModernResourceManagerProxy::Release(ModernResourceManagerProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ModernResourceManagerProxy *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
