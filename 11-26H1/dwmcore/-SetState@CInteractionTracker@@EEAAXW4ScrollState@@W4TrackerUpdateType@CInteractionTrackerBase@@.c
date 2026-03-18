/*
 * XREFs of ?SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800A8690 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollState@@@Z @ 0x180137A00 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18013967C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x18013AD00 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18013B374 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801C4F8C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801E0474 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18028E1E0 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 *a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edi
  __int64 *v11; // r14
  unsigned int v12; // esi
  __int64 v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r8d
  __int64 **v19; // [rsp+20h] [rbp-50h]
  int *v20; // [rsp+28h] [rbp-48h]
  int *v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  int v23; // [rsp+48h] [rbp-28h]
  _QWORD v24[4]; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+A0h] [rbp+30h] BYREF
  int v26; // [rsp+A8h] [rbp+38h] BYREF
  __int64 *v27; // [rsp+B8h] [rbp+48h] BYREF

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 37, *((unsigned int *)a1 + 22));
        break;
      case 2:
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 37));
        break;
      case 3:
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 37));
        break;
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle((InteractionSourceManager *)(a1 + 37));
  }
  if ( *((_DWORD *)a1 + 22) != a2 )
  {
    if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
    {
      v26 = a2;
      v21 = &v26;
      v25 = v18;
      v20 = &v25;
      v19 = &v27;
      v27 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v17,
        (__int64)&unk_1803B4206);
    }
    v7 = *a1;
    *((_DWORD *)a1 + 22) = a2;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v7 + 272))(a1) )
    {
      v11 = v24;
      v24[0] = a1[53];
      v12 = 0;
      v24[1] = a1[54];
      v24[2] = a1[52];
      do
      {
        v13 = *v11;
        v26 = a2;
        v14 = *(_DWORD *)(v13 + 368);
        v15 = v14 + 1;
        if ( v14 + 1 < v14 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
        }
        else if ( v15 <= *(_DWORD *)(v13 + 364) )
        {
          *(_DWORD *)(*(_QWORD *)(v13 + 344) + 4LL * *(unsigned int *)(v13 + 368)) = a2;
          *(_DWORD *)(v13 + 368) = v15;
        }
        else
        {
          v16 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 344, 4, 1, &v26);
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xC2u, 0LL);
        }
        ++v12;
        ++v11;
      }
      while ( v12 < 3 );
    }
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        if ( v10 != 2 || (*((_BYTE *)a1 + 596) & 0x20) != 0 )
          goto LABEL_17;
        v8 = 3LL;
      }
      else
      {
        v8 = 1LL;
        *((_DWORD *)a1 + 146) = *((_DWORD *)a1 + 60);
        *((_DWORD *)a1 + 72) = 0;
      }
    }
    else
    {
      if ( (*((_BYTE *)a1 + 596) & 0x40) == 0 )
      {
        (*(void (__fastcall **)(__int64 *))(*a1 + 8))(a1);
        if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64, __int64 **, int *, int *))(**(_QWORD **)(a1[3] + 5680) + 152LL))(
               *(_QWORD *)(a1[3] + 5680),
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL,
               v19,
               v20,
               v21) < 0 )
          (*(void (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        else
          *((_BYTE *)a1 + 596) |= 0x40u;
      }
      v8 = 0LL;
    }
    v9 = *((_DWORD *)a1 + 48);
    v22 = a1[23];
    v23 = v9;
    CInteractionTracker::AddPendingStateChange(a1, v8, &v22);
LABEL_17:
    CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
  }
  v6 = a1[75];
  if ( v6 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v6, a1, *((_DWORD *)a1 + 22));
  }
}
