/*
 * XREFs of MiDecommitHandlePageFileFormatPte @ 0x140362970
 * Callers:
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14046BF10 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecommitHandlePageFileFormatPte(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // r8
  __int64 v4; // rbx
  int v6; // ecx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  struct _KEVENT *v9; // r12
  int v10; // r15d
  __int16 v11; // ax
  __int16 v12; // dx
  unsigned __int64 v13; // rdx
  __int64 PteShadow; // rax
  int v16; // eax
  unsigned int v17; // r8^4
  int v18; // r8d
  __int16 v19; // ax
  __int16 v20; // dx
  __int64 v21[2]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = a2;
  v2 = *(_DWORD *)(a1 + 144);
  v3 = *(unsigned int *)(a1 + 100);
  v4 = a2;
  if ( v2 != 1 && (v3 & 0x1C0000) != 0 )
    v2 = 1;
  v6 = *(_DWORD *)(a1 + 112);
  if ( (v6 & 8) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 128);
    v8 = 0LL;
    v9 = *(struct _KEVENT **)(a1 + 8);
    v10 = 1;
    if ( (v6 & 0x20) != 0 )
    {
      if ( ((a2 >> 5) & 0x1F) == 0 )
        KeBugCheckEx(0x1Au, 0x41792uLL, *(_QWORD *)(a1 + 64), a2, 0LL);
      v18 = v3 & 0xF0;
      if ( v18 )
      {
        if ( ((a2 >> 5) & 0x1F) != 0x10 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += v2;
          if ( v18 != 48 )
            **(_QWORD **)(a1 + 24) += v2;
        }
      }
      else
      {
        if ( (a2 & 1) != 0 )
          goto LABEL_56;
        v19 = a2;
        if ( qword_140E2D8C0 )
        {
          v20 = qword_140E2D8C8 & a2;
          if ( (v4 & 0x10) == 0 )
            v19 = v20;
        }
        if ( (v19 & 0x400) != 0 || (v19 & 0x800) != 0 || (v19 & 8) != 0 )
LABEL_56:
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += v2;
      }
    }
    else if ( (v3 & 0xF0) != 0 )
    {
      if ( ((a2 >> 5) & 0x1F) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += v2;
      }
      else if ( (v6 & 0x10) != 0 )
      {
        return v2;
      }
    }
    else
    {
      if ( ((a2 >> 5) & 0x1F) == 0x10 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += MiPageSizes[(v3 >> 16) & 3];
        return v2;
      }
      if ( (a2 & 1) != 0 )
        goto LABEL_33;
      v11 = a2;
      if ( qword_140E2D8C0 )
      {
        v12 = qword_140E2D8C8 & a2;
        if ( (v4 & 0x10) == 0 )
          v11 = v12;
      }
      if ( (v11 & 0x400) != 0 || (v11 & 0x800) != 0 || (v11 & 8) != 0 )
LABEL_33:
        _InterlockedAdd64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding, -(__int64)v2);
      if ( (v4 & 4) != 0 )
      {
        v16 = MI_IS_PTE_IN_WS_SWAP_SET(v9, &v22);
        v4 = v22;
        if ( !v16 )
        {
          v10 = 0;
          v17 = HIDWORD(v22);
          if ( qword_140E2D8C0 && (v22 & 0x10) == 0 )
            v17 = HIDWORD(qword_140E2D8C8) & HIDWORD(v22);
          v7 = MiTransferSoftwarePte(
                 *(_QWORD *)(a1 + 120),
                 *((_QWORD *)&v9[929].Header.WaitListHead.Flink + ((unsigned __int16)v22 >> 12)),
                 v17,
                 2);
        }
      }
    }
    if ( (v4 & 0x400) == 0 )
    {
      v13 = v4;
      v21[0] = v4;
      if ( (v4 & 8) != 0 )
      {
        if ( !v10 )
        {
          PteShadow = v21[0];
          if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow((unsigned __int64)v21, v21[0]);
          v21[0] = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
          v13 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
        }
      }
      else if ( !v10 || (v4 & 4) == 0 )
      {
        v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      if ( v13 )
        MiReleasePageFileInfo(v9, v13, 1LL);
    }
    if ( v2 )
    {
      do
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v8++) = v7;
      while ( v8 < v2 );
    }
    if ( !v7 )
      *(_DWORD *)(a1 + 96) += v2;
  }
  return v2;
}
