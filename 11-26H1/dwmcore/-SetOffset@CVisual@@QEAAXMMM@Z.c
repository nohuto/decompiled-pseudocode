/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800209C0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180237988 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetOffset(CVisual *this, double a2, double a3, float a4)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  _BYTE *v11; // r14
  CVisual *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // r8
  __int64 v21; // rcx
  _QWORD ***v22; // rbx
  _QWORD **v23; // rbx
  _QWORD *i; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  _BYTE *v27; // r8
  __int64 v28; // rcx
  _QWORD ***v29; // rax
  _QWORD **v30; // rax
  __int64 v31; // rax
  _QWORD *j; // rcx
  __int64 v33; // r10
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // r9d
  unsigned __int64 v38; // [rsp+40h] [rbp-78h] BYREF
  float v39; // [rsp+48h] [rbp-70h]
  _QWORD v40[2]; // [rsp+50h] [rbp-68h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  if ( *((float *)this + 28) == *(float *)&a2 && *((float *)this + 29) == *(float *)&a3 && *((float *)this + 30) == a4 )
    return;
  *((_DWORD *)this + 28) = LODWORD(a2);
  *((_DWORD *)this + 29) = LODWORD(a3);
  *((float *)this + 30) = a4;
  v5 = (_QWORD *)((char *)this + 32);
  if ( (*v5 & 3) != 0 )
  {
    if ( (*v5 & 3LL) == 1 )
    {
      v6 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_8;
    }
    if ( (*v5 & 3LL) == 2 )
    {
      v6 = 0LL;
      goto LABEL_8;
    }
    if ( (*v5 & 3LL) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v6 = v5;
LABEL_8:
  v7 = detail::pointer_buffer_impl<CResource *,0>::last(v5);
  v8 = (_QWORD *)((char *)this + 88);
  while ( v6 != (_QWORD *)v7 )
  {
    v8 = (_QWORD *)((char *)this + 88);
    if ( *v6 != *((_QWORD *)this + 11) )
      (*(void (__fastcall **)(_QWORD, _QWORD, CVisual *))(*(_QWORD *)*v6 + 80LL))(*v6, 0LL, this);
    ++v6;
  }
  v9 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL))(this);
  *((_BYTE *)this + 96) |= 0x15u;
  v10 = v9;
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 28);
    v8 = (_QWORD *)((char *)this + 88);
  }
  v11 = (_BYTE *)*v8;
  v12 = this;
  while ( (*((_BYTE *)v12 + 102) & 0x20) != 0 && v11 && (v11[96] & 0x91) != 0x91 )
  {
    v11[96] |= 0x91u;
    if ( (*((_QWORD *)v11 + 4) & 3) == 0 )
      goto LABEL_29;
    switch ( *((_QWORD *)v11 + 4) & 3LL )
    {
      case 1LL:
        v13 = (_QWORD *)(*((_QWORD *)v11 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
        break;
      case 2LL:
        v13 = 0LL;
        break;
      case 3LL:
LABEL_29:
        v13 = v11 + 32;
        break;
      default:
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v14 = detail::pointer_buffer_impl<CResource *,0>::last(v11 + 32);
    v15 = v11 + 88;
    while ( v13 != (_QWORD *)v14 )
    {
      v15 = v11 + 88;
      if ( *v13 != *((_QWORD *)v11 + 11) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)*v13 + 80LL))(*v13, 0LL, v11);
      ++v13;
    }
    v16 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 160LL))(v11);
    v17 = v11 + 88;
    if ( v16 )
    {
      v17 = v15;
      if ( v10 != v16 )
      {
        ++*(_DWORD *)(v16 + 24);
        v17 = v11 + 88;
        v10 = v16;
      }
    }
    v12 = (CVisual *)v11;
    v11 = (_BYTE *)*v17;
  }
  CTreeData::InvalidateWorldTransform((CVisual *)((char *)this + 320));
  v18 = *((_QWORD *)this + 28);
  if ( *(int *)v18 < 0 )
  {
    v19 = *(unsigned int *)(v18 + 4);
    v20 = (_BYTE *)(v18 + 8);
    v21 = 0LL;
    if ( (_DWORD)v19 )
    {
      while ( *v20 != 1 )
      {
        v21 = (unsigned int)(v21 + 1);
        ++v20;
        if ( (unsigned int)v21 >= (unsigned int)v19 )
          goto LABEL_53;
      }
LABEL_33:
      v22 = (_QWORD ***)(v18 + ((v19 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v21);
    }
    else
    {
LABEL_53:
      if ( (unsigned int)v21 < (unsigned int)v19 )
        goto LABEL_33;
      v22 = 0LL;
    }
    v23 = *v22;
    if ( v23 )
    {
      for ( i = *v23; i != v23; i = (_QWORD *)*i )
        CTreeData::InvalidateWorldTransform((CTreeData *)(i - 44));
    }
  }
  *((_BYTE *)this + 457) = 1;
  v25 = *((_QWORD *)this + 28);
  if ( *(int *)v25 < 0 )
  {
    v26 = *(unsigned int *)(v25 + 4);
    v27 = (_BYTE *)(v25 + 8);
    v28 = 0LL;
    if ( (_DWORD)v26 )
    {
      while ( *v27 != 1 )
      {
        v28 = (unsigned int)(v28 + 1);
        ++v27;
        if ( (unsigned int)v28 >= (unsigned int)v26 )
          goto LABEL_56;
      }
LABEL_39:
      v29 = (_QWORD ***)(v25 + ((v26 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v28);
    }
    else
    {
LABEL_56:
      if ( (unsigned int)v28 < (unsigned int)v26 )
        goto LABEL_39;
      v29 = 0LL;
    }
    v30 = *v29;
    if ( v30 )
    {
      for ( j = *v30; j != v30; j = (_QWORD *)*j )
        *((_BYTE *)j - 215) = 1;
    }
  }
  v31 = *((_QWORD *)this + 7);
  if ( v31 )
  {
    if ( *(_DWORD *)(v31 + 116) )
    {
      if ( *((_DWORD *)this + 18) )
      {
        if ( (*((_DWORD *)this + 19) & 0x10000000) != 0 )
        {
          v33 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                  *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                  9LL);
          if ( v33 )
          {
            v34 = *((_QWORD *)this + 7);
            if ( v34 )
              v35 = *(unsigned int *)(v34 + 116);
            else
              v35 = 0LL;
            v40[0] = v35;
            v40[1] = *((unsigned int *)this + 18);
            v39 = a4;
            v38 = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
            v36 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, unsigned __int64 *))CoreUICallSend)(
                    v33,
                    v40,
                    2LL,
                    9LL,
                    3,
                    &unk_1802F5B35,
                    28,
                    &v38);
            v37 = 0;
            if ( v36 != -2018375675 )
              v37 = v36;
            if ( v37 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x155u, 0LL);
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal(this, 28LL);
}
