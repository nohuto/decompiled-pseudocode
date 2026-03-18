/*
 * XREFs of RIMGetQDCActivePathsData @ 0x14007CE38
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14007C1C0 (RIMOnDisplayStateChange.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x140205A10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMFreeQDCActivePathsData @ 0x14007D080 (RIMFreeQDCActivePathsData.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14007D414 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14007D4F8 (DrvQueryDisplayConfigInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

unsigned int *__fastcall RIMGetQDCActivePathsData(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-78h]
  int v16; // [rsp+90h] [rbp-70h]
  const wchar_t *v17; // [rsp+98h] [rbp-68h]
  char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  const wchar_t *v24; // [rsp+D0h] [rbp-30h]
  char *v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+E0h] [rbp-20h]
  int *v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+100h] [rbp+0h]
  const wchar_t *v31; // [rsp+108h] [rbp+8h]
  char *v32; // [rsp+110h] [rbp+10h]
  int v33; // [rsp+118h] [rbp+18h]
  int *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  __int64 v38; // [rsp+140h] [rbp+40h]
  __int128 v39; // [rsp+148h] [rbp+48h]
  __int128 v40; // [rsp+158h] [rbp+58h]

  v4 = a1;
  *(_OWORD *)a1 = 0LL;
  if ( !UserIsConsoleConnection((__int64)a1, a2, a3, a4) || (int)DrvGetDisplayConfigBufferSizesInternal(18LL, v4) < 0 )
    goto LABEL_6;
  v5 = *v4;
  if ( (_DWORD)v5 )
  {
    v6 = Win32AllocPoolZInitImpl(256LL, 216 * v5, 0x6D707352u);
    *((_QWORD *)v4 + 1) = v6;
    if ( !v6 || (int)DrvQueryDisplayConfigInternal(2147483666LL, v4, v6, 0LL) < 0 )
    {
LABEL_6:
      RIMFreeQDCActivePathsData(v4);
      return 0LL;
    }
    if ( *v4 )
    {
      v12 = 0;
      QueryTable.DefaultLength = 4;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      v16 = 288;
      QueryTable.Name = L"ScreenPosition.Left";
      v19 = 67108868;
      QueryTable.EntryContext = &v13;
      QueryTable.DefaultData = &v12;
      v17 = L"ScreenPosition.Top";
      v18 = (char *)&v13 + 4;
      v20 = &v12;
      v24 = L"ScreenPosition.Right";
      v25 = (char *)&v13 + 8;
      v27 = &v12;
      v31 = L"ScreenPosition.Bottom";
      v32 = (char *)&v13 + 12;
      v21 = 4;
      v23 = 288;
      v26 = 67108868;
      v28 = 4;
      v30 = 288;
      v33 = 67108868;
      v35 = 4;
      v34 = &v12;
      v13 = 0LL;
      QueryTable.QueryRoutine = 0LL;
      v15 = 0LL;
      v22 = 0LL;
      v29 = 0LL;
      v36 = 0LL;
      v37 = 0;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
        && (int)v13 < SDWORD2(v13)
        && SDWORD1(v13) < SHIDWORD(v13) )
      {
        v8 = 0;
        if ( *v4 )
        {
          v9 = *((_QWORD *)v4 + 1) + 140LL;
          do
          {
            if ( *(_DWORD *)(v9 - 60) == 0x80000000 && *(_DWORD *)(v9 - 84) && *(_DWORD *)(v9 - 80) )
            {
              *(_QWORD *)v9 = 0LL;
              v10 = DWORD2(v13) - v13;
              *(_DWORD *)(v9 - 52) = DWORD2(v13) - v13;
              *(_DWORD *)(v9 - 84) = v10;
              *(_DWORD *)(v9 + 8) = v10;
              v11 = HIDWORD(v13) - DWORD1(v13);
              *(_DWORD *)(v9 - 48) = HIDWORD(v13) - DWORD1(v13);
              *(_DWORD *)(v9 - 80) = v11;
              *(_DWORD *)(v9 + 12) = v11;
            }
            ++v8;
            v9 += 216LL;
          }
          while ( v8 < *v4 );
        }
      }
    }
  }
  return v4;
}
