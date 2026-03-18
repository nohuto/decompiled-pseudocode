/*
 * XREFs of ?SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z @ 0x1401FD1F4
 * Callers:
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x14020F8C4 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(DXG_GUEST_REMOTEOBJECTCHANNEL *this, int a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+5Ch] [rbp-24h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  _DWORD v11[4]; // [rsp+68h] [rbp-18h] BYREF

  if ( DXGPROCESS::GetCurrent() )
  {
    if ( a2 )
    {
      v5 = *((_QWORD *)this + 1);
      v11[2] = 3;
      v11[0] = 1869901170;
      v8 = 1869901170;
      v11[1] = -1073741823;
      v10 = 4LL;
      v9 = -1073741823;
      v7 = 16;
      v11[3] = a2;
      v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v5 + 32LL))(
             v5,
             v11,
             16LL,
             &v8,
             &v7);
      if ( v4 >= 0 )
      {
        if ( v7 == 16 )
        {
          if ( (_DWORD)v10 == 4 )
            return v9;
          WdLogSingleEntry2(3LL, (int)v10, -1073741823LL);
          WdLogGlobalForLineNumber = 1063;
        }
        else
        {
          WdLogSingleEntry2(3LL, v7, -1073741823LL);
          WdLogGlobalForLineNumber = 1054;
        }
        return (unsigned int)-1073741823;
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1045;
      }
    }
    else
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, 0LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1020;
    }
  }
  else
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1011;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v4;
}
