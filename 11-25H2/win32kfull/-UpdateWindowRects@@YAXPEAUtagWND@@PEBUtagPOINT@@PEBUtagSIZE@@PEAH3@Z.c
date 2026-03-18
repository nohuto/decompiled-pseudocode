/*
 * XREFs of ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x140053B74
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     RemoveWindowFullScreen @ 0x14021536C (RemoveWindowFullScreen.c)
 */

void __fastcall UpdateWindowRects(
        struct tagWND *this,
        const struct tagPOINT *a2,
        const struct tagSIZE *a3,
        int *a4,
        int *a5)
{
  char *v5; // rbx
  int v6; // r14d
  int v7; // r15d
  unsigned int v11; // ebp
  unsigned int v12; // esi
  int v13; // r8d
  int v14; // edx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  HRGN ExplicitClipRgn; // rax
  int v18; // ecx
  int v19; // ecx

  v5 = (char *)this + 40;
  v6 = 0;
  v7 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( a2 )
  {
    v11 = a2->x - *(_DWORD *)(*(_QWORD *)v5 + 88LL);
    v12 = a2->y - *(_DWORD *)(*(_QWORD *)v5 + 92LL);
    if ( v11 || v12 )
    {
      v6 = 1;
      if ( (*((_DWORD *)this + 95) & 0x400) != 0 )
        RemoveWindowFullScreen();
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
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  if ( v6 || v7 )
  {
    v15 = *(_DWORD **)v5;
    v15[24] += v13 + v11;
    v15[25] += v14 + v12;
    v15[22] += v11;
    v15[23] += v12;
    v16 = *(_DWORD **)v5;
    v16[28] += v13 + v11;
    v16[29] += v14 + v12;
    v16[26] += v11;
    v16[27] += v12;
    if ( v13 < 0 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)v5 + 88LL);
      if ( *(_DWORD *)(*(_QWORD *)v5 + 104LL) < v18 )
      {
        *(_DWORD *)(*(_QWORD *)v5 + 104LL) = v18;
        *(_DWORD *)(*(_QWORD *)v5 + 112LL) = *(_DWORD *)(*(_QWORD *)v5 + 88LL);
      }
    }
    if ( v14 < 0 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)v5 + 92LL);
      if ( *(_DWORD *)(*(_QWORD *)v5 + 108LL) < v19 )
      {
        *(_DWORD *)(*(_QWORD *)v5 + 108LL) = v19;
        *(_DWORD *)(*((_QWORD *)this + 5) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 5) + 92LL);
      }
    }
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
    if ( ExplicitClipRgn )
      GreOffsetRgn(ExplicitClipRgn, v11, v12);
    CalcWindowFullScreen(this);
  }
  *a5 = v6;
  *a4 = v7;
}
