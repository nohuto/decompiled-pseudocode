/*
 * XREFs of MiFlowThroughInsertNode @ 0x140375D30
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializePageFileInPageSupport @ 0x140375F68 (MiInitializePageFileInPageSupport.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  int v3; // r8d
  _QWORD *v4; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  __int64 v7; // r14
  BOOLEAN v8; // bl
  unsigned __int64 v9; // rdx
  BOOLEAN v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rax

  v3 = *(_DWORD *)(a1 + 188);
  *(_DWORD *)(a1 + 188) = v3 | 0x40;
  v4 = (_QWORD *)(a1 + 16);
  v5 = *a2 - 32LL;
  v6 = *(_QWORD **)(v5 + 24);
  if ( *v6 != v5 + 16 )
    __fastfail(3u);
  *v4 = v5 + 16;
  v4[1] = v6;
  *v6 = v4;
  *(_QWORD *)(v5 + 24) = v4;
  *(_QWORD *)(a1 + 328) = v5;
  if ( (v3 & 0x400400) == 0x400000 )
  {
    v7 = *(_QWORD *)(a1 + 192);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 200));
    v8 = 0;
    v9 = *(_QWORD *)(v7 + 208);
    if ( (*(_BYTE *)(v7 + 216) & 1) != 0 && v9 )
      v9 ^= v7 + 208;
    v10 = 0;
    if ( v9 )
    {
      v11 = *(_QWORD *)(a1 + 96) + *(unsigned int *)(a1 + 184);
      while ( 1 )
      {
        v12 = *(_QWORD *)(v9 - 104) + *(unsigned int *)(v9 - 16);
        if ( v11 > v12 || v11 >= v12 && a1 + 200 > v9 )
        {
          v13 = *(_QWORD *)v9;
          if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_48;
            v13 ^= v9;
          }
          if ( !v13 )
          {
LABEL_48:
            v10 = 0;
            break;
          }
        }
        else
        {
          v13 = *(_QWORD *)(v9 + 8);
          if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
          {
            if ( !v13 )
              goto LABEL_16;
            v13 ^= v9;
          }
          if ( !v13 )
          {
LABEL_16:
            v10 = 1;
            break;
          }
        }
        v9 = v13;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(v7 + 208), (PRTL_BALANCED_NODE)v9, v10, (PRTL_BALANCED_NODE)(a1 + 200));
    if ( *(_QWORD *)(v5 + 216) == -1LL )
    {
      v14 = *(_QWORD *)(v7 + 208);
      if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
      {
        if ( v14 )
          v14 ^= v7 + 208;
        else
          v14 = 0LL;
      }
      if ( v14 )
      {
        v15 = *(_QWORD *)(v5 + 96) + *(unsigned int *)(v5 + 184);
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14 - 104) + *(unsigned int *)(v14 - 16);
          if ( v15 > v16 || v15 >= v16 && v5 + 200 > v14 )
          {
            v17 = *(_QWORD *)v14;
            if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
            {
              if ( !v17 )
                break;
              v17 ^= v14;
            }
            if ( !v17 )
              break;
          }
          else
          {
            v17 = *(_QWORD *)(v14 + 8);
            if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
            {
              if ( !v17 )
                goto LABEL_30;
              v17 ^= v14;
            }
            if ( !v17 )
            {
LABEL_30:
              v8 = 1;
              break;
            }
          }
          v14 = v17;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(v7 + 208), (PRTL_BALANCED_NODE)v14, v8, (PRTL_BALANCED_NODE)(v5 + 200));
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 200));
  }
}
