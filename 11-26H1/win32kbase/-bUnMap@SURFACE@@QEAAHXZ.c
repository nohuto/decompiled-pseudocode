/*
 * XREFs of ?bUnMap@SURFACE@@QEAAHXZ @ 0x140030160
 * Callers:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1400300E0 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bUnMap(SURFACE *this)
{
  LONG v4; // r8d

  if ( (*((_QWORD *)this + 31) || (*((_DWORD *)this + 29) & 1) != 0)
    && _bittest16((const signed __int16 *)this + 51, 0xBu) )
  {
    KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)this + 39) + 64LL), 0);
    KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 39) + 64LL), UserRequest, 0, 0, 0LL);
    if ( *((_DWORD *)this + 68) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
      && (*((_DWORD *)this + 70))-- == 1 )
    {
      v4 = *((_DWORD *)this + 69);
      *((_DWORD *)this + 68) = 0;
      if ( v4 )
      {
        KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 39), 0, v4, 0);
        *((_DWORD *)this + 69) = 0;
      }
    }
    KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)this + 39) + 64LL), 0);
  }
  return 1LL;
}
