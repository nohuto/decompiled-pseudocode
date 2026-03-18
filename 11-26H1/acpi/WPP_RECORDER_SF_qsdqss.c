/*
 * XREFs of WPP_RECORDER_SF_qsdqss @ 0x14003C944
 * Callers:
 *     ACPIDockIrpQueryDeviceRelations @ 0x1400AB9F0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1400ABDF0 (ACPIDockIrpQueryID.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1400C61D0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400C63C0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rbx
  __int64 v12; // rdi
  const char *v13; // rsi
  const char *v15; // rbp
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // r11
  const char *v23; // r9
  __int64 v24; // rax
  __int64 v25; // r10
  const char *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  const char *v29; // rcx
  int v30; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a11;
  v12 = -1LL;
  v13 = a10;
  v15 = a7;
  v16 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a11[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a11;
    if ( !a11 )
      v23 = "NULL";
    if ( a10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a10[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a10;
    if ( !a10 )
      v26 = "NULL";
    if ( a7 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a7[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v28 = 5LL;
    }
    v29 = a7;
    if ( !a7 )
      v29 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      v29,
      v28,
      &a8,
      4LL,
      &a9,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
  }
  if ( v11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v11 + v17) );
  }
  if ( v13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v13[v18] );
  }
  if ( !v13 )
    v13 = "NULL";
  if ( v15 )
  {
    do
      ++v12;
    while ( v15[v12] );
    v19 = v12 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  LOWORD(v30) = v16;
  return WppAutoLogTrace(a1, 2LL, 5LL, a5, v30, &a6, 8LL, v15, v19, &a8, 4LL, &a9, 8LL, v13);
}
