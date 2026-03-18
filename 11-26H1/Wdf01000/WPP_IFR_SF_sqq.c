/*
 * XREFs of WPP_IFR_SF_sqq @ 0x140097860
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const char *level,
        const void *flags,
        const void *id)
{
  const char *v8; // rbx
  __int64 v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rax
  bool v15; // zf

  v8 = level;
  v9 = -1LL;
  v11 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x80000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) )
  {
    if ( level )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( level[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = level;
    if ( !level )
      v14 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxObject_cpp_Traceguids,
      0xAu,
      v14,
      v13,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  }
  v15 = level == 0LL;
  if ( level )
  {
    do
      ++v9;
    while ( level[v9] );
    v11 = v9 + 1;
    v15 = level == 0LL;
  }
  if ( v15 )
    v8 = "NULL";
  FxIFR(globals, 1u, 0x14u, WPP_FxObject_cpp_Traceguids, 0xAu, v8, v11, &flags, 8LL, &id, 8LL, 0LL);
}
