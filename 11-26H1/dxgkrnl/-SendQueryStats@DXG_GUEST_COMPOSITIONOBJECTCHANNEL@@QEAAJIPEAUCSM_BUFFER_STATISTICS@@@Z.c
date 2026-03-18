/*
 * XREFs of ?SendQueryStats@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1401C0B84
 * Callers:
 *     ?VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14020FD80 (-VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendQueryStats(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        struct CSM_BUFFER_STATISTICS *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int v15; // [rsp+50h] [rbp-49h] BYREF
  __int64 v16; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v17[4]; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+70h] [rbp-29h] BYREF
  int v19; // [rsp+74h] [rbp-25h]
  int v20; // [rsp+78h] [rbp-21h]
  _DWORD v21[21]; // [rsp+7Ch] [rbp-1Dh] BYREF

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) < 0x1Eu )
  {
    LODWORD(v6) = -1073741637;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1280;
    return (unsigned int)v6;
  }
  v17[0] = 1886220131;
  v17[2] = 11;
  v17[1] = -1073741823;
  memset(v21, 0, sizeof(v21));
  v18 = 1886220131;
  v19 = -1073741823;
  v20 = 12;
  memset(&v21[1], 0, 0x50uLL);
  v7 = *((_QWORD *)this + 1);
  v15 = 96;
  v17[3] = a2;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v7 + 32LL))(
         v7,
         v17,
         16LL,
         &v18,
         &v15);
  v6 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v8, this);
    WdLogGlobalForLineNumber = 1312;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v6,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  if ( v15 != 96 )
  {
    WdLogSingleEntry2(3LL, v15, -1073741823LL);
    WdLogGlobalForLineNumber = 1321;
LABEL_7:
    LODWORD(v6) = -1073741823;
    return (unsigned int)v6;
  }
  if ( v20 != 12 )
  {
    WdLogSingleEntry2(3LL, v20, -1073741823LL);
    WdLogGlobalForLineNumber = 1330;
    goto LABEL_7;
  }
  LODWORD(v6) = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry2(3LL, v19, this);
    WdLogGlobalForLineNumber = 1358;
  }
  else
  {
    v16 = 0LL;
    LODWORD(v6) = RtlConvertHostPerfCounterToPerfCounter(*(_QWORD *)&v21[11], -1LL, &v16);
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1353;
    }
    else
    {
      v9 = v16;
      v10 = *(_OWORD *)&v21[5];
      *(_OWORD *)a3 = *(_OWORD *)&v21[1];
      v11 = *(_OWORD *)&v21[9];
      *((_OWORD *)a3 + 1) = v10;
      v12 = *(_OWORD *)&v21[13];
      *((_OWORD *)a3 + 2) = v11;
      v13 = *(_OWORD *)&v21[17];
      *((_OWORD *)a3 + 3) = v12;
      *((_OWORD *)a3 + 4) = v13;
      *((_QWORD *)a3 + 5) = v9;
    }
  }
  return (unsigned int)v6;
}
