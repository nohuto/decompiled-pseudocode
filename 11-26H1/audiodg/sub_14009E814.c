/*
 * XREFs of sub_14009E814 @ 0x14009E814
 * Callers:
 *     sub_14009ECD0 @ 0x14009ECD0 (sub_14009ECD0.c)
 *     sub_1400A20F4 @ 0x1400A20F4 (sub_1400A20F4.c)
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

char *__fastcall sub_14009E814(_QWORD *a1, _QWORD *a2, unsigned int *a3, unsigned int *a4, unsigned int *a5, char *a6)
{
  _QWORD *v6; // rdi
  int *v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  char v19; // dl
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax
  char *result; // rax

  v6 = a1 + 12;
  v11 = (int *)a1[11];
  if ( v11[45] == -1 )
  {
    v20 = *v11;
    v21 = a1[11];
    *a3 = v20;
    v22 = *(_DWORD *)(v21 + 4);
    v23 = *v6;
    *a4 = v22;
    *a5 = *(_DWORD *)(v23 + 132);
    *a2 = a1[17];
    v19 = 0;
    goto LABEL_8;
  }
  v12 = v11[46];
  v13 = a1[11];
  *a3 = v12;
  v14 = *(_DWORD *)(v13 + 188);
  *a4 = v14;
  if ( v12 != v14 )
  {
    v15 = *(_DWORD *)(*v6 + 148LL);
    if ( v12 < v15 )
    {
      *a2 = a1[18];
      v19 = 1;
      *a5 = v15;
      goto LABEL_8;
    }
    sub_140048108();
  }
  *a2 = a1[17];
  v16 = (unsigned int *)a1[11];
  *a3 = *v16;
  v17 = v16[1];
  v18 = *v6;
  *a4 = v17;
  *a5 = *(_DWORD *)(v18 + 132);
  v19 = 0;
  _InterlockedExchange((volatile __int32 *)(a1[11] + 180LL), -1);
  _InterlockedExchange((volatile __int32 *)(a1[11] + 184LL), 0);
  _InterlockedExchange((volatile __int32 *)(a1[11] + 188LL), 0);
LABEL_8:
  result = a6;
  *a6 = v19;
  return result;
}
