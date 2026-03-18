/*
 * XREFs of BcpGetDisplayType @ 0x140717B10
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x140717E40 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140717EE8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 0LL; i < 84; i += 21LL )
  {
    if ( *a1 < dword_140E0F020[i + 37] )
      break;
    if ( a1[1] < dword_140E0F020[i + 38] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
