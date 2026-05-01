/*
 * XREFs of ?GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180222340
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CImmersiveApplicationWindow::GetProcessId(HWND *this, unsigned int *a2)
{
  DWORD WindowThreadProcessId; // eax
  unsigned int v3; // ecx

  WindowThreadProcessId = GetWindowThreadProcessId(this[2], a2);
  v3 = 0;
  if ( !WindowThreadProcessId )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
