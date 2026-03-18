/*
 * XREFs of ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18009E920
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoFirstChild(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned int v17; // r15d
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r10
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned int v29; // r15d
  unsigned int v30; // r13d
  HANDLE ProcessHeap; // rax
  void *v32; // rax
  void *v33; // r12
  void *v34; // r13
  HANDLE v35; // rax
  __int128 v36; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  *a2 = 0LL;
  v6 = 1LL;
  v7 = *(_QWORD *)(v2 + 80);
  v8 = v7 & 3;
  if ( (v7 & 3) != 0 )
  {
    if ( (*(_DWORD *)(v2 + 80) & 3) == 1LL )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v2 + 80) & 3) == 2LL )
    {
      v9 = 0LL;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(v2 + 80) & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v9 = v2 + 80;
  if ( (v7 & 3) != 0 )
  {
    if ( v8 != 1 )
    {
      if ( (unsigned __int64)(v8 - 2) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_5:
      v10 = 0LL;
      v11 = v8 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v13 = 0LL;
          goto LABEL_15;
        }
        if ( v12 != 1 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        goto LABEL_29;
      }
LABEL_14:
      v13 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_15;
    }
LABEL_13:
    v10 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_14;
  }
  v10 = 1LL;
LABEL_29:
  v13 = v2 + 80;
LABEL_15:
  v14 = (__int64)(v9 + 8 * v10 - v13) >> 3;
  if ( !(_DWORD)v14 )
    return 1;
  v15 = *(unsigned int *)(a1 + 40);
  *(_QWORD *)&v36 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v36 + 1) = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v15 == *(_DWORD *)(a1 + 44) )
  {
    v27 = 2LL * *(unsigned int *)(a1 + 44);
    if ( v27 <= 0xFFFFFFFF )
    {
      v29 = 64;
      if ( (unsigned int)v27 > 0x40 )
        v29 = 2 * *(_DWORD *)(a1 + 44);
      v30 = 16 * v15;
      if ( (unsigned __int64)(16 * v15) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v29 <= 0x10 )
        {
          v17 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v32 = HeapAlloc(ProcessHeap, 0, 16LL * v29);
          v33 = v32;
          if ( v32 )
          {
            memcpy_0(v32, *(const void **)(a1 + 32), v30);
            v34 = *(void **)(a1 + 32);
            if ( v34 )
            {
              v35 = GetProcessHeap();
              HeapFree(v35, 0, v34);
            }
            *(_QWORD *)(a1 + 32) = v33;
            *(_DWORD *)(a1 + 44) = v29;
            goto LABEL_17;
          }
          v17 = -2147024882;
        }
        v28 = 104LL;
LABEL_59:
        wil::details::in1diag3::Return_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)v28,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v17);
        wil::details::in1diag3::Return_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v17);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x87u, 0LL);
        return v17;
      }
      v28 = 101LL;
    }
    else
    {
      v28 = 98LL;
    }
    v17 = -2147024362;
    goto LABEL_59;
  }
LABEL_17:
  v16 = 0LL;
  v17 = 0;
  *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v36;
  v18 = *(_DWORD *)(a1 + 52);
  if ( v18 <= *(_DWORD *)(a1 + 40) )
    v18 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 52) = v18;
  if ( *(_DWORD *)(a1 + 28) != 1 )
    v16 = (unsigned int)(v14 - 1);
  *(_DWORD *)(a1 + 24) = v16;
  v19 = *(_QWORD *)(a1 + 8);
  v20 = *(_QWORD *)(v19 + 80);
  v21 = v20 & 3;
  if ( (v20 & 3) != 0 )
  {
    if ( (*(_DWORD *)(v19 + 80) & 3) == 1LL )
    {
      v22 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_35;
    }
    if ( (*(_DWORD *)(v19 + 80) & 3) == 2LL )
    {
      v22 = 0LL;
      goto LABEL_25;
    }
    if ( (*(_DWORD *)(v19 + 80) & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v22 = v19 + 80;
  if ( (v20 & 3) != 0 )
  {
    if ( v21 != 1 )
    {
LABEL_25:
      v6 = 0LL;
      if ( v21 != 1 )
      {
        if ( v21 == 2 )
        {
          v23 = 0LL;
          goto LABEL_37;
        }
        goto LABEL_50;
      }
LABEL_36:
      v23 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_37;
    }
LABEL_35:
    v6 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_36;
  }
LABEL_50:
  v23 = v19 + 80;
LABEL_37:
  if ( (__int64)(v22 + 8 * v6 - v23) >> 3 > v16 )
  {
    if ( (v20 & 3) != 0 )
    {
      v24 = v21 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 != 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
          goto LABEL_54;
        }
      }
      else
      {
        v3 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
      }
LABEL_44:
      v3 = *(_QWORD *)(v3 + 8 * v16);
      goto LABEL_45;
    }
LABEL_54:
    v3 = v19 + 80;
    goto LABEL_44;
  }
LABEL_45:
  ++*(_DWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 16) = v19;
  *(_QWORD *)(a1 + 8) = v3;
  *a2 = v3;
  return v17;
}
