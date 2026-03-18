/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ @ 0x1801E0DB0
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ @ 0x1802744C0 (-NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021EBC4 (-ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z @ 0x180275CAC (-SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z @ 0x1802760A8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::SendPendingCallbacks(CInteractionTracker2 *this)
{
  __int64 *v2; // rdi
  bool v3; // si
  bool v4; // r9
  bool v5; // al
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int i; // edx
  __int64 v11; // rdi
  unsigned int ChannelCallbackId; // eax
  __int64 v13; // xmm0_8
  int v14; // ecx
  double v15; // xmm0_8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+38h] [rbp-50h]
  int v19; // [rsp+40h] [rbp-48h]
  int v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  int v22; // [rsp+58h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-20h]

  if ( (unsigned __int8)CInteractionTracker2::ShouldNotify(this, 73LL) )
  {
    v2 = (__int64 *)((char *)this + 96);
    if ( !*((_DWORD *)this + 30)
      || (v3 = 1, *(_DWORD *)(*((_QWORD *)this + 12) + 24LL * (unsigned int)(*((_DWORD *)this + 30) - 1))) )
    {
      v3 = 0;
    }
    CInteractionTracker2::SendPendingStateChangeCallbacks(this, v3);
    if ( (*((_BYTE *)this + 828) & 4) != 0 || (*((_BYTE *)this + 84) & 1) != 0 )
    {
      v5 = CInteractionTracker2::SendValuesChangedCallbackIfNecessary(
             this,
             (CInteractionTracker2 *)((char *)this + 424),
             *((float *)this + 120),
             *((_BYTE *)this + 84) & 1);
      *((_BYTE *)this + 828) &= ~4u;
      v4 = v5;
      *((_BYTE *)this + 84) &= ~1u;
      if ( !v3 )
        return;
      v6 = *v2;
      v7 = *((_DWORD *)this + 108);
      v8 = 3LL * (unsigned int)(*((_DWORD *)this + 30) - 1);
      *(_QWORD *)(v6 + 8 * v8 + 4) = *((_QWORD *)this + 53);
      *(_DWORD *)(v6 + 8 * v8 + 12) = v7;
      *(_DWORD *)(*v2 + 24LL * (unsigned int)(*((_DWORD *)this + 30) - 1) + 16) = *((_DWORD *)this + 120);
    }
    else
    {
      v4 = 0;
      if ( !v3 )
        return;
    }
    if ( *((char *)this + 828) >= 0 && !v4 )
      CInteractionTracker2::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
           6LL);
    if ( v9 )
    {
      for ( i = 0; i < *((_DWORD *)this + 30); ++i )
      {
        v11 = 3LL * i;
        if ( !*(_DWORD *)(*((_QWORD *)this + 12) + 24LL * i) )
        {
          ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
          v13 = *((_QWORD *)this + 53);
          v14 = *((_DWORD *)this + 108);
          v23 = ChannelCallbackId;
          v24 = *((unsigned int *)this + 18);
          v19 = *((_DWORD *)this + 131);
          v21 = v13;
          v15 = *((float *)this + 120);
          v22 = v14;
          CoreUICallSend(v9, &v23, 2LL, 6LL, 0, &unk_1802F5AE1, (unsigned int)&v21, *(_QWORD *)&v15, v19);
          v16 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v24 = *((unsigned int *)this + 18);
          v17 = *((_QWORD *)this + 12);
          v23 = v16;
          LODWORD(v18) = *(unsigned __int8 *)(v17 + 8 * v11 + 20);
          CoreUICallSend(
            v9,
            &v23,
            2LL,
            6LL,
            3,
            &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_h46UUIl3h4HMOrIMgS6GCY5hO7A,
            *((_DWORD *)this + 131),
            v18,
            v20);
          break;
        }
      }
    }
    *((_DWORD *)this + 30) = 0;
  }
}
