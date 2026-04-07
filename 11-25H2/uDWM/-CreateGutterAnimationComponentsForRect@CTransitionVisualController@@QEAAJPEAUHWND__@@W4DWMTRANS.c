/*
 * XREFs of ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800D2490
 * Callers:
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800C964C (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800D2D88 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 *     ?_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z @ 0x1800D2F0C (-_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateGutterAnimationComponentsForRect(
        CTransitionVisualController *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int *a5,
        int *a6,
        __int64 a7,
        CMILRefCountBase **a8,
        CMILRefCountBase **a9)
{
  CMILRefCountBase *v10; // r14
  CMILRefCountBase *v11; // rsi
  unsigned int v12; // r15d
  __int64 v13; // r8
  int v14; // edx
  int v15; // ebx
  int v16; // r8d
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // r10d
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // edi
  __int64 v30; // rbx
  int v31; // eax
  int v32; // eax
  CMILRefCountBase *v36; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v37; // [rsp+40h] [rbp-A1h]
  CMILRefCountBase *v38; // [rsp+48h] [rbp-99h] BYREF
  int *v39; // [rsp+50h] [rbp-91h]
  __int64 v40; // [rsp+58h] [rbp-89h]
  CMILRefCountBase **v41; // [rsp+60h] [rbp-81h]
  int *v42; // [rsp+68h] [rbp-79h]
  _DWORD v43[2]; // [rsp+70h] [rbp-71h] BYREF
  __int64 v44; // [rsp+78h] [rbp-69h]
  int v45; // [rsp+80h] [rbp-61h]
  int v46; // [rsp+84h] [rbp-5Dh]
  int v47; // [rsp+88h] [rbp-59h]
  int v48; // [rsp+8Ch] [rbp-55h]
  int v49; // [rsp+90h] [rbp-51h]
  int v50; // [rsp+94h] [rbp-4Dh]
  int v51; // [rsp+98h] [rbp-49h]
  int v52; // [rsp+9Ch] [rbp-45h]
  _DWORD v53[2]; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-39h]
  int v55; // [rsp+B0h] [rbp-31h]
  int v56; // [rsp+B4h] [rbp-2Dh]
  int v57; // [rsp+B8h] [rbp-29h]
  int v58; // [rsp+BCh] [rbp-25h]
  int v59; // [rsp+C0h] [rbp-21h]
  int v60; // [rsp+C4h] [rbp-1Dh]
  int v61; // [rsp+C8h] [rbp-19h]
  int v62; // [rsp+CCh] [rbp-15h]

  v10 = 0LL;
  v11 = 0LL;
  v39 = a6;
  v12 = 0;
  v13 = *((_QWORD *)a1 + 23);
  v40 = a7;
  v41 = a8;
  v37 = a2;
  v42 = a5;
  v36 = 0LL;
  v38 = 0LL;
  if ( v13 )
  {
    v14 = 0;
    v15 = *(_DWORD *)(v13 + 24);
    v16 = *(_DWORD *)(v13 + 28);
    if ( a5[3] - a5[1] >= 0 )
      v14 = a5[3] - a5[1];
    v17 = MulDiv(v15, v14, v16);
    v18 = 0;
    v19 = v17;
    if ( v39[3] - v39[1] >= 0 )
      v18 = v39[3] - v39[1];
    v20 = MulDiv(v15, v18, *(_DWORD *)(*((_QWORD *)a1 + 23) + 28LL));
    v43[0] = a4;
    v21 = *v42;
    v22 = v42[1];
    v23 = v42[3];
    v24 = v39[1];
    v43[1] = 0;
    v44 = v40;
    v25 = v21 - v19;
    v47 = v21;
    v26 = *v39;
    v45 = v25;
    v27 = v26 - v20;
    v51 = v26;
    v28 = v39[3];
    v49 = v27;
    v53[0] = a4;
    v53[1] = 0;
    v54 = v40;
    v55 = v42[2];
    v57 = v19 + v55;
    v59 = v39[2];
    v46 = v22;
    v48 = v23;
    v50 = v24;
    v52 = v28;
    v56 = v22;
    v58 = v23;
    v60 = v24;
    v61 = v20 + v59;
    v62 = v28;
    if ( v41 )
    {
      v29 = a3;
      v30 = v37;
      if ( !CTransitionVisualController::_FakeGutterAlreadyExists(
              a1,
              (const struct CTransitionVisualController::FakeGutterInfo *)v43) )
      {
        v31 = CTransitionVisualController::_CreateSingleGutterAnimationComponent(a1, v37, a3, v43, &v36);
        v12 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v31,
            0x5F0u,
            0LL);
          v10 = v36;
          goto LABEL_20;
        }
        v10 = v36;
        *v41 = v36;
        if ( v10 )
          CMILRefCountBase::AddRef(v10);
      }
    }
    else
    {
      v30 = v37;
      v29 = a3;
    }
    if ( a9
      && !CTransitionVisualController::_FakeGutterAlreadyExists(
            a1,
            (const struct CTransitionVisualController::FakeGutterInfo *)v53) )
    {
      v32 = CTransitionVisualController::_CreateSingleGutterAnimationComponent(a1, v30, v29, v53, &v38);
      v12 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v32,
          0x5F6u,
          0LL);
        v11 = v38;
      }
      else
      {
        v11 = v38;
        *a9 = v38;
        if ( v11 )
          CMILRefCountBase::AddRef(v11);
      }
    }
  }
  else
  {
    v12 = -2147024809;
  }
LABEL_20:
  if ( v10 )
    CBaseObject::Release(v10);
  if ( v11 )
    CBaseObject::Release(v11);
  return v12;
}
