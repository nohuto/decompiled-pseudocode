/*
 * XREFs of EditionIsGpqForegroundAccessibleCurrent @ 0x140060A80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140060AEC (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x140060B3C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleCurrent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct tagTHREADINFO **CurrentThreadNonPaged; // rax
  struct tagTHREADINFO *v4; // rcx

  v2 = a1;
  CurrentThreadNonPaged = (struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  if ( (unsigned int)IsGpqForegroundAccessibleForPti(v4, v2) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}
