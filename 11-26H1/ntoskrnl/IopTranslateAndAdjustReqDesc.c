/*
 * XREFs of IopTranslateAndAdjustReqDesc @ 0x1407A5CCC
 * Callers:
 *     IopSetupArbiterAndTranslators @ 0x140B09784 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopTranslateAndAdjustReqDesc(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v3; // r14
  int v4; // ebx
  int v5; // r15d
  __int64 v6; // rsi
  int v7; // edi
  char *Pool2; // r13
  _DWORD *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  _OWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  _OWORD *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rsi
  _OWORD *v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 j; // rbx
  int *v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int64 *v29; // [rsp+48h] [rbp-60h]
  _OWORD **v30; // [rsp+50h] [rbp-58h]
  char v31; // [rsp+B0h] [rbp+8h]
  __int64 v32; // [rsp+B0h] [rbp+8h]
  int i; // [rsp+C8h] [rbp+20h]

  v3 = (_DWORD *)(a1 + 56);
  v4 = 0;
  v28 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v31 = 0;
  v6 = a1;
  v7 = -1073741823;
  if ( !*(_DWORD *)(a1 + 56) )
    return 3221225485LL;
  *a3 = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v27 = ExAllocatePool2(0x100uLL);
  v10 = (_DWORD *)v27;
  if ( !v27 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  v11 = *(_QWORD *)(v6 + 64);
  v30 = (_OWORD **)(v6 + 64);
  v12 = 0LL;
  for ( i = 0; (unsigned int)v12 < *v3; i = v12 )
  {
    v26 = (int *)(v27 + 4 * v12);
    v29 = (__int64 *)&Pool2[8 * v12];
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v28 + 8), v11);
    if ( v7 >= 0 && (v13 = *v26) != 0 )
    {
      v31 = 1;
    }
    else
    {
      *v29 = v11;
      v13 = 1;
      *v26 = 0;
    }
    v5 += v13;
    v11 += 32LL;
    if ( v7 >= 0 && v4 != 288 )
      v4 = v7;
    v12 = (unsigned int)(i + 1);
  }
  if ( v31 )
    v7 = v4;
  v14 = (_OWORD *)ExAllocatePool2(0x100uLL);
  if ( !v14 )
    goto LABEL_19;
  v15 = ExAllocatePool2(0x100uLL);
  v32 = v15;
  v16 = v15;
  if ( v15 )
  {
    v17 = (_OWORD *)v15;
    v18 = 2LL;
    do
    {
      *v17 = *(_OWORD *)v6;
      v17[1] = *(_OWORD *)(v6 + 16);
      v17[2] = *(_OWORD *)(v6 + 32);
      v17[3] = *(_OWORD *)(v6 + 48);
      v17[4] = *(_OWORD *)(v6 + 64);
      v17[5] = *(_OWORD *)(v6 + 80);
      v17[6] = *(_OWORD *)(v6 + 96);
      v17 += 8;
      v19 = *(_OWORD *)(v6 + 112);
      v6 += 128LL;
      *(v17 - 1) = v19;
      --v18;
    }
    while ( v18 );
    *v17 = *(_OWORD *)v6;
    v17[1] = *(_OWORD *)(v6 + 16);
    v20 = *(_QWORD *)(v6 + 32);
    v21 = 0LL;
    *((_QWORD *)v17 + 4) = v20;
    *(_QWORD *)(v16 + 288) = a2;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_QWORD *)(v16 + 48) = v16 + 40;
    *(_QWORD *)(v16 + 40) = v16 + 40;
    *(_QWORD *)(v16 + 112) = v16 + 136;
    *(_DWORD *)(v16 + 56) = v5;
    *(_QWORD *)(v16 + 64) = v14;
    v22 = *v30;
    if ( !*v3 )
    {
LABEL_37:
      v10 = (_DWORD *)v27;
      *a3 = v16;
      goto LABEL_38;
    }
    while ( 1 )
    {
      v23 = *(_DWORD *)(v27 + 4 * v21);
      if ( !v23 )
        break;
      memmove(v14, *(const void **)&Pool2[8 * v21], 32LL * v23);
      v24 = 32LL * *(unsigned int *)(v27 + 4 * v21);
LABEL_35:
      v22 += 2;
      v21 = (unsigned int)(v21 + 1);
      v14 = (_OWORD *)((char *)v14 + v24);
      if ( (unsigned int)v21 >= *v3 )
      {
        v16 = v32;
        goto LABEL_37;
      }
    }
    *v14 = *v22;
    v14[1] = v22[1];
    if ( *((_BYTE *)v14 + 1) == 1 )
      goto LABEL_33;
    if ( *((_BYTE *)v14 + 1) != 2 )
    {
      if ( *((_BYTE *)v14 + 1) == 3 )
        goto LABEL_33;
      if ( *((_BYTE *)v14 + 1) != 4 )
      {
        if ( *((_BYTE *)v14 + 1) == 6 )
        {
          *((_DWORD *)v14 + 3) = 2;
          *((_DWORD *)v14 + 4) = 1;
          goto LABEL_34;
        }
        if ( *((_BYTE *)v14 + 1) != 7 )
        {
LABEL_34:
          v24 = 32LL;
          goto LABEL_35;
        }
LABEL_33:
        *((_QWORD *)v14 + 2) = 2LL;
        *((_QWORD *)v14 + 3) = 1LL;
        goto LABEL_34;
      }
    }
    *((_DWORD *)v14 + 2) = 2;
    *((_DWORD *)v14 + 3) = 1;
    goto LABEL_34;
  }
  ExFreePoolWithTag(v14, 0);
LABEL_19:
  v7 = -1073741670;
LABEL_38:
  for ( j = 0LL; (unsigned int)j < *v3; j = (unsigned int)(j + 1) )
  {
    if ( v10[j] )
      ExFreePoolWithTag(*(PVOID *)&Pool2[8 * j], 0);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)v7;
}
