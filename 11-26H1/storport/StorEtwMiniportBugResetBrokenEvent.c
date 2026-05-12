/*
 * XREFs of StorEtwMiniportBugResetBrokenEvent @ 0x1400B13B0
 * Callers:
 *     StorTickEventQueue @ 0x1400341D0 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer @ 0x1400B0364 (McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugResetBrokenEvent(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // edi
  __int64 v6; // rsi
  char v7; // r11
  int v8; // r12d
  __int64 v9; // r15
  NTSTATUS result; // eax
  char v11; // bp
  unsigned int v12; // r14d
  unsigned int i; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // r8
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  unsigned __int8 v20; // r8
  char v21; // bp
  unsigned int v22; // r14d
  unsigned int j; // ebx
  __int64 v24; // rdx
  unsigned __int64 v25; // r11
  __int64 v26; // r10
  int v27; // edx
  int v28; // edx
  __int64 v29; // rcx

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v6 = 0LL;
  v7 = *(_BYTE *)(v3 + 2);
  if ( v7 == 40 )
    v8 = *(_DWORD *)(v3 + 20);
  else
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v9 + 104);
  if ( !v8 )
  {
    if ( v7 == 40 )
    {
      v11 = 0;
      if ( !*(_DWORD *)(v3 + 20) )
      {
        v12 = *(_DWORD *)(v3 + 56);
        for ( i = 0; i < v12; ++i )
        {
          v14 = *(unsigned int *)(v3 + 4LL * i + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v15 = *(unsigned int *)(v3 + 16);
            if ( (unsigned int)v14 < (unsigned int)v15 )
            {
              v16 = (unsigned int)v14;
              v17 = *(_DWORD *)(v14 + v3) - 64;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 && v16 + 40 <= v15 )
                  {
                    v19 = v16 + v3 + 32;
                    if ( !*(_DWORD *)(v16 + v3 + 12) )
                      v19 = v6;
                    v6 = v19;
                    break;
                  }
                }
                else if ( v16 + 56 <= v15 )
                {
                  v11 = 1;
                  if ( !*(_BYTE *)(v16 + v3 + 10) )
                    break;
                  v6 = v16 + v3 + 24;
                }
              }
              else if ( v16 + 40 <= v15 )
              {
                if ( *(_BYTE *)(v16 + v3 + 10) )
                  v6 = v16 + v3 + 24;
                break;
              }
              if ( v11 )
                break;
            }
          }
        }
      }
    }
    else
    {
      v6 = v3 + 72;
    }
    if ( v6 )
    {
      v20 = 0;
      if ( v7 == 40 )
      {
        v21 = 0;
        if ( !*(_DWORD *)(v3 + 20) )
        {
          v22 = *(_DWORD *)(v3 + 56);
          for ( j = 0; j < v22; ++j )
          {
            v24 = *(unsigned int *)(v3 + 4LL * j + 120);
            if ( (unsigned int)v24 >= 0x80 )
            {
              v25 = *(unsigned int *)(v3 + 16);
              if ( (unsigned int)v24 < (unsigned int)v25 )
              {
                v26 = (unsigned int)v24;
                v27 = *(_DWORD *)(v24 + v3) - 64;
                if ( v27 )
                {
                  v28 = v27 - 1;
                  if ( v28 )
                  {
                    if ( v28 == 1 && v26 + 40 <= v25 )
                      break;
                  }
                  else if ( v26 + 56 <= v25 )
                  {
                    v20 = *(_BYTE *)(v26 + v3 + 10);
                    v21 = 1;
                  }
                }
                else if ( v26 + 40 <= v25 )
                {
                  v20 = *(_BYTE *)(v26 + v3 + 10);
                  break;
                }
                if ( v21 )
                  break;
              }
            }
          }
        }
      }
      else
      {
        v20 = *(_BYTE *)(v3 + 10);
      }
      v4 = v20;
    }
  }
  if ( (byte_140173444 & 0x10) != 0 )
  {
    v29 = v9 + 242;
    LOBYTE(v29) = BYTE1(result);
    return McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer(
             v29,
             v9 + 177,
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(a3 + 8),
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             *(_QWORD *)(v9 + 24) + 5128LL,
             result,
             SBYTE1(result),
             SBYTE2(result),
             v9 + 2104,
             (const char *)(v9 + 168),
             (const char *)(v9 + 177),
             (const char *)(v9 + 242),
             v8,
             v4,
             v6,
             a2);
  }
  return result;
}
