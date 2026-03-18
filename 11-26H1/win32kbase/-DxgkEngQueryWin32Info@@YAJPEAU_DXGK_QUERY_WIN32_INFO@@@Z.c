/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x140028DC0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsTtmEnabled @ 0x1401EA850 (UserIsTtmEnabled.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 (*v10)(void); // rax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(struct _DXGK_QUERY_WIN32_INFO *); // rax
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  _BYTE *v15; // rbx

  v2 = 0;
  v3 = *(unsigned int *)a1;
  if ( !(_DWORD)v3 )
  {
    v13 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1355;
    }
    v14 = *(_QWORD *)(W32GetSessionState(v3) + 88);
    if ( *(_DWORD *)(v14 + 1212) )
      v2 = *(unsigned __int16 *)(*(_QWORD *)(W32GetSessionState(v14) + 88) + 1168LL);
    *v13 = v2;
    return 0LL;
  }
  v4 = (unsigned int)(v3 - 2);
  if ( !(_DWORD)v4 )
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
  if ( (_DWORD)v4 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) == 1 )
    {
      v15 = (_BYTE *)*((_QWORD *)a1 + 1);
      *v15 = UserIsTtmEnabled();
      return 0LL;
    }
    return 3221225485LL;
  }
  v10 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 24) + 432LL);
  if ( !v10 )
    return 3221225659LL;
  result = v10();
  if ( (int)result >= 0 )
  {
    v12 = *(__int64 (__fastcall **)(struct _DXGK_QUERY_WIN32_INFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 24)
                                                                    + 440LL);
    if ( v12 )
      return v12(a1);
    return 3221225659LL;
  }
  return result;
}
