/*
 * XREFs of sub_140011F70 @ 0x140011F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140014D70 @ 0x140014D70 (sub_140014D70.c)
 *     sub_140018090 @ 0x140018090 (sub_140018090.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028320 @ 0x140028320 (sub_140028320.c)
 */

__int64 __fastcall sub_140011F70(__int64 a1)
{
  char v1; // r13
  char v2; // di
  unsigned __int16 v4; // r12
  __int64 result; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // r9
  _QWORD *v14; // rdi
  __int64 v15; // r9
  _QWORD *v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  _QWORD *v21; // rdi
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  _OWORD v31[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  memset(v31, 0, 32);
  v2 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4276));
  v4 = 0;
  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 4272), 0);
  if ( !*(_WORD *)(a1 + 330) )
    return result;
  do
  {
    v6 = *(_QWORD *)(a1 + 936) + 208LL * v4;
    if ( byte_140042130 )
    {
      if ( *(_QWORD *)(v6 + 160)
        || *(_QWORD *)(v6 + 144)
        || *(_QWORD *)(v6 + 176)
        || *(_QWORD *)(v6 + 192)
        || *(_QWORD *)(v6 + 200) )
      {
        StorPortExtendedFunction(93LL, a1, 1LL, v6 + 64);
        v7 = *(_QWORD **)(v6 + 192);
        *(_QWORD *)(v6 + 192) = 0LL;
        v8 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
        v9 = *(_QWORD *)(v6 + 160);
        if ( v9 )
        {
          do
          {
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v9 + 3) + 1672) + 20LL) & 0x200) != 0 )
            {
              if ( *(_QWORD *)(v6 + 176) )
                *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8LL) = v9;
              else
                *(_QWORD *)(v6 + 176) = v9;
              *(_QWORD *)(v6 + 184) = v9;
            }
            else
            {
              if ( *(_QWORD *)(v6 + 144) )
                *(_QWORD *)(*(_QWORD *)(v6 + 152) + 8LL) = v9;
              else
                *(_QWORD *)(v6 + 144) = v9;
              *(_QWORD *)(v6 + 152) = v9;
            }
            *(_QWORD *)(v6 + 160) = *(_QWORD *)(v9 + 8);
            *(_QWORD *)(v9 + 8) = 0LL;
            v9 = *(_QWORD *)(v6 + 160);
          }
          while ( v9 );
          *(_QWORD *)(v6 + 168) = 0LL;
        }
        if ( (*(_DWORD *)(a1 + 4056) & 0x80u) != 0 && *(_DWORD *)(a1 + 4288) != -1 )
        {
          v10 = *(_QWORD *)(v6 + 144);
          if ( v10 )
          {
            while ( *(_DWORD *)(a1 + 4276) - *(_DWORD *)(v10 + 16) < *(_DWORD *)(a1 + 4288) / 0x3E8u )
            {
              v10 = *(_QWORD *)(v10 + 8);
              if ( !v10 )
                goto LABEL_27;
            }
            v1 = 1;
          }
        }
LABEL_27:
        StorPortNotification(4100LL, a1, v31);
        while ( v7 )
        {
          v12 = v7;
          v7 = (_QWORD *)v7[3];
          StorPortExtendedFunction(1LL, a1, *v12, v11);
          StorPortExtendedFunction(1LL, a1, v12, v13);
        }
        while ( v8 )
        {
          v14 = (_QWORD *)v8;
          v8 = *(_QWORD *)(v8 + 24);
          StorPortExtendedFunction(1LL, a1, *v14, v11);
          StorPortExtendedFunction(1LL, a1, v14, v15);
        }
