/*
 * XREFs of GreReinitializePerUserDpiSetting @ 0x1401D0014
 * Callers:
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 *     GreReinitializeDpiSetting @ 0x1401CFFE0 (GreReinitializeDpiSetting.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall GreReinitializePerUserDpiSetting(__int64 a1))(void)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (*result)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(v1 + 1120) = 0;
  v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 24);
  result = *(__int64 (**)(void))(v5 + 944);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24);
      result = *(__int64 (**)(void))(v5 + 952);
      if ( result )
        result = (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(v1 + 1120);
    }
  }
  *(_DWORD *)(v1 + 1136) = 0;
  if ( *(_DWORD *)(v1 + 1120) )
  {
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 960LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 24) + 968LL);
        if ( result )
          return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, __int64))result)(0LL, v1 + 1136);
      }
    }
  }
  return result;
}
