/*
 * XREFs of AVrfpIsVerifierProviderDll @ 0x1800C2A48
 * Callers:
 *     AVrfDllLoadNotification @ 0x1800C2990 (AVrfDllLoadNotification.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x18011365C (AVrfpSnapAlreadyLoadedDlls.c)
 * Callees:
 *     <none>
 */

char __fastcall AVrfpIsVerifierProviderDll(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // r8

  v1 = (__int64 *)AVrfpVerifierProvidersList;
  while ( v1 != &AVrfpVerifierProvidersList )
  {
    v2 = v1[4];
    v1 = (__int64 *)*v1;
    if ( v2 && *(_QWORD *)(v2 + 48) == a1 )
      return 1;
  }
  return 0;
}
