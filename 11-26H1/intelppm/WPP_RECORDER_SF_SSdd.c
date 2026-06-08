/*
 * XREFs of WPP_RECORDER_SF_SSdd @ 0x14000C5F0
 * Callers:
 *     ValidateCpcSymmetry @ 0x1400351D0 (ValidateCpcSymmetry.c)
 *     ValidateTssSymmetry @ 0x140035FAC (ValidateTssSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rbx
  const wchar_t *v8; // rsi
  __int64 v9; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-78h]

  v7 = a7;
  v8 = a6;
  v9 = -1LL;
  v12 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a7[v13] );
    }
    v14 = a7;
    if ( !a7 )
      v14 = L"NULL";
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      a4,
      v17,
      v16,
      v14);
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( !a7 )
    v7 = L"NULL";
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v12 = 2 * v9 + 2;
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v8 = L"NULL";
  LOWORD(v21) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids, v21, v8, v12, v7);
}
