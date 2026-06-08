/*
 * XREFs of WPP_RECORDER_SF_SSDs @ 0x14000BFC4
 * Callers:
 *     ValidateCpcResourcePrioritiesSymmetry @ 0x140034FCC (ValidateCpcResourcePrioritiesSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        __int64 a9)
{
  const wchar_t *v9; // rsi
  __int64 v10; // rdi
  const wchar_t *v11; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  int v22; // [rsp+20h] [rbp-78h]

  v9 = a7;
  v10 = -1LL;
  v11 = a6;
  v13 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(a9 + v14) );
    }
    if ( a7 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a7[v15] );
    }
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
    }
    WORD1(v17) = WORD1(a6);
    if ( !a6 )
      v17 = L"NULL";
    HIWORD(v22) = WORD1(v17);
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids);
  }
  if ( a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(a9 + v18) );
  }
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
  }
  if ( !a7 )
    v9 = L"NULL";
  v20 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v13 = 2 * v10 + 2;
    v20 = a6 == 0LL;
  }
  if ( v20 )
    v11 = L"NULL";
  LOWORD(v22) = 86;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids, v22, v11, v13, v9);
}
