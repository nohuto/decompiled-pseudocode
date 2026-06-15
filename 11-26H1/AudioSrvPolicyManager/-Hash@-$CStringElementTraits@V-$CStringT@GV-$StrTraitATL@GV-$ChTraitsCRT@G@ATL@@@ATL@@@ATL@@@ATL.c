/*
 * XREFs of ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x1800025B0
 * Callers:
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180002BD0 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180004694 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(
        unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rdx
  unsigned __int16 v2; // cx
  __int64 result; // rax

  v1 = a1;
  if ( !a1 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *a1;
  result = 0LL;
  if ( v2 )
  {
    do
    {
      ++v1;
      result = (unsigned int)v2 + 33 * (_DWORD)result;
      v2 = *v1;
    }
    while ( *v1 );
  }
  return result;
}
