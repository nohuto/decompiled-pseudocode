/*
 * XREFs of ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z @ 0x180267DD4
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023DF0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180183A50 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18019015C (-ShouldNotify@CPropertyChangeResource@@AEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyBooleanPropertyChanged(
        unsigned int *a1,
        unsigned int a2,
        unsigned __int8 a3)
{
  int v3; // ebp
  int v6; // edi
  __int64 v7; // rcx
  unsigned int ChannelCallbackId; // eax
  __int64 v9; // r10
  int v10; // eax
  __int64 v12; // [rsp+38h] [rbp-20h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v6 = 0;
  if ( CPropertyChangeResource::ShouldNotify((__int64)a1, a2)
    && (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v7 + 24) + 6384LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)(v7 + 24) + 6384LL),
         9LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
    v13[0] = ChannelCallbackId;
    LODWORD(v12) = v3;
    v13[1] = a1[18];
    v10 = CoreUICallSend(v9, v13, 2LL, 9LL, 1, &unk_1802F5B2B, a2, v12, ChannelCallbackId);
    if ( v10 != -2018375675 )
      v6 = v10;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xF5u, 0LL);
  }
  return (unsigned int)v6;
}
