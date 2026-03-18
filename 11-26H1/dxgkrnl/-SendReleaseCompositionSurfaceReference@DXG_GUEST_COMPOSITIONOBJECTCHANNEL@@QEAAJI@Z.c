/*
 * XREFs of ?SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z @ 0x1401C0DF8
 * Callers:
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x14020FFDC (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendReleaseCompositionSurfaceReference(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  unsigned int v7; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-28h] BYREF
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  _DWORD v11[4]; // [rsp+68h] [rbp-18h] BYREF

  v11[3] = a2;
  v11[2] = 3;
  v11[0] = 1886220131;
  v8 = 1886220131;
  v3 = *((_QWORD *)this + 1);
  v11[1] = -1073741823;
  v10 = 4LL;
  v9 = -1073741823;
  v7 = 16;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v3 + 32LL))(
         v3,
         v11,
         16LL,
         &v8,
         &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v7 == 16 )
    {
      if ( (_DWORD)v10 == 4 )
      {
        LODWORD(v5) = v9;
        return (unsigned int)v5;
      }
      WdLogSingleEntry2(3LL, (int)v10, -1073741823LL);
      WdLogGlobalForLineNumber = 1019;
    }
    else
    {
      WdLogSingleEntry2(3LL, v7, -1073741823LL);
      WdLogGlobalForLineNumber = 1010;
    }
    LODWORD(v5) = -1073741823;
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, this);
    WdLogGlobalForLineNumber = 1001;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v5,
      (__int64)this,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
