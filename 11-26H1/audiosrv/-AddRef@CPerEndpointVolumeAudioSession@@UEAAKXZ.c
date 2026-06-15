/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@UEAAKXZ @ 0x1800656D0
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@W7EAAKXZ @ 0x1800CDB60 (-AddRef@CPerEndpointVolumeAudioSession@@W7EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ @ 0x1800CDB70 (-AddRef@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ @ 0x1800CDB80 (-AddRef@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ @ 0x1800CDB90 (-AddRef@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ @ 0x1800CDBA0 (-AddRef@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ @ 0x1800CDBB0 (-AddRef@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(CPerEndpointVolumeAudioSession *this)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int32 v6; // r9d

  v1 = *((_QWORD *)this + 7);
  v2 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v2;
    v3 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v3;
  }
  while ( 1 )
  {
    v6 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v6 == 0x7FFFFFFF )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v6 + 1, v6) )
      return (unsigned int)(v6 + 1);
  }
  return v2;
}
