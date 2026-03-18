/*
 * XREFs of RIMGetQDCActivePathsData @ 0x14002B9C8
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14017F184 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1401E5030 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x14002BC10 (RIMFreeQDCActivePathsData.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14002BF94 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14002C0C8 (DrvQueryDisplayConfigInternal.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

unsigned int *__fastcall RIMGetQDCActivePathsData(unsigned int *a1)
{
  unsigned int *v1; // rbx
  __int64 v3; // rax
  void *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+38h] [rbp-C8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+88h] [rbp-78h]
  int v13; // [rsp+90h] [rbp-70h]
  const wchar_t *v14; // [rsp+98h] [rbp-68h]
  char *v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A8h] [rbp-58h]
  int *v17; // [rsp+B0h] [rbp-50h]
  int v18; // [rsp+B8h] [rbp-48h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  const wchar_t *v21; // [rsp+D0h] [rbp-30h]
  char *v22; // [rsp+D8h] [rbp-28h]
  int v23; // [rsp+E0h] [rbp-20h]
  int *v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  int v27; // [rsp+100h] [rbp+0h]
  const wchar_t *v28; // [rsp+108h] [rbp+8h]
  char *v29; // [rsp+110h] [rbp+10h]
  int v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]
  __int64 v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  __int64 v35; // [rsp+140h] [rbp+40h]
  __int128 v36; // [rsp+148h] [rbp+48h]
  __int128 v37; // [rsp+158h] [rbp+58h]

  v1 = a1;
  *(_OWORD *)a1 = 0LL;
  if ( !(unsigned int)UserIsConsoleConnection() || (int)DrvGetDisplayConfigBufferSizesInternal(18LL, v1) < 0 )
    goto LABEL_3;
  v3 = *v1;
  if ( !(_DWORD)v3 )
    return v1;
  v4 = Win32AllocPoolZInitImpl(0x100uLL, 216 * v3, 0x6D707352u);
  *((_QWORD *)v1 + 1) = v4;
  if ( v4 && (int)DrvQueryDisplayConfigInternal(2147483666LL, v1, v4, 0LL) >= 0 )
  {
    if ( *v1 )
    {
      v9 = 0;
      QueryTable.DefaultLength = 4;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      v13 = 288;
      QueryTable.Name = L"ScreenPosition.Left";
      v16 = 67108868;
      QueryTable.EntryContext = &v10;
      QueryTable.DefaultData = &v9;
      v14 = L"ScreenPosition.Top";
      v15 = (char *)&v10 + 4;
      v17 = &v9;
      v21 = L"ScreenPosition.Right";
      v22 = (char *)&v10 + 8;
      v24 = &v9;
      v28 = L"ScreenPosition.Bottom";
      v29 = (char *)&v10 + 12;
      v18 = 4;
      v20 = 288;
      v23 = 67108868;
      v25 = 4;
      v27 = 288;
      v30 = 67108868;
      v32 = 4;
      v31 = &v9;
      v10 = 0LL;
      QueryTable.QueryRoutine = 0LL;
      v12 = 0LL;
      v19 = 0LL;
      v26 = 0LL;
      v33 = 0LL;
      v34 = 0;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
        && (int)v10 < SDWORD2(v10)
        && SDWORD1(v10) < SHIDWORD(v10) )
      {
        v5 = 0;
        if ( *v1 )
        {
          v6 = *((_QWORD *)v1 + 1) + 140LL;
          do
          {
            if ( *(_DWORD *)(v6 - 60) == 0x80000000 && *(_DWORD *)(v6 - 84) && *(_DWORD *)(v6 - 80) )
            {
              *(_QWORD *)v6 = 0LL;
              v7 = DWORD2(v10) - v10;
              *(_DWORD *)(v6 - 52) = DWORD2(v10) - v10;
              *(_DWORD *)(v6 - 84) = v7;
              *(_DWORD *)(v6 + 8) = v7;
              v8 = HIDWORD(v10) - DWORD1(v10);
              *(_DWORD *)(v6 - 48) = HIDWORD(v10) - DWORD1(v10);
              *(_DWORD *)(v6 - 80) = v8;
              *(_DWORD *)(v6 + 12) = v8;
            }
            ++v5;
            v6 += 216LL;
          }
          while ( v5 < *v1 );
        }
      }
    }
  }
  else
  {
LABEL_3:
    RIMFreeQDCActivePathsData(v1);
    return 0LL;
  }
  return v1;
}
