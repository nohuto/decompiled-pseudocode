/*
 * XREFs of WPP_RECORDER_SF_qqDqss @ 0x14005EA40
 * Callers:
 *     ACPIDeferredWakeCompletion @ 0x140049B10 (ACPIDeferredWakeCompletion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rbx
  __int64 v12; // rdi
  const char *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  const char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  const char *v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  int v24; // [rsp+20h] [rbp-88h]

  v11 = a11;
  v12 = -1LL;
  v13 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a11[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a11;
    if ( !a11 )
      v17 = "NULL";
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
      19LL,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v20,
      v19,
      v17,
      v16,
      0LL);
  }
  if ( v11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v11[v21] );
  }
  v22 = v13 == 0LL;
  if ( v13 )
  {
    do
      ++v12;
    while ( v13[v12] );
    v22 = v13 == 0LL;
  }
  if ( v22 )
    v13 = "NULL";
  LOWORD(v24) = 19;
  return WppAutoLogTrace(
           a1,
           2LL,
           10LL,
           &WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
           v24,
           &a6,
           8LL,
           &a7,
           8LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v13);
}
