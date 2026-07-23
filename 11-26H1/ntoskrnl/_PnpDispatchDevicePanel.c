/*
 * XREFs of _PnpDispatchDevicePanel @ 0x1408A2B60
 * Callers:
 *     <none>
 * Callees:
 *     _CmGetDevicePanelMappedProperty @ 0x1408A0AC0 (_CmGetDevicePanelMappedProperty.c)
 *     _CmGetDevicePanelMappedPropertyKeys @ 0x1408A0BE0 (_CmGetDevicePanelMappedPropertyKeys.c)
 *     _CmGetMatchingDevicePanelList @ 0x1408A0D28 (_CmGetMatchingDevicePanelList.c)
 *     _CmOpenDevicePanelRegKey @ 0x1408A0FBC (_CmOpenDevicePanelRegKey.c)
 *     _CmSetDevicePanelMappedProperty @ 0x1408A1410 (_CmSetDevicePanelMappedProperty.c)
 *     _CmValidateDevicePanelName @ 0x1408A146C (_CmValidateDevicePanelName.c)
 */

__int64 __fastcall PnpDispatchDevicePanel(__int64 a1, const wchar_t *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v6)(__int64, __int64, unsigned int); // rdx
  __int128 *v7; // r10
  int v8; // r9d
  __int64 v9; // r9
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // r9
  int v14; // r9d
  int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v18; // r9d
  _DWORD *v19; // r10
  int v20; // esi
  _WORD *v21; // rdi
  __int64 v22; // rbx
  __int64 *v23; // r11
  __int64 v24; // r8
  __int128 v26; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v8 = a4 - 1;
  if ( !v8 )
    return (unsigned int)CmValidateDevicePanelName(a1, a2);
  v9 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v9 )
    return (unsigned int)CmOpenDevicePanelRegKey(
                           a1,
                           (__int64)a2,
                           (__int64)a2,
                           v9,
                           *(_DWORD *)a5,
                           *(_BYTE *)(a5 + 4),
                           *(_QWORD *)(a5 + 8),
                           (_DWORD *)(a5 + 16));
  v10 = v9 - 1;
  if ( !v10 )
    return (unsigned int)-1073741822;
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)-1073741822;
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v26 = *(_QWORD *)a5;
      v6 = PnpCmMatchCallbackRoutine;
      v7 = &v26;
      *((_QWORD *)&v26 + 1) = *(_QWORD *)(a5 + 8);
    }
    return (unsigned int)CmGetMatchingDevicePanelList(
                           a1,
                           (__int64)v6,
                           (__int64)v7,
                           *(_QWORD *)(a5 + 16),
                           *(_DWORD *)(a5 + 24),
                           *(_QWORD *)(a5 + 32),
                           *(_DWORD *)(a5 + 40) & 0xFFFF0000);
  }
  v13 = (unsigned int)(v12 - 1);
  if ( !(_DWORD)v13 )
    return (unsigned int)CmGetDevicePanelMappedPropertyKeys(
                           a5,
                           0LL,
                           (__int64)a2,
                           v13,
                           *(_QWORD *)(a5 + 24),
                           *(_DWORD *)(a5 + 32),
                           *(unsigned int **)(a5 + 40));
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        return (unsigned int)-1073741811;
      return (unsigned int)CmSetDevicePanelMappedProperty(
                             a1,
                             0LL,
                             (__int64)a2,
                             *(_QWORD *)(a5 + 8),
                             *(_QWORD *)(a5 + 16));
    }
    else
    {
      return (unsigned int)CmGetDevicePanelMappedProperty(
                             a1,
                             a2,
                             (__int64)a2,
                             *(_QWORD *)(a5 + 8),
                             *(_QWORD *)(a5 + 16),
                             *(_DWORD **)(a5 + 24),
                             *(GUID **)(a5 + 32),
                             *(_DWORD *)(a5 + 40),
                             *(_DWORD **)(a5 + 48));
    }
  }
  v16 = -1073741802;
  v18 = 0;
  v19 = *(_DWORD **)(a5 + 32);
  v20 = *(_DWORD *)(a5 + 24);
  v21 = *(_WORD **)(a5 + 16);
  v22 = *(_QWORD *)(a5 + 8);
  *v19 = 0;
  while ( v18 < 3 )
  {
    v23 = (&off_14000F7C8)[2 * v18];
    if ( *(_DWORD *)(v22 + 16) == *((_DWORD *)v23 + 4) )
    {
      v24 = *(_QWORD *)v22 - *v23;
      if ( *(_QWORD *)v22 == *v23 )
        v24 = *(_QWORD *)(v22 + 8) - v23[1];
      if ( !v24 )
      {
        *v19 = 1;
        if ( v20 )
        {
          *v21 = 0;
          return 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
    }
    ++v18;
  }
  return v16;
}
