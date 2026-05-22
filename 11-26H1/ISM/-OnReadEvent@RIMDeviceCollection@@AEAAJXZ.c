/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18004486C
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180044800 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180044794 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180044AA0 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x180044B24 (-ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18004506C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_ @ 0x1800B99A8 (_lambda_cc14c4b3090cc7c63243ed8c77095553_--_lambda_cc14c4b3090cc7c63243ed8c77095553_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::OnReadEvent(HANDLE *this)
{
  __m128i v2; // xmm6
  unsigned __int64 v3; // r9
  unsigned int i; // ecx
  HANDLE v5; // rdx
  const struct DeviceInfo *v6; // rdi
  unsigned int v7; // esi
  int InputReportFromRIM; // eax
  unsigned __int64 v10; // xmm6_8
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned __int64 v13; // xmm6_8
  int Buffer; // eax
  int v15; // [rsp+20h] [rbp-58h]
  _OWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v19; // [rsp+80h] [rbp+8h] BYREF

  v19 = 0;
  v2 = *(__m128i *)lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_(v16, &v19, this);
  v16[1] = v2;
  v17 = 1;
  v3 = *((unsigned int *)this + 680);
  if ( (_DWORD)v3 == -1073741528 )
  {
    RIMDeviceCollection::Close((RIMDeviceCollection *)this);
    if ( *(_BYTE *)v2.m128i_i64[0] )
    {
      v10 = _mm_srli_si128(v2, 8).m128i_u64[0];
      if ( *(_QWORD *)(v10 + 2696) )
      {
        RIMFreeInputBuffer(*(_QWORD *)(v10 + 80));
        *(_QWORD *)(v10 + 2696) = 0LL;
      }
    }
    return 0LL;
  }
  if ( (v3 & 0x80000000) != 0LL )
  {
    v11 = 649LL;
    goto LABEL_22;
  }
  for ( i = 0; i < 0x100; ++i )
  {
    v5 = this[i + 78];
    if ( v5 && (*((HANDLE *)v5 + 2) == this[338] || !*((_DWORD *)v5 + 10)) )
    {
      v6 = (const struct DeviceInfo *)*((_QWORD *)v5 + 4);
      v7 = *((unsigned __int16 *)this + 1364);
      if ( *((_DWORD *)v6 + 1) && *((_DWORD *)v6 + 1) != 256 )
      {
        InputTraceLogging::ISM::ReceiveRawInput(v6);
        (*((void (__fastcall **)(HANDLE *, _QWORD, HANDLE, _QWORD))*this + 11))(
          this,
          *(unsigned int *)v6,
          this[337],
          v7);
      }
      if ( this[337] != this[335] )
      {
        v19 = 1;
        RIMFreeInputBuffer(this[10]);
        this[337] = 0LL;
        Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, (const struct std::nothrow_t *)v7);
        v12 = Buffer;
        if ( Buffer < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2BD,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)Buffer,
            v15);
          goto LABEL_23;
        }
      }
      break;
    }
  }
  if ( *((_BYTE *)this + 2736) )
  {
    SetEvent(this[7]);
    return 0LL;
  }
  InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
  if ( InputReportFromRIM >= 0 )
    return 0LL;
  v3 = (unsigned int)InputReportFromRIM;
  v11 = 721LL;
LABEL_22:
  v12 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)v11,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
          (const char *)v3,
          v15);
LABEL_23:
  if ( *(_BYTE *)v2.m128i_i64[0] )
  {
    v13 = _mm_srli_si128(v2, 8).m128i_u64[0];
    if ( *(_QWORD *)(v13 + 2696) )
    {
      RIMFreeInputBuffer(*(_QWORD *)(v13 + 80));
      *(_QWORD *)(v13 + 2696) = 0LL;
    }
  }
  return v12;
}
