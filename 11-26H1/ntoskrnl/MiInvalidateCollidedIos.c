/*
 * XREFs of MiInvalidateCollidedIos @ 0x1402F1414
 * Callers:
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 * Callees:
 *     MiReleaseInPageRefs @ 0x1402EBD88 (MiReleaseInPageRefs.c)
 *     MiUpdateTransitionPteFrame @ 0x1402F0200 (MiUpdateTransitionPteFrame.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  __int64 *v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  __int64 result; // rax
  _QWORD *v9; // rdi
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rbp
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r9
  _QWORD *v21; // r14
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 PteShadow; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 updated; // r10
  ULONG_PTR v28; // r11
  unsigned __int64 v29; // rdx
  int v30; // ecx
  int v31; // eax
  unsigned __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 80);
  v2 = 1;
  if ( (*(_DWORD *)(a1 + 188) & 0x40) != 0 )
  {
    v13 = (_QWORD *)(a1 + 16);
    v14 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v14 + 8) != a1 + 16 || (v15 = *(_QWORD **)(a1 + 24), (_QWORD *)*v15 != v13) )
LABEL_24:
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *(_QWORD *)(a1 + 320);
    v5 = *(_QWORD *)(a1 + 328);
    v17 = 48 * v16 - 0x220000000000LL;
    if ( v1 < 0 )
    {
      MiReleaseInPageRefs(48 * v16 - 0x220000000000LL);
      result = 0LL;
      v13[1] = v13;
      *v13 = v13;
      return result;
    }
    v2 = 0;
    v4 = (__int64 *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
    if ( (*(_DWORD *)(v5 + 188) & 0x400000) != 0 || (v18 = *(_QWORD *)(v5 + 208)) == 0 )
      v18 = v5 + 272;
    v19 = (_QWORD *)(v18 + 48);
    v20 = ((*(_DWORD *)(*(_QWORD *)(a1 + 328) + 184LL) & 0xFFF) != 0)
        + ((unsigned __int64)*(unsigned int *)(v5 + 184) >> 12);
    v21 = &v19[v20 - 1];
    v22 = *(_QWORD *)(48LL * *v19 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (unsigned __int64)v4 >= v22
      && (v23 = (__int64)((__int64)v4 - v22) >> 3, v23 < v20)
      && (_mm_lfence(), v4 == (__int64 *)(*(_QWORD *)(48LL * v19[v23] - 0x220000000000LL + 8) | 0x8000000000000000uLL)) )
    {
LABEL_18:
      PteShadow = *v4;
      v2 = 1;
      if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL, *v4);
      updated = MiUpdateTransitionPteFrame(PteShadow, v16);
      v32 = updated;
      v29 = updated;
      v30 = 0;
      if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v31 = MiSanitizeShadowPxe(0LL, &v32, v25);
        v29 = v32;
        v30 = v31;
      }
      *v4 = v29;
      if ( v30 )
        MiWritePteShadow(v4, v29, v25, v26);
      *(_QWORD *)(a1 + 168) = updated;
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(v28 + 16) ^ (*(_QWORD *)(v17 + 16) ^ *(_QWORD *)(v28 + 16)) & 0xFFFFFFFFFFFFFC1FuLL;
    }
    else
    {
      while ( v19 <= v21 )
      {
        if ( (__int64 *)(*(_QWORD *)(48LL * *v19 - 0x220000000000LL + 8) | 0x8000000000000000uLL) == v4 )
          goto LABEL_18;
        ++v19;
      }
      v28 = 48 * v16 - 0x220000000000LL;
      *(_DWORD *)(v5 + 180) = 1;
    }
    MiReleaseInPageRefs(v28);
  }
  else
  {
    v4 = 0LL;
    v5 = a1;
  }
  v6 = (_QWORD *)(v5 + 16);
  v7 = *(_QWORD **)(v5 + 16);
  while ( v7 != v6 )
  {
    v9 = v7;
    v7 = (_QWORD *)*v7;
    v10 = 48LL * v9[38] - 0x220000000000LL;
    if ( (*(_DWORD *)(a1 + 188) & 0x40) == 0 || (__int64 *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == v4 )
    {
      MiReleaseInPageRefs(v10);
      v11 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_24;
      v12 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v12 != v9 )
        goto LABEL_24;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v9[1] = v9;
      *v9 = v9;
    }
  }
  return v2;
}
