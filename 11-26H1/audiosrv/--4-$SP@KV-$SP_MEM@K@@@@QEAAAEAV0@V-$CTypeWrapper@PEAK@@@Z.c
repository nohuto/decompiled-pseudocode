/*
 * XREFs of ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x1801587A4
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092F64 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x18009DEA0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800AE564 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

void **__fastcall SP<unsigned long,SP_MEM<unsigned long>>::operator=(void **a1, void *a2)
{
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(a1);
  *a1 = a2;
  return a1;
}
