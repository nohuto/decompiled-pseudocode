/*
 * XREFs of MiGetOptimalEngineMix @ 0x14050A6C8
 * Callers:
 *     MiCreatePageChainsForNode @ 0x14071636C (MiCreatePageChainsForNode.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiGetOptimalEngineMix(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  int v7; // r15d
  __int64 v8; // r13
  __int64 v9; // rdi
  volatile LONG *v10; // rcx
  KIRQL v11; // bp
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  _BYTE *v15; // r8
  unsigned int *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  signed int v23; // eax
  __int64 v24; // r9
  int *v25; // r10
  unsigned __int64 v26; // rbx
  unsigned int v27; // r11d
  int v28; // ecx
  unsigned __int64 v29; // rax
  bool v30; // cc
  volatile LONG *v31; // rcx
  __int16 v33; // [rsp+58h] [rbp+10h]

  v33 = 0;
  *(_QWORD *)a4 = 0LL;
  v5 = (a3 >> 1) & 1;
  *(_DWORD *)(a4 + 8) = 0;
  v6 = 0;
  v7 = 0;
  v8 = 384LL * a2;
  v9 = *(_QWORD *)(qword_140E2D838 + v8 + 376);
  v10 = (volatile LONG *)(v9 + 64);
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockShared(v10);
  }
  v12 = v5;
  v13 = 168LL * v5;
  v14 = v5;
  v15 = (_BYTE *)(v13 + v9 + 135);
  do
  {
    if ( *v15 == 3 )
      *((_BYTE *)&v33 + (v14 != 0)) = 1;
    ++v14;
    v15 += 168;
  }
  while ( v14 < 3 );
  v16 = (unsigned int *)(v13 + *(_QWORD *)(qword_140E2D838 + v8 + 376) + 172LL);
  while ( 1 )
  {
    v17 = *v16;
    if ( (_DWORD)v17 )
      break;
    ++v5;
    ++v12;
    v16 += 42;
    if ( v12 >= 3 )
      goto LABEL_41;
  }
  v6 = *v16;
  *(_DWORD *)(a4 + 4LL * (int)v5) = v17;
  v18 = *(_QWORD *)(168LL * (int)v5 + v9 + 152) * v17;
  if ( (_BYTE)v33 && !v5 && v18 >= *(_QWORD *)(v9 + 592) )
    goto LABEL_41;
  if ( !HIBYTE(v33) )
  {
    v7 = 1;
    v19 = -1LL;
LABEL_26:
    v23 = v5 + 1;
    if ( (int)(v5 + 1) < 3LL )
    {
      v24 = 168LL * v23;
      v25 = (int *)(a4 + 4LL * v23);
      while ( 1 )
      {
        v26 = *(_QWORD *)(v24 + v9 + 152);
        if ( v7 || v19 >= v26 )
        {
          v27 = *(_DWORD *)(*(_QWORD *)(qword_140E2D838 + v8 + 376) + v24 + 172);
          if ( v27 )
          {
            if ( v7 )
            {
              v28 = 1;
              goto LABEL_39;
            }
            v29 = v19 / v26;
            v30 = v27 <= (unsigned int)(v19 / v26);
            if ( v27 <= (unsigned int)(v19 / v26) )
              goto LABEL_36;
            if ( (_DWORD)v29 )
            {
              v30 = v27 <= (unsigned int)v29;
LABEL_36:
              if ( v30 )
                v29 = v27;
              v28 = v29;
              v19 -= v26 * v29;
LABEL_39:
              v6 += v28;
              *v25 = v28;
              if ( v7 )
                goto LABEL_41;
            }
          }
        }
        v24 += 168LL;
        ++v25;
        if ( v24 >= 504 )
          goto LABEL_41;
      }
    }
    goto LABEL_41;
  }
  v20 = *(_QWORD *)(v9 + 600);
  v21 = *(_QWORD *)(v9 + 592);
  if ( v20 < v21 )
  {
    v22 = v21 - v18;
    if ( v5 )
      v22 = *(_QWORD *)(v9 + 592);
    if ( v22 > v20 )
      v22 = *(_QWORD *)(v9 + 600);
    v19 = v22;
  }
  else
  {
    if ( v20 <= v18 )
      goto LABEL_41;
    v19 = v20 - v18;
  }
  if ( v19 )
    goto LABEL_26;
LABEL_41:
  v31 = (volatile LONG *)(v9 + 64);
  if ( v11 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v31);
  else
    ExReleaseSpinLockShared(v31, v11);
  return v6;
}
