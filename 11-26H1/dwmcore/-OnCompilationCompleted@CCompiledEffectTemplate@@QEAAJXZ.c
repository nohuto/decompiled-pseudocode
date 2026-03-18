/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18010B8AC
 * Callers:
 *     ?HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ @ 0x180150BC0 (-HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18010B84C (-DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  CChannelContext *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // ecx
  int v9; // eax
  CNotificationResource *v11; // rcx
  int ChannelCallbackId; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  int v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-10h]

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
         5LL);
  v4 = (CChannelContext *)*((_QWORD *)this + 7);
  v5 = v3;
  if ( v4 )
    CChannelContext::DecreasePendingEffectCompilations(v4);
  if ( *(_DWORD *)(*((_QWORD *)this + 10) + 72LL) == 2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      if ( v5 )
      {
        ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v11);
        v19 = *((unsigned int *)this + 18);
        v15 = CoreUICallSend(
                v5,
                &v18,
                v14,
                5LL,
                1,
                &unk_1802F5ADD,
                *(_DWORD *)(v13 + 76),
                *(_QWORD *)(v13 + 88),
                ChannelCallbackId);
        v2 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xA1u, 0LL);
      }
    }
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 10) + 72LL) == 3 )
  {
    if ( CNotificationResource::ShouldNotify(this)
      && v5
      && ((v7 = *((_QWORD *)this + 7)) != 0 ? (v8 = *(_DWORD *)(v7 + 116)) : (v8 = 0),
          v18 = v8,
          v19 = *((unsigned int *)this + 18),
          v9 = CoreUICallSend(v5, &v18, v6, 5LL, 0, &unk_1802F5AD3, v16, v17, v8),
          v2 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x93u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    }
  }
  return v2;
}
