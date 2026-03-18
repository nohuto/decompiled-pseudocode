/*
 * XREFs of ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x140059D74
 * Callers:
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401B5348 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14036E800 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::NodeSupportsContextScheduling(ADAPTER_RENDER *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdx
  bool result; // al

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 3032LL) + 352LL * a2 + 32);
  result = 0;
  if ( v3 )
    return *(_BYTE *)(74LL * a3 + v3 + 68) & 1;
  return result;
}
