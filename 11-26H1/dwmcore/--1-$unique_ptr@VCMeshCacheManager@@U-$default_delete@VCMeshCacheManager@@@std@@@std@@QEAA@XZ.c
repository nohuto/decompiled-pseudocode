/*
 * XREFs of ??1?$unique_ptr@VCMeshCacheManager@@U?$default_delete@VCMeshCacheManager@@@std@@@std@@QEAA@XZ @ 0x180229990
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCMeshCacheManager@@@std@@QEBAXPEAVCMeshCacheManager@@@Z @ 0x18022A384 (--R-$default_delete@VCMeshCacheManager@@@std@@QEBAXPEAVCMeshCacheManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CMeshCacheManager>::~unique_ptr<CMeshCacheManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CMeshCacheManager>::operator()();
  return result;
}
