/*
 * XREFs of WPP_RECORDER_SF_DDqDss @ 0x140044414
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400BCCF0 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDqDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rbx
  __int64 v12; // rdi
  const char *v13; // rsi
  __int64 v15; // rax
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // r8
  const char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // rax
  int v24; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a11;
  v12 = -1LL;
  v13 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a11[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a11;
    if ( !a11 )
      v20 = "NULL";
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a10;
    if ( !a10 )
      v23 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids,
      11LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      4LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v11 + v15) );
  }
  v16 = v13 == 0LL;
  if ( v13 )
  {
    do
      ++v12;
    while ( v13[v12] );
    v16 = v13 == 0LL;
  }
  if ( v16 )
    v13 = "NULL";
  LOWORD(v24) = 11;
  return WppAutoLogTrace(
           a1,
           4LL,
           20LL,
           &WPP_8369cd7954993692efaf1a45fbdc6aeb_Traceguids,
           v24,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           &a9,
           4LL,
           v13);
}
