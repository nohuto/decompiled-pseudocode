/*
 * XREFs of ?GetCurrentDesktopName@VirtualDesktopAcessibility@@UEAAJPEAPEAG@Z @ 0x1801E6950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopAcessibility::GetCurrentDesktopName(
        VirtualDesktopAcessibility *this,
        unsigned __int16 **a2)
{
  unsigned __int16 *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), &SRWLock);
  v4 = SysAllocString(*((const OLECHAR **)this + 27));
  v5 = SRWLock;
  *a2 = v4;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockShared(v5);
    return 0LL;
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockShared(v5);
    return 2147942414LL;
  }
}
