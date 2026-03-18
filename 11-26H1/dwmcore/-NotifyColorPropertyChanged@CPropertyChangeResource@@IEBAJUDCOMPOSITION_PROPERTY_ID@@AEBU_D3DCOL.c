/*
 * XREFs of ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOLORVALUE@@@Z @ 0x180267ECC
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023DF0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180183A50 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18019015C (-ShouldNotify@CPropertyChangeResource@@AEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyColorPropertyChanged(unsigned int *a1, unsigned int a2, __int128 *a3)
{
  int v6; // edi
  __int64 v7; // rcx
  unsigned int ChannelCallbackId; // eax
  __int128 v9; // xmm0
  __int64 v10; // r10
  int v11; // eax
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0;
  if ( CPropertyChangeResource::ShouldNotify((__int64)a1, a2)
    && (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v7 + 24) + 6384LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)(v7 + 24) + 6384LL),
         9LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
    v9 = *a3;
    v13[0] = ChannelCallbackId;
    v13[1] = a1[18];
    v14 = v9;
    v11 = CoreUICallSend(v10, v13, 2LL, 9LL, 5, &unk_1802F5B41, a2, &v14, ChannelCallbackId);
    if ( v11 != -2018375675 )
      v6 = v11;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1B2u, 0LL);
  }
  return (unsigned int)v6;
}
