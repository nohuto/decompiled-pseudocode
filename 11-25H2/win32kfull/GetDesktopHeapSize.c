/*
 * XREFs of GetDesktopHeapSize @ 0x1401EC380
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401EBDA8 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopHeapSize(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax

  if ( (unsigned __int16)a1 == 1 )
  {
    v2 = 192;
  }
  else
  {
    v1 = (unsigned int)(unsigned __int16)a1 - 2;
    if ( (unsigned __int16)a1 == 2 )
    {
      v2 = 96;
    }
    else if ( (unsigned __int16)a1 == 3 )
    {
      v2 = *(_DWORD *)(W32GetUserSessionState(a1, v1) + 62932);
    }
    else
    {
      v2 = *(_DWORD *)(W32GetUserSessionState(a1, v1) + 62928);
    }
  }
  return (unsigned int)(v2 << 10);
}
