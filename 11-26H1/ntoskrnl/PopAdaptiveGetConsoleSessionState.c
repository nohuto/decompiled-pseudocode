/*
 * XREFs of PopAdaptiveGetConsoleSessionState @ 0x1409F99F8
 * Callers:
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409F935C (PopAdaptiveGetSessionStateUnsafe.c)
 * Callees:
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x1407E2104 (PopAdaptiveConsoleSessionOverrideClear.c)
 *     PopAdaptiveCalculateInputRelativeTimeout @ 0x1409F924C (PopAdaptiveCalculateInputRelativeTimeout.c)
 *     PopSetSessionUserStatus @ 0x1409F9DBC (PopSetSessionUserStatus.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 */

__int64 __fastcall PopAdaptiveGetConsoleSessionState(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  char v5; // r15
  unsigned int v8; // esi
  char IsEnabled; // al
  int v10; // r10d
  unsigned int v11; // r11d
  unsigned int v12; // ebx
  char *v13; // rdi
  unsigned int v14; // r14d
  unsigned int i; // r15d
  int v16; // ebp
  unsigned int v17; // eax
  int v18; // eax
  unsigned __int64 v20; // r10
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // eax
  bool v24; // cc
  _QWORD *v25; // rdi
  unsigned int j; // ebp
  unsigned int v27; // eax
  int v28; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+34h] [rbp-44h]
  char v31; // [rsp+88h] [rbp+10h]

  v5 = 0;
  v31 = 0;
  v29 = PopInputTimeout;
  v8 = 3;
  IsEnabled = TtmIsEnabled();
  v10 = *(_DWORD *)(a2 + 24);
  v11 = 0;
  if ( IsEnabled )
  {
    v12 = PopDisplayTimeout;
    v14 = 0;
    v29 = 0;
    v28 = PopDisplayTimeout;
    v8 = v10 == 0 ? 2 : 0;
    *a4 = 256;
    *a5 = 258;
  }
  else if ( v10 )
  {
    if ( !byte_140F0C061
      || byte_140F0C062
      || (v12 = PopAdaptiveLockConsoleTimeout,
          v24 = PopAdaptiveLockConsoleTimeout <= (unsigned int)PopDisplayTimeout,
          v28 = PopAdaptiveLockConsoleTimeout,
          *a4 = 257,
          !v24)
      && !PopEnforceConsoleLockScreenTimeout )
    {
      v12 = PopDisplayTimeout;
      v28 = PopDisplayTimeout;
      *a4 = 256;
    }
    v13 = (char *)&unk_140F0C088;
    v14 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(v13 - 8) != (_BYTE)v11 )
      {
        v20 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 < *(_QWORD *)(a2 + 8) )
        {
          PopAdaptiveConsoleSessionOverrideClear(i, 1);
          v11 = 0;
        }
        else
        {
          v21 = *((_DWORD *)v13 + 3);
          v31 = 1;
          if ( v21 )
          {
            v27 = PopAdaptiveCalculateInputRelativeTimeout(v20, v21, *(_QWORD *)a2);
            if ( !v14 || v27 < v14 )
            {
              v14 = v27;
              *a5 = i;
            }
          }
          v22 = *((_DWORD *)v13 + 2);
          if ( v22 )
          {
            v23 = PopAdaptiveCalculateInputRelativeTimeout(v20, v22, *(_QWORD *)a2);
            if ( !v12 || v23 < v12 )
            {
              v12 = v23;
              *a4 = i;
            }
            v8 = 2;
          }
        }
      }
      v13 += 24;
    }
    v28 = v12;
    v16 = 256;
    if ( v8 == 3 )
    {
      if ( *(_QWORD *)a2 <= (unsigned __int64)qword_140F0C070
        || (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - *(_QWORD *)a2)
         / 0x3E8 >= (unsigned int)PopInputTimeout
        && PopInputTimeout )
      {
        v8 = 2;
        v31 = 1;
      }
      else
      {
        v8 = v11;
      }
    }
    v17 = PopAdaptiveDimTimeout;
    if ( PopAdaptiveDimTimeout )
    {
      if ( PopAdaptiveManualDimTimeout == v11 )
        v17 = v12 > 0x3C ? v12 - 15 : v11;
      else
        v16 = 258;
      if ( v17 && (!v14 || v17 < v14) )
      {
        v14 = v17;
        *a5 = v16;
      }
    }
    v5 = v31;
  }
  else
  {
    v14 = 0;
    v12 = dword_140F0C064;
    v8 = 2;
    v28 = dword_140F0C064;
    *a4 = 256;
    *a5 = 258;
    if ( qword_140F0C070 != *(_QWORD *)(a2 + 16) )
    {
      qword_140F0C070 = *(_QWORD *)(a2 + 16);
      v25 = &unk_140F0C088;
      for ( j = 0; j < 2; ++j )
      {
        if ( *((_BYTE *)v25 - 8) && *v25 <= *(_QWORD *)(a2 + 16) )
        {
          PopAdaptiveConsoleSessionOverrideClear(j, 0);
          v11 = 0;
        }
        v25 += 3;
      }
    }
  }
  dword_140F0C064 = v12;
  qword_140F0C068 = *(_QWORD *)a2;
  v18 = v29;
  *(_DWORD *)a3 = v12;
  if ( v8 )
    v18 = v11;
  *(_DWORD *)(a3 + 4) = v14;
  *(_BYTE *)(a3 + 12) = v5;
  *(_DWORD *)(a3 + 8) = v18;
  PopSetSessionUserStatus(a1, v8);
  PopSetPowerSettingValue(&GUID_CONSOLE_VIDEO_TIMEOUT, 0xFFFFFFFFLL, 0LL, 4LL, &v28);
  return PopSetPowerSettingValue(&GUID_CONSOLE_VIDEO_TIMEOUT, 0xFFFFFFFFLL, 1LL, 4LL, &v28);
}
