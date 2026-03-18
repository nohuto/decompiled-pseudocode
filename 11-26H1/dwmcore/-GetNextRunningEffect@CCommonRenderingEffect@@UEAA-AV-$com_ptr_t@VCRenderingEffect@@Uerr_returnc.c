/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18007BC70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18007D050 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007D068 (--0SamplerMode@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x18017FE90 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCommonRenderingEffect::GetNextRunningEffect(_BYTE *a1, _QWORD *a2, _BYTE *a3, _BYTE *a4)
{
  _BYTE *v4; // rbx
  unsigned int (__fastcall *v8)(_BYTE *); // rsi
  int v9; // edi
  _QWORD *v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // r10
  _BYTE *v13; // r8
  _BYTE *v14; // rax
  int v15; // eax
  int v16; // ecx
  bool v17; // sf
  __int64 v19; // r9
  _BYTE *v20; // r8
  _BYTE *v21; // rdx
  _BYTE *v22; // r12
  _DWORD *Value; // rsi
  int v24; // ecx
  HANDLE ProcessHeap; // rax
  __int16 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rsi
  _QWORD *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rbx
  char v39; // al
  bool v40; // bl
  bool v41; // al
  __int64 v42; // rcx
  CThreadContext *v43; // rax
  CThreadContext *v44; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v46; // [rsp+70h] [rbp+8h]
  char v47; // [rsp+80h] [rbp+18h]
  __int16 v48; // [rsp+88h] [rbp+20h]

  *a4 = 0;
  v4 = a3;
  v8 = *(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 64LL);
  v9 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 64LL))(a3);
  if ( v9 != v8(a1) )
  {
LABEL_16:
    *a2 = v4;
    (**(void (__fastcall ***)(_BYTE *))v4)(v4);
    return a2;
  }
  if ( v4 == a1 )
    goto LABEL_14;
  v10 = 0LL;
  v46 = 0LL;
  v11 = 0;
  while ( v11 < 2 )
  {
    v12 = *(_QWORD *)&a1[24 * v11 + 24];
    v13 = &a1[24 * v11];
    if ( v12 )
    {
      v14 = &v4[24 * v11];
      if ( !*((_QWORD *)v14 + 3) )
      {
        *((_DWORD *)&v46 + v11) = -1;
        goto LABEL_8;
      }
      v19 = *((_QWORD *)v13 + 2);
      if ( v19 )
      {
        if ( v19 != *((_QWORD *)v14 + 2) || v13[32] != v14[32] )
          goto LABEL_16;
      }
      else if ( v12 != *((_QWORD *)v14 + 3) || v13[32] != v14[32] )
      {
        goto LABEL_16;
      }
      v20 = &v4[3 * v11];
      v21 = &a1[3 * v11];
      if ( v21[64] != v20[64] || v21[65] != v20[65] || v21[66] != v20[66] )
        goto LABEL_16;
      ++v11;
    }
    else if ( *(_QWORD *)&v4[24 * v11 + 24] )
    {
      *((_DWORD *)&v46 + v11++) = 1;
    }
    else
    {
LABEL_8:
      ++v11;
    }
  }
  if ( a1[70] )
  {
    v15 = v46;
    v16 = HIDWORD(v46);
    v17 = (int)v46 < 0;
    if ( (int)v46 <= 0 )
    {
      if ( SHIDWORD(v46) <= 0 )
      {
LABEL_14:
        *a4 = 1;
        *a2 = a1;
        (**(void (__fastcall ***)(_BYTE *))a1)(a1);
        return a2;
      }
      v17 = (int)v46 < 0;
    }
    if ( !v17 && v46 >= 0 )
    {
      *a4 = 1;
      goto LABEL_16;
    }
    if ( CCommonRegistryData::EnableCommonSuperSets )
    {
      v22 = v4;
      *a4 = 1;
      if ( v15 < 0 )
        v22 = a1;
      if ( v16 < 0 )
        v4 = a1;
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v43 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v43 || (v44 = CThreadContext::CThreadContext(v43), (Value = v44) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v44);
      }
      v24 = Value[69];
      if ( v24 )
      {
        v10 = (_QWORD *)*((_QWORD *)Value + 35);
        *((_QWORD *)Value + 35) = *v10;
        Value[69] = v24 - 1;
      }
      if ( !v10 )
      {
        ProcessHeap = GetProcessHeap();
        v10 = HeapAlloc(ProcessHeap, 0, 0x48uLL);
        if ( !v10 )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      v47 = v4[69];
      v26 = *(_WORD *)(v4 + 67);
      v27 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
      v28 = *(_QWORD *)v22;
      v29 = (_QWORD *)v27;
      v48 = *((_WORD *)v22 + 32);
      LOBYTE(v46) = v22[66];
      v30 = (_QWORD *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD))(v28 + 16))(v22, 0LL);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v10);
      *v10 = &CCommonRenderingEffect::`vftable';
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v10 + 2));
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v10 + 5));
      SamplerMode::SamplerMode((SamplerMode *)(v10 + 8));
      SamplerMode::SamplerMode((SamplerMode *)((char *)v10 + 67));
      v31 = *v30;
      v32 = v10[2];
      v10[2] = *v30;
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v33 = v30[1];
      v34 = v10[3];
      v10[3] = v33;
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      *((_BYTE *)v10 + 32) = *((_BYTE *)v30 + 16);
      v35 = *v29;
      v36 = v10[5];
      v10[5] = *v29;
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      v37 = v29[1];
      v38 = v10[6];
      v10[6] = v37;
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      *((_BYTE *)v10 + 56) = *((_BYTE *)v29 + 16);
      *((_WORD *)v10 + 32) = v48;
      v39 = v46;
      *(_WORD *)((char *)v10 + 67) = v26;
      *((_BYTE *)v10 + 66) = v39;
      *((_BYTE *)v10 + 69) = v47;
      v40 = 1;
      if ( v30[1] )
      {
        if ( !CCommonRegistryData::EnableCommonSuperSets
          || !*v30
          || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v30 + 40LL))(*v30)
          || (v42 = v30[1]) == 0
          || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 72LL))(v42, 0LL) )
        {
          v40 = 0;
        }
      }
      *((_BYTE *)v10 + 70) = v40;
      v41 = !v29[1]
         || CCommonRegistryData::EnableCommonSuperSets
         && *v29
         && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 40LL))(*v29);
      *((_BYTE *)v10 + 70) = v40 && v41;
      *a2 = v10;
      (*(void (__fastcall **)(_QWORD *))*v10)(v10);
      return a2;
    }
    else
    {
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        a2,
        v4);
      return a2;
    }
  }
  else
  {
    if ( v46 )
      goto LABEL_16;
    *a4 = 1;
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      a1);
    return a2;
  }
}
