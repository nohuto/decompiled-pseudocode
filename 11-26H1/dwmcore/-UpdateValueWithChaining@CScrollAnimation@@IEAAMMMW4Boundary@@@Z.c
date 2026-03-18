/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18013A5DC
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x180139DE0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x18013B680 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180139DA4 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x18013A9FC (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x18013AA24 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x18013AB34 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18013ACC8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x18013B3D4 (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, double a2, double a3, unsigned int a4)
{
  __int128 v4; // xmm0
  __int128 v7; // xmm8
  struct CInteractionTrackerBase *InteractionTracker; // rdi
  struct CChainingHelper *ChainingHelper; // rsi
  int v10; // r13d
  int v11; // r12d
  char *v12; // r15
  char v13; // cl
  _BYTE *v14; // r8
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  float v18; // xmm1_4
  float v19; // xmm3_4
  unsigned int v21; // ecx
  char v22; // al
  int v23; // eax
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // r9
  char v29; // al
  __int64 v30; // r9
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // r9
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // r9
  char v37; // al
  __int64 v38; // r9
  __int64 v39; // rcx
  int v40; // [rsp+98h] [rbp-39h] BYREF
  int v41; // [rsp+9Ch] [rbp-35h] BYREF
  int v42; // [rsp+A0h] [rbp-31h] BYREF
  int v43; // [rsp+A4h] [rbp-2Dh] BYREF
  int v44; // [rsp+A8h] [rbp-29h] BYREF
  int v45; // [rsp+ACh] [rbp-25h] BYREF
  int v46; // [rsp+B0h] [rbp-21h] BYREF
  int v47; // [rsp+B4h] [rbp-1Dh] BYREF
  unsigned int v48; // [rsp+B8h] [rbp-19h] BYREF
  int v49; // [rsp+BCh] [rbp-15h] BYREF
  int v50; // [rsp+C0h] [rbp-11h] BYREF
  int v51; // [rsp+C4h] [rbp-Dh] BYREF
  __int64 v52; // [rsp+C8h] [rbp-9h] BYREF
  _QWORD v53[7]; // [rsp+D0h] [rbp-1h] BYREF

  v7 = *(_OWORD *)&a2;
  InteractionTracker = CScrollAnimation::GetInteractionTracker((CScrollAnimation *)a1);
  ChainingHelper = CScrollAnimation::TryGetChainingHelper((CScrollAnimation *)a1);
  if ( ChainingHelper )
  {
    v10 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)InteractionTracker + 576LL))(InteractionTracker);
    v11 = (*(unsigned __int8 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                              + 240LL))(
            InteractionTracker,
            *(unsigned int *)(a1 + 284),
            0LL);
    if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
    {
      v21 = *(unsigned __int8 *)(a1 + 396);
      v22 = *(_BYTE *)(a1 + 396);
      v43 = LODWORD(a2);
      v40 = v22 & 1;
      v44 = *(_DWORD *)(a1 + 392);
      v45 = *(_DWORD *)(a1 + 384);
      v46 = *(_DWORD *)(a1 + 388);
      v49 = *(_DWORD *)(a1 + 380);
      v23 = *(_DWORD *)(a1 + 376);
      v41 = (v21 >> 1) & 1;
      v24 = *(unsigned int *)(a1 + 284);
      v51 = v23;
      v47 = LODWORD(a3);
      v42 = v11;
      v48 = a4;
      v50 = v10;
      v52 = ScrollAxisToString(v24);
      v53[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v25,
        (unsigned int)&unk_1803B5F04,
        v26,
        v27,
        (__int64)v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40);
    }
    v12 = (char *)(a1 + 396);
    v13 = *(_BYTE *)(a1 + 396);
    v14 = (_BYTE *)(a1 + 396);
    if ( (v13 & 2) == 0 && v10 == 2 )
    {
      v29 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD, _BYTE *))(*(_QWORD *)InteractionTracker
                                                                                         + 256LL))(
              InteractionTracker,
              *(unsigned int *)(a1 + 284),
              v14);
      LOBYTE(v30) = v11;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        (__int64)ChainingHelper,
        *(unsigned int *)(a1 + 284),
        a4,
        v30,
        v29);
      v14 = (_BYTE *)(a1 + 396);
      v31 = 3LL * *(int *)(a1 + 284);
      *((_BYTE *)ChainingHelper + 4 * v31) &= 0xFAu;
      *((_DWORD *)ChainingHelper + v31 + 2) = 0;
      *((_BYTE *)ChainingHelper + 36) |= 2u;
      *v12 |= 2u;
      v13 = *v12;
    }
    v15 = *(_DWORD *)(a1 + 376);
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( !v16 )
      {
        CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, *(float *)&a3);
        v17 = *(_DWORD *)(a1 + 380);
        if ( v17 && (_BYTE)v11 )
        {
          if ( ((v17 - 1) & 0xFFFFFFFD) == 0 && a4 == v17 )
          {
            v4 = COERCE_UNSIGNED_INT((float)((float)(*(float *)&a3 - *(float *)(a1 + 384)) > 0.0));
            if ( *(float *)&v4 < 0.0 )
            {
              LOBYTE(v34) = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                                + 256LL))(
                              InteractionTracker,
                              *(unsigned int *)(a1 + 284));
              CChainingHelper::ChainToParent(ChainingHelper, *(unsigned int *)(a1 + 284), a4, v34);
            }
          }
          v35 = *(_DWORD *)(a1 + 380);
          if ( (v35 == 2 || v35 == 3) && a4 == v35 )
          {
            v4 = COERCE_UNSIGNED_INT((float)((float)(*(float *)&a3 - *(float *)(a1 + 384)) > 0.0));
            if ( *(float *)&v4 > 0.0 )
            {
              LOBYTE(v36) = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                                + 256LL))(
                              InteractionTracker,
                              *(unsigned int *)(a1 + 284));
              CChainingHelper::ChainToParent(ChainingHelper, *(unsigned int *)(a1 + 284), a4, v36);
            }
          }
          if ( !a4 )
          {
            v37 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                      + 256LL))(
                    InteractionTracker,
                    *(unsigned int *)(a1 + 284));
            LOBYTE(v38) = v11;
            CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
              (__int64)ChainingHelper,
              *(unsigned int *)(a1 + 284),
              0LL,
              v38,
              v37);
            goto LABEL_12;
          }
