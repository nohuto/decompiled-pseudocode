/*
 * XREFs of ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x1800883C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::SetWindowId(CAudioSession *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  *((_DWORD *)this + 52) = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
