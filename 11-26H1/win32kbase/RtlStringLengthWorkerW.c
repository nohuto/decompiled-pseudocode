/*
 * XREFs of RtlStringLengthWorkerW @ 0x1401F61EC
 * Callers:
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14002BC50 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // rdx
  NTSTATUS result; // eax

  v3 = 0x7FFFLL;
  do
  {
    if ( !*psz )
      break;
    ++psz;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( v3 )
      *pcchLength = 0x7FFF - v3;
    else
      *pcchLength = 0LL;
  }
  return result;
}