LABEL_52:
        sub_140014D70(a1, v6, 0LL, 0LL, v31);
        v2 = 1;
      }
    }
    else if ( *(_QWORD *)(v6 + 160) || *(_QWORD *)(v6 + 144) || *(_QWORD *)(v6 + 192) || *(_QWORD *)(v6 + 200) )
    {
      StorPortExtendedFunction(93LL, a1, 1LL, v6 + 64);
      v16 = *(_QWORD **)(v6 + 192);
      *(_QWORD *)(v6 + 192) = 0LL;
      v17 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
      v18 = *(_QWORD *)(v6 + 160);
      if ( v18 )
      {
        if ( *(_QWORD *)(v6 + 144) )
          *(_QWORD *)(*(_QWORD *)(v6 + 152) + 8LL) = v18;
        else
          *(_QWORD *)(v6 + 144) = v18;
        *(_QWORD *)(v6 + 152) = *(_QWORD *)(v6 + 168);
        *(_QWORD *)(v6 + 160) = 0LL;
        *(_QWORD *)(v6 + 168) = 0LL;
      }
      if ( (*(_DWORD *)(a1 + 4056) & 0x80u) != 0 && *(_DWORD *)(a1 + 4288) != -1 )
      {
        v19 = *(_QWORD *)(v6 + 144);
        if ( v19 )
        {
          while ( *(_DWORD *)(a1 + 4276) - *(_DWORD *)(v19 + 16) < *(_DWORD *)(a1 + 4288) / 0x3E8u )
          {
            v19 = *(_QWORD *)(v19 + 8);
            if ( !v19 )
              goto LABEL_48;
          }
          v1 = 1;
        }
      }
LABEL_48:
      StorPortNotification(4100LL, a1, v31);
      while ( v16 )
      {
        v21 = v16;
        v16 = (_QWORD *)v16[3];
        StorPortExtendedFunction(1LL, a1, *v21, v20);
        StorPortExtendedFunction(1LL, a1, v21, v22);
      }
      while ( v17 )
      {
        v23 = (_QWORD *)v17;
        v17 = *(_QWORD *)(v17 + 24);
        StorPortExtendedFunction(1LL, a1, *v23, v20);
        StorPortExtendedFunction(1LL, a1, v23, v24);
      }
      goto LABEL_52;
    }
    result = *(unsigned int *)(a1 + 4056);
    if ( (result & 0x80u) == 0LL
      || (result = (unsigned int)(274877907 * *(_DWORD *)(a1 + 4292)),
          v25 = *(_DWORD *)(a1 + 4292) / 0x3E8u,
          !(_DWORD)v25) )
    {
      v25 = 10LL;
    }
    v26 = 0;
    if ( *(_WORD *)(a1 + 328) )
    {
      while ( 1 )
      {
        v27 = 32LL * v26;
        result = *(_DWORD *)(v27 + *(_QWORD *)(v6 + 32)) & 0x48;
        if ( (*(_BYTE *)(v27 + *(_QWORD *)(v6 + 32)) & 0x48) == 0x48 )
        {
          v2 = 1;
          result = (unsigned int)(*(_DWORD *)(a1 + 4276) - *(_DWORD *)(v27 + *(_QWORD *)(v6 + 32) + 4));
          if ( (unsigned int)result >= (unsigned int)v25 )
            break;
        }
        if ( ++v26 >= *(_WORD *)(a1 + 328) )
          goto LABEL_62;
      }
      v1 = 1;
    }
LABEL_62:
    ++v4;
  }
  while ( v4 < *(_WORD *)(a1 + 330) );
  if ( v1 )
  {
    result = *(unsigned int *)(a1 + 3748);
    if ( (result & 1) == 0 )
    {
      v28 = *(_DWORD *)(a1 + 4056);
      v29 = *(_DWORD *)(a1 + 4300) / 0xAu;
      if ( (v28 & 0x80u) != 0 && (v28 & 0x100) == 0 )
      {
        if ( (_DWORD)v29 )
        {
          v25 = *(unsigned int *)(a1 + 4280);
          if ( (_DWORD)v25 )
          {
            if ( *(_DWORD *)(a1 + 4276) - (int)v25 < (unsigned int)v29 )
              *(_DWORD *)(a1 + 4056) = v28 | 0x100;
          }
        }
      }
      StorPortQuerySystemTime(a1 + 4304, v29, v25);
      result = sub_140018090(a1, 0LL, sub_140028320, 0LL);
      if ( !(_BYTE)result )
      {
        v30 = sub_14001ED94(a1, 0LL);
        result = sub_140028320(a1, v30, 0LL);
      }
    }
  }
  if ( v2 )
  {
    result = *(unsigned int *)(a1 + 4272);
    if ( !(_DWORD)result && !_InterlockedExchange((volatile __int32 *)(a1 + 4272), 1) )
      return StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 4264), sub_140011F70);
  }
  return result;
}
