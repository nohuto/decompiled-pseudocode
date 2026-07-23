/*
 * XREFs of HalpInitializeGhesRecovery @ 0x1405917E4
 * Callers:
 *     HalpInitializeMce @ 0x140BEFEA4 (HalpInitializeMce.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpInitializeGhesRecovery())()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  __int64 (__fastcall *result)(); // rax

  v0 = &unk_140F89E20;
  v1 = 32LL;
  do
  {
    v0 += 780;
    *(_OWORD *)(v0 - 783) = 0LL;
    *(_OWORD *)(v0 - 781) = 0LL;
    *(v0 - 779) = 0LL;
    *(v0 - 781) = HalpErrorDeferredHandler;
    *((_DWORD *)v0 - 1568) = 0;
    --v1;
  }
  while ( v1 );
  result = HalpRequestGenericErrorRecovery;
  off_140E00C38[0] = HalpRequestGenericErrorRecovery;
  return result;
}
