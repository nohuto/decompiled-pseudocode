/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18003FCD0
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180040BC0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18003EFA8 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$emplace_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAAEAVCShapeRenderTask@@XZ @ 0x1802AA6F8 (--$emplace_back@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CSpriteVectorShape *this, struct CShapeDrawingContext *a2)
{
  CGeometry *v3; // rcx
  int ShapeData; // eax
  unsigned int v6; // edi
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rcx
  void (__fastcall **v9)(_QWORD, __int64); // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int64 v17; // rcx
  float v18; // xmm6_4
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int128 v32; // xmm0
  void (__fastcall ***v33)(_QWORD, __int64); // [rsp+30h] [rbp-38h] BYREF
  char v34; // [rsp+38h] [rbp-30h]
  char v35; // [rsp+70h] [rbp+8h] BYREF
  int v36; // [rsp+80h] [rbp+18h] BYREF

  v3 = (CGeometry *)*((_QWORD *)this + 16);
  v33 = 0LL;
  v34 = 0;
  ShapeData = CGeometry::GetShapeData(v3, 0LL, (struct CShapePtr *)&v33);
  v6 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x14Cu, 0LL);
    goto LABEL_25;
  }
  v7 = v33;
  if ( v33 )
  {
    if ( !((unsigned __int8 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v33)[2])(v33) )
    {
      v8 = *((_QWORD *)this + 13);
      v35 = 0;
      if ( v8
        && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 320LL))(v8, 0LL, &v35)
        && !v35 )
      {
        if ( v33 )
        {
          v9 = *v33;
          v36 = 0;
          if ( ((unsigned __int8 (__fastcall *)(_QWORD, int *))v9[8])(v33, &v36) )
          {
            if ( v36 == 1
              && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 64LL))(
                    *((_QWORD *)this + 13),
                    102LL) )
            {
              std::vector<CShapeRenderTask>::emplace_back<>((char *)a2 + 496);
              v10 = *((_QWORD *)a2 + 63);
              v11 = *((_QWORD *)this + 13);
              *(_DWORD *)(v10 - 56) = 4;
              v12 = *(_OWORD *)((char *)this + 152);
              *(_QWORD *)(v10 - 32) = v11;
              *(_OWORD *)(v10 - 48) = v12;
LABEL_16:
              v6 = 0;
              goto LABEL_17;
            }
          }
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 64LL))(
               *((_QWORD *)this + 13),
               19LL) )
        {
          std::vector<CShapeRenderTask>::emplace_back<>((char *)a2 + 496);
          v21 = *((_QWORD *)this + 13);
          v13 = *((_QWORD *)a2 + 63);
          v22 = *((_QWORD *)this + 16);
          *(_DWORD *)(v13 - 56) = 2;
          *(_QWORD *)(v13 - 48) = v22;
          v16 = *(_OWORD *)(v21 + 104);
          goto LABEL_15;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 64LL))(
               *((_QWORD *)this + 13),
               59LL) )
        {
          std::vector<CShapeRenderTask>::emplace_back<>((char *)a2 + 496);
          v13 = *((_QWORD *)a2 + 63);
          v14 = *((_QWORD *)this + 16);
          v15 = *((_QWORD *)this + 13);
          *(_DWORD *)(v13 - 56) = 3;
          *(_QWORD *)(v13 - 48) = v14;
          v16 = *(_OWORD *)((char *)this + 152);
          *(_QWORD *)(v13 - 24) = v15;
LABEL_15:
          *(_OWORD *)(v13 - 40) = v16;
          goto LABEL_16;
        }
      }
LABEL_17:
      v17 = *((_QWORD *)this + 15);
      if ( v17
        && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v17 + 320LL))(v17, 0LL, &v35)
        && !v35
        && *((_QWORD *)this + 17) )
      {
        v18 = fmaxf(0.0, *((float *)this + 54));
        if ( *((_BYTE *)this + 220) )
          v18 = fminf(*((float *)a2 + 122), *((float *)a2 + 123)) * v18;
        v19 = CSpriteVectorShape::EnsureStrokeStyleForRender(this);
        v6 = v19;
        if ( v19 >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 64LL))(
                 *((_QWORD *)this + 15),
                 19LL) )
          {
            std::vector<CShapeRenderTask>::emplace_back<>((char *)a2 + 496);
            v23 = *((_QWORD *)this + 15);
            v6 = 0;
            v24 = *((_QWORD *)a2 + 63);
            v25 = *((_QWORD *)this + 16);
            v26 = *((_QWORD *)this + 18);
            *(_DWORD *)(v24 - 56) = 5;
            *(_QWORD *)(v24 - 48) = v25;
            v27 = *(_OWORD *)(v23 + 104);
            *(_QWORD *)(v24 - 16) = v26;
            *(float *)(v24 - 24) = v18;
            *(_OWORD *)(v24 - 40) = v27;
          }
          else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 64LL))(
                      *((_QWORD *)this + 15),
                      59LL) )
          {
            std::vector<CShapeRenderTask>::emplace_back<>((char *)a2 + 496);
            v28 = *((_QWORD *)a2 + 63);
            v6 = 0;
            v29 = *((_QWORD *)this + 16);
            v30 = *((_QWORD *)this + 15);
            v31 = *((_QWORD *)this + 18);
            *(_DWORD *)(v28 - 56) = 6;
            *(_QWORD *)(v28 - 48) = v29;
            v32 = *(_OWORD *)((char *)this + 152);
            *(_QWORD *)(v28 - 24) = v30;
            *(float *)(v28 - 16) = v18;
            *(_OWORD *)(v28 - 40) = v32;
            *(_QWORD *)(v28 - 8) = v31;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x178u, 0LL);
        }
      }
    }
LABEL_25:
    v7 = v33;
  }
  if ( v34 && v7 )
    (**v7)(v7, 1LL);
  return v6;
}
