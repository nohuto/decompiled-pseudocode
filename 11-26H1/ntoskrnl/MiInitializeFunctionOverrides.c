/*
 * XREFs of MiInitializeFunctionOverrides @ 0x140CF351C
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     VslInitFunctionOverrideCapabilities @ 0x1405C49A8 (VslInitFunctionOverrideCapabilities.c)
 *     RtlFunctionOverrideSelfTest @ 0x140720E78 (RtlFunctionOverrideSelfTest.c)
 *     RtlInitFunctionOverrideCapabilities @ 0x140809EC4 (RtlInitFunctionOverrideCapabilities.c)
 */

char __fastcall MiInitializeFunctionOverrides(__int64 a1)
{
  int inited; // eax

  if ( !RtlFunctionOverrideSelfTest() )
    KeBugCheckEx(0x1Au, 0x301uLL, 0LL, 0LL, 0LL);
  if ( (MiFlags & 0x10000) != 0 )
  {
    inited = VslInitFunctionOverrideCapabilities((struct _MDL *)&stru_140E2D150.WpsFeedback);
    if ( inited < 0 )
      KeBugCheckEx(0x1Au, 0x1083uLL, inited, 0LL, 0LL);
  }
  else
  {
    LOBYTE(inited) = RtlInitFunctionOverrideCapabilities(
                       &stru_140E2D150.WpsFeedback,
                       *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3880LL),
                       *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3888LL));
  }
  return inited;
}
