/*
 * XREFs of ?GetTargetTime@CLegacyRenderTarget@@UEAA_K_K0@Z @ 0x1800EDC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacyRenderTarget::GetTargetTime(
        CLegacyRenderTarget *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  if ( *((_DWORD *)this + 8002) == 1 )
    return 0LL;
  else
    return CTargetStats::GetTargetTime((CLegacyRenderTarget *)((char *)this + 31968), a2, a3);
}
