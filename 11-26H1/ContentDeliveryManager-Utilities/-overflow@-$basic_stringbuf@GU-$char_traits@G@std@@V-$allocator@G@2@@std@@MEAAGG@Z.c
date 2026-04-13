/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x18005EA00
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x1800492A4 (--$_Allocate@G@std@@YAPEAG_KPEAG@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005CF58 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  int **v9; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  _WORD **v12; // rcx
  unsigned __int16 *v13; // rdx
  __int64 **v14; // r15
  void ***v15; // r13
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rsi
  void *v20; // r13
  __int64 v21; // r8
  __int64 *v22; // rax
  bool v23; // zf
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  _DWORD *v30; // rax
  unsigned __int64 v31; // [rsp+50h] [rbp+8h]

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFLL;
  if ( a2 == 0xFFFF )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 112) & 8) != 0 )
  {
    v5 = *(unsigned __int64 **)(a1 + 64);
    v6 = *v5;
    if ( *v5 )
    {
      v7 = *(_QWORD *)(a1 + 104);
      if ( v6 < v7 )
      {
        v8 = **(int **)(a1 + 88);
        *v5 = v7;
        **(_DWORD **)(a1 + 88) = (__int64)(v6 + 2 * v8 - v7) >> 1;
      }
    }
  }
  v9 = (int **)(a1 + 88);
  v10 = **(_QWORD **)(a1 + 64);
  if ( !v10 )
  {
    v14 = (__int64 **)(a1 + 24);
    v16 = 0LL;
    v15 = (void ***)(a1 + 24);
LABEL_15:
    v17 = 32LL;
    goto LABEL_16;
  }
  v11 = **v9;
  if ( v10 < 2 * v11 + v10 )
  {
    **v9 = v11 - 1;
LABEL_11:
    v12 = *(_WORD ***)(a1 + 64);
    v13 = (*v12)++;
    result = a2;
    *v13 = a2;
    return result;
  }
  v14 = (__int64 **)(a1 + 24);
  v15 = (void ***)(a1 + 24);
  v16 = (__int64)(2 * v11 + v10 - **(_QWORD **)(a1 + 24)) >> 1;
  v17 = v16 >> 1;
  if ( v16 >> 1 < 0x20 )
    goto LABEL_15;
  do
  {
LABEL_16:
    if ( 0x7FFFFFFF - v17 >= v16 )
      break;
    v17 >>= 1;
  }
  while ( v17 );
  if ( v17 )
  {
    v31 = v17 + v16;
    v18 = std::_Allocate<unsigned short>(v17 + v16);
    v19 = (__int64)v18;
    v20 = **v15;
    if ( v16 )
      std::char_traits<wchar_t>::copy(v18, v20, v16);
    v21 = 2 * v31;
    if ( v16 )
    {
      *(_QWORD *)(a1 + 104) = v19 + 2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v20) >> 1);
      v25 = v19 + 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v20) >> 1);
      v26 = (v21 - 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v20) >> 1)) >> 1;
      **(_QWORD **)(a1 + 32) = v19 + 2 * ((__int64)(**(_QWORD **)(a1 + 32) - (_QWORD)v20) >> 1);
      **(_QWORD **)(a1 + 64) = v25;
      **v9 = v26;
      if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
      {
        v27 = **(_QWORD **)(a1 + 64) + 2LL;
        v28 = (__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v20) >> 1;
        **v14 = v19;
        v29 = v19 + 2 * v28;
        **(_QWORD **)(a1 + 56) = v29;
        **(_DWORD **)(a1 + 80) = (v27 - v29) >> 1;
        goto LABEL_28;
      }
      **v14 = v19;
      v24 = *(__int64 **)(a1 + 56);
    }
    else
    {
      v22 = *(__int64 **)(a1 + 32);
      *(_QWORD *)(a1 + 104) = v19;
      *v22 = v19;
      **(_QWORD **)(a1 + 64) = v19;
      **v9 = v21 >> 1;
      v23 = (*(_DWORD *)(a1 + 112) & 4) == 0;
      **v14 = v19;
      v24 = *(__int64 **)(a1 + 56);
      if ( v23 )
      {
        *v24 = v19;
        **(_DWORD **)(a1 + 80) = 1;
LABEL_28:
        if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
          operator delete(v20);
        v30 = *v9;
        *(_DWORD *)(a1 + 112) |= 1u;
        --*v30;
        goto LABEL_11;
      }
    }
    *v24 = 0LL;
    **(_DWORD **)(a1 + 80) = v19 >> 1;
    goto LABEL_28;
  }
  return 0xFFFFLL;
}
