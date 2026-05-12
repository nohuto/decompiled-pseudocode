/*
 * XREFs of StorEtwMiniportBugAbortTimeoutEvent @ 0x1400B1164
 * Callers:
 *     StorTickEventQueue @ 0x1400341D0 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0quuujqqqbr7_EtwWriteTransfer @ 0x1400AFFF8 (McTemplateK0quuujqqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortTimeoutEvent(__int64 a1)
{
  __int64 v1; // r8
  int v2; // r10d
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // r8
  char v9; // di
  int v10; // r15d
  __int64 v11; // r13
  NTSTATUS result; // eax
  char v13; // bp
  unsigned int v14; // r14d
  unsigned int i; // ebx
  __int64 v16; // rdx
  unsigned __int64 v17; // r11
  __int64 v18; // r9
  int v19; // edx
  int v20; // edx
  __int64 v21; // rdx
  unsigned __int8 v22; // r9
  char v23; // r14
  unsigned int v24; // ebp
  unsigned int j; // edi
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // r11
  int v29; // edx
  int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // [rsp+A8h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v4 = 0LL;
  v5 = 40LL;
  if ( *(_BYTE *)(v1 + 2) != 40 )
    v5 = 20LL;
  v32 = *(_DWORD *)(v5 + v1);
  v6 = 64LL;
  if ( *(_BYTE *)(v1 + 2) != 40 )
    v6 = 24LL;
  v7 = *(__int64 **)(v6 + v1);
  v8 = *v7;
  v9 = *(_BYTE *)(*v7 + 2);
  if ( v9 == 40 )
    v10 = *(_DWORD *)(v8 + 20);
  else
    v10 = *(unsigned __int8 *)(*v7 + 2);
  v11 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v11 + 104);
  if ( !v10 )
  {
    if ( v9 == 40 )
    {
      v13 = 0;
      if ( !*(_DWORD *)(v8 + 20) )
      {
        v14 = *(_DWORD *)(v8 + 56);
        for ( i = 0; i < v14; ++i )
        {
          v16 = *(unsigned int *)(v8 + 4LL * i + 120);
          if ( (unsigned int)v16 >= 0x80 )
          {
            v17 = *(unsigned int *)(v8 + 16);
            if ( (unsigned int)v16 < (unsigned int)v17 )
            {
              v18 = (unsigned int)v16;
              v19 = *(_DWORD *)(v16 + v8) - 64;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  if ( v20 == 1 && v18 + 40 <= v17 )
                  {
                    v21 = v18 + v8 + 32;
                    if ( !*(_DWORD *)(v18 + v8 + 12) )
                      v21 = v4;
                    v4 = v21;
                    break;
                  }
                }
                else if ( v18 + 56 <= v17 )
                {
                  v13 = 1;
                  if ( !*(_BYTE *)(v18 + v8 + 10) )
                    break;
                  v4 = v18 + v8 + 24;
                }
              }
              else if ( v18 + 40 <= v17 )
              {
                if ( *(_BYTE *)(v18 + v8 + 10) )
                  v4 = v18 + v8 + 24;
                break;
              }
              if ( v13 )
                break;
            }
          }
        }
      }
    }
    else
    {
      v4 = v8 + 72;
    }
    if ( v4 )
    {
      v22 = 0;
      if ( v9 == 40 )
      {
        v23 = 0;
        if ( !*(_DWORD *)(v8 + 20) )
        {
          v24 = *(_DWORD *)(v8 + 56);
          for ( j = 0; j < v24; ++j )
          {
            v26 = *(unsigned int *)(v8 + 4LL * j + 120);
            if ( (unsigned int)v26 >= 0x80 )
            {
              v27 = *(unsigned int *)(v8 + 16);
              if ( (unsigned int)v26 < (unsigned int)v27 )
              {
                v28 = (unsigned int)v26;
                v29 = *(_DWORD *)(v26 + v8) - 64;
                if ( v29 )
                {
                  v30 = v29 - 1;
                  if ( v30 )
                  {
                    if ( v30 == 1 && v28 + 40 <= v27 )
                      break;
                  }
                  else if ( v28 + 56 <= v27 )
                  {
                    v22 = *(_BYTE *)(v28 + v8 + 10);
                    v23 = 1;
                  }
                }
                else if ( v28 + 40 <= v27 )
                {
                  v22 = *(_BYTE *)(v28 + v8 + 10);
                  break;
                }
                if ( v23 )
                  break;
              }
            }
          }
        }
      }
      else
      {
        v22 = *(_BYTE *)(v8 + 10);
      }
      v2 = v22;
    }
  }
  if ( (byte_140173444 & 0x20) != 0 )
  {
    v31 = v11 + 2104;
    LOBYTE(v31) = BYTE1(result);
    return McTemplateK0quuujqqqbr7_EtwWriteTransfer(
             v31,
             v32,
             (const GUID *)(a1 + 728),
             *(_DWORD *)(*(_QWORD *)(v11 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v11 + 2104,
             v32,
             v10,
             v2,
             v4);
  }
  return result;
}
