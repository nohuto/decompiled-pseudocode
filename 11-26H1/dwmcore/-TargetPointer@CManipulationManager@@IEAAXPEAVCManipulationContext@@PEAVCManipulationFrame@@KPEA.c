/*
 * XREFs of ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1800AC724
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801136A4 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x1800AB630 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800AB768 (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1800ABB8C (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180115FDC (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18018EF1C (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x1801C71DC (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1801C857C (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801D0010 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationManager *this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r12
  __int64 v7; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r11
  __int64 v12; // r13
  unsigned int *v13; // rbx
  __int64 v14; // r10
  __int64 v15; // r15
  unsigned int v16; // edx
  int PointerTarget; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // r12d
  __int64 v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  _OWORD *v30; // r8
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // rax
  int v35; // eax
  int v36; // r9d
  __int128 v37; // xmm1
  int v38; // r8d
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int64 v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // r9
  int v49; // edx
  struct CInteraction *HoverTarget; // rax
  __int64 v51; // rcx
  char IsRoute; // al
  char v53; // dl
  __int64 v54; // rdx
  struct CInteraction *v55; // rax
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v61; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  __int128 v63; // [rsp+80h] [rbp-80h] BYREF
  __int128 v64; // [rsp+90h] [rbp-70h]
  __int128 v65; // [rsp+A0h] [rbp-60h]
  __int128 v66; // [rsp+B0h] [rbp-50h]
  __int128 v67; // [rsp+C0h] [rbp-40h]
  __int128 v68; // [rsp+D0h] [rbp-30h]
  __int128 v69; // [rsp+E0h] [rbp-20h]
  __int128 v70; // [rsp+F0h] [rbp-10h]
  _OWORD v71[3]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v72; // [rsp+130h] [rbp+30h]
  unsigned int v73; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v74; // [rsp+190h] [rbp+90h] BYREF
  int v75; // [rsp+198h] [rbp+98h] BYREF

  v5 = a5;
  v7 = a4;
  v57 = 0LL;
  v56 = 1;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v57);
  v11 = *((_QWORD *)this + 35);
  v12 = 248 * v7;
  v13 = (unsigned int *)((char *)a3 + 248 * v7 + 368);
  if ( v11 )
  {
    v14 = *((_QWORD *)this + 36);
    v10 = v14 * (*((_QWORD *)v13 + 10) % v11) % v11;
    v15 = v14 * (*((_QWORD *)v13 + 10) % v11) / v11 + v14 * (*((_QWORD *)v13 + 10) / v11);
  }
  else
  {
    v15 = 1000LL * v13[16];
  }
  if ( (*((_BYTE *)a3 + 176) & 2) == 0 )
  {
    v16 = v13[3];
    if ( (v16 & 4) == 0 && (v16 & 0x40000) == 0 && !CManipulationFrame::IsMousewheelFrame(a3) )
    {
      if ( (v49 & 2) != 0 || (v49 & 0x800000) != 0 )
      {
        if ( (v49 & 0x20000) != 0 && (v49 & 2) != 0 )
        {
          HoverTarget = CManipulationContext::GetHoverTarget(*((CManipulationContext **)this + 30), v13[1]);
          Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v57, HoverTarget);
          (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
            a2,
            v13[1],
            &v56);
        }
        goto LABEL_21;
      }
      v54 = v13[1];
      v58 = 0LL;
      v59 = 0LL;
      (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v54, &v58);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v57, &v59);
      if ( !(_DWORD)v58 && !v59 )
      {
        v55 = CManipulationContext::GetHoverTarget(*((CManipulationContext **)this + 30), v13[1]);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v57, v55);
      }
      goto LABEL_20;
    }
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      a3,
                      (const struct tagPOINTER_INFO *)v13,
                      a2,
                      (struct TargetingInfo *)&v56);
    v20 = v57;
    v21 = PointerTarget;
    v22 = 128LL;
    if ( PointerTarget >= 0 && v57 && v56 )
    {
      v23 = *(_OWORD *)((char *)a3 + 200);
      v63 = *(_OWORD *)((char *)a3 + 184);
      v24 = *(_OWORD *)((char *)a3 + 216);
      v64 = v23;
      v25 = *(_OWORD *)((char *)a3 + 232);
      v65 = v24;
      v26 = *(_OWORD *)((char *)a3 + 248);
      v66 = v25;
      v27 = *(_OWORD *)((char *)a3 + 264);
      v67 = v26;
      v28 = *(_OWORD *)((char *)a3 + 280);
      v68 = v27;
      v29 = *(_OWORD *)((char *)a3 + 296);
      v69 = v28;
      v30 = v71;
      v31 = *(_OWORD *)((char *)a3 + 312);
      v70 = v29;
      v32 = *(_OWORD *)((char *)a3 + 328);
      v71[0] = v31;
      v33 = *(_OWORD *)((char *)a3 + 344);
      v34 = *((_QWORD *)a3 + 45);
      v71[1] = v32;
      v71[2] = v33;
      v72 = v34;
      LOBYTE(v30) = 1;
      v35 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *, _QWORD, __int128 *, int *))(*(_QWORD *)v57 + 184LL))(
              v57,
              v15,
              v30,
              0LL,
              &v63,
              &v56);
      v20 = v57;
      v21 = v35;
    }
    if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
    {
      v73 = v13[9];
      v74 = v13[8];
      v60 = v56;
      v61 = v13[1];
      v75 = v21;
      v62 = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        byte_1803AF5DD,
        v18,
        v19,
        (__int64)&v61,
        (__int64)&v62,
        (__int64)&v60,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v75);
    }
    v36 = v13[1];
    v37 = *((_OWORD *)a3 + 3);
    v38 = *((_DWORD *)a3 + 6);
    v63 = *((_OWORD *)a3 + 2);
    v39 = *((_OWORD *)a3 + 4);
    v64 = v37;
    v40 = *((_OWORD *)a3 + 5);
    v65 = v39;
    v41 = *((_OWORD *)a3 + 6);
    v66 = v40;
    v42 = *((_OWORD *)a3 + 7);
    v67 = v41;
    v43 = *((_OWORD *)a3 + 8);
    v68 = v42;
    v44 = *((_OWORD *)a3 + 9);
    v69 = v43;
    v45 = *((_OWORD *)a3 + 10);
    v70 = v44;
    v71[0] = v45;
    InputTraceLogging::GestureTargeting::SetPointerResult(
      *((_QWORD *)a3 + 56),
      v63,
      v38,
      v36,
      (const struct TargetingInfo *)&v56);
    if ( *v13 == 2 && (v56 == 2 || v57 && v56 == 1) )
      *((_QWORD *)this + 38) = 0LL;
    v46 = v13[1];
    v58 = 0LL;
    v59 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v46, &v58);
    if ( v21 < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v57, &v59);
    if ( v56 )
    {
      if ( v57 != v59 )
      {
        if ( (_DWORD)v58 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v58);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v56);
          if ( v53 != IsRoute )
          {
            *((_BYTE *)a3 + v12 + 608) |= 1u;
            *((_BYTE *)a3 + 176) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (v13[3] & 0x40000) == 0 )
      {
        v5 = a5;
        *a5 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&MANIPULATION_POINTER_BUFFERED,
            v13[2],
            v13[1]);
        goto LABEL_20;
      }
      v56 = 1;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v57);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(a2, v13[1], &v56);
    v5 = a5;
LABEL_20:
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v59);
    goto LABEL_21;
  }
  v51 = v57;
  if ( !v57 )
    goto LABEL_24;
  v57 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v51 + 8LL))(v51, v10);
LABEL_21:
  if ( v57 && v56 != 2 )
  {
    v47 = ConvertToInputType(*v13, v13[3]);
    (*(void (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v48 + 72LL))(v48, v47, v5);
  }
LABEL_24:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v57);
}
