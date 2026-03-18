/*
 * XREFs of WPP_IFR_SF_qDDDDsdisd @ 0x1400AA820
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x140067650 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDDDDsdisd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        unsigned int _a6,
        unsigned int _a7,
        unsigned int _a8,
        unsigned int _a9,
        const char *_a10,
        int globals_0,
        __int64 level,
        const char *flags,
        int id)
{
  const char *v15; // rbx
  const char *v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r8
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf

  v15 = flags;
  v16 = _a10;
  v17 = -1LL;
  v19 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( flags )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( flags[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = flags;
    if ( !flags )
      v22 = "NULL";
    if ( _a10 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( _a10[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = _a10;
    if ( !_a10 )
      v25 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_InterruptObject_cpp_Traceguids,
      0x17u,
      &_a5,
      8LL,
      &_a6,
      4LL,
      &_a7,
      4LL,
      &_a8,
      4LL,
      &_a9,
      4LL,
      v25,
      v24,
      &globals_0,
      4LL,
      &level,
      8LL,
      v22,
      v21,
      &id,
      4LL,
      0LL);
  }
  if ( v15 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v15[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  v28 = v16 == 0LL;
  if ( v16 )
  {
    do
      ++v17;
    while ( v16[v17] );
    v19 = v17 + 1;
    v28 = v16 == 0LL;
  }
  if ( v28 )
    v16 = "NULL";
  FxIFR(
    globals,
    2u,
    0xCu,
    WPP_InterruptObject_cpp_Traceguids,
    0x17u,
    &_a5,
    8LL,
    &_a6,
    4LL,
    &_a7,
    4LL,
    &_a8,
    4LL,
    &_a9,
    4LL,
    v16,
    v19,
    &globals_0,
    4LL,
    &level,
    8LL,
    v15,
    v27,
    &id,
    4LL,
    0LL);
}
