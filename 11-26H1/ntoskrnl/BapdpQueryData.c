/*
 * XREFs of BapdpQueryData @ 0x140CE2FFC
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1406CAA8C (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x1406CABD0 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140CE24F4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140CE25C0 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140CE26FC (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140CE27CC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140CE2898 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140CE296C (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140CE2E38 (BapdpProcessWmdResults.c)
 *     BapdpRegisterWbclData @ 0x140CE3814 (BapdpRegisterWbclData.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5, _OWORD *a6)
{
  __int64 *v8; // r8
  int i; // edx
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_140E622C0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_140E622C0 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      v11 = *(_DWORD *)(v10 + 32);
      if ( v11 && v11 <= 2 )
      {
        v12 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v12 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v12 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v13 = *(_DWORD *)(v10 + 36);
  if ( *a5 >= v13 )
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), *(unsigned int *)(v10 + 36));
    if ( a6 )
      *a6 = *(_OWORD *)v10;
    return 0LL;
  }
  else
  {
    *a5 = v13;
    return 3221225507LL;
  }
}
