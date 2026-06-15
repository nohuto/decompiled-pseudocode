/*
 * XREFs of sub_140006D1C @ 0x140006D1C
 * Callers:
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 */

void __fastcall sub_140006D1C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  int v9; // ecx
  char v10; // di
  _DWORD *v11; // r11
  int i; // r10d
  unsigned __int8 *v13; // rax
  __int64 v14; // r9
  int v15; // edx
  int v16; // r8d
  int v17; // eax
  double v18; // xmm6_8
  __int64 v19; // rdx
  __int64 v20; // rdi
  char *v21; // rcx
  __int64 v22; // rsi
  char v23; // al
  char *v24; // rax
  char *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rdx
  char v29; // al
  char *v30; // rax
  char *v31; // rcx
  __int64 v32; // r14
  char v33; // al
  char *v34; // rax
  bool v35; // cc
  double v36; // xmm0_8
  double *v37; // rdx
  unsigned int j; // r8d
  double v39; // xmm1_8
  int v40; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  EnterCriticalSection(&stru_1400E8720);
  v9 = 0;
  v10 = 0;
  v11 = &unk_1400E8980;
  for ( i = 0; (unsigned __int64)i < 5; ++i )
  {
    v13 = (unsigned __int8 *)&unk_1400E8980 + 664 * i + 394;
    v14 = a3 - (_QWORD)v13;
    do
    {
      v15 = v13[v14];
      v16 = *v13 - v15;
      if ( v16 )
        break;
      ++v13;
    }
    while ( v15 );
    if ( !v16 )
    {
      v18 = a6;
      if ( a6 <= *((double *)&unk_1400E8980 + 83 * i + 82) )
        goto LABEL_11;
      v9 = i;
      goto LABEL_13;
    }
    v17 = v9 + 1;
    if ( !*v11 )
      v17 = v9;
    v11 += 166;
    v9 = v17;
  }
  v18 = a6;
  v35 = v9 < 5;
  if ( v9 == 5 )
  {
    v36 = a6;
    v37 = (double *)&unk_1400E8C10;
    for ( j = 0; j < 5; ++j )
    {
      v39 = v36;
      if ( v36 > *v37 )
      {
        v36 = *v37;
        v10 = 1;
      }
      v40 = j;
      if ( v39 <= *v37 )
        v40 = v9;
      v37 += 83;
      v9 = v40;
    }
    if ( v10 )
      goto LABEL_13;
    v35 = v40 < 5;
  }
  if ( !v35 )
    goto LABEL_11;
LABEL_13:
  v19 = 130LL;
  v20 = 664LL * v9;
  v21 = (char *)&unk_1400E8980 + v20 + 4;
  v22 = a4 - (_QWORD)v21;
  do
  {
    if ( v19 == -2147483516 )
      break;
    v23 = v21[v22];
    if ( !v23 )
      break;
    *v21++ = v23;
    --v19;
  }
  while ( v19 );
  v24 = v21 - 1;
  if ( v19 )
    v24 = v21;
  *v24 = 0;
  if ( !v19 )
    sub_140007934(retaddr, 58LL, "avcore\\audiocore\\server\\audiodg\\exe\\perftracker.cpp", 2147942522LL);
  v25 = (char *)&unk_1400E8980 + v20 + 134;
  v26 = 260LL;
  v27 = a5 - (_QWORD)v25;
  v28 = 260LL;
  do
  {
    if ( v28 == -2147483386 )
      break;
    v29 = v25[v27];
    if ( !v29 )
      break;
    *v25++ = v29;
    --v28;
  }
  while ( v28 );
  v30 = v25 - 1;
  if ( v28 )
    v30 = v25;
  *v30 = 0;
  if ( !v28 )
    sub_140007934(retaddr, 59LL, "avcore\\audiocore\\server\\audiodg\\exe\\perftracker.cpp", 2147942522LL);
  v31 = (char *)&unk_1400E8980 + v20 + 394;
  v32 = a3 - (_QWORD)v31;
  do
  {
    if ( v26 == -2147483386 )
      break;
    v33 = v31[v32];
    if ( !v33 )
      break;
    *v31++ = v33;
    --v26;
  }
  while ( v26 );
  v34 = v31 - 1;
  if ( v26 )
    v34 = v31;
  *v34 = 0;
  if ( !v26 )
    sub_140007934(retaddr, 60LL, "avcore\\audiocore\\server\\audiodg\\exe\\perftracker.cpp", 2147942522LL);
  *(double *)((char *)&unk_1400E8980 + v20 + 656) = v18;
  *(_DWORD *)((char *)&unk_1400E8980 + v20) = a2;
LABEL_11:
  LeaveCriticalSection(&stru_1400E8720);
}
