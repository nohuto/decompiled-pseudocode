/*
 * XREFs of GreReinitializePerUserDpiSetting @ 0x1401BDC24
 * Callers:
 *     GreReinitializeDpiSetting @ 0x1401A4D90 (GreReinitializeDpiSetting.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall GreReinitializePerUserDpiSetting(__int64 a1))(void)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 (*result)(void); // rax
  bool v5; // zf
  __int64 v6; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(v1 + 1208) = 0;
  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 24);
  result = *(__int64 (**)(void))(v3 + 944);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24);
      result = *(__int64 (**)(void))(v3 + 952);
      if ( result )
        result = (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(v1 + 1208);
    }
  }
  v5 = *(_DWORD *)(v1 + 1208) == 0;
  *(_DWORD *)(v1 + 1224) = 0;
  if ( !v5 )
  {
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 960LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 968LL);
        if ( result )
          return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, __int64))result)(0LL, v1 + 1224);
      }
    }
  }
  return result;
}
