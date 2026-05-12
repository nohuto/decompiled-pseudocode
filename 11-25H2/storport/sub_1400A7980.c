/*
 * XREFs of sub_1400A7980 @ 0x1400A7980
 * Callers:
 *     sub_14009DFB0 @ 0x14009DFB0 (sub_14009DFB0.c)
 * Callees:
 *     sub_1400A739C @ 0x1400A739C (sub_1400A739C.c)
 */

NTSTATUS __fastcall sub_1400A7980(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r12
  __int64 v5; // rbx
  char v6; // r11
  int v7; // r13d
  NTSTATUS result; // eax
  char v9; // r15
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  unsigned int *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // r10
  char v17; // r14
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  unsigned int *v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v25; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v4 = a1;
  v5 = 0LL;
  v6 = *(_BYTE *)(v2 + 2);
  if ( v6 == 40 )
    v7 = *(_DWORD *)(v2 + 20);
  else
    v7 = *(unsigned __int8 *)(v2 + 2);
  v25 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v25 + 104);
  if ( !v7 )
  {
    if ( v6 == 40 )
    {
      v9 = 0;
      if ( !*(_DWORD *)(v2 + 20) )
      {
        v10 = *(_DWORD *)(v2 + 56);
        v11 = 0;
        if ( v10 )
        {
          v12 = (unsigned int *)(v2 + 120);
          do
          {
            v13 = *v12;
            v14 = v5;
            if ( (unsigned int)v13 >= 0x80 )
            {
              v15 = *(unsigned int *)(v2 + 16);
              if ( (unsigned int)v13 < (unsigned int)v15 )
              {
                if ( *(_DWORD *)(v13 + v2) == 64 )
                {
                  if ( v13 + 40 <= v15 )
                  {
                    v4 = a1;
                    if ( *(_BYTE *)(v13 + v2 + 10) )
                      v5 = v13 + v2 + 24;
                    goto LABEL_28;
                  }
                }
                else if ( *(_DWORD *)(v13 + v2) == 65 )
                {
                  if ( v13 + 56 <= v15 )
                  {
                    v9 = 1;
                    if ( !*(_BYTE *)(v13 + v2 + 10) )
                      break;
                    v5 = v13 + v2 + 24;
                  }
                }
                else if ( *(_DWORD *)(v13 + v2) == 66 && v13 + 40 <= v15 )
                {
                  v5 = v13 + v2 + 32;
                  if ( !*(_DWORD *)(v13 + v2 + 12) )
                    v5 = v14;
                  break;
                }
                if ( v9 )
                  break;
              }
            }
            ++v11;
            ++v12;
          }
          while ( v11 < v10 );
        }
        v4 = a1;
      }
    }
    else
    {
      v5 = v2 + 72;
    }
LABEL_28:
    if ( v5 )
    {
      v16 = 0;
      if ( v6 == 40 )
      {
        v17 = 0;
        if ( !*(_DWORD *)(v2 + 20) )
        {
          v18 = *(_DWORD *)(v2 + 56);
          v19 = 0;
          if ( v18 )
          {
            v20 = (unsigned int *)(v2 + 120);
            do
            {
              v21 = *v20;
              if ( (unsigned int)v21 >= 0x80 )
              {
                v22 = *(unsigned int *)(v2 + 16);
                if ( (unsigned int)v21 < (unsigned int)v22 )
                {
                  if ( *(_DWORD *)(v21 + v2) == 64 )
                  {
                    if ( v21 + 40 <= v22 )
                    {
                      v16 = *(_BYTE *)(v21 + v2 + 10);
                      break;
                    }
                  }
                  else if ( *(_DWORD *)(v21 + v2) == 65 )
                  {
                    if ( v21 + 56 <= v22 )
                    {
                      v16 = *(_BYTE *)(v21 + v2 + 10);
                      v17 = 1;
                    }
                  }
                  else if ( *(_DWORD *)(v21 + v2) == 66 && v21 + 40 <= v22 )
                  {
                    break;
                  }
                  if ( v17 )
                    break;
                }
              }
              ++v19;
              ++v20;
            }
            while ( v19 < v18 );
          }
        }
      }
      else
      {
        v16 = *(_BYTE *)(v2 + 10);
      }
      v3 = v16;
    }
  }
  if ( (byte_1401694F4 & 0x10) != 0 )
  {
    v23 = v25 + 2104;
    LOBYTE(v23) = BYTE1(result);
    return sub_1400A739C(
             v23,
             *(_QWORD *)(v25 + 24),
             (const GUID *)(v4 + 728),
             *(const wchar_t **)(a2 + 8),
             *(_DWORD *)(*(_QWORD *)(v25 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v25 + 2104,
             v7,
             v3,
             v5);
  }
  return result;
}
