/*
 * XREFs of ?SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z @ 0x1802760A8
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ @ 0x1801E0DB0 (-SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z @ 0x180275CAC (-SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021EBC4 (-ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker2::SendValuesChangedCallbackIfNecessary(
        CInteractionTracker2 *this,
        const struct D2DVector3 *a2,
        float a3)
{
  char v5; // r9
  unsigned __int64 v6; // rcx
  char v7; // si
  unsigned int ChannelCallbackId; // eax
  __int64 v9; // xmm0_8
  __int64 v10; // r10
  int v11; // eax
  int v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+58h] [rbp-30h]
  _QWORD v16[2]; // [rsp+60h] [rbp-28h] BYREF

  if ( !CInteractionTracker2::ShouldNotify(this) )
    return 0;
  if ( v5 )
    goto LABEL_7;
  v6 = *((_QWORD *)this + 100) - *(_QWORD *)a2;
  if ( !v6 )
    v6 = *((unsigned int *)this + 202) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v6 && *((float *)this + 203) == a3 )
    return 0;
LABEL_7:
  v7 = 1;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
         6LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
    v9 = *(_QWORD *)a2;
    v15 = *((_DWORD *)a2 + 2);
    v13 = *((_DWORD *)this + 131);
    v14 = v9;
    v16[0] = ChannelCallbackId;
    v16[1] = *((unsigned int *)this + 18);
    CoreUICallSend(v10, v16, 2LL, 6LL, 0, &unk_1802F5AE1, (unsigned int)&v14, a3, v13);
  }
  *((_QWORD *)this + 100) = *(_QWORD *)a2;
  v11 = *((_DWORD *)a2 + 2);
  *((float *)this + 203) = a3;
  *((_DWORD *)this + 202) = v11;
  return v7;
}
