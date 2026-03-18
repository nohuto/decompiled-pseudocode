/*
 * XREFs of NVMeIceAddExclusionRanges @ 0x1400312E8
 * Callers:
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeIceAddExclusionRanges(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v6; // edx
  __int64 *i; // rcx
  int v8; // r9d
  int v9; // eax
  _OWORD v10[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( a2 )
  {
    StorPortExtendedFunction(93LL, a1, 1LL, a1 + 4376);
    if ( *(int *)(a1 + 4448) >= 1 )
    {
      v6 = 0;
LABEL_7:
      if ( v6 )
      {
        v4 = StorPortExtendedFunction(0LL, a1, 56LL, 1701672526LL);
        if ( !v4 )
        {
          v4 = StorPortExtendedFunction(141LL, a1, *(unsigned int *)(a1 + 4336), *(unsigned int *)(a1 + 4340));
          if ( !v4 )
          {
            v9 = *(_DWORD *)(a1 + 4448) - 1;
            ++*(_DWORD *)(a1 + 4460);
            *(_DWORD *)(a1 + 4448) = v9;
            MEMORY[0x10] = *(_OWORD *)a2;
            MEMORY[0x20] = *(_OWORD *)(a2 + 16);
            MEMORY[0] = a1 + 4360;
            MEMORY[8] = *(_QWORD *)(a1 + 4368);
            **(_QWORD **)(a1 + 4368) = 0LL;
            *(_QWORD *)(a1 + 4368) = 0LL;
            goto LABEL_5;
          }
        }
      }
      else
      {
        for ( i = *(__int64 **)(a1 + 4360); ; i = (__int64 *)*i )
        {
          if ( i == (__int64 *)(a1 + 4360) )
          {
            v6 = 1;
            goto LABEL_7;
          }
          if ( i[3] == *(_QWORD *)(a2 + 8) )
          {
            if ( i[4] != *(_QWORD *)(a2 + 16) )
              break;
            v8 = *((_DWORD *)i + 10);
            if ( (((unsigned __int8)v8 ^ *(_BYTE *)(a2 + 24)) & 1) != 0
              || (((unsigned __int8)*(_DWORD *)(a2 + 24) ^ (unsigned __int8)v8) & 2) != 0 )
            {
              break;
            }
          }
        }
        MEMORY[0] = 0;
        v4 = -1056964602;
      }
    }
    else
    {
      v4 = -1056964596;
    }
    ++*(_DWORD *)(a1 + 4464);
LABEL_5:
    StorPortNotification(4100LL, a1, v10);
    return v4;
  }
  return 3238002694LL;
}
