/*
 * XREFs of ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800720B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x180072F90 (-ComputeOcclusion@CMegaRectCollection@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1800CEE30 (-GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x18011C0B0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1801D71F4 (-ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18025F064 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  _OWORD *v7; // r15
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rbx
  _DWORD *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r15d
  struct CRenderingEffect *v16; // rbx
  __int64 *v17; // r12
  __int64 *v18; // rax
  __int64 v19; // r12
  __int64 v20; // r14
  void (__fastcall *v21)(void ***, __int64); // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rbx
  void *v29; // rcx
  void *v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r14
  unsigned int v33; // eax
  unsigned int v34; // edx
  signed __int32 v35; // eax
  unsigned int v36; // r12d
  unsigned __int64 v37; // rbx
  int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 result; // rax
  int v46; // ebx
  unsigned int v47; // eax
  void *v48; // r13
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // ebx
  unsigned int v52; // eax
  HANDLE ProcessHeap; // rax
  __int64 v54; // r14
  void (__fastcall *v55)(void ***, __int64); // rax
  __int64 v56; // rdx
  __int64 v57; // r14
  __int64 v58; // rcx
  struct CRenderingEffect *RenderingEffect; // r14
  struct CRenderingEffect *v60; // r15
  int v61; // eax
  int v62; // r15d
  __int64 v63; // r15
  int v64; // r9d
  int v65; // eax
  __int64 v66; // r8
  __int64 v67; // r13
  char *v68; // r12
  int v69; // eax
  __int64 v70; // rax
  unsigned int i; // r14d
  int v72; // eax
  bool v73; // al
  __int64 v74; // rax
  int v75; // ecx
  int v76; // ecx
  int v77; // eax
  int v78; // ecx
  _OWORD *v79; // r12
  int v80; // [rsp+28h] [rbp-E0h]
  void **v81; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v82; // [rsp+50h] [rbp-B8h]
  __int64 v83; // [rsp+58h] [rbp-B0h]
  __int64 v84; // [rsp+60h] [rbp-A8h]
  __int64 v85; // [rsp+68h] [rbp-A0h]
  __int64 v86; // [rsp+70h] [rbp-98h]
  __int64 v87; // [rsp+78h] [rbp-90h]
  int v88; // [rsp+80h] [rbp-88h]
  int v89; // [rsp+84h] [rbp-84h] BYREF
  unsigned __int64 v90; // [rsp+88h] [rbp-80h]
  __int16 v91; // [rsp+90h] [rbp-78h]
  char v92; // [rsp+92h] [rbp-76h]
  __int64 v93; // [rsp+94h] [rbp-74h]
  __int128 v94; // [rsp+9Ch] [rbp-6Ch]
  char *v95; // [rsp+B0h] [rbp-58h]
  char *v96; // [rsp+B8h] [rbp-50h]
  char *v97; // [rsp+C0h] [rbp-48h]
  int v98; // [rsp+C8h] [rbp-40h]
  __int64 v99; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v100; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v101; // [rsp+E8h] [rbp-20h]
  void *retaddr; // [rsp+140h] [rbp+38h]
  void *v103; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 v104; // [rsp+150h] [rbp+48h] BYREF
  unsigned __int64 v105; // [rsp+158h] [rbp+50h]
  __int64 v106; // [rsp+160h] [rbp+58h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v1 + 168) )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *(_QWORD *)(v1 + 168) = this;
  v82 = (_QWORD *)*((_QWORD *)this + 2);
  v81 = &CD3DBatchExecutionContext::`vftable';
  v3 = v82[69];
  v4 = *((_QWORD *)this + 15);
  ++dword_1803DE338;
  v84 = v4;
  v88 = 24;
  *(_WORD *)((char *)&v103 + 1) = 0;
  BYTE3(v103) = 0;
  LOBYTE(v103) = 0;
  HIDWORD(v103) = -1;
  v90 = (unsigned __int64)v103;
  v95 = (char *)this + 48;
  v96 = (char *)this + 80;
  v97 = (char *)this + 104;
  v83 = v3;
  LODWORD(v85) = 0;
  v86 = 0LL;
  v87 = 0LL;
  v89 = 0x80000000;
  v91 = 0;
  v92 = 2;
  v93 = 0LL;
  v94 = 0uLL;
  v98 = 0;
  if ( CCommonRegistryData::EnableMegaRects )
  {
    CMegaRectCollection::ComputeOcclusion((CDrawListEntryBatch *)((char *)this + 128));
    v3 = v83;
  }
  v5 = *((_QWORD *)this + 3);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 344LL))(v83, v82[268]);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v83 + 288LL))(v83, v82[269], 0LL);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v83 + 152LL))(
    v83,
    *(_QWORD *)(v84 + 72),
    57LL,
    0LL);
  v6 = v84;
  v7 = (_OWORD *)(v5 + 16);
  if ( !v5 )
    v7 = 0LL;
  if ( v7 )
  {
    v79 = (_OWORD *)(v84 + 176);
    if ( memcmp_0(v7, (const void *)(v84 + 176), 0x50uLL) )
    {
      *(_BYTE *)(v84 + 120) = 1;
      *v79 = *v7;
      *(_OWORD *)(v6 + 192) = v7[1];
      *(_OWORD *)(v6 + 208) = v7[2];
      *(_OWORD *)(v6 + 224) = v7[3];
      *(_OWORD *)(v6 + 240) = v7[4];
    }
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  *(_BYTE *)(v6 + 256) = v8;
  v9 = *(_QWORD *)(v6 + 128) - *((_QWORD *)this + 8);
  if ( !v9 )
    v9 = *(_QWORD *)(v6 + 136) - *((_QWORD *)this + 9);
  if ( v9 )
  {
    *(_BYTE *)(v6 + 120) = 1;
    *(_OWORD *)(v6 + 128) = *((_OWORD *)this + 4);
  }
  v106 = *(_QWORD *)(v6 + 112);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v83 + 56LL))(v83, 0LL, 1LL, &v106);
  if ( *((_DWORD *)v97 + 2) == 1 )
  {
    v10 = v84;
    v11 = (_DWORD *)(v84 + 288);
    v12 = *((_DWORD *)v96 + 4);
    if ( v12 != *(_DWORD *)(v84 + 288) )
    {
      *v11 = v12;
      *(_BYTE *)(v10 + 280) = 1;
    }
    if ( *(_BYTE *)(v10 + 280) )
    {
      v80 = (int)v11;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v82[69] + 384LL))(
        v82[69],
        *(_QWORD *)(v10 + 272),
        0LL,
        0LL);
      *(_BYTE *)(v10 + 280) = 0;
    }
    v103 = *(void **)(v10 + 272);
    (*(void (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)v83 + 128LL))(v83, 2LL, 1LL, &v103);
  }
  v13 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v13 + 160) )
  {
    v14 = *(_QWORD *)(v13 + 24);
    v15 = 0;
    v16 = 0LL;
    v17 = (__int64 *)(v14 + 8LL * *((unsigned int *)this + 10));
    v18 = (__int64 *)(v14 + 8LL * *((unsigned int *)this + 11));
    v101 = v18;
    while ( 1 )
    {
      v103 = v17;
      if ( v17 == v18 )
      {
LABEL_25:
        if ( v16 )
          (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xF4u, 0LL);
        }
        else
        {
LABEL_28:
          v23 = v84;
          LODWORD(v85) = v85 | 0x1000;
          if ( *(_QWORD *)(v84 + 40) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v84 + 16) + 552LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v84 + 16) + 552LL),
              *(_QWORD *)(v84 + 24),
              0LL);
            *(_QWORD *)(v23 + 40) = 0LL;
            *(_DWORD *)(v23 + 48) = 0;
            if ( v92 )
            {
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v83 + 104LL))(
                v83,
                DWORD1(v94),
                (unsigned int)v93);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v23 + 64) + 552LL) + 120LL))(
                *(_QWORD *)(*(_QWORD *)(v23 + 64) + 552LL),
                *(_QWORD *)(v23 + 72),
                0LL);
              *(_QWORD *)(v23 + 88) = 0LL;
              *(_DWORD *)(v23 + 96) = 0;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v83 + 96LL))(
                v83,
                DWORD2(v94),
                HIDWORD(v93),
                0LL);
            }
            ++v98;
            *(_QWORD *)((char *)&v94 + 4) = 0LL;
            HIDWORD(v94) = 0;
          }
        }
        goto LABEL_32;
      }
      v19 = *v17;
      if ( *(_DWORD *)v19 == 1 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
        v21 = (void (__fastcall *)(void ***, __int64))v81[1];
        if ( *(_BYTE *)(v19 + 92) )
        {
          v21(&v81, 24LL);
          LOBYTE(v22) = 2;
          ((void (__fastcall *)(void ***, __int64))v81[3])(&v81, v22);
        }
        else
        {
          v21(&v81, *(unsigned int *)(v19 + 84));
          ((void (__fastcall *)(void ***, _QWORD))v81[3])(&v81, *(unsigned __int8 *)(v20 + 80));
        }
      }
      else
      {
        if ( *(_DWORD *)v19 == 2 )
        {
          ((void (__fastcall *)(void ***, _QWORD))*v81)(&v81, *(_QWORD *)(v19 + 8));
          v68 = (char *)v103;
          goto LABEL_124;
        }
        if ( *(_DWORD *)v19 == 3 )
        {
          if ( *(_DWORD *)(v19 + 16) != 24 )
            ((void (__fastcall *)(void ***))v81[1])(&v81);
          if ( *(_BYTE *)(v19 + 20) != 2 )
            ((void (__fastcall *)(void ***))v81[3])(&v81);
          ((void (__fastcall *)(void ***, __int64))v81[2])(&v81, v19);
        }
        else
        {
          if ( *(_DWORD *)v19 == 4 )
          {
            if ( **(_DWORD **)(v19 + 96) )
            {
              v54 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
              v55 = (void (__fastcall *)(void ***, __int64))v81[1];
              if ( *(_BYTE *)(v19 + 92) )
              {
                v55(&v81, 24LL);
                LOBYTE(v56) = 2;
              }
              else
              {
                v55(&v81, *(unsigned int *)(v19 + 84));
                v56 = *(unsigned __int8 *)(v54 + 80);
              }
              ((void (__fastcall *)(void ***, __int64))v81[3])(&v81, v56);
              v73 = 1;
            }
            else
            {
              v73 = 0;
            }
          }
          else
          {
            if ( *(_DWORD *)v19 != 5 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
            v73 = CRenderingBatchCommand::ApplyRenderState(
                    (CRenderingBatchCommand *)v19,
                    (struct IDrawListStateSink *)&v81);
          }
          if ( !v73 )
          {
            v68 = (char *)v103;
            goto LABEL_124;
          }
        }
      }
      v57 = v84;
      LODWORD(v85) = v85 | 0x80000000;
      if ( *(_QWORD *)(v84 + 40) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v84 + 16) + 552LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v84 + 16) + 552LL),
          *(_QWORD *)(v84 + 24),
          0LL);
        *(_QWORD *)(v57 + 40) = 0LL;
        *(_DWORD *)(v57 + 48) = 0;
        if ( v92 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v83 + 104LL))(
            v83,
            DWORD1(v94),
            (unsigned int)v93);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v57 + 64) + 552LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v57 + 64) + 552LL),
            *(_QWORD *)(v57 + 72),
            0LL);
          *(_QWORD *)(v57 + 88) = 0LL;
          *(_DWORD *)(v57 + 96) = 0;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v83 + 96LL))(
            v83,
            DWORD2(v94),
            HIDWORD(v93),
            0LL);
        }
        ++v98;
        *(_QWORD *)((char *)&v94 + 4) = 0LL;
        HIDWORD(v94) = 0;
      }
      switch ( *(_DWORD *)v19 )
      {
        case 1:
          v58 = 80LL;
          if ( !*(_BYTE *)(v19 + 92) )
            v58 = 24LL;
          RenderingEffect = *(struct CRenderingEffect **)(v58 + *(_QWORD *)(v19 + 8));
          break;
        case 2:
          v60 = v16;
          RenderingEffect = 0LL;
          v16 = 0LL;
          goto LABEL_103;
        case 3:
          RenderingEffect = *(struct CRenderingEffect **)(v19 + 8);
          break;
        case 4:
          v74 = *(_QWORD *)(v19 + 8);
          if ( *(_BYTE *)(v19 + 92) )
            RenderingEffect = *(struct CRenderingEffect **)(v74 + 80);
          else
            RenderingEffect = *(struct CRenderingEffect **)(v74 + 24);
          break;
        case 5:
          RenderingEffect = CRenderingBatchCommand::GetRenderingEffect((CRenderingBatchCommand *)v19);
          break;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v60 = v16;
      v16 = RenderingEffect;
      if ( RenderingEffect )
        (**(void (__fastcall ***)(struct CRenderingEffect *))RenderingEffect)(RenderingEffect);
LABEL_103:
      if ( v60 )
        (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v60 + 8LL))(v60);
      if ( v86 && !(_BYTE)v91 )
      {
        v99 = *(_QWORD *)(v84 + 304);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v83 + 56LL))(v83, 2LL, 1LL, &v99);
        v100 = *(_QWORD *)(v84 + 592);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v83 + 128LL))(v83, 1LL, 1LL, &v100);
        LOBYTE(v91) = 1;
      }
      v61 = (*(__int64 (__fastcall **)(struct CRenderingEffect *, void ***, int *))(*(_QWORD *)RenderingEffect + 32LL))(
              RenderingEffect,
              &v81,
              &v89);
      v62 = v61;
      if ( v61 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x188u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x12Fu, 0LL);
        v15 = 0;
      }
      else
      {
        v63 = v84;
        if ( *(_BYTE *)(v84 + 120) )
        {
          v80 = v84 + 128;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v82[69] + 384LL))(
            v82[69],
            *(_QWORD *)(v84 + 112),
            0LL,
            0LL);
          *(_BYTE *)(v63 + 120) = 0;
        }
        if ( v89 >= 0 )
        {
          v64 = v89 & 4;
          v104 = v64 != 0;
          v105 = v104;
          BYTE1(v104) = (v89 & 8) != 0;
          BYTE2(v104) = (v89 & 2) != 0;
          v65 = 2;
          if ( (v89 & 1) != 0 )
            v65 = 4;
          HIDWORD(v104) = v65;
          HIDWORD(v105) = v65;
          if ( v65 != HIDWORD(v90) || (v64 != 0) != (_BYTE)v90 )
          {
            if ( HIDWORD(v104) == 2 )
            {
              v66 = v64 != 0 ? 2 : 0;
            }
            else if ( HIDWORD(v104) == 4 )
            {
              v66 = 3LL;
              if ( (v89 & 4) == 0 )
                v66 = 1LL;
            }
            else
            {
              v66 = 4LL;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 136LL))(v83, v82[v66 + 192]);
            v90 = v105;
            HIBYTE(v91) = 1;
          }
        }
        v15 = 0;
        if ( RenderingEffect )
        {
          v67 = v87;
          if ( v87 )
          {
            for ( i = 0; ; ++i )
            {
              v68 = (char *)v103;
              if ( i >= *(_DWORD *)(v67 + 24) )
                break;
              v72 = (*(__int64 (__fastcall **)(_QWORD, void ***, _QWORD))(**(_QWORD **)(v67 + 8) + 40LL))(
                      *(_QWORD *)(v67 + 8),
                      &v81,
                      *((_QWORD *)v103 + i + 1));
              v15 = v72;
              if ( v72 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x53u, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1B2u, 0LL);
                goto LABEL_120;
              }
            }
          }
          else
          {
            v68 = (char *)v103;
            v69 = (*(__int64 (__fastcall **)(struct CRenderingEffect *, void ***, _QWORD))(*(_QWORD *)RenderingEffect
                                                                                         + 40LL))(
                    RenderingEffect,
                    &v81,
                    *(_QWORD *)v103);
            v15 = v69;
            if ( v69 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x1B7u, 0LL);
          }
          goto LABEL_120;
        }
      }
      v68 = (char *)v103;
LABEL_120:
      if ( v87 )
      {
        v70 = *(unsigned int *)(v87 + 24);
        ++dword_1803DE340;
        dword_1803DE344 += v70;
        v87 = 0LL;
        v68 += 8 * v70;
      }
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x160u, 0LL);
        goto LABEL_25;
      }
      LODWORD(v85) = 0;
LABEL_124:
      v18 = v101;
      v17 = (__int64 *)(v68 + 8);
    }
  }
  v77 = CDrawListEntryBatch::RenderLoop<0>(this, &v81);
  v15 = v77;
  if ( v77 >= 0 )
    goto LABEL_28;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0xF8u, 0LL);
LABEL_32:
  if ( v98 )
    dword_1803DE450 += v98;
  if ( *(_QWORD *)(v84 + 40) )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v84 + 16));
  if ( *(_QWORD *)(v84 + 88) )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v84 + 64));
  v24 = *((_QWORD *)this + 3);
  if ( v24 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  }
  v25 = *((_DWORD *)this + 11);
  v26 = *((_DWORD *)this + 10);
  if ( v26 != v25 )
    dword_1803DE33C += v25 - v26;
  dword_1803DE45C += *((_DWORD *)this + 40);
  while ( 1 )
  {
    v27 = *((_QWORD *)this + 20);
    if ( !v27 )
      break;
    v50 = v27 - 1;
    *((_QWORD *)this + 20) = v50;
    if ( !v50 )
      *((_QWORD *)this + 19) = 0LL;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v28 = *((_QWORD *)this + 18);
    while ( v28 > 0 )
    {
      --v28;
      v29 = *(void **)(*((_QWORD *)this + 17) + 8 * v28);
      if ( v29 )
        operator delete(v29, 0x10uLL);
    }
    v30 = (void *)*((_QWORD *)this + 17);
    v31 = 8LL * *((_QWORD *)this + 18);
    v104 = v31;
    v103 = v30;
    if ( v31 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v103, &v104);
      v30 = v103;
      v31 = v104;
    }
    operator delete(v30, v31);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v32 = *((_QWORD *)this + 2);
  if ( *(CDrawListEntryBatch **)(v32 + 168) != this )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *(_QWORD *)(v32 + 168) = 0LL;
  v33 = *(_DWORD *)(v32 + 128);
  v103 = this;
  v34 = v33 + 1;
  if ( v33 + 1 < v33 )
  {
    v51 = -2147024362;
    v52 = 183;
    goto LABEL_85;
  }
  if ( v34 <= *(_DWORD *)(v32 + 124) )
  {
    *(_QWORD *)(*(_QWORD *)(v32 + 104) + 8LL * v33) = this;
    *(_DWORD *)(v32 + 128) = v34;
    goto LABEL_56;
  }
  v51 = DynArrayImpl<0>::AddMultipleAndSet(v32 + 104, 8, 1, &v103);
  if ( v51 < 0 )
  {
    v52 = 194;
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, v52, 0LL);
    ModuleFailFastForHRESULT(v51, retaddr);
  }
LABEL_56:
  v35 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 1u);
  if ( (v35 + 1 < 0) ^ __OFADD__(1, v35) | (v35 == -1) )
    wil::details::in1diag3::Log_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v80);
  v36 = *((_DWORD *)this + 10);
  LODWORD(v103) = *((_DWORD *)this + 11);
  if ( v36 < (unsigned int)v103 )
  {
    while ( 1 )
    {
      v37 = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 8LL * v36);
      v38 = *(_DWORD *)v37;
      if ( *(_DWORD *)v37 )
      {
        if ( v38 == 4 )
        {
          v48 = *(void **)(v37 + 96);
          if ( (void *)(v37 + 104) != v48 )
          {
            if ( v48 )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v48);
            }
            *(_QWORD *)(v37 + 96) = v37 + 104;
            *(_DWORD *)(v37 + 104) = 0;
          }
          v49 = *(_QWORD *)(v37 + 8);
          if ( v49 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
        }
        else
        {
          v75 = v38 - 1;
          if ( v75 )
          {
            v76 = v75 - 1;
            if ( v76 )
            {
              v78 = v76 - 1;
              if ( v78 )
              {
                if ( v78 != 2 )
                  ModuleFailFastForHRESULT(-2147418113, retaddr);
              }
            }
          }
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)(v37 + 8));
        }
      }
      *(_DWORD *)v37 = 0;
      v39 = *(_DWORD *)(v32 + 88);
      v104 = v37;
      v40 = v39 + 1;
      if ( v39 + 1 < v39 )
        break;
      if ( v40 > *(_DWORD *)(v32 + 84) )
      {
        v46 = DynArrayImpl<0>::AddMultipleAndSet(v32 + 64, 8, 1, &v104);
        if ( v46 < 0 )
        {
          v47 = 194;
LABEL_74:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v47, 0LL);
          ModuleFailFastForHRESULT(v46, retaddr);
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v32 + 64) + 8LL * v39) = v37;
        *(_DWORD *)(v32 + 88) = v40;
      }
      if ( ++v36 >= (unsigned int)v103 )
        goto LABEL_64;
    }
    v46 = -2147024362;
    v47 = 183;
    goto LABEL_74;
  }
LABEL_64:
  if ( (*(_DWORD *)(v32 + 176))-- == 1 )
  {
    v42 = *(_DWORD *)(v32 + 60);
    if ( v42 <= *(_DWORD *)(v32 + 48) - *(_DWORD *)(v32 + 56) )
      v42 = *(_DWORD *)(v32 + 48) - *(_DWORD *)(v32 + 56);
    *(_DWORD *)(v32 + 60) = v42;
    v43 = *(_DWORD *)(v32 + 100);
    if ( v43 <= *(_DWORD *)(v32 + 88) - *(_DWORD *)(v32 + 96) )
      v43 = *(_DWORD *)(v32 + 88) - *(_DWORD *)(v32 + 96);
    *(_DWORD *)(v32 + 100) = v43;
    v44 = *(_DWORD *)(v32 + 140);
    if ( v44 <= *(_DWORD *)(v32 + 128) - *(_DWORD *)(v32 + 136) )
      v44 = *(_DWORD *)(v32 + 128) - *(_DWORD *)(v32 + 136);
    *(_DWORD *)(v32 + 140) = v44;
    *(_DWORD *)(v32 + 48) = 0;
    *(_DWORD *)(v32 + 56) = 0;
  }
  result = (unsigned int)v15;
  *((_QWORD *)this + 5) = -1LL;
  return result;
}
