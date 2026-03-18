/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x14004D030
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserIsTtmEnabled @ 0x1401C1C10 (UserIsTtmEnabled.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 (*v10)(void); // rax
  __int64 (__fastcall *v11)(struct _DXGK_QUERY_WIN32_INFO *); // rax
  _DWORD *v12; // rsi
  __int64 v13; // rcx

  v2 = 0;
  v3 = *(unsigned int *)a1;
  if ( !(_DWORD)v3 )
  {
    v12 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1353;
    }
    v13 = *(_QWORD *)(W32GetSessionState(v3) + 88);
    if ( *(_DWORD *)(v13 + 1124) )
      v2 = *(unsigned __int16 *)(*(_QWORD *)(W32GetSessionState(v13) + 88) + 1080LL);
    *v12 = v2;
    return 0LL;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    if ( *((_DWORD *)a1 + 1) == 4 )
    {
      if ( (unsigned int)UserIsConsoleConnection() )
        **((_DWORD **)a1 + 1) = 0;
      else
        **((_DWORD **)a1 + 1) = (unsigned int)UserIsRemoteAndNotDisconnectConnection(v6, v5, v7, v8) != 0 ? 2 : 0xFFFF;
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v4 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) == 1 )
    {
      **((_BYTE **)a1 + 1) = UserIsTtmEnabled();
      return 0LL;
    }
    return 3221225485LL;
  }
  v10 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 432LL);
  if ( !v10 )
    return 3221225659LL;
  result = v10();
  if ( (int)result >= 0 )
  {
    v11 = *(__int64 (__fastcall **)(struct _DXGK_QUERY_WIN32_INFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                    + 440LL);
    if ( v11 )
      return v11(a1);
    return 3221225659LL;
  }
  return result;
}
