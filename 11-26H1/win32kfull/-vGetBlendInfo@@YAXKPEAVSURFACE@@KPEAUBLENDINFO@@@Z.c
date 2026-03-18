/*
 * XREFs of ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1400EF808
 * Callers:
 *     ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EF0A0 (-vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400EF26C (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EF4E0 (-vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vGetBlendInfo(int a1, struct SURFACE *a2, int a3, struct BLENDINFO *a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  int *v10; // rdx
  int v11; // edi
  int v12; // r12d
  int v13; // r15d
  int v14; // esi
  int v15; // ebp
  int v16; // r14d
  int v17; // r13d
  unsigned int v18; // eax
  unsigned __int8 *v19; // r9
  void *v20; // r10
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // [rsp+20h] [rbp-88h]
  _DWORD v25[30]; // [rsp+30h] [rbp-78h] BYREF
  int v26; // [rsp+B8h] [rbp+10h]

  memset_0(v25, 0, 0x40uLL);
  v8 = *((_QWORD *)a2 + 16);
  v9 = *((_QWORD *)a2 + 6);
  if ( !v8 )
    v8 = *(_QWORD *)(v9 + 1792);
  v10 = (int *)*(unsigned int *)(v8 + 24);
  if ( ((unsigned __int8)v10 & 2) != 0 )
  {
    v10 = *(int **)(v8 + 112);
    v16 = v10[9] + v10[6] - 8;
    v14 = v10[10] + v10[7] - 8;
    v13 = v10[11] + v10[8] - 8;
    v11 = *v10;
    v15 = v10[1];
    v12 = v10[2];
  }
  else
  {
    v6 = 5LL;
    v11 = 31;
    if ( a1 != 2 )
    {
      v11 = 255;
      v6 = 8LL;
    }
    if ( ((unsigned __int8)v10 & 4) != 0 )
    {
      v16 = v6 - 8;
      v15 = v11 << v6;
      v14 = v6 - 8 + v6;
      v13 = v14 + v6;
      v12 = v11 << v6 << v6;
    }
    else if ( ((unsigned __int8)v10 & 8) != 0 )
    {
      v12 = v11;
      v13 = v6 - 8;
      v14 = v6 - 8 + v6;
      v15 = v11 << v6;
      v16 = v14 + v6;
      v11 = v11 << v6 << v6;
    }
    else
    {
      v12 = v25[8];
      v15 = v25[7];
      v11 = v25[6];
      v13 = v25[5];
      v14 = v25[3];
      v16 = v25[1];
    }
  }
  v17 = 0;
  if ( v16 < 0 )
  {
    v17 = -v16;
    v16 = 0;
  }
  v26 = 0;
  if ( v14 < 0 )
  {
    v26 = -v14;
    v14 = 0;
  }
  v24 = 0;
  if ( v13 < 0 )
  {
    v24 = -v13;
    v13 = 0;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v6, v10, v7) + 96) + 13448LL);
  if ( v18 == 1200 )
  {
    v18 = *(_DWORD *)(v9 + 2432);
    if ( !v18 )
      goto LABEL_17;
  }
  if ( v18 < 0x44C )
  {
    v19 = (unsigned __int8 *)&unk_14035EEB0;
    v20 = &unk_14035EEB0;
    goto LABEL_18;
  }
  if ( v18 < 0x4B0 )
  {
    v19 = (unsigned __int8 *)&unk_140365E20;
    v20 = &unk_140365D20;
    goto LABEL_18;
  }
  if ( v18 < 0x514 )
  {
LABEL_17:
    v19 = (unsigned __int8 *)&unk_14035EDB0;
    v20 = &unk_14035ECB0;
  }
  else if ( v18 < 0x578 )
  {
    v19 = (unsigned __int8 *)&unk_14035FCB0;
    v20 = &unk_14035FBB0;
  }
  else if ( v18 < 0x5DC )
  {
    v19 = (unsigned __int8 *)&unk_14035F2B0;
    v20 = &unk_14035F1B0;
  }
  else if ( v18 < 0x640 )
  {
    v19 = (unsigned __int8 *)&unk_1403602B0;
    v20 = &unk_1403601B0;
  }
  else if ( v18 < 0x6A4 )
  {
    v19 = (unsigned __int8 *)&unk_14035F4B0;
    v20 = &unk_14035F3B0;
  }
  else if ( v18 < 0x708 )
  {
    v19 = (unsigned __int8 *)&unk_140365C20;
    v20 = &unk_140365B20;
  }
  else if ( v18 < 0x76C )
  {
    v19 = (unsigned __int8 *)&unk_14035F6B0;
    v20 = &unk_14035F5B0;
  }
  else if ( v18 < 0x7D0 )
  {
    v19 = (unsigned __int8 *)&unk_1403600B0;
    v20 = &unk_14035FFB0;
  }
  else if ( v18 >= 0x834 )
  {
    if ( v18 < 0x898 )
    {
      v19 = (unsigned __int8 *)&unk_14035FEB0;
      v20 = &unk_14035FDB0;
    }
    else
    {
      v19 = (unsigned __int8 *)&unk_14035FAB0;
      v20 = &unk_14035F9B0;
    }
  }
  else
  {
    v19 = (unsigned __int8 *)&unk_14035F0B0;
    v20 = &unk_14035EFB0;
  }
LABEL_18:
  v21 = v19[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v17) >> v16)];
  v22 = v19[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v15) << v26) >> v14)];
  v23 = v19[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v12) << v24) >> v13)];
  *((_DWORD *)a4 + 4) = v24;
  *(_DWORD *)a4 = v17;
  *((_DWORD *)a4 + 1) = v16;
  *((_DWORD *)a4 + 2) = v26;
  *((_DWORD *)a4 + 3) = v14;
  *((_DWORD *)a4 + 5) = v13;
  *((_DWORD *)a4 + 6) = v11;
  *((_DWORD *)a4 + 7) = v15;
  *((_DWORD *)a4 + 8) = v12;
  *((_DWORD *)a4 + 9) = v21;
  *((_DWORD *)a4 + 10) = v22;
  *((_DWORD *)a4 + 11) = v23;
  *((_QWORD *)a4 + 6) = v19;
  *((_QWORD *)a4 + 7) = v20;
}
