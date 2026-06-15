/*
 * XREFs of ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x180110DE0
 * Callers:
 *     ?GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z @ 0x180112350 (-GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z.c)
 *     AudioServerCloseVpoContext @ 0x180114910 (AudioServerCloseVpoContext.c)
 *     AudioServerGetEndpointVpoContext @ 0x180115E50 (AudioServerGetEndpointVpoContext.c)
 *     VPOCONTEXT_rundown @ 0x1801171A0 (VPOCONTEXT_rundown.c)
 *     _CVADServer::GetStreamVpoContext_::_1_::dtor$4 @ 0x18016A96E (_CVADServer--GetStreamVpoContext_--_1_--dtor$4.c)
 *     AudioServerGetEndpointVpoContext$dtor$4 @ 0x18016AA5B (AudioServerGetEndpointVpoContext$dtor$4.c)
 * Callees:
 *     ??R?$default_delete@VCVpoContextProxy@@@std@@QEBAXPEAVCVpoContextProxy@@@Z @ 0x18011129C (--R-$default_delete@VCVpoContextProxy@@@std@@QEBAXPEAVCVpoContextProxy@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CVpoContextProxy>::operator()();
  return result;
}
