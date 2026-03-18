/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18018BDBC
 * Callers:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18018BC24 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z @ 0x18018BD20 (-SetClip@CVisual@@QEAAXPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180237988 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _BYTE *v4; // r8
  __int64 v5; // rcx
  _QWORD ***v6; // rdi
  _QWORD **v7; // rdi
  _QWORD *i; // rbx

  CTreeData::InvalidateWorldTransform((CVisual *)((char *)this + 320));
  v2 = *((_QWORD *)this + 28);
  if ( *(int *)v2 >= 0 )
    return;
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
        goto LABEL_10;
    }
    goto LABEL_4;
  }
LABEL_10:
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
}
