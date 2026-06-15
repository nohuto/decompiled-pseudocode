/*
 * XREFs of ??$GetPtrAs@PEAG@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEBAPEAPEAGXZ @ 0x1800B08C4
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092F64 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x18009DEA0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( !*a1 )
    return 0LL;
  return result;
}
