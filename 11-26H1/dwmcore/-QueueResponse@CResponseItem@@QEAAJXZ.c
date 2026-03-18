/*
 * XREFs of ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18007AFB8
 * Callers:
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007962C (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x18007AF90 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180149494 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResponseItem::QueueResponse(CResponseItem *this)
{
  unsigned int v1; // ebx
  __int64 v3; // r10
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // edi
  unsigned int v8; // eax
  CResponseItem *v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_BYTE *)this + 32) && !*((_BYTE *)this + 33) )
  {
    v3 = *((_QWORD *)this + 3);
    v9 = this;
    v4 = *(_DWORD *)(v3 + 320);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v6 = -2147024362;
      v8 = 183;
    }
    else
    {
      v6 = 0;
      if ( v5 <= *(_DWORD *)(v3 + 316) )
      {
        *(_QWORD *)(*(_QWORD *)(v3 + 296) + 8LL * v4) = this;
        *(_DWORD *)(v3 + 320) = v5;
LABEL_6:
        (**(void (__fastcall ***)(CResponseItem *))v9)(v9);
        *((_BYTE *)this + 32) = 1;
        return v6;
      }
      v6 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 296, 8, 1, &v9);
      if ( (v6 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = 194;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x19Fu, 0LL);
    (*(void (__fastcall **)(CResponseItem *, _QWORD))(*(_QWORD *)this + 56LL))(this, v6);
    return v6;
  }
  return v1;
}
