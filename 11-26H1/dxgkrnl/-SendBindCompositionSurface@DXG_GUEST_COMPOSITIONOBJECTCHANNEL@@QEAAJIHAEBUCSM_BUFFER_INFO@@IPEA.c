/*
 * XREFs of ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1401C0540
 * Callers:
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x14020EEE0 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3,
        const struct CSM_BUFFER_INFO *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  unsigned int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+5Ch] [rbp-A4h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v18; // [rsp+68h] [rbp-98h]
  _DWORD v19[336]; // [rsp+70h] [rbp-90h] BYREF

  memset(v19, 0, sizeof(v19));
  v19[1] = -1073741823;
  v19[0] = 1886220131;
  v19[2] = 5;
  memset(&v19[6], 0, 0x520uLL);
  v15 = 1886220131;
  v17 = 6LL;
  v16 = -1073741823;
  v18 = 0LL;
  v14 = 24;
  v19[3] = a2;
  v19[4] = a3;
  memmove(&v19[6], a4, 0x520uLL);
  v10 = *((_QWORD *)this + 1);
  v19[334] = a5;
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v10 + 32LL))(
          v10,
          v19,
          1344LL,
          &v15,
          &v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, this);
    WdLogGlobalForLineNumber = 1077;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v12,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  if ( v14 != 24 )
  {
    WdLogSingleEntry2(3LL, v14, -1073741823LL);
    WdLogGlobalForLineNumber = 1086;
LABEL_5:
    LODWORD(v12) = -1073741823;
    return (unsigned int)v12;
  }
  if ( (_DWORD)v17 != 6 )
  {
    WdLogSingleEntry2(3LL, (int)v17, -1073741823LL);
    WdLogGlobalForLineNumber = 1095;
    goto LABEL_5;
  }
  LODWORD(v12) = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(3LL, v16, this);
    WdLogGlobalForLineNumber = 1108;
  }
  else
  {
    *a6 = v18;
  }
  return (unsigned int)v12;
}
