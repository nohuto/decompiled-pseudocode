/*
 * XREFs of ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x1802341D4
 * Callers:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18021F828 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 *     ??1CCursorVisual@@MEAA@XZ @ 0x18026509C (--1CCursorVisual@@MEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180233FE8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAVCCursorVisual@@V-$allocator@PEAVCCurso.c)
 */

void __fastcall CGlobalComposition::UnregisterCursorVisual(CGlobalComposition *this, struct CCursorVisual *a2)
{
  struct CCursorVisual **v2; // r8
  char *v3; // rdi
  struct CCursorVisual **i; // rbx
  struct CCursorVisual **j; // rax
  char *v8; // rdx
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  char *v12; // rax
  size_t v13; // rbx

  v2 = (struct CCursorVisual **)*((_QWORD *)this + 816);
  v3 = (char *)this + 6520;
  for ( i = (struct CCursorVisual **)*((_QWORD *)this + 815); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    for ( j = i + 1; j != v2; ++j )
    {
      if ( *j != a2 )
        *i++ = *j;
    }
  }
  v8 = *(char **)v3;
  v9 = *((_QWORD *)this + 816);
  v10 = ((__int64)i - *(_QWORD *)v3) >> 3;
  v11 = (v9 - *((_QWORD *)this + 815)) >> 3;
  if ( v10 < v11 )
  {
    v12 = &v8[8 * v10];
LABEL_17:
    *((_QWORD *)v3 + 1) = v12;
    goto LABEL_18;
  }
  if ( v10 > v11 )
  {
    if ( v10 <= (__int64)(*((_QWORD *)v3 + 2) - (_QWORD)v8) >> 3 )
    {
      v13 = 8 * (v10 - v11);
      memset_0(*((void **)v3 + 1), 0, v13);
      v12 = (char *)(v13 + v9);
      goto LABEL_17;
    }
    std::vector<CCursorVisual *>::_Resize_reallocate<std::_Value_init_tag>((void **)v3, v10);
  }
LABEL_18:
  CComposition::RemoveCursorVisual(this, a2);
}
