/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002A5A8
 * Callers:
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x18002B1B8 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800C1DA0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18002A260 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002B938 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18003ADE0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18003F114 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18007AD0C (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18008C344 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 i; // rdx
  int v13; // eax
  __m128i *v14; // rcx
  __m128i v15; // xmm0
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v20; // edi
  unsigned int v21; // eax
  CAnimationScheduler *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-20h]
  CBaseObject *v24; // [rsp+70h] [rbp+30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v9, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v24 = 0LL;
  v10 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v14 = *(__m128i **)(*((_QWORD *)this + 2) + 8 * i);
    if ( v14[4].m128i_i32[2] == a2 )
    {
      v15 = v14[2];
      v16 = v14[2].m128i_i64[0];
      if ( a3 )
      {
        v17 = v16 - *(_QWORD *)&a3->Data1;
        if ( !v17 )
          v17 = _mm_srli_si128(v15, 8).m128i_u64[0] - *(_QWORD *)a3->Data4;
      }
      else
      {
        v17 = v16 - *(_QWORD *)&GUID_NULL.Data1;
        if ( !v17 )
          v17 = _mm_srli_si128(v15, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
      }
      if ( !v17 && !v14[1].m128i_i32[2] )
      {
        v24 = *(CBaseObject **)(*((_QWORD *)this + 2) + 8 * i);
        CBaseObject::AddRef((CBaseObject *)v14);
        v10 = 0;
        break;
      }
    }
  }
  if ( v24 )
  {
    if ( v10 < 0 )
      goto LABEL_7;
    goto LABEL_23;
  }
  if ( *((_DWORD *)this + 10) > 0xAu )
  {
    v10 = -2147024809;
    goto LABEL_9;
  }
  v13 = CStoryboardFactory::Create(a2, a4, &v24);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 215;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F5218, 1LL, v13, v23, 0LL);
    goto LABEL_7;
  }
  if ( a3 )
    *((struct _GUID *)v24 + 2) = *a3;
  if ( (*(unsigned __int8 (__fastcall **)(CBaseObject *))(*(_QWORD *)v24 + 24LL))(v24) )
  {
    v18 = *((_DWORD *)this + 10);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
    {
      v10 = -2147024362;
      v20 = -2147024362;
      v21 = 183;
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v21, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F5218, 1LL, v20, 0xE2u, 0LL);
      goto LABEL_7;
    }
    if ( v19 > *((_DWORD *)this + 9) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &v24);
      v10 = v20;
      if ( v20 < 0 )
      {
        v21 = 194;
        goto LABEL_30;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v24;
      *((_DWORD *)this + 10) = v19;
    }
    CBaseObject::AddRef(v24);
  }
LABEL_23:
  if ( !(*(unsigned __int8 (__fastcall **)(CBaseObject *))(*(_QWORD *)v24 + 24LL))(v24) )
  {
    v10 = -2147024809;
    goto LABEL_7;
  }
  if ( !CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v24) )
  {
    CStoryboard::Abandon(v24);
    v10 = -2147467259;
    goto LABEL_7;
  }
  v13 = (*(__int64 (__fastcall **)(CBaseObject *))(*(_QWORD *)v24 + 88LL))(v24);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 250;
    goto LABEL_13;
  }
  CStoryboard::SetParentStoryboard(v24, a4);
  v13 = CTransitionVisualController::RemoveTargetsForStoryboard(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          v24,
          0,
          0);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 254;
    goto LABEL_13;
  }
  v13 = CAnimationScheduler::_OnBeginAnimationClock(v22, v24, a3, a5);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 257;
    goto LABEL_13;
  }
LABEL_7:
  if ( v24 )
  {
    CStoryboard::Release(v24);
    v24 = 0LL;
  }
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v10;
}
