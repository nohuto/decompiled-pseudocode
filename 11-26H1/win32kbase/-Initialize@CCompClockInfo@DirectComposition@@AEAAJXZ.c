/*
 * XREFs of ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1401BF394
 * Callers:
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14010F4E8 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ @ 0x1400A963C (-EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Initialize(DirectComposition::CCompClockInfo *this)
{
  int v1; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-20h]

  v1 = 0;
  if ( *((_DWORD *)this + 1) || *((_DWORD *)this + 2) )
  {
    v7 = *(_QWORD *)((char *)this + 4);
    v8 = 0;
    v1 = DxgkOpenAdapterFromLuidInternal(&v7);
    if ( v1 >= 0 )
    {
      v5 = v8;
      *((_DWORD *)this + 4) = v8;
      DirectComposition::CCompClockInfo::EnsureVBlankEvent(this, v5, v3, v4);
    }
  }
  return (unsigned int)v1;
}
