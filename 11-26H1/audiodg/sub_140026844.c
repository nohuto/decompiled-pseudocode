/*
 * XREFs of sub_140026844 @ 0x140026844
 * Callers:
 *     sub_1400267D0 @ 0x1400267D0 (sub_1400267D0.c)
 *     sub_140026844 @ 0x140026844 (sub_140026844.c)
 * Callees:
 *     sub_140026844 @ 0x140026844 (sub_140026844.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140026844(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // edx
  int v8; // r12d
  int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // rax
  const void *v12; // rsi
  int v13; // edi
  unsigned int v14; // ebx
  __int64 v15; // rax
  void *v16; // rdi
  unsigned int v17; // ebx
  const void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h]
  __int64 v23; // [rsp+30h] [rbp-10h]

  if ( !*(_BYTE *)(a1 + 80) )
  {
    v21 = *(_DWORD *)(a1 + 84);
    v23 = 1094930515LL;
    v22 = 2;
    v20 = 0LL;
    *(_BYTE *)(a1 + 80) = 1;
    sub_140026844(a1, &v20);
  }
  if ( !*(_BYTE *)(a1 + 81) )
    goto LABEL_4;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = *(_DWORD *)(a1 + 76);
  if ( (unsigned int)(v8 + v7) >= *(_DWORD *)(a1 + 72) )
  {
    *(_BYTE *)(a1 + 81) = 0;
LABEL_4:
    if ( *(_DWORD *)(a1 + 76) )
    {
      v16 = (void *)sub_1400B6010(*(_QWORD *)(a1 + 48));
      if ( v16 )
      {
        v17 = *(_DWORD *)(a1 + 76) * *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 12LL);
        v18 = (const void *)sub_1400B6010(*(_QWORD *)(a1 + 64));
        memcpy(v16, v18, v17);
        v19 = *(_QWORD *)(a1 + 48);
        v21 = *(_DWORD *)(a1 + 76);
        v23 = 1094930515LL;
        v22 = 1;
        v20 = (__int64)v16;
        sub_1400B6010(v19);
        *(_DWORD *)(a1 + 76) = 0;
      }
    }
    result = sub_1400B6010(*(_QWORD *)(a1 + 48));
    v5 = result;
    if ( result )
    {
      if ( *(_QWORD *)a2 )
        memcpy(
          (void *)result,
          *(const void **)a2,
          *(_DWORD *)(a2 + 8) * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 12LL));
      v6 = *(_QWORD *)(a1 + 48);
      v21 = *(_DWORD *)(a2 + 8);
      v22 = *(_DWORD *)(a2 + 12);
      v23 = 1094930515LL;
      v20 = v5;
      return sub_1400B6010(v6);
    }
    return result;
  }
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
    v12 = *(const void **)a2;
    v13 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 12LL);
    v14 = v7 * v13;
    v15 = sub_1400B6010(*(_QWORD *)(a1 + 64));
    memcpy((void *)(v15 + (unsigned int)(v8 * v13)), v12, v14);
  }
  else if ( *(_DWORD *)(a2 + 12) == 2 )
  {
    v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 12LL);
    v10 = v7 * v9;
    v11 = sub_1400B6010(*(_QWORD *)(a1 + 64));
    memset((void *)(v11 + (unsigned int)(v8 * v9)), 0, v10);
  }
  result = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 76) += result;
  return result;
}
