/*
 * XREFs of StorEtwMiniportBugAbortBrokenEvent @ 0x1400B0F38
 * Callers:
 *     RaidUnitAbortSrbCompletion @ 0x1400A6D90 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     McTemplateK0zquuujqqbr7_EtwWriteTransfer @ 0x1400B0850 (McTemplateK0zquuujqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortBrokenEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v5; // rsi
  char v6; // bl
  int v7; // r15d
  __int64 v8; // r12
  NTSTATUS result; // eax
  char v10; // bp
  unsigned int v11; // r14d
  unsigned int i; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // r11
  __int64 v15; // r10
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdx
  unsigned __int8 v19; // r10
  char v20; // bp
  unsigned int v21; // r14d
  unsigned int j; // edi
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // r11
  int v26; // edx
  int v27; // edx
  __int64 v28; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v5 = 0LL;
  v6 = *(_BYTE *)(v2 + 2);
  if ( v6 == 40 )
    v7 = *(_DWORD *)(v2 + 20);
  else
    v7 = *(unsigned __int8 *)(v2 + 2);
  v8 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v8 + 104);
  if ( !v7 )
  {
    if ( v6 == 40 )
    {
      v10 = 0;
      if ( !*(_DWORD *)(v2 + 20) )
      {
        v11 = *(_DWORD *)(v2 + 56);
        for ( i = 0; i < v11; ++i )
        {
          v13 = *(unsigned int *)(v2 + 4LL * i + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v13 < (unsigned int)v14 )
            {
              v15 = (unsigned int)v13;
              v16 = *(_DWORD *)(v13 + v2) - 64;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 == 1 && v15 + 40 <= v14 )
                  {
                    v18 = v15 + v2 + 32;
                    if ( !*(_DWORD *)(v15 + v2 + 12) )
                      v18 = v5;
                    v5 = v18;
                    break;
                  }
                }
                else if ( v15 + 56 <= v14 )
                {
                  v10 = 1;
                  if ( !*(_BYTE *)(v15 + v2 + 10) )
                    break;
                  v5 = v15 + v2 + 24;
                }
              }
              else if ( v15 + 40 <= v14 )
              {
                if ( *(_BYTE *)(v15 + v2 + 10) )
                  v5 = v15 + v2 + 24;
                break;
              }
              if ( v10 )
                break;
            }
          }
        }
      }
    }
    else
    {
      v5 = v2 + 72;
    }
    if ( v5 )
    {
      v19 = 0;
      if ( v6 == 40 )
      {
        v20 = 0;
        if ( !*(_DWORD *)(v2 + 20) )
        {
          v21 = *(_DWORD *)(v2 + 56);
          for ( j = 0; j < v21; ++j )
          {
            v23 = *(unsigned int *)(v2 + 4LL * j + 120);
            if ( (unsigned int)v23 >= 0x80 )
            {
              v24 = *(unsigned int *)(v2 + 16);
              if ( (unsigned int)v23 < (unsigned int)v24 )
              {
                v25 = (unsigned int)v23;
                v26 = *(_DWORD *)(v23 + v2) - 64;
                if ( v26 )
                {
                  v27 = v26 - 1;
                  if ( v27 )
                  {
                    if ( v27 == 1 && v25 + 40 <= v24 )
                      break;
                  }
                  else if ( v25 + 56 <= v24 )
                  {
                    v19 = *(_BYTE *)(v25 + v2 + 10);
                    v20 = 1;
                  }
                }
                else if ( v25 + 40 <= v24 )
                {
                  v19 = *(_BYTE *)(v25 + v2 + 10);
                  break;
                }
                if ( v20 )
                  break;
              }
            }
          }
        }
      }
      else
      {
        v19 = *(_BYTE *)(v2 + 10);
      }
      v3 = v19;
    }
  }
  if ( (byte_140173444 & 0x10) != 0 )
  {
    v28 = v8 + 2104;
    LOBYTE(v28) = BYTE1(result);
    return McTemplateK0zquuujqqbr7_EtwWriteTransfer(
             v28,
             *(_QWORD *)(v8 + 24),
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(a2 + 8),
             *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v8 + 2104,
             v7,
             v3,
             v5);
  }
  return result;
}
