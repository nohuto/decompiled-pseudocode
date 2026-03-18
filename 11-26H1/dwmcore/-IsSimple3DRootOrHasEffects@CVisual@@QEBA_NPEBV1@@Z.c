/*
 * XREFs of ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800CF4A0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::IsSimple3DRootOrHasEffects(CVisual *this, const struct CVisual *a2)
{
  __int64 v3; // rax
  __int64 v4; // r9
  _QWORD *v5; // rdx
  int v6; // ebp
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // r9
  _DWORD *v13; // r8
  __int64 v14; // rdi
  char v15; // si
  __int64 v16; // rax
  _BYTE *v17; // r9
  __int64 v18; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 || *((_DWORD *)a2 + 27) != 1 )
  {
    LOBYTE(v3) = 0;
    return v3;
  }
  v4 = *((_QWORD *)this + 10);
  v5 = 0LL;
  v6 = *((_DWORD *)this + 27);
  v7 = v4 & 3;
  if ( (v4 & 3) != 0 )
  {
    if ( (v4 & 3) == 1 )
    {
      v8 = (char *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_12;
    }
    if ( (v4 & 3) == 2 )
    {
      v8 = 0LL;
      goto LABEL_8;
    }
    if ( (v4 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v8 = (char *)this + 80;
  if ( (v4 & 3) != 0 )
  {
    if ( v7 != 1 )
    {
      if ( (unsigned __int64)(v7 - 2) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_8:
      v9 = 0LL;
      v10 = v7 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          v12 = 0LL;
          goto LABEL_14;
        }
        if ( v11 != 1 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        goto LABEL_24;
      }
LABEL_13:
      v12 = (char *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_14;
    }
LABEL_12:
    v9 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_13;
  }
  v9 = 1LL;
LABEL_24:
  v12 = (char *)this + 80;
LABEL_14:
  v13 = (_DWORD *)*((_QWORD *)this + 28);
  v14 = (__int64)&v8[8 * v9 - (_QWORD)v12] >> 3;
  if ( (*v13 & 0x1000000) == 0 )
  {
LABEL_15:
    v15 = 0;
    goto LABEL_16;
  }
  v16 = (unsigned int)v13[1];
  v17 = v13 + 2;
  v18 = 0LL;
  if ( (_DWORD)v16 )
  {
    while ( *v17 != 8 )
    {
      v18 = (unsigned int)(v18 + 1);
      ++v17;
      if ( (unsigned int)v18 >= (unsigned int)v16 )
        goto LABEL_38;
    }
    goto LABEL_34;
  }
LABEL_38:
  if ( (unsigned int)v18 < (unsigned int)v16 )
LABEL_34:
    v5 = (_QWORD *)((char *)&v13[2 * v18] + ((v16 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 64LL))(*v5, 51LL) )
    goto LABEL_15;
  v15 = 1;
LABEL_16:
  v3 = (*(__int64 (__fastcall **)(CVisual *, _QWORD *))(*(_QWORD *)this + 232LL))(this, v5);
  if ( v6 != 1 && (_DWORD)v14 || v15 || v3 )
    LOBYTE(v3) = 1;
  return v3;
}
