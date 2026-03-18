/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC
 * Callers:
 *     GreAddBitmapD3DDirtyRgn @ 0x140097F10 (GreAddBitmapD3DDirtyRgn.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x140098234 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140098880 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1401E276C (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140322640 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140001CB0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14009A87C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z @ 0x14009A918 (-vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x14009AAC8 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140144388 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401E3AC0 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  METAREGION *v6; // rsi
  int v7; // ebx
  __int64 v12; // rcx
  int v13; // eax
  DC *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct _RECTL v20; // xmm0
  __int64 v21; // rcx
  LONG v22; // ecx
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v30; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v31; // [rsp+50h] [rbp-99h] BYREF
  __int64 v32; // [rsp+58h] [rbp-91h] BYREF
  __int64 v33; // [rsp+60h] [rbp-89h] BYREF
  __int64 v34; // [rsp+68h] [rbp-81h] BYREF
  DC *v35[10]; // [rsp+70h] [rbp-79h] BYREF
  struct _RECTL v36; // [rsp+C0h] [rbp-29h] BYREF
  struct _RECTL v37; // [rsp+D0h] [rbp-19h] BYREF

  v6 = (struct SFMLOGICALSURFACE *)((char *)a2 + 128);
  v7 = 0;
  LODWORD(v32) = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
    *(_QWORD *)v6 = v29;
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
    v23 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = v29;
    EtwTraceLifetimeAccum(v23, 1LL);
    LODWORD(v32) = 1;
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v29 = *(_QWORD *)v6;
    RGNOBJ::vSet((RGNOBJ *)&v29);
    if ( *((_QWORD *)a2 + 10) )
    {
      *(_QWORD *)&v36.left = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v36);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v34 = *(_QWORD *)v6;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v30);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v30, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v31);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v33);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33);
  if ( v34 && v30 && v31 && v33 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v30, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 || !a3 )
    {
LABEL_39:
      if ( !a1 )
        goto LABEL_44;
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v29);
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v29, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
      v22 = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      *(_QWORD *)&v36.left = 0LL;
      v36.right = v22;
      v36.bottom = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      if ( v29 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v29, &v36);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v30, (struct RGNOBJ *)&v29, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v30);
          v7 = 1;
        }
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v29);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
      if ( !v7 )
LABEL_44:
        RGNOBJ::vSet((RGNOBJ *)&v30);
LABEL_26:
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v30, 0xEu) )
      {
LABEL_32:
        if ( *((_QWORD *)a2 + 10) )
        {
          v29 = *((_QWORD *)a2 + 10);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v30, 0xEu) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v29);
            v19 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v29;
            EtwTraceLifetimeAccum(v19, 1LL);
          }
          if ( !(_DWORD)v32 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v29) == 2 )
          {
            v37 = 0LL;
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32);
            if ( v32 )
            {
              v20 = *(struct _RECTL *)(v29 + 52);
              *(_QWORD *)&v36.left = *((_QWORD *)a2 + 10);
              v37 = v20;
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
              RGNOBJ::vSet((RGNOBJ *)&v32, &v37);
              v21 = *(_QWORD *)a2;
              *((_QWORD *)a2 + 10) = v32;
              EtwTraceLifetimeAccum(v21, 1LL);
            }
          }
        }
        goto LABEL_7;
      }
      RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v34);
      v17 = *(_QWORD *)a2;
      if ( a6 )
      {
        EtwTranslationUpdateOffset(v17, *((unsigned int *)a2 + 38), HIDWORD(*((_QWORD *)a2 + 19)));
        EtwTranslationUpdate(
          *(_QWORD *)a2,
          (unsigned int)a4->left,
          (unsigned int)a4->top,
          (unsigned int)a4->right,
          a4->bottom);
        v27 = v34;
        v28 = METAREGION::vApplyMoveData(
                v6,
                (struct _RECTL *)a2 + 7,
                (struct _POINTL *)a2 + 13,
                *((struct REGION **)a2 + 12));
        *(_QWORD *)v6 = v27;
        if ( !v28 )
        {
LABEL_30:
          v18 = *((_DWORD *)a2 + 63);
          if ( (v18 & 2) == 0 )
          {
            *((_DWORD *)a2 + 63) = v18 | 2;
            *a5 |= 1u;
          }
          goto LABEL_32;
        }
      }
      else
      {
        EtwDirtyRectUpdate(v17, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
        *(_QWORD *)v6 = v34;
        METAREGION::vIntersectDirtyRectWithMoveData(v6, (struct tagRECT *)a4);
      }
      METAREGION::vCalculateNoMoveDirty(v6);
      goto LABEL_30;
    }
    DCOBJA::DCOBJA((DCOBJA *)v35, a3);
    v14 = v35[0];
    if ( !v35[0] || (*((_DWORD *)v35[0] + 9) & 1) == 0 )
    {
LABEL_25:
      DCOBJA::~DCOBJA((DCOBJA *)v35);
      if ( v7 )
        goto LABEL_26;
      goto LABEL_39;
    }
    v15 = *((_QWORD *)v35[0] + 146);
    if ( !v15 || (*((_DWORD *)v35[0] + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v35[0]) )
    {
      if ( !*((_QWORD *)v14 + 144) )
      {
        if ( !*((_QWORD *)v14 + 145) || (*((_DWORD *)v14 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v14) )
          v16 = *((_QWORD *)v14 + 143);
        goto LABEL_22;
      }
      if ( !v15 )
        goto LABEL_46;
    }
    if ( (*((_DWORD *)v14 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v14) )
LABEL_46:
      v16 = *((_QWORD *)v14 + 144);
LABEL_22:
    *(_QWORD *)&v36.left = v16;
    if ( v16 )
    {
      if ( RGNOBJ::bMerge((RGNOBJ *)&v31, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v30, 8u) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v30);
        v7 = 1;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v31);
      }
    }
    goto LABEL_25;
  }
LABEL_7:
  v13 = *((_DWORD *)a2 + 63);
  if ( (v13 & 0x20) != 0 )
  {
    if ( (v13 & 4) != 0 )
      *a5 |= 2u;
    *((_DWORD *)a2 + 63) &= ~0x20u;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 35) & 2) != 0 && (*a5 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          v25 = *(_DWORD *)(CurrentProcessWin32Process + 276);
          if ( (v25 & 2) == 0 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 276) = v25 | 2;
            if ( (unsigned int)dword_14039BBC0 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x400000000000LL) )
              {
                *(_QWORD *)&v36.left = 0x2000000LL;
                LODWORD(v32) = 1;
                LODWORD(v29) = 1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v26,
                  (__int64)&unk_14036C17D);
              }
            }
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v33);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v31);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v30);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
}
