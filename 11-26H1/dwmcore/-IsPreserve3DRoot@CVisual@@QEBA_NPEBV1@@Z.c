/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x180025A20
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  bool v4; // di
  unsigned __int64 v5; // rsi
  char v6; // al
  _DWORD *v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 27) != 1 )
    return 0;
  v4 = a2 && *((_DWORD *)a2 + 27) == 1;
  v5 = 0LL;
  if ( (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 232LL))(this) )
    goto LABEL_7;
  v7 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v7 & 0x1000000) != 0 )
  {
    v8 = (unsigned int)v7[1];
    v9 = v7 + 2;
    v10 = 0LL;
    if ( (_DWORD)v8 )
    {
      while ( *v9 != 8 )
      {
        v10 = (unsigned int)(v10 + 1);
        ++v9;
        if ( (unsigned int)v10 >= (unsigned int)v8 )
          goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      if ( (unsigned int)v10 >= (unsigned int)v8 )
      {
        v11 = 0LL;
LABEL_15:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 64LL))(*v11, 51LL) )
        {
LABEL_7:
          v6 = 1;
          goto LABEL_8;
        }
        goto LABEL_16;
      }
    }
    v11 = (_QWORD *)((char *)&v7[2 * v10] + ((v8 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_15;
  }
LABEL_16:
  v6 = 0;
LABEL_8:
  if ( !v4 )
  {
    v12 = (_QWORD *)((char *)this + 80);
    v13 = *((_QWORD *)this + 10);
    v14 = v13 & 3;
    if ( (v13 & 3) != 0 )
    {
      if ( (v13 & 3) == 1 )
      {
        v15 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_36;
      }
      if ( (v13 & 3) == 2 )
      {
        v15 = 0LL;
LABEL_22:
        v16 = 0LL;
        goto LABEL_23;
      }
      if ( (v13 & 3) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v15 = (unsigned __int64)v12;
    if ( !v14 )
    {
      v16 = 1LL;
LABEL_23:
      if ( (*v12 & 3) != 0 )
      {
        if ( (*v12 & 3LL) == 1 )
        {
          v5 = *v12 & 0xFFFFFFFFFFFFFFFCuLL;
          return (unsigned int)((__int64)(v15 + 8 * v16 - v5) >> 3) != 0;
        }
        if ( (*v12 & 3LL) == 2 )
          return (unsigned int)((__int64)(v15 + 8 * v16 - v5) >> 3) != 0;
        if ( (*v12 & 3LL) != 3 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v5 = (unsigned __int64)v12;
      return (unsigned int)((__int64)(v15 + 8 * v16 - v5) >> 3) != 0;
    }
    v17 = v14 - 1;
    if ( v17 )
    {
      if ( (unsigned __int64)(v17 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_22;
    }
LABEL_36:
    v16 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v12) - 16);
    goto LABEL_23;
  }
  return v6 != 0;
}
