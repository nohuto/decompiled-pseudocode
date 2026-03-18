/*
 * XREFs of MiFlowThroughInsertNode @ 0x140373F80
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializePageFileInPageSupport @ 0x1403741B8 (MiInitializePageFileInPageSupport.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  int v3; // r8d
  _QWORD *v4; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  char v9; // bl
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rax

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
    v9 = 0;
    v10 = *(_QWORD *)(v7 + 208);
    if ( (*(_BYTE *)(v7 + 216) & 1) != 0 && v10 )
      v10 ^= v7 + 208;
    LOBYTE(v8) = 0;
    if ( v10 )
    {
      v8 = *(_QWORD *)(a1 + 96) + *(unsigned int *)(a1 + 184);
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 - 104) + *(unsigned int *)(v10 - 16);
        if ( v8 > v11 || v8 >= v11 && a1 + 200 > v10 )
        {
          v12 = *(_QWORD *)v10;
          if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_48;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_48:
            LOBYTE(v8) = 0;
            break;
          }
        }
        else
        {
          v12 = *(_QWORD *)(v10 + 8);
          if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_16;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_16:
            LOBYTE(v8) = 1;
            break;
          }
        }
        v10 = v12;
      }
    }
    RtlRbInsertNodeEx(v7 + 208, v10, v8, a1 + 200);
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
        v13 = *(_QWORD *)(v5 + 96) + *(unsigned int *)(v5 + 184);
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 - 104) + *(unsigned int *)(v14 - 16);
          if ( v13 > v15 || v13 >= v15 && v5 + 200 > v14 )
          {
            v16 = *(_QWORD *)v14;
            if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
            {
              if ( !v16 )
                break;
              v16 ^= v14;
            }
            if ( !v16 )
              break;
          }
          else
          {
            v16 = *(_QWORD *)(v14 + 8);
            if ( (*(_BYTE *)(v7 + 216) & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_30;
              v16 ^= v14;
            }
            if ( !v16 )
            {
LABEL_30:
              v9 = 1;
              break;
            }
          }
          v14 = v16;
        }
      }
      LOBYTE(v13) = v9;
      RtlRbInsertNodeEx(v7 + 208, v14, v13, v5 + 200);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 200));
  }
}
