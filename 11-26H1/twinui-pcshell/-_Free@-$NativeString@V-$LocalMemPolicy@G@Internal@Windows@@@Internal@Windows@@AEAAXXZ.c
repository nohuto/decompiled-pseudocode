/*
 * XREFs of ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800F5C1C
 * Callers:
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x1800F5BAC (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 *     GetSidStringFromToken @ 0x1800F6470 (GetSidStringFromToken.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1802B12AC (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     IsCurrentUserAssignedAccessMultiApp @ 0x1802B17E8 (IsCurrentUserAssignedAccessMultiApp.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(__int64 a1)
{
  void *v2; // rcx
  HLOCAL result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = LocalFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
