/*
 * XREFs of ?SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180277000
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800A8690 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollState@@@Z @ 0x180137A00 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x18013AD00 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18013B374 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801E0474 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ @ 0x18021B0C0 (-UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ.c)
 *     ?AddPendingStateChange@CInteractionTracker2@@AEAAXW4ScrollState@@AEBUD2DVector3@@M@Z @ 0x18027197C (-AddPendingStateChange@CInteractionTracker2@@AEAAXW4ScrollState@@AEBUD2DVector3@@M@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18028E1E0 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::SetState(__int64 a1, int a2, int a3)
{
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rax
  __int64 *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  float v17; // xmm3_4
  __int64 v18; // rcx
  __int64 *v19; // [rsp+20h] [rbp-40h]
  int *v20; // [rsp+28h] [rbp-38h]
  int *v21; // [rsp+30h] [rbp-30h]
  _QWORD v22[4]; // [rsp+40h] [rbp-20h] BYREF
  int v23; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+98h] [rbp+38h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 528, *(unsigned int *)(a1 + 88));
        break;
      case 2:
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 528));
        break;
      case 3:
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 528));
        break;
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle((InteractionSourceManager *)(a1 + 528));
  }
  if ( *(_DWORD *)(a1 + 88) != a2 )
  {
    if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
    {
      v24 = a2;
      v21 = &v24;
      v23 = v7;
      v20 = &v23;
      v19 = &v25;
      v25 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (__int64)&unk_1803B47BB);
    }
    v8 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 88) = a2;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(v8 + 272))(a1) )
    {
      v9 = v22;
      v22[0] = *(_QWORD *)(a1 + 656);
      v10 = 0;
      v22[1] = *(_QWORD *)(a1 + 664);
      v22[2] = *(_QWORD *)(a1 + 648);
      do
      {
        v11 = *v9;
        v24 = a2;
        v12 = *(_DWORD *)(v11 + 368);
        v13 = v12 + 1;
        if ( v12 + 1 < v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
        }
        else if ( v13 > *(_DWORD *)(v11 + 364) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet(v11 + 344, 4, 1, &v24);
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xC2u, 0LL);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v11 + 344) + 4LL * v12) = a2;
          *(_DWORD *)(v11 + 368) = v13;
        }
        ++v10;
        ++v9;
      }
      while ( v10 < 3 );
    }
    if ( a2 )
    {
      v15 = a2 - 1;
      if ( !v15 )
      {
        v17 = *(float *)(a1 + 480);
        v16 = 1;
        *(float *)(a1 + 816) = v17;
        *(_DWORD *)(a1 + 524) = 0;
LABEL_34:
        CInteractionTracker2::AddPendingStateChange(a1, v16, (__int64 *)(a1 + 424), v17);
LABEL_35:
        CInteractionTracker2::UpdatePositionRoundingSuggestion((CInteractionTracker2 *)a1);
        goto LABEL_36;
      }
      if ( v15 != 2 || (*(_BYTE *)(a1 + 828) & 0x40) != 0 )
        goto LABEL_35;
      v16 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 828) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64, __int64, __int64 *, int *, int *))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 5680LL) + 152LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5680LL),
               CInteractionTracker2::s_OnIdleAtFrameBegin,
               a1,
               4LL,
               v19,
               v20,
               v21) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 828) |= 0x80u;
      }
      v16 = 0;
    }
    v17 = *(float *)(a1 + 480);
    goto LABEL_34;
  }
LABEL_36:
  v18 = *(_QWORD *)(a1 + 1048);
  if ( v18 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v18, (_QWORD *)a1, *(_DWORD *)(a1 + 88));
  }
}
