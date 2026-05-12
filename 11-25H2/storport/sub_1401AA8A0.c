/*
 * XREFs of sub_1401AA8A0 @ 0x1401AA8A0
 * Callers:
 *     sub_14001C790 @ 0x14001C790 (sub_14001C790.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14001DAE0 @ 0x14001DAE0 (sub_14001DAE0.c)
 *     sub_14001E2C0 @ 0x14001E2C0 (sub_14001E2C0.c)
 *     sub_14001E870 @ 0x14001E870 (sub_14001E870.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void *__fastcall sub_1401AA8A0(unsigned int *Dst)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  void *result; // rax
  unsigned int v8; // r10d
  __int64 v9; // r12
  unsigned int v10; // r13d
  size_t v11; // r14
  unsigned int *v12; // r9
  unsigned int i; // eax
  int v14; // edx
  int v15; // esi
  int v16; // esi
  void *v17; // [rsp+50h] [rbp+8h]

  v1 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( *((_BYTE *)Dst + 2) != 40 )
  {
    v5 = *((_QWORD *)Dst + 4);
    v6 = *((_QWORD *)Dst + 7);
    result = memset_0(Dst, 0, 0x58uLL);
    *((_QWORD *)Dst + 4) = v5;
    *((_QWORD *)Dst + 7) = v6;
    return result;
  }
  v8 = 0;
  v9 = Dst[30];
  v10 = Dst[14];
  v11 = Dst[4];
  v17 = (void *)*((_QWORD *)Dst + 13);
  if ( !v10 )
    goto LABEL_11;
  v12 = Dst + 30;
  for ( i = Dst[30]; ; i = *v12 )
  {
    if ( i < 0x80 || i > (unsigned int)v11 )
      goto LABEL_21;
    v14 = *(unsigned int *)((char *)Dst + i);
    if ( v14 == 64 )
    {
      if ( (unsigned __int64)i + 40 <= v11 )
        goto LABEL_9;
      goto LABEL_21;
    }
    if ( v14 != 65 )
      break;
    if ( (unsigned __int64)i + 56 <= v11 )
    {
LABEL_9:
      v1 = *(_QWORD *)((char *)Dst + i + 16);
      goto LABEL_10;
    }
LABEL_21:
    ++v8;
    ++v12;
    if ( v8 >= v10 )
      goto LABEL_11;
  }
  if ( v14 != 66 || (unsigned __int64)i + 40 > v11 )
    goto LABEL_21;
  v1 = *(_QWORD *)((char *)Dst + i + 24);
LABEL_10:
  v4 = *(unsigned int *)((char *)Dst + i + 4);
  v3 = *(unsigned int *)((char *)Dst + i);
LABEL_11:
  memset_0(Dst, 0, v11);
  result = v17;
  Dst[4] = v11;
  Dst[14] = v10;
  *((_QWORD *)Dst + 13) = v17;
  *(_WORD *)Dst = 8;
  *((_BYTE *)Dst + 2) = 40;
  Dst[30] = v9;
  v15 = v3 - 64;
  if ( !v15 )
  {
    *(unsigned int *)((char *)Dst + v9) = 64;
    goto LABEL_25;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    *(unsigned int *)((char *)Dst + v9) = 65;
LABEL_25:
    *(unsigned int *)((char *)Dst + v9 + 4) = v4;
    *(_QWORD *)((char *)Dst + v9 + 16) = v1;
    return result;
  }
  if ( v16 == 1 )
  {
    *(unsigned int *)((char *)Dst + v9) = 66;
    *(unsigned int *)((char *)Dst + v9 + 4) = v4;
    *(_QWORD *)((char *)Dst + v9 + 24) = v1;
  }
  return result;
}
