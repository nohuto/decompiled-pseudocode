/*
 * XREFs of ?GetWindowTitle@GamingAudio@@YAHPEAUHWND__@@PEAPEAG@Z @ 0x1803589F8
 * Callers:
 *     ?EnumWindowsProc@GamingAudio@@YAHPEAUHWND__@@_J@Z @ 0x180357F30 (-EnumWindowsProc@GamingAudio@@YAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall GamingAudio::GetWindowTitle(GamingAudio *this, char **a2, unsigned __int16 **a3)
{
  unsigned int v4; // ebx
  int WindowText; // eax
  __int64 v6; // rdi
  char *v7; // rax
  WCHAR pString[264]; // [rsp+20h] [rbp-228h] BYREF

  v4 = 0;
  *a2 = 0LL;
  WindowText = InternalGetWindowText((HWND)this, pString, 260);
  if ( WindowText <= 1 )
    return 0LL;
  v6 = WindowText + 1;
  v7 = (char *)CoTaskMemAlloc(2 * v6);
  *a2 = v7;
  if ( !v7 )
    return 0LL;
  LOBYTE(v4) = (int)StringCchCopyW(v7, v6, (char *)pString) >= 0;
  return v4;
}
