/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18010B84C (-DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18014D028 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18014D7E4 (-IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18020B34C (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CChannelContext **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  int v5; // esi
  CSharedSectionBase *Resource; // rax
  const void *v7; // r14
  int v8; // ebx
  struct Windows::UI::Composition::IEffectDescription *v9; // rcx
  unsigned int v11; // eax
  __int64 v12; // r14
  int v13; // ebx
  int ChannelCallbackId; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD v17[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v18; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v5 = 0;
  v18 = 0LL;
  if ( this[10] )
  {
    v8 = -2003303422;
    v11 = 36;
  }
  else
  {
    Resource = (CSharedSectionBase *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 132LL);
    if ( Resource )
    {
      v7 = CSharedSectionBase::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
      if ( v7 )
      {
        SetRestrictedErrorInfo(0LL);
        v5 = DeserializeEffectDescription(v7, *((unsigned int *)a3 + 4), &v18);
        v8 = v5;
        if ( v5 < 0 )
        {
          v11 = 55;
        }
        else
        {
          CChannelContext::IncreasePendingEffectCompilations(this[7]);
          v8 = CEffectCompilationService::BeginCompile(
                 *((CEffectCompilationService **)this[3] + 81),
                 (struct CCompiledEffectTemplate *)this,
                 v18,
                 this + 10);
          if ( v8 >= 0 )
          {
            (*((void (__fastcall **)(CChannelContext **, _QWORD, _QWORD))*this + 10))(this, 0LL, 0LL);
            v8 = 0;
            goto LABEL_7;
          }
          CChannelContext::DecreasePendingEffectCompilations(this[7]);
          CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0, 0x1000000u);
          v11 = 71;
        }
      }
      else
      {
        v8 = -2147024882;
        v11 = 49;
      }
    }
    else
    {
      v8 = -2003303421;
      v11 = 44;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v11, 0LL);
  if ( CNotificationResource::ShouldNotify((CNotificationResource *)this) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this[3] + 798) + 72LL))(
            *((_QWORD *)this[3] + 798),
            5LL);
    if ( v12 )
    {
      v13 = -2147467259;
      bstrString = 0LL;
      if ( v5 < 0 )
      {
        v13 = v5;
        CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
      }
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
      v17[1] = *((unsigned int *)this + 18);
      v16 = CoreUICallSend(v12, v17, 2LL, 5LL, 1, &unk_1802F5ADD, v13, v15, ChannelCallbackId);
      v8 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x68u, 0LL);
      SysFreeString(bstrString);
    }
  }
  if ( v5 < 0 )
    v8 = 0;
LABEL_7:
  v9 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return (unsigned int)v8;
}
