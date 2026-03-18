/*
 * XREFs of ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180197928
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800944C4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801E5BA0 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _QWORD *a2)
{
  _DWORD *v2; // r10
  __int64 v3; // rax
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int v7; // r8d
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 28);
  v3 = 0LL;
  *a2 = 0LL;
  if ( (*v2 & 0x2000000) == 0 )
    return (struct _LUID)a2;
  v5 = (unsigned int)v2[1];
  v6 = v2 + 2;
  v7 = 0;
  if ( (_DWORD)v5 )
  {
    while ( *v6 != 7 )
    {
      ++v7;
      ++v6;
      if ( v7 >= (unsigned int)v5 )
        goto LABEL_11;
    }
    goto LABEL_4;
  }
LABEL_11:
  if ( v7 < (unsigned int)v5 )
  {
LABEL_4:
    v8 = (__int64 *)((char *)&v2[2 * v7] + ((v5 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_5;
  }
  v8 = 0LL;
LABEL_5:
  v9 = *v8;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 112);
    if ( v10 )
      v3 = *(_QWORD *)(v10 + 96);
    *a2 = v3;
  }
  return (struct _LUID)a2;
}
