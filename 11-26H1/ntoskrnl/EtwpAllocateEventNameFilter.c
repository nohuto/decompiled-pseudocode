/*
 * XREFs of EtwpAllocateEventNameFilter @ 0x140AA2F10
 * Callers:
 *     EtwpAllocateFilter @ 0x140AA2CB4 (EtwpAllocateFilter.c)
 * Callees:
 *     strnlen @ 0x140539F20 (strnlen.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpFreeEventNameFilter @ 0x140AA32D8 (EtwpFreeEventNameFilter.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateEventNameFilter(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  __int64 v4; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  _BYTE *Pool2; // rsi
  char *v8; // r15
  char v9; // al
  __int64 v10; // rax
  char *v11; // r12
  _DWORD *v12; // r11
  unsigned int v13; // r15d
  unsigned int i; // r13d
  unsigned int v15; // edi
  const char *v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // r10d
  __int64 v19; // r8
  unsigned __int8 *v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r8
  _QWORD *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 *v35; // [rsp+20h] [rbp-48h]
  char *v36; // [rsp+28h] [rbp-40h]
  __int64 v38; // [rsp+80h] [rbp+18h]

  v2 = 0;
  if ( *a2 )
    return 3221225485LL;
  v3 = a1[2];
  if ( (unsigned int)(v3 - 24) > 0xFE8 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int16 *)(*(_QWORD *)a1 + 18LL);
  if ( !*(_WORD *)(*(_QWORD *)a1 + 18LL) )
    return 3221225485LL;
  v6 = v3 - 20;
  if ( v6 < 2 * v5 )
    return 3221225485LL;
  Pool2 = (_BYTE *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  v8 = (char *)ExAllocatePool2(0x40uLL);
  if ( !v8 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *Pool2 = *(_BYTE *)(v4 + 17);
  v9 = *(_BYTE *)(v4 + 16);
  if ( !v9 )
    v9 = -1;
  Pool2[1] = v9;
  v10 = *(_QWORD *)v4;
  if ( !*(_QWORD *)v4 )
    v10 = -1LL;
  *((_QWORD *)Pool2 + 1) = v10;
  v11 = &Pool2[24 * v5 + 40];
  *((_QWORD *)Pool2 + 2) = *(_QWORD *)(v4 + 8);
  v36 = v11;
  memmove(v11, (const void *)(v4 + 20), v6);
  *((_DWORD *)Pool2 + 6) = 0;
  v35 = (__int64 *)(Pool2 + 32);
  v12 = Pool2 + 28;
  *((_QWORD *)Pool2 + 4) = v8;
  *((_DWORD *)Pool2 + 7) = 1024;
  if ( (v8 + 256 >= v8 ? 0x20 : 0) != 0 )
    memset64(v8, (unsigned __int64)(Pool2 + 24) | 1, v8 + 256 >= v8 ? 0x20 : 0);
  v13 = 0;
  for ( i = 0; i < v5; ++i )
  {
    if ( v13 >= v6 - 1 )
      goto LABEL_29;
    v15 = v6 - v13;
    v16 = &v11[v13];
    if ( v16 )
    {
      v17 = strnlen(v16, v15);
      v12 = Pool2 + 28;
    }
    else
    {
      v17 = 0;
    }
    v18 = v17 + 1;
    if ( v17 + 1 > v15 || v17 == -1 )
      goto LABEL_29;
    v19 = v17;
    v20 = (unsigned __int8 *)v16;
    v21 = 314159LL;
    if ( v17 >= 8uLL )
    {
      v22 = (unsigned __int64)v17 >> 3;
      v19 = v17 - 8 * v22;
      do
      {
        v23 = v20[6]
            + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v21))))));
        v24 = v20[7];
        v20 += 8;
        v21 = v24 + 37 * v23;
        --v22;
      }
      while ( v22 );
    }
    v25 = v19 - 1;
    if ( !v25 )
      goto LABEL_26;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_25;
    v31 = v26 - 1;
    if ( !v31 )
      goto LABEL_40;
    v32 = v31 - 1;
    if ( !v32 )
      goto LABEL_39;
    v33 = v32 - 1;
    if ( !v33 )
      goto LABEL_38;
    v34 = v33 - 1;
    if ( !v34 )
      goto LABEL_37;
    if ( v34 == 1 )
    {
      v21 = *v20++ + 37 * v21;
LABEL_37:
      v21 = *v20++ + 37 * v21;
LABEL_38:
      v21 = *v20++ + 37 * v21;
LABEL_39:
      v21 = *v20++ + 37 * v21;
LABEL_40:
      v21 = *v20++ + 37 * v21;
LABEL_25:
      v21 = *v20++ + 37 * v21;
LABEL_26:
      v21 = *v20 + 37 * v21;
    }
    v13 += v18;
    v27 = &Pool2[16 * i + 40 + 8 * i];
    v27[1] = v21;
    v27[2] = v16;
    v11 = v36;
    v38 = v21 & (-1LL << (*v12 & 0x1F));
    v28 = ((*v12 >> 5) - 1) & (HIBYTE(v38)
                             + 37
                             * (BYTE6(v38)
                              + 37
                              * (BYTE5(v38)
                               + 37
                               * (BYTE4(v38)
                                + 37
                                * (BYTE3(v38)
                                 + 374026047
                                 + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * (unsigned int)(unsigned __int8)v38)))))));
    v29 = *v35;
    *v27 = *(_QWORD *)(*v35 + 8 * v28);
    *(_QWORD *)(v29 + 8 * v28) = v27;
    ++*((_DWORD *)Pool2 + 6);
  }
  if ( v13 != v6 )
  {
LABEL_29:
    v2 = -1073741811;
    EtwpFreeEventNameFilter(Pool2);
    return v2;
  }
  *a2 = Pool2;
  return v2;
}
