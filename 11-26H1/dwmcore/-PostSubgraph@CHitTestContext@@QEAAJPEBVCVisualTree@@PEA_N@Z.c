/*
 * XREFs of ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180028970
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180026DF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180075BC8 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AFDF0 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x1801D6B5C (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180228420 (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v7; // r15
  int WorldTransform; // ebp
  __int64 *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  int v14; // ecx
  _DWORD *v15; // rax
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm8_4
  char v23; // dl
  float v24; // xmm2_4
  float v25; // xmm7_4
  __int64 v26; // rdx
  __int64 v27; // rax
  _BYTE *v28; // r8
  __int64 v29; // rcx
  __int64 ****v30; // rcx
  __int64 ***v31; // rcx
  __int64 **i; // rax
  _DWORD *v33; // r8
  __int64 v34; // r9
  _BYTE *v35; // r10
  __int64 v36; // rcx
  _BYTE *v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  bool v45; // r13
  char v46; // al
  bool v47; // zf
  _DWORD *v48; // rdx
  __int64 v49; // rax
  _BYTE *v50; // r8
  __int64 v51; // rcx
  _QWORD *v52; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v55; // eax
  _QWORD *v56; // rdx
  const struct CInteraction *InteractionInternal; // rax
  bool v58; // dl
  float v59[3]; // [rsp+30h] [rbp-B8h] BYREF
  float v60; // [rsp+3Ch] [rbp-ACh]
  float v61; // [rsp+40h] [rbp-A8h]
  float v62; // [rsp+44h] [rbp-A4h]
  float v63; // [rsp+4Ch] [rbp-9Ch]
  float v64; // [rsp+60h] [rbp-88h]
  float v65; // [rsp+64h] [rbp-84h]
  float v66; // [rsp+6Ch] [rbp-7Ch]
  char v67; // [rsp+F0h] [rbp+8h] BYREF
  float v68; // [rsp+F8h] [rbp+10h] BYREF
  float v69; // [rsp+FCh] [rbp+14h]
  __int64 v70; // [rsp+100h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)a2;
  v7 = *((_QWORD *)this + 3);
  *a3 = 1;
  WorldTransform = 0;
  v70 = v3;
  v10 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v5 + 192))(a2) )
  {
    v10 = (__int64 *)(v3 + 320);
    goto LABEL_3;
  }
  v26 = *(_QWORD *)(v3 + 224);
  if ( *(int *)v26 < 0 )
  {
    v27 = *(unsigned int *)(v26 + 4);
    v28 = (_BYTE *)(v26 + 8);
    v29 = 0LL;
    if ( (_DWORD)v27 )
    {
      while ( *v28 != 1 )
      {
        v29 = (unsigned int)(v29 + 1);
        ++v28;
        if ( (unsigned int)v29 >= (unsigned int)v27 )
          goto LABEL_41;
      }
    }
    else
    {
LABEL_41:
      if ( (unsigned int)v29 >= (unsigned int)v27 )
      {
        v30 = 0LL;
LABEL_34:
        v31 = *v30;
        if ( v31 )
        {
          for ( i = *v31; i != (__int64 **)v31; i = (__int64 **)*i )
          {
            if ( i[4] == (__int64 *)a2 )
            {
              v10 = (__int64 *)(i - 44);
              goto LABEL_3;
            }
          }
        }
        goto LABEL_3;
      }
    }
    v30 = (__int64 ****)(v26 + ((v27 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v29);
    goto LABEL_34;
  }
LABEL_3:
  if ( *((_QWORD *)this + 13) )
    goto LABEL_4;
  if ( *(_DWORD *)(v3 + 108) == 1 )
  {
    v45 = v7 && *(_DWORD *)(v7 + 108) == 1;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3) )
      goto LABEL_68;
    v48 = *(_DWORD **)(v3 + 224);
    if ( (*v48 & 0x1000000) == 0 )
    {
LABEL_78:
      v46 = 0;
LABEL_69:
      if ( v45 )
        v47 = v46 == 0;
      else
        v47 = (unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)(v3 + 80)) == 0;
      if ( !v47 )
        goto LABEL_4;
      goto LABEL_20;
    }
    v49 = (unsigned int)v48[1];
    v50 = v48 + 2;
    v51 = 0LL;
    if ( (_DWORD)v49 )
    {
      while ( *v50 != 8 )
      {
        v51 = (unsigned int)(v51 + 1);
        ++v50;
        if ( (unsigned int)v51 >= (unsigned int)v49 )
          goto LABEL_85;
      }
    }
    else
    {
LABEL_85:
      if ( (unsigned int)v51 >= (unsigned int)v49 )
      {
        v52 = 0LL;
LABEL_77:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v52 + 64LL))(*v52, 51LL) )
        {
LABEL_68:
          v46 = 1;
          goto LABEL_69;
        }
        goto LABEL_78;
      }
    }
    v52 = (_QWORD *)((char *)&v48[2 * v51] + ((v49 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_77;
  }
LABEL_20:
  if ( *(_BYTE *)(v3 + 104) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3) )
  {
    v14 = *((_DWORD *)this + 44);
    v15 = 0LL;
    if ( v14 )
      v15 = (_DWORD *)(*((_QWORD *)this + 21) + 4LL * (unsigned int)(v14 - 1));
    if ( *v15 != 1
      || (Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v3)) == 0LL
      || (Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v3 + 140)),
          CMILMatrix::IsFacingUser(Matrix)) )
    {
      WorldTransform = CVisual::GetWorldTransform((CVisual *)v3, a2, (struct CMILMatrix *)v59, 0LL, 0LL);
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0x10Cu, 0LL);
        return (unsigned int)WorldTransform;
      }
      v16 = *((float *)this + 20);
      v17 = *((float *)this + 21);
      v18 = (float)(v17 * v63) - v62;
      v19 = (float)(v16 * v63) - v61;
      v20 = (float)(v16 * v60) - v59[0];
      v21 = (float)(v17 * v60) - v59[1];
      if ( (float)(v18 * v20) != (float)(v19 * v21) )
      {
        v22 = (float)(v18 * v20) - (float)(v19 * v21);
        v23 = *((_BYTE *)this + 216);
        v67 = 0;
        v24 = (float)(v16 * v66) - v64;
        v25 = (float)(v17 * v66) - v65;
        v68 = (float)((float)(v25 * v19) - (float)(v24 * v18)) / v22;
        v69 = (float)((float)(v24 * v21) - (float)(v25 * v20)) / v22;
        WorldTransform = (*(__int64 (__fastcall **)(__int64, _QWORD, float *, char *))(*(_QWORD *)v3 + 312LL))(
                           v3,
                           v23 & 1,
                           &v68,
                           &v67);
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0x114u, 0LL);
          return (unsigned int)WorldTransform;
        }
        if ( v67 )
          *((_QWORD *)this + 13) = v3;
      }
    }
  }
LABEL_4:
  if ( *(_DWORD *)(v3 + 208) != -1 )
  {
    v11 = *((_DWORD *)this + 44);
    if ( v11 )
      *((_DWORD *)this + 44) = v11 - 1;
  }
  if ( *((_BYTE *)v10 + 14) )
  {
    v55 = *((_DWORD *)this + 50);
    if ( v55 )
      *((_DWORD *)this + 50) = v55 - 1;
  }
  if ( *((_QWORD *)this + 14) )
    goto LABEL_13;
  v12 = *((_QWORD *)this + 13);
  if ( v12 == v3 )
  {
    while ( v12 != *(_QWORD *)(*((_QWORD *)a2 + 9) + 88LL) )
    {
      v33 = *(_DWORD **)(v12 + 224);
      if ( (*v33 & 0x2000000) == 0 )
        goto LABEL_52;
      v34 = (unsigned int)v33[1];
      v35 = v33 + 2;
      v36 = 0LL;
      if ( (_DWORD)v34 )
      {
        v37 = v33 + 2;
        while ( *v37 != 7 )
        {
          v36 = (unsigned int)(v36 + 1);
          ++v37;
          if ( (unsigned int)v36 >= (unsigned int)v34 )
            goto LABEL_54;
        }
      }
      else
      {
LABEL_54:
        if ( (unsigned int)v36 >= (unsigned int)v34 )
        {
          v38 = 0LL;
          goto LABEL_49;
        }
      }
      v38 = (__int64 *)((char *)&v33[2 * v36] + ((v34 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_49:
      v39 = *v38;
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 112);
        if ( v40 )
        {
          if ( *(_QWORD *)(v40 + 64) )
          {
            v41 = 0LL;
            if ( (_DWORD)v34 )
            {
              while ( *v35 != 7 )
              {
                v41 = (unsigned int)(v41 + 1);
                ++v35;
                if ( (unsigned int)v41 >= (unsigned int)v34 )
                  goto LABEL_82;
              }
LABEL_58:
              v42 = (__int64 *)((char *)&v33[2 * v41] + ((v34 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
            }
            else
            {
LABEL_82:
              if ( (unsigned int)v41 < (unsigned int)v34 )
                goto LABEL_58;
              v42 = 0LL;
            }
            v43 = *v42;
            if ( v43 && (v44 = *(_QWORD *)(v43 + 112)) != 0 && *(_QWORD *)(v44 + 64) && (*(_BYTE *)(v43 + 200) & 4) != 0 )
            {
              *((_QWORD *)this + 13) = 0LL;
              *((_QWORD *)this + 20) = v12;
            }
            else
            {
              *((_QWORD *)this + 20) = 0LL;
            }
            break;
          }
        }
      }
LABEL_52:
      v12 = *(_QWORD *)(v12 + 88);
    }
  }
  if ( v3 == *((_QWORD *)this + 20) )
  {
    if ( v3 == *((_QWORD *)this + 19) )
    {
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
      v58 = 0;
    }
    else
    {
      v56 = (_QWORD *)*((_QWORD *)this + 17);
      if ( v56 == *((_QWORD **)this + 18) )
      {
        std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
          (char *)this + 128,
          v56,
          &v70);
      }
      else
      {
        *v56 = v3;
        *((_QWORD *)this + 17) += 8LL;
      }
      *((_QWORD *)this + 19) = v3;
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
      v58 = 1;
    }
    InputTraceLogging::DWM::MarkForFurtherEvaluation(InteractionInternal, v58);
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 19) == v3 )
    *((_QWORD *)this + 19) = v7;
LABEL_13:
  if ( *((_QWORD *)this + 13) )
  {
    if ( *((_QWORD *)this + 14) == v3 )
    {
      *((_QWORD *)this + 13) = 0LL;
      *((_BYTE *)this + 120) = 1;
      InputTraceLogging::GestureTargeting::ForcePalmRejection();
    }
    else
    {
      *a3 = 0;
    }
  }
  if ( *((_QWORD *)this + 14) == v3 )
    *((_QWORD *)this + 14) = 0LL;
  return (unsigned int)WorldTransform;
}
