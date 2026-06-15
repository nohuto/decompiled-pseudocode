/*
 * XREFs of ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180046FE4
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180044B60 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180046D30 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  while ( a1 != v4 )
  {
    --v4;
    --a3;
    v6 = 0LL;
    if ( v9 != v4 )
    {
      v6 = *v4;
      *v4 = 0LL;
    }
    v7 = *a3;
    *a3 = v6;
    v9[0] = v7;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v9);
  }
  return a3;
}
