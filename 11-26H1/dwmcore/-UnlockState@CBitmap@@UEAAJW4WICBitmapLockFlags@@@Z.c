/*
 * XREFs of ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x1801A8810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::UnlockState(CBitmap *this, enum WICBitmapLockFlags a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  char v4; // si

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)this + 23) = 0;
  }
  else if ( (v4 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 23);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