LABEL_21:
          *(double *)&v4 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                              + 584LL))(
                             InteractionTracker,
                             *(unsigned int *)(a1 + 284));
          v7 = v4;
LABEL_12:
          *(_DWORD *)(a1 + 388) = LODWORD(a3);
          *(_DWORD *)(a1 + 380) = a4;
          *(_DWORD *)(a1 + 376) = v10;
          return (__m128)v7;
        }
        if ( a4 && (_BYTE)v11 )
        {
          LOBYTE(v28) = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                            + 256LL))(
                          InteractionTracker,
                          *(unsigned int *)(a1 + 284));
          CChainingHelper::ChainToParent(ChainingHelper, *(unsigned int *)(a1 + 284), a4, v28);
          goto LABEL_21;
        }
        if ( (*v12 & 1) == 0 )
        {
          v18 = *(float *)(a1 + 392);
          if ( v18 != 0.0 )
          {
            v19 = *(float *)(a1 + 384);
            v4 = COERCE_UNSIGNED_INT((float)(v18 > 0.0));
            if ( (float)((float)(*(float *)&a3 - v19) > 0.0) != *(float *)&v4 )
            {
              *((double *)&v4 + 1) = *(&a3 + 1);
              if ( (float)(*(float *)&a3 - v19) != 0.0 )
              {
                v39 = 3LL * *(int *)(a1 + 284);
                *((_BYTE *)ChainingHelper + 4 * v39) &= 0xFAu;
                *((_DWORD *)ChainingHelper + v39 + 2) = 0;
                *((_BYTE *)ChainingHelper + 36) |= 2u;
                *(_DWORD *)(a1 + 392) = 0;
              }
            }
          }
        }
LABEL_11:
        if ( !a4 || !(_BYTE)v11 )
          goto LABEL_12;
        goto LABEL_21;
      }
      if ( v16 != 1 )
        goto LABEL_11;
      if ( *(_DWORD *)(a1 + 380) && (_BYTE)v11 )
      {
        if ( v10 != 2 )
          goto LABEL_11;
        v32 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD, _BYTE *))(*(_QWORD *)InteractionTracker
                                                                                           + 256LL))(
                InteractionTracker,
                *(unsigned int *)(a1 + 284),
                v14);
        LOBYTE(v33) = v11;
        CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
          (__int64)ChainingHelper,
          *(unsigned int *)(a1 + 284),
          a4,
          v33,
          v32);
        goto LABEL_26;
      }
      if ( v10 != 2 )
        goto LABEL_11;
      *v12 = v13 | 1;
    }
    else
    {
      *v14 = v13 | 1;
      if ( v10 != 2 )
        goto LABEL_11;
    }
    *(_DWORD *)(a1 + 384) = *(_DWORD *)(a1 + 388);
LABEL_26:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, *(float *)&a3);
    goto LABEL_11;
  }
  return (__m128)v7;
}
