/*
 * XREFs of ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180079040
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002DC58 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007962C (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2)
{
  _QWORD *v2; // rdi
  int v5; // eax
  unsigned int v6; // esi
  CLegacySurfaceManager *v7; // rcx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+44h] [rbp-14h]

  v9 = 2;
  v2 = (_QWORD *)((char *)this + 1504);
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v11) = *((_DWORD *)this + 373);
  HIDWORD(v11) = a2;
  if ( a2 >= 0 )
  {
    *(_QWORD *)((char *)&v10 + 4) = *v2;
    HIDWORD(v10) = *((_DWORD *)this + 380);
  }
  v5 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 5), (const struct MIL_MESSAGE *)&v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( a2 >= 0 )
      *v2 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x77u, 0LL);
  }
  v7 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 152LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v7);
  return v6;
}
