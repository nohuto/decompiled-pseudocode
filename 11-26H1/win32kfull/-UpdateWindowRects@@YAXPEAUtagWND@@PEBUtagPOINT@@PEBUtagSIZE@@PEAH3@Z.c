/*
 * XREFs of ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1400426E4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1400189D4 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     RemoveWindowFullScreen @ 0x14024985C (RemoveWindowFullScreen.c)
 */

void __fastcall UpdateWindowRects(
        struct tagWND *a1,
        const struct tagPOINT *a2,
        const struct tagSIZE *a3,
        int *a4,
        int *a5)
{
  char *v5; // rdi
  int v6; // r12d
  int v7; // r15d
  unsigned int v11; // ebp
  unsigned int v12; // esi
  int v13; // r10d
  int v14; // r8d
  char *v15; // rdx
  _DWORD *v16; // rcx
  char *v17; // r9
  _DWORD *v18; // rcx
  HRGN ExplicitClipRgn; // rax
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ecx

  v5 = (char *)a1 + 40;
  v6 = 0;
  v7 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( a2 )
  {
    v11 = a2->x - *(_DWORD *)(*(_QWORD *)v5 + 88LL);
    v12 = a2->y - *(_DWORD *)(*(_QWORD *)v5 + 92LL);
    if ( a2->x != *(_DWORD *)(*(_QWORD *)v5 + 88LL) || v12 )
    {
      v6 = 1;
      if ( (*((_DWORD *)a1 + 95) & 0x400) != 0 )
        RemoveWindowFullScreen(a1);
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  if ( a3 )
  {
    v13 = a3->cx + *(_DWORD *)(*(_QWORD *)v5 + 88LL) - *(_DWORD *)(*(_QWORD *)v5 + 96LL);
    v14 = a3->cy + *(_DWORD *)(*(_QWORD *)v5 + 92LL) - *(_DWORD *)(*(_QWORD *)v5 + 100LL);
    if ( v13 || v14 )
      v7 = 1;
    v15 = (char *)a1 + 40;
  }
  else
  {
    v13 = 0;
    v15 = v5;
    v14 = 0;
  }
  if ( v6 || v7 )
  {
    v16 = *(_DWORD **)v5;
    v17 = v15;
    v16[24] += v13 + v11;
    v16[25] += v14 + v12;
    v16[22] += v11;
    v16[23] += v12;
    v18 = *(_DWORD **)v5;
    v18[28] += v13 + v11;
    v18[29] += v14 + v12;
    v18[26] += v11;
    v18[27] += v12;
    if ( v13 < 0 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)v5 + 88LL);
      if ( *(_DWORD *)(*(_QWORD *)v5 + 104LL) < v22 )
      {
        *(_DWORD *)(*(_QWORD *)v5 + 104LL) = v22;
        v17 = (char *)a1 + 40;
        *(_DWORD *)(*(_QWORD *)v15 + 112LL) = *(_DWORD *)(*(_QWORD *)v15 + 88LL);
      }
    }
    if ( v14 < 0 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)v15 + 92LL);
      if ( *(_DWORD *)(*(_QWORD *)v15 + 108LL) < v21 )
      {
        *(_DWORD *)(*(_QWORD *)v15 + 108LL) = v21;
        *(_DWORD *)(*(_QWORD *)v17 + 116LL) = *(_DWORD *)(*(_QWORD *)v17 + 92LL);
      }
    }
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(a1);
    if ( ExplicitClipRgn )
      GreOffsetRgn(ExplicitClipRgn, v11, v12);
    CalcWindowFullScreen(a1, v20);
  }
  *a5 = v6;
  *a4 = v7;
}
