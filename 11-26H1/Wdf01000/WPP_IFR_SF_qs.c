/*
 * XREFs of WPP_IFR_SF_qs @ 0x14009E924
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14009E5A0 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qs(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const void *flags,
        const char *id)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rax
  bool v14; // zf

  v7 = id;
  v8 = -1LL;
  v10 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( id )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( id[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = id;
    if ( !id )
      v13 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxUsbPipe_cpp_Traceguids,
      0x18u,
      &flags,
      8LL,
      v13,
      v12,
      0LL);
  }
  v14 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v10 = v8 + 1;
    v14 = v7 == 0LL;
  }
  if ( v14 )
    v7 = "NULL";
  FxIFR(globals, 2u, 0xEu, WPP_FxUsbPipe_cpp_Traceguids, 0x18u, &flags, 8LL, v7, v10, 0LL);
}
