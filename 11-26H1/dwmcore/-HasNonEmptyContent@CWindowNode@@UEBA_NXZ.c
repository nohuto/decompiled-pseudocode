/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x1800E03D0
 * Callers:
 *     ?HasVisibleCursor@CWindowNode@@UEBA_NXZ @ 0x1801E7E10 (-HasVisibleCursor@CWindowNode@@UEBA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1800E08D0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  char *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v14; // rcx
  __int64 v15; // rax
  _QWORD *ProjectedShadowReceivers; // rax
  __int64 v17; // rax
  char *v18; // rdi
  __int64 v19; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 101);
  if ( !v1 || !*(_BYTE *)(v1 + 160) )
  {
    v3 = 0LL;
    v4 = 1LL;
    if ( *((_BYTE *)this + 745) )
      goto LABEL_35;
    v5 = *((_QWORD *)this + 103);
    v6 = v5 & 3;
    v7 = *((_DWORD *)this + 206) & 3;
    if ( (v5 & 3) != 0 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v10 = (char *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_22;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v10 = 0LL;
LABEL_8:
        v11 = 0LL;
        goto LABEL_23;
      }
      if ( v9 != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v10 = (char *)this + 824;
    if ( !v6 )
    {
      v11 = 1LL;
LABEL_23:
      if ( (*((_QWORD *)this + 103) & 3) != 0 )
      {
        if ( (*((_QWORD *)this + 103) & 3LL) == 1 )
        {
          v14 = (char *)(*((_QWORD *)this + 103) & 0xFFFFFFFFFFFFFFFCuLL);
          goto LABEL_13;
        }
        if ( (*((_QWORD *)this + 103) & 3LL) == 2 )
        {
          v14 = 0LL;
          goto LABEL_13;
        }
        if ( (*((_QWORD *)this + 103) & 3LL) != 3 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v14 = (char *)this + 824;
LABEL_13:
      if ( &v10[8 * v11 - (_QWORD)v14] )
        return 1;
LABEL_35:
      v17 = *((_QWORD *)this + 104) & 3LL;
      if ( v17 )
      {
        if ( (*((_DWORD *)this + 208) & 3) == 1LL )
        {
          v18 = (char *)(*((_QWORD *)this + 104) & 0xFFFFFFFFFFFFFFFCuLL);
          goto LABEL_41;
        }
        if ( (*((_DWORD *)this + 208) & 3) == 2LL )
        {
          v18 = 0LL;
LABEL_39:
          v4 = 0LL;
          goto LABEL_42;
        }
        if ( (*((_DWORD *)this + 208) & 3) != 3LL )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v18 = (char *)this + 832;
      if ( !v17 )
      {
LABEL_42:
        if ( (*((_QWORD *)this + 104) & 3) != 0 )
        {
          if ( (*((_QWORD *)this + 104) & 3LL) == 1 )
          {
            v3 = (char *)(*((_QWORD *)this + 104) & 0xFFFFFFFFFFFFFFFCuLL);
            goto LABEL_48;
          }
          if ( (*((_QWORD *)this + 104) & 3LL) == 2 )
            goto LABEL_48;
          if ( (*((_QWORD *)this + 104) & 3LL) != 3 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
        v3 = (char *)this + 832;
LABEL_48:
        if ( &v18[8 * v4 - (_QWORD)v3] )
          return 1;
        goto LABEL_9;
      }
      v19 = v17 - 1;
      if ( v19 )
      {
        if ( (unsigned __int64)(v19 - 1) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        goto LABEL_39;
      }
LABEL_41:
      v4 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first((_QWORD *)this + 104) - 16);
      goto LABEL_42;
    }
    v15 = v6 - 1;
    if ( v15 )
    {
      if ( (unsigned __int64)(v15 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_8;
    }
LABEL_22:
    v11 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103) - 16);
    goto LABEL_23;
  }
LABEL_9:
  v12 = *((_QWORD *)this + 31);
  if ( !v12 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 224LL))(v12) )
  {
    if ( (**((_DWORD **)this + 28) & 0x80000) == 0 )
      return 0;
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(this);
    if ( *ProjectedShadowReceivers == ProjectedShadowReceivers[1] )
      return 0;
  }
  return 1;
}
