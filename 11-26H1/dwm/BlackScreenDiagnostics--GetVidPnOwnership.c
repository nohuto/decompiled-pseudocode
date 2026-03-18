/*
 * XREFs of BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000E284
 * Callers:
 *     ?GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x14000E1F0 (-GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     ??$?0AEBV?$allocator@E@std@@$$V@?$_Compressed_pair@V?$allocator@E@std@@V?$_Vector_val@U?$_Simple_types@E@std@@@2@$00@std@@QEAA@U_One_then_variadic_args_t@1@AEBV?$allocator@E@1@@Z @ 0x14000D5A4 (--$-0AEBV-$allocator@E@std@@$$V@-$_Compressed_pair@V-$allocator@E@std@@V-$_Vector_val@U-$_Simple.c)
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D7A0 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@s.c)
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D848 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@s.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x14000ECE0 (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x14000ED28 (-_Tidy@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEA.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetVidPnOwnership(_DWORD *a1)
{
  int DisplayConfigBufferSizes; // ebx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  DISPLAYCONFIG_PATH_INFO *v5; // rdx
  DISPLAYCONFIG_MODE_INFO *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rsi
  NTSTATUS v9; // eax
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-9h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+3Ch] [rbp-5h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-1h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray[3]; // [rsp+48h] [rbp+7h] BYREF
  DISPLAYCONFIG_MODE_INFO *modeInfoArray[3]; // [rsp+60h] [rbp+1Fh] BYREF
  LUID adapterId; // [rsp+78h] [rbp+37h] BYREF
  int v17; // [rsp+80h] [rbp+3Fh]

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    if ( !numPathArrayElements )
    {
      *a1 = 4;
      return (unsigned int)DisplayConfigBufferSizes;
    }
    std::_Compressed_pair<std::allocator<unsigned char>,std::_Vector_val<std::_Simple_types<unsigned char>>,1>::_Compressed_pair<std::allocator<unsigned char>,std::_Vector_val<std::_Simple_types<unsigned char>>,1>(pathArray);
    std::vector<DISPLAYCONFIG_PATH_INFO>::_Construct_n<>(pathArray, v3);
    std::_Compressed_pair<std::allocator<unsigned char>,std::_Vector_val<std::_Simple_types<unsigned char>>,1>::_Compressed_pair<std::allocator<unsigned char>,std::_Vector_val<std::_Simple_types<unsigned char>>,1>(modeInfoArray);
    std::vector<DISPLAYCONFIG_MODE_INFO>::_Construct_n<>(modeInfoArray, v4);
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 pathArray[0],
                                 &numModeInfoArrayElements,
                                 modeInfoArray[0],
                                 0LL);
    if ( DisplayConfigBufferSizes < 0 )
    {
      *a1 = 5;
      goto LABEL_22;
    }
    v5 = pathArray[0];
    v7 = 0LL;
    v6 = modeInfoArray[0];
    while ( 1 )
    {
      if ( (unsigned int)v7 >= numPathArrayElements )
        goto LABEL_22;
      v8 = v7;
      if ( !*(_QWORD *)&modeInfoArray[0][(unsigned __int64)pathArray[0][v7].sourceInfo.modeInfoIdx].desktopImageInfo.DesktopImageRegion.top )
        break;
      v7 = (unsigned int)(v7 + 1);
    }
    v17 = 0;
    adapterId = pathArray[0][v7].sourceInfo.adapterId;
    v9 = D3DKMTOpenAdapterFromLuid(&adapterId, pathArray[0], modeInfoArray[0]);
    if ( v9 >= 0 )
    {
      v13[0] = v17;
      v13[1] = pathArray[0][v8].sourceInfo.id;
      v9 = D3DKMTCheckVidPnExclusiveOwnership(v13);
      if ( v9 == -1071775738 )
      {
        *a1 = 2;
      }
      else if ( v9 == -1071775732 )
      {
        *a1 = 3;
      }
      else
      {
        if ( v9 )
        {
          *a1 = 7;
LABEL_20:
          DisplayConfigBufferSizes = RtlNtStatusToDosError(v9);
LABEL_22:
          std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(modeInfoArray, v5, v6);
          std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy(pathArray);
          return (unsigned int)DisplayConfigBufferSizes;
        }
        *a1 = 1;
      }
      DisplayConfigBufferSizes = 0;
      goto LABEL_22;
    }
    *a1 = 6;
    goto LABEL_20;
  }
  return (unsigned int)DisplayConfigBufferSizes;
}
