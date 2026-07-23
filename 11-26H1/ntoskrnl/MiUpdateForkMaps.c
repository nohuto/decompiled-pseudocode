/*
 * XREFs of MiUpdateForkMaps @ 0x140AF6AB0
 * Callers:
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiMapSinglePage @ 0x14036C61C (MiMapSinglePage.c)
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF6D60 (MiDoneWithThisPageGetAnother.c)
 */

unsigned __int64 __fastcall MiUpdateForkMaps(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r15
  int v8; // r15d
  __int64 v9; // rbx
  ULONG_PTR *v10; // r13
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v16; // r12
  _QWORD *v17; // rdi
  $241382875694CED3D471BC5892DE3337 *v18; // rdi
  unsigned __int64 Flink; // rbx
  __int64 *v20; // rbx
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r9
  _QWORD *v24; // rdi
  __int64 PteAddress; // rax
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // r9
  unsigned __int64 v29[4]; // [rsp+30h] [rbp-58h] BYREF
  char v30; // [rsp+50h] [rbp-38h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  memset(v29, 0, sizeof(v29));
  v5 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
  {
    do
    {
      PteAddress = MiGetPteAddress(v3);
      v3 = PteAddress;
    }
    while ( v28 != 1 );
    v3 = PteAddress + 8;
    if ( v27 )
    {
      do
      {
        v3 = (__int64)(v3 << 25) >> 16;
        --v26;
      }
      while ( v26 );
    }
  }
  else
  {
    if ( ((a1[6] ^ v3) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v8 = 4;
      MiFillPteHierarchy(v5, v29);
      v9 = *a1;
      v10 = (ULONG_PTR *)&v30;
      a1[6] = v3;
      v11 = *(_QWORD *)(v9 + 40) >> 12;
      v33 = v11;
      do
      {
        --v8;
        --v10;
        if ( *((_BYTE *)a1 + 192) )
        {
          v12 = a1[4];
          if ( v12 )
          {
            v13 = (_QWORD *)MiGetPteAddress(v12);
            *v13 = v14;
          }
          UltraMapping = MiGetUltraMapping((__int64)(a1 + 21), 3uLL, 1LL, 0);
          a1[4] = UltraMapping;
          v16 = UltraMapping;
          v17 = (_QWORD *)MiGetPteAddress(UltraMapping);
          *v17 = MiMakeValidPte((unsigned __int64)v17, v11, -1610612732);
        }
        else
        {
          v16 = MiMapSinglePage(a1[7], v11, 1073741856LL, 0LL);
        }
        v18 = ($241382875694CED3D471BC5892DE3337 *)(v16 + 8LL * ((*(_DWORD *)v10 >> 3) & 0x1FF));
        Flink = (unsigned __int64)v18->ApcState.ApcListHead[0].Flink;
        if ( v18->ApcState.ApcListHead[0].Flink )
        {
          if ( (Flink & 1) == 0 && qword_140E2D8C0 )
          {
            if ( (Flink & 0x10) != 0 )
              Flink &= ~0x10uLL;
            else
              Flink &= qword_140E2D8C8;
          }
          v11 = (Flink >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v20 = &a1[3 - v8];
          MiDoneWithThisPageGetAnother(v20 + 1, a3, *a1);
          v11 = v20[1];
          MiBuildForkPageTable(*a1, v11, *v10, v18, v33, v8);
          _InterlockedIncrement64((volatile signed __int64 *)(*a1 + 648));
        }
        v33 = v11;
      }
      while ( v8 != 1 );
      if ( *((_BYTE *)a1 + 192) )
      {
        v21 = a1[4];
        if ( v21 )
        {
          v22 = (_QWORD *)MiGetPteAddress(v21);
          *v22 = v23;
        }
        v6 = MiGetUltraMapping((__int64)(a1 + 21), 3uLL, 1LL, 0);
        v24 = (_QWORD *)MiGetPteAddress(v6);
        *v24 = MiMakeValidPte((unsigned __int64)v24, v11, -1610612732);
      }
      else
      {
        v6 = MiMapSinglePage(a1[7], v11, 1073741856LL, 0LL);
      }
      a1[4] = v6;
      v3 = a2;
      a1[8] = 48 * v11 - 0x220000000000LL;
    }
    else
    {
      v6 = a1[4];
    }
    a1[5] = v6 + 8 * ((v3 >> 3) & 0x1FF);
  }
  return v3;
}
