/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18013BA80
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B8B0 (-NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18013BE80 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18013C4E8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  bool v4; // di
  __int64 v5; // r8
  char v6; // r9
  char *v7; // rsi
  __int64 v8; // r9
  int v9; // eax
  char v10; // al
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  unsigned int i; // edx
  __int64 v15; // rsi
  unsigned int ChannelCallbackId; // eax
  __int64 v17; // xmm0_8
  int v18; // ecx
  double v19; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+40h] [rbp-38h]
  int v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-28h] BYREF
  int v26; // [rsp+58h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-18h] BYREF
  __int64 v28; // [rsp+68h] [rbp-10h]

  v1 = *((_QWORD *)this + 7);
  if ( v1 && *(_DWORD *)(v1 + 116) && *((_DWORD *)this + 18) && (*((_BYTE *)this + 284) & 1) != 0 )
  {
    v7 = (char *)this + 96;
    v4 = *((_DWORD *)this + 30)
      && !*(_DWORD *)(*((_QWORD *)this + 12) + 24LL * (unsigned int)(*((_DWORD *)this + 30) - 1));
    CInteractionTracker::SendPendingStateChangeCallbacks(this, v4);
    if ( (*((_BYTE *)this + 596) & 2) != 0 || (*((_BYTE *)this + 84) & 1) != 0 )
    {
      v8 = *((_BYTE *)this + 84) & 1;
      v9 = *((_DWORD *)this + 48);
      v25 = *((_QWORD *)this + 23);
      v26 = v9;
      v10 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v25, v5, v8);
      *((_BYTE *)this + 596) &= ~2u;
      v6 = v10;
      *((_BYTE *)this + 84) &= ~1u;
      if ( !v4 )
        return;
      v11 = *(_QWORD *)v7;
      v12 = *((_DWORD *)this + 48);
      v13 = 3LL * (unsigned int)(*((_DWORD *)v7 + 6) - 1);
      *(_QWORD *)(v11 + 8 * v13 + 4) = *((_QWORD *)this + 23);
      *(_DWORD *)(v11 + 8 * v13 + 12) = v12;
      *(_DWORD *)(*(_QWORD *)v7 + 24LL * (unsigned int)(*((_DWORD *)v7 + 6) - 1) + 16) = *((_DWORD *)this + 60);
    }
    else
    {
      v6 = 0;
      if ( !v4 )
        return;
    }
    if ( (*((_BYTE *)this + 596) & 0x40) == 0 && !v6 )
      CInteractionTracker::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
           6LL);
    if ( v3 )
    {
      for ( i = 0; i < *((_DWORD *)this + 30); ++i )
      {
        v15 = 3LL * i;
        if ( !*(_DWORD *)(*((_QWORD *)this + 12) + 24LL * i) )
        {
          ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
          v17 = *((_QWORD *)this + 23);
          v18 = *((_DWORD *)this + 48);
          v27 = ChannelCallbackId;
          v28 = *((unsigned int *)this + 18);
          v23 = *((_DWORD *)this + 72);
          v25 = v17;
          v19 = *((float *)this + 60);
          v26 = v18;
          CoreUICallSend(v3, &v27, 2LL, 6LL, 0, &unk_1802F5AE1, (unsigned int)&v25, *(_QWORD *)&v19, v23);
          v20 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v28 = *((unsigned int *)this + 18);
          v21 = *((_QWORD *)this + 12);
          v27 = v20;
          LODWORD(v22) = *(unsigned __int8 *)(v21 + 8 * v15 + 20);
          CoreUICallSend(
            v3,
            &v27,
            2LL,
            6LL,
            3,
            &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_h46UUIl3h4HMOrIMgS6GCY5hO7A,
            *((_DWORD *)this + 72),
            v22,
            v24);
          break;
        }
      }
    }
    *((_DWORD *)this + 30) = 0;
  }
}
