/*
 * XREFs of ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18027F850
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     gsl::final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___::_final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___ @ 0x18027F6AC (gsl--final_action__CSceneMesh--OnSceneFrameTick_--_5_--_lambda_1___--_final_action__CSceneMesh--.c)
 *     _CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator() @ 0x18027F780 (_CSceneMesh--OnSceneFrameTick_--_8_--_lambda_2_--operator().c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x180281C8C (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneMesh::OnSceneFrameTick(CSceneMesh *this, struct ISpectreRenderer *a2)
{
  __int64 v4; // rdx
  int v5; // r9d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 (__fastcall *v25)(struct ISpectreRenderer *, __int64 *); // rbx
  int v26; // eax
  unsigned int v28; // [rsp+28h] [rbp-49h]
  _QWORD v29[2]; // [rsp+38h] [rbp-39h] BYREF
  char v30; // [rsp+48h] [rbp-29h]
  _BYTE v31[24]; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-9h] BYREF
  __int64 v33; // [rsp+70h] [rbp-1h]
  __int128 v34; // [rsp+78h] [rbp+7h]
  __int128 v35; // [rsp+88h] [rbp+17h]
  __int64 v36; // [rsp+98h] [rbp+27h]
  int v37; // [rsp+A0h] [rbp+2Fh]
  __int128 v38; // [rsp+A8h] [rbp+37h]
  int v39; // [rsp+B8h] [rbp+47h]
  __int64 v40; // [rsp+D8h] [rbp+67h] BYREF

  if ( !*((_BYTE *)this + 16) )
    return 0;
  v4 = *((_QWORD *)this - 6);
  v29[0] = (char *)this - 160;
  v29[1] = &v40;
  v40 = 0LL;
  v30 = 1;
  if ( !v4 )
  {
LABEL_59:
    gsl::final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___::_final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___(v29);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v40);
    return 0;
  }
  if ( *((_DWORD *)this - 20) == 6 )
  {
    v36 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v38 = 0LL;
    v37 = 0;
    v39 = 4;
    v7 = CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()((__int64)this, v4, 6);
    v8 = *((_QWORD *)this - 6);
    v32 = v7;
    v33 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(v8, v31) + 8);
    v9 = *((_QWORD *)this - 7);
    if ( v9 )
    {
      if ( *((_DWORD *)this - 21) == 57 )
      {
        v10 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(v9, v31) + 8);
        *(_QWORD *)&v38 = v10;
      }
      else
      {
        if ( *((_DWORD *)this - 21) != 42 )
        {
          v28 = 107;
          goto LABEL_5;
        }
        v10 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(v9, v31) + 8);
        *((_QWORD *)&v38 + 1) = v10;
      }
      v37 = CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()(
              v10,
              *((_QWORD *)this - 7),
              *((_DWORD *)this - 21));
    }
    v11 = *((_QWORD *)this - 5);
    if ( v11 )
    {
      if ( *((_DWORD *)this - 19) != 6 )
      {
        v28 = 116;
        goto LABEL_5;
      }
      v12 = CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()(v9, v11, 6);
      if ( v32 > v12 )
      {
        v28 = 119;
        goto LABEL_5;
      }
      v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)this - 5), v31) + 8);
      *(_QWORD *)&v34 = v9;
    }
    v13 = *((_QWORD *)this - 1);
    if ( v13 )
    {
      if ( *((_DWORD *)this - 15) != 2 )
      {
        v28 = 127;
        goto LABEL_5;
      }
      v14 = CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()(v9, v13, 2);
      if ( v32 > v14 )
      {
        v28 = 130;
        goto LABEL_5;
      }
      v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)this - 1), v31) + 8);
      *((_QWORD *)&v34 + 1) = v9;
    }
    v15 = *((_QWORD *)this - 2);
    if ( v15 )
    {
      if ( *((_DWORD *)this - 16) != 42 )
      {
        v28 = 138;
        goto LABEL_5;
      }
      v16 = CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()(v9, v15, 42);
      if ( v32 > v16 )
      {
        v28 = 141;
        goto LABEL_5;
      }
      v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)this - 2), v31) + 8);
      *(_QWORD *)&v35 = v9;
    }
    v17 = *((_QWORD *)this - 4);
    if ( v17 )
    {
      if ( *((_DWORD *)this - 18) != 16 )
      {
        v28 = 149;
        goto LABEL_5;
      }
      v18 = CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()(v9, v17, 16);
      if ( v32 > v18 )
      {
        v28 = 152;
        goto LABEL_5;
      }
      v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)this - 4), v31) + 8);
      *((_QWORD *)&v35 + 1) = v9;
    }
    v19 = *((_QWORD *)this - 3);
    if ( v19 )
    {
      if ( *((_DWORD *)this - 17) != 16 )
      {
        v28 = 160;
        goto LABEL_5;
      }
      v20 = CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator()(v9, v19, 16);
      if ( v32 > v20 )
      {
        v28 = 163;
        goto LABEL_5;
      }
      v36 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)this - 3), v31) + 8);
    }
    v21 = *((_DWORD *)this - 22);
    if ( !v21 )
    {
      v28 = 173;
      goto LABEL_5;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          if ( v24 == 2 )
            v39 = 5;
        }
        else
        {
          v39 = 3;
        }
      }
      else
      {
        v39 = 2;
      }
    }
    else
    {
      v39 = 1;
    }
    v25 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 72LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v40);
    v26 = v25(a2, &v40);
    v6 = v26;
    if ( v26 < 0 )
    {
      v28 = 200;
      goto LABEL_58;
    }
    v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40 + 24LL))(v40, &v32);
    v6 = v26;
    if ( v26 < 0 )
    {
      v28 = 201;
LABEL_58:
      v5 = v26;
      goto LABEL_6;
    }
    goto LABEL_59;
  }
  v28 = 84;
LABEL_5:
  v5 = -2147024809;
  v6 = -2147024809;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, v28, 0LL);
  gsl::final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___::_final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___(v29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v40);
  return v6;
}
