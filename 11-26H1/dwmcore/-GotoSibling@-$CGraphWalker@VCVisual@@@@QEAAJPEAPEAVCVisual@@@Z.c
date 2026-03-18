/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x18009EFE0
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoSibling(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v6; // r11
  int v7; // ebp
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 16);
  result = 0LL;
  *a2 = 0LL;
  v6 = 1LL;
  if ( !v2 )
    return 1LL;
  v7 = *(_DWORD *)(a1 + 28);
  if ( v7 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 == -1 )
      return 1LL;
    v9 = *(_QWORD *)(v2 + 80);
    v10 = v9 & 3;
    if ( (v9 & 3) != 0 )
    {
      if ( (*(_DWORD *)(v2 + 80) & 3) == 1LL )
      {
        v11 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)(v2 + 80) & 3) == 2LL )
      {
        v11 = 0LL;
        goto LABEL_8;
      }
      if ( (*(_DWORD *)(v2 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v11 = v2 + 80;
    if ( (v9 & 3) == 0 )
    {
      v12 = 1LL;
LABEL_41:
      v15 = v2 + 80;
LABEL_17:
      if ( v8 + 1 < (unsigned int)((__int64)(v11 + 8 * v12 - v15) >> 3) )
        goto LABEL_18;
      return 1LL;
    }
    if ( v10 != 1 )
    {
      if ( (unsigned __int64)(v10 - 2) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_8:
      v12 = 0LL;
      v13 = v10 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          v15 = 0LL;
          goto LABEL_17;
        }
        if ( v14 != 1 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        goto LABEL_41;
      }
LABEL_16:
      v15 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_17;
    }
LABEL_15:
    v12 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_16;
  }
  if ( v7 || !*(_DWORD *)(a1 + 24) )
    return 1LL;
LABEL_18:
  v16 = *(_DWORD *)(a1 + 24);
  v17 = v2 + 80;
  v18 = *(_QWORD *)(v2 + 80);
  v19 = (unsigned int)(v16 + 1);
  if ( v7 != 1 )
    v19 = (unsigned int)(v16 - 1);
  v20 = v18 & 3;
  if ( (v18 & 3) != 0 )
  {
    if ( (v18 & 3) == 1 )
    {
      v21 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_28:
      v6 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_29;
    }
    if ( (v18 & 3) == 2 )
    {
      v21 = 0LL;
      goto LABEL_24;
    }
    if ( (v18 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v21 = v2 + 80;
  if ( (v18 & 3) == 0 )
    goto LABEL_30;
  if ( v20 == 1 )
    goto LABEL_28;
  if ( (unsigned __int64)(v20 - 2) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_24:
  v6 = 0LL;
  v22 = v20 - 1;
  if ( !v22 )
  {
LABEL_29:
    v17 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_30;
  }
  v23 = v22 - 1;
  if ( v23 )
  {
    if ( v23 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  else
  {
    v17 = 0LL;
  }
LABEL_30:
  if ( (__int64)(v21 + 8 * v6 - v17) >> 3 <= (unsigned __int64)(unsigned int)v19 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 24) = v19;
    *a2 = 0LL;
  }
  else
  {
    if ( (v18 & 3) == 0 )
      goto LABEL_57;
    if ( (v18 & 3) != 1 )
    {
      if ( (v18 & 3) == 2 )
      {
        v24 = 0LL;
LABEL_35:
        v25 = *(_QWORD *)(v24 + 8 * v19);
        *(_QWORD *)(a1 + 8) = v25;
        *a2 = v25;
        *(_DWORD *)(a1 + 24) = v19;
        return result;
      }
      if ( (v18 & 3) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_57:
      v24 = v2 + 80;
      goto LABEL_35;
    }
    v26 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v19);
    *(_QWORD *)(a1 + 8) = v26;
    *a2 = v26;
    *(_DWORD *)(a1 + 24) = v19;
  }
  return result;
}
