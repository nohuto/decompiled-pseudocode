/*
 * XREFs of IovpAdvanceStackDownwards @ 0x140C31120
 * Callers:
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x140C4BD80 (IovpCompleteRequest1.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IovpAdvanceStackDownwards(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // r14d
  unsigned __int8 *v11; // rdi
  int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // rax
  char *v15; // r15
  _QWORD *v16; // rsi
  _QWORD *v17; // rbx
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+70h] [rbp+8h]
  unsigned __int8 *v21; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v22; // [rsp+88h] [rbp+20h]

  v8 = a7;
  v11 = (unsigned __int8 *)(a1 + 120LL * a2 - 120);
  if ( !*v11 && a7 )
  {
    memset_0(v11, 0, 0x78uLL);
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    *((_QWORD *)v11 + 4) = a3;
  }
  v12 = 0;
  if ( a4 )
  {
    if ( a5 <= 0 )
      goto LABEL_12;
    v13 = *(_QWORD *)&v11[120 * a5 + 8];
    v22 = &v11[120 * a5 + 48];
    v21 = &v11[120 * a5 + 56];
    v14 = *(_QWORD *)&v11[120 * a5 + 40];
    *((_QWORD *)v11 + 1) = v13;
    v12 = *(_DWORD *)&v11[120 * a5 + 4] & 0x10000000;
    v20 = v14;
    *((_DWORD *)v11 + 1) |= v12;
  }
  else
  {
    v20 = 0LL;
    v13 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
  }
  v15 = (char *)v11;
  if ( a5 > 1 )
  {
    v16 = v11 + 16;
    v19 = (unsigned int)(a5 - 1);
    do
    {
      v15 += 120;
      v17 = v16;
      v16 += 15;
      a3 += 72LL;
      memset_0(v15, 0, 0x78uLL);
      v16[1] = v16;
      *v16 = v16;
      *((_BYTE *)v17 + 104) = 1;
      v16[2] = a3;
      *(v16 - 1) = v13;
      v16[4] = *(_QWORD *)v22;
      v16[5] = *(_QWORD *)v21;
      v16[3] = v20;
      *((_DWORD *)v16 - 3) |= v12 | 0x800000;
      --v19;
    }
    while ( v19 );
    v8 = a7;
  }
LABEL_12:
  *a8 = v11;
  if ( !v8 )
    return *v11;
  if ( a6 )
    *((_QWORD *)v11 + 1) = v11;
  result = *v11;
  *v11 = 1;
  return result;
}
