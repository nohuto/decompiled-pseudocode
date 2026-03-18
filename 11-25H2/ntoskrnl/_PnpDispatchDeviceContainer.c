/*
 * XREFs of _PnpDispatchDeviceContainer @ 0x14095C2A0
 * Callers:
 *     <none>
 * Callees:
 *     _CmGetDeviceContainerMappedPropertyLocales @ 0x14080A1C8 (_CmGetDeviceContainerMappedPropertyLocales.c)
 *     _CmGetMatchingDeviceContainerList @ 0x14080A4A4 (_CmGetMatchingDeviceContainerList.c)
 *     _CmValidateDeviceContainerName @ 0x14095B284 (_CmValidateDeviceContainerName.c)
 *     _CmOpenDeviceContainerRegKey @ 0x14095C134 (_CmOpenDeviceContainerRegKey.c)
 *     _CmGetDeviceContainerMappedProperty @ 0x14095C458 (_CmGetDeviceContainerMappedProperty.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x140A946F8 (_CmSetDeviceContainerMappedProperty.c)
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x140A97814 (_CmGetDeviceContainerMappedPropertyKeys.c)
 */

__int64 __fastcall PnpDispatchDeviceContainer(__int64 a1, const WCHAR *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v6)(__int64, __int64, unsigned int); // rdx
  __int128 *v7; // r8
  int v8; // r9d
  __int64 v9; // r9
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v8 = a4 - 1;
  if ( !v8 )
    return CmValidateDeviceContainerName(a1, a2);
  v9 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v9 )
    return CmOpenDeviceContainerRegKey(
             a1,
             (__int64)a2,
             0LL,
             v9,
             *(_DWORD *)a5,
             *(_BYTE *)(a5 + 4),
             *(HANDLE **)(a5 + 8),
             (_DWORD *)(a5 + 16));
  v10 = v9 - 1;
  if ( !v10 )
    return 3221225474LL;
  v11 = v10 - 1;
  if ( !v11 )
    return 3221225474LL;
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            return CmSetDeviceContainerMappedProperty(a1, 0, 0, *(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16));
          else
            return 3221225485LL;
        }
        else
        {
          return CmGetDeviceContainerMappedProperty(
                   a1,
                   (_DWORD)a2,
                   *(_QWORD *)a5,
                   *(_QWORD *)(a5 + 8),
                   *(_QWORD *)(a5 + 16),
                   *(_QWORD *)(a5 + 24),
                   *(_QWORD *)(a5 + 32),
                   *(_DWORD *)(a5 + 40),
                   *(_QWORD *)(a5 + 48));
        }
      }
      else
      {
        return CmGetDeviceContainerMappedPropertyLocales(
                 a1,
                 0LL,
                 0LL,
                 *(_QWORD *)(a5 + 8),
                 *(_WORD **)(a5 + 16),
                 *(_DWORD *)(a5 + 24),
                 *(_DWORD **)(a5 + 32));
      }
    }
    else
    {
      return CmGetDeviceContainerMappedPropertyKeys(
               a5,
               0,
               0,
               0,
               *(_QWORD *)(a5 + 24),
               *(_DWORD *)(a5 + 32),
               *(_QWORD *)(a5 + 40));
    }
  }
  else
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)a5;
      v6 = PnpCmMatchCallbackRoutine;
      v7 = &v17;
      *((_QWORD *)&v17 + 1) = *(_QWORD *)(a5 + 8);
    }
    return CmGetMatchingDeviceContainerList(
             a1,
             (__int64)v6,
             (__int64)v7,
             *(_QWORD *)(a5 + 16),
             *(_DWORD *)(a5 + 24),
             *(_QWORD *)(a5 + 32),
             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
  }
}
