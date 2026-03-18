/*
 * XREFs of WPP_IFR_SF_sSLSs @ 0x140093A18
 * Callers:
 *     imp_WdfDriverErrorReportApiMissing @ 0x140093D30 (imp_WdfDriverErrorReportApiMissing.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sSLSs(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const char *_a5,
        const wchar_t *globals_0,
        unsigned int level,
        const wchar_t *flags,
        const char *id)
{
  const char *v10; // rbp
  const wchar_t *v11; // r13
  const wchar_t *v12; // rdi
  _FX_DRIVER_GLOBALS *v13; // r10
  const char *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r15
  const char *v20; // r11
  __int64 v21; // rdx
  __int64 v22; // rax
  const wchar_t *v23; // r10
  __int64 v24; // r9
  __int64 v25; // rax
  const wchar_t *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  const char *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  const wchar_t *v34; // rdx
  __int64 v35; // rax
  bool v36; // zf

  v10 = id;
  v11 = L"<NULL>";
  v12 = flags;
  v13 = globals;
  v14 = _a5;
  v15 = -1LL;
  v16 = 5LL;
  v17 = 14LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( id )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( id[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = id;
    if ( !id )
      v20 = "NULL";
    if ( flags )
    {
      if ( *flags )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( flags[v22] );
        v21 = 2 * v22 + 2;
      }
      else
      {
        v21 = 14LL;
      }
      v23 = L"<NULL>";
      if ( *flags )
        v23 = flags;
    }
    else
    {
      v21 = 10LL;
      v23 = L"NULL";
    }
    if ( globals_0 )
    {
      if ( *globals_0 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( globals_0[v25] );
        v24 = 2 * v25 + 2;
      }
      else
      {
        v24 = 14LL;
      }
      v26 = L"<NULL>";
      if ( *globals_0 )
        v26 = globals_0;
    }
    else
    {
      v24 = 10LL;
      v26 = L"NULL";
    }
    if ( _a5 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( _a5[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v28 = 5LL;
    }
    v29 = _a5;
    if ( !_a5 )
      v29 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDriverApi_cpp_Traceguids,
      0x11u,
      v29,
      v28,
      v26,
      v24,
      &level,
      4LL,
      v23,
      v21,
      v20,
      v19,
      0LL);
    v13 = globals;
    v16 = 5LL;
  }
  if ( v10 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v10[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    if ( *v12 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( v12[v33] );
      v32 = 2 * v33 + 2;
    }
    else
    {
      v32 = 14LL;
    }
    v34 = L"<NULL>";
    if ( *v12 )
      v34 = v12;
  }
  else
  {
    v32 = 10LL;
    v34 = L"NULL";
  }
  if ( globals_0 )
  {
    if ( *globals_0 )
    {
      v35 = -1LL;
      do
        ++v35;
      while ( globals_0[v35] );
      v17 = 2 * v35 + 2;
    }
    if ( *globals_0 )
      v11 = globals_0;
  }
  else
  {
    v17 = 10LL;
    v11 = L"NULL";
  }
  v36 = _a5 == 0LL;
  if ( _a5 )
  {
    do
      ++v15;
    while ( _a5[v15] );
    v16 = v15 + 1;
    v36 = _a5 == 0LL;
  }
  if ( v36 )
    v14 = "NULL";
  FxIFR(v13, 2u, 6u, WPP_FxDriverApi_cpp_Traceguids, 0x11u, v14, v16, v11, v17, &level, 4LL, v34, v32, v10, v31, 0LL);
}
