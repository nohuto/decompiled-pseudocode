/*
 * XREFs of ?seekoff@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MEAA?AV?$fpos@H@2@_JHH@Z @ 0x18005EF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstringbuf::seekoff(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int64 *v5; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edx
  __int64 result; // rax

  v5 = *(unsigned __int64 **)(a1 + 64);
  v8 = *v5;
  if ( *v5 && *(_QWORD *)(a1 + 104) < v8 )
    *(_QWORD *)(a1 + 104) = v8;
  if ( (a5 & 1) != 0 )
  {
    v9 = **(_QWORD **)(a1 + 56);
    if ( v9 )
    {
      v10 = std::_BADOFF;
      switch ( a4 )
      {
        case 2:
          v11 = *(_QWORD **)(a1 + 24);
          v12 = *(_QWORD *)(a1 + 104);
LABEL_11:
          a3 += (v12 - *v11) >> 1;
LABEL_14:
          if ( a3 >= 0 )
          {
            v13 = **(_QWORD **)(a1 + 24);
            if ( a3 <= (*(_QWORD *)(a1 + 104) - v13) >> 1 )
            {
              v14 = ((v13 - v9) >> 1) + a3;
              **(_DWORD **)(a1 + 80) -= v14;
              **(_QWORD **)(a1 + 56) += 2LL * v14;
              if ( (a5 & 2) != 0 )
              {
                v15 = *(_QWORD **)(a1 + 64);
                if ( *v15 )
                {
                  v16 = *v15 + 2LL * **(int **)(a1 + 88);
                  v17 = **(_QWORD **)(a1 + 56);
                  *v15 = v17;
                  **(_DWORD **)(a1 + 88) = (v16 - v17) >> 1;
                }
              }
              goto LABEL_34;
            }
          }
LABEL_31:
          a3 = v10;
          goto LABEL_34;
        case 1:
          if ( (a5 & 2) == 0 )
          {
            v11 = *(_QWORD **)(a1 + 24);
            v12 = **(_QWORD **)(a1 + 56);
            goto LABEL_11;
          }
          break;
        case 0:
          goto LABEL_14;
      }
      a3 = std::_BADOFF;
      goto LABEL_14;
    }
  }
  if ( (a5 & 2) != 0 && *v5 )
  {
    v10 = std::_BADOFF;
    if ( a4 == 2 )
    {
      v18 = *(_QWORD **)(a1 + 24);
      v19 = *(_QWORD *)(a1 + 104);
    }
    else
    {
      if ( a4 != 1 )
      {
        if ( a4 )
          a3 = std::_BADOFF;
LABEL_28:
        if ( a3 >= 0 )
        {
          v20 = **(_QWORD **)(a1 + 24);
          if ( a3 <= (*(_QWORD *)(a1 + 104) - v20) >> 1 )
          {
            v21 = ((__int64)(v20 - *v5) >> 1) + a3;
            **(_DWORD **)(a1 + 88) -= v21;
            **(_QWORD **)(a1 + 64) += 2LL * v21;
            goto LABEL_34;
          }
        }
        goto LABEL_31;
      }
      v18 = *(_QWORD **)(a1 + 24);
      v19 = *v5;
    }
    a3 += (__int64)(v19 - *v18) >> 1;
    goto LABEL_28;
  }
  if ( a3 )
    a3 = std::_BADOFF;
LABEL_34:
  result = a2;
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
