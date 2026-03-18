/*
 * XREFs of ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x14020D788
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x14020E2AC (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x14020E3FC (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x140212574 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 */

__int64 __fastcall CreateVmBusChannel(void *a1, struct _GUID *a2, const struct _GUID *a3)
{
  int v3; // ebx
  struct _UNICODE_STRING v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp-18h]

  v7 = *(_DWORD *)L"l";
  v5.Buffer = (wchar_t *)&v6;
  v6 = *(_OWORD *)L"DXGK_Vail";
  *(_QWORD *)&v5.Length = 1310738LL;
  v3 = DXGVMBUSCHANNEL::Create(a1, a2, a3, &v5, a1 != 0LL, (struct DXGVMBUSCHANNEL **)a2);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1302;
  }
  return (unsigned int)v3;
}
