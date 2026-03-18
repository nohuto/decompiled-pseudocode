/*
 * XREFs of ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x180024F84 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1800260F4 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011165C (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x180111824 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18014C0CC (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?SetTransform@CVisual@@QEAAXPEAVCTransform3D@@@Z @ 0x1801B0288 (-SetTransform@CVisual@@QEAAXPEAVCTransform3D@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801B32D0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1801B7C58 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801D2AA4 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180237988 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

void __fastcall CVisual::OnOuterTransformChanged(CVisual *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _BYTE *v4; // r8
  __int64 v5; // rcx
  _QWORD ***v6; // rdi
  _QWORD **v7; // rdi
  _QWORD *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // r8
  __int64 v12; // rcx
  _QWORD ***v13; // rcx
  _QWORD **v14; // rcx
  _QWORD *j; // rax

  CTreeData::InvalidateWorldTransform((CVisual *)((char *)this + 320));
  v2 = *((_QWORD *)this + 28);
  if ( *(int *)v2 >= 0 )
    goto LABEL_8;
  v3 = *(unsigned int *)(v2 + 4);
  v4 = (_BYTE *)(v2 + 8);
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 1 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        goto LABEL_18;
    }
    goto LABEL_4;
  }
LABEL_18:
  if ( (unsigned int)v5 < (unsigned int)v3 )
  {
LABEL_4:
    v6 = (_QWORD ***)(v2 + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v5);
    goto LABEL_5;
  }
  v6 = 0LL;
LABEL_5:
  v7 = *v6;
  if ( v7 )
  {
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
      CTreeData::InvalidateWorldTransform((CTreeData *)(i - 44));
  }
LABEL_8:
  *((_BYTE *)this + 457) = 1;
  v9 = *((_QWORD *)this + 28);
  if ( *(int *)v9 >= 0 )
    return;
  v10 = *(unsigned int *)(v9 + 4);
  v11 = (_BYTE *)(v9 + 8);
  v12 = 0LL;
  if ( (_DWORD)v10 )
  {
    while ( *v11 != 1 )
    {
      v12 = (unsigned int)(v12 + 1);
      ++v11;
      if ( (unsigned int)v12 >= (unsigned int)v10 )
        goto LABEL_21;
    }
    goto LABEL_11;
  }
LABEL_21:
  if ( (unsigned int)v12 < (unsigned int)v10 )
  {
LABEL_11:
    v13 = (_QWORD ***)(v9 + ((v10 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v12);
    goto LABEL_12;
  }
  v13 = 0LL;
LABEL_12:
  v14 = *v13;
  if ( v14 )
  {
    for ( j = *v14; j != v14; j = (_QWORD *)*j )
      *((_BYTE *)j - 215) = 1;
  }
}
