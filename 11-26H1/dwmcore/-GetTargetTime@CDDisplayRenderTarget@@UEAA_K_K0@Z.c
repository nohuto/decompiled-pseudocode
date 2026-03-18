/*
 * XREFs of ?GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z @ 0x1800EDBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CDDisplayRenderTarget::GetTargetTime(
        CDDisplayRenderTarget *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  if ( *((_DWORD *)this + 8008) == 1 )
    return 0LL;
  else
    return CTargetStats::GetTargetTime((CDDisplayRenderTarget *)((char *)this + 31992), a2, a3);
}
