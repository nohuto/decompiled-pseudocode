/*
 * XREFs of ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x18001FB84
 * Callers:
 *     ?SetMessage@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXPEBDZZ @ 0x18001F720 (-SetMessage@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflec.c)
 *     ?SetMessage@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXPEBDZZ @ 0x18046FC34 (-SetMessage@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001FEDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1800327D0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _vsnwprintf @ 0x1802D3068 (_vsnwprintf.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

void __fastcall wil::details::StoredCallContextInfo::SetMessage(
        wil::details::StoredCallContextInfo *this,
        const char *a2,
        va_list a3)
{
  __int64 v5; // rax
  SIZE_T v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rax
  wchar_t Buffer[2048]; // [rsp+20h] [rbp-2028h] BYREF
  wchar_t Format[2048]; // [rsp+1020h] [rbp-1028h] BYREF

  if ( a2 )
  {
    if ( a3 )
    {
      StringCchPrintfW(Format, 0x800uLL, L"%hs", a2);
      if ( (unsigned int)vsnwprintf(Buffer, 0x7FFuLL, Format, a3) > 0x7FE )
        Buffer[2047] = 0;
    }
    else
    {
      StringCchPrintfW(Buffer, 0x800uLL, L"%hs", a2);
    }
  }
  else
  {
    Buffer[0] = 0;
  }
  wil::details::StoredCallContextInfo::ClearMessage(this);
  v5 = -1LL;
  do
    ++v5;
  while ( Buffer[v5] );
  if ( v5 )
  {
    v6 = 2 * v5 + 2;
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 0, v6);
    *((_QWORD *)this + 2) = v8;
    if ( v8 )
    {
      *((_BYTE *)this + 24) = 1;
      if ( v6 )
        memcpy_0(v8, Buffer, v6);
    }
  }
}
