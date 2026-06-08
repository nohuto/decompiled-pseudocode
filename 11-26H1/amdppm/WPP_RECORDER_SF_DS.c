/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x140007750
 * Callers:
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002BBF8 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CSD @ 0x14002C268 (Display_CSD.c)
 *     Display_TSS @ 0x14002D0CC (Display_TSS.c)
 *     Display_xSD @ 0x14002D380 (Display_xSD.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Ds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        const char *a7)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  __int64 v11; // rax
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-38h]

  v7 = a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      a4,
      &a6,
      4LL,
      v12);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
  }
  if ( !v7 )
    v7 = "NULL";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_a2054a8aebda3d51da79f0036784113c_Traceguids, v14, &a6, 4LL, v7);
}
