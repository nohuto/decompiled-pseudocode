/*
 * XREFs of ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180030CC8
 * Callers:
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x180030C94 (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800268B4 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z @ 0x180031E00 (-GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18003A2B0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800B91D0 (_alloca_probe.c)
 */

bool __fastcall wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        const struct DiagnosticsInfo *a4,
        int a5,
        void *a6)
{
  wil *v10; // rcx
  unsigned __int16 epi16; // si
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  __m128i v22; // xmm6
  int *v23; // rax
  __int64 v24; // [rsp+20h] [rbp-1128h]
  __int64 v25; // [rsp+28h] [rbp-1120h]
  __int64 v26; // [rsp+40h] [rbp-1108h]
  _BYTE v27[16]; // [rsp+50h] [rbp-10F8h] BYREF
  _OWORD v28[9]; // [rsp+60h] [rbp-10E8h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-1058h]
  _BYTE v30[4096]; // [rsp+100h] [rbp-1048h] BYREF

  memset_0(v28, 0, 0x98uLL);
  epi16 = 0;
  if ( wil::details_abi::ThreadLocalData::GetLastError(this, (struct wil::FailureInfo *)v28, a3, 0)
    && (v12 = wil::ResultFromCaughtException(v10), DWORD2(v28[0]) == v12) )
  {
    v13 = v28[1];
    *(_OWORD *)a2 = v28[0];
    v14 = v28[2];
    *((_OWORD *)a2 + 1) = v13;
    v15 = v28[3];
    *((_OWORD *)a2 + 2) = v14;
    v16 = v28[4];
    *((_OWORD *)a2 + 3) = v15;
    v17 = v28[5];
    *((_OWORD *)a2 + 4) = v16;
    v18 = v28[6];
    *((_OWORD *)a2 + 5) = v17;
    v19 = v28[8];
    *((_OWORD *)a2 + 6) = v18;
    v20 = v29;
    *((_OWORD *)a2 + 7) = v28[7];
    *((_OWORD *)a2 + 8) = v19;
    *((_QWORD *)a2 + 18) = v20;
    return 1;
  }
  else
  {
    v22 = 0LL;
    if ( a4 )
    {
      v22 = *(__m128i *)&a4->cost;
      epi16 = _mm_extract_epi16(*(__m128i *)&a4[2].cost, 4);
    }
    memset_0(v30, 0, sizeof(v30));
    v23 = (int *)wil::details::ReportFailure_CaughtExceptionCommon<2>(
                   (__int64)v27,
                   v22.m128i_i32[0],
                   epi16,
                   _mm_srli_si128(v22, 8).m128i_i32[0],
                   v24,
                   v25,
                   (__int64)a6,
                   (__int64)v30,
                   v26,
                   2);
    return wil::details_abi::ThreadLocalData::GetLastError(this, a2, a3, *v23);
  }
}
