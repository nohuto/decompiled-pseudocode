/*
 * XREFs of MiInitializeFunctionOverrides @ 0x140CF989C
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     VslInitFunctionOverrideCapabilities @ 0x1405C7218 (VslInitFunctionOverrideCapabilities.c)
 *     RtlFunctionOverrideSelfTest @ 0x140725A98 (RtlFunctionOverrideSelfTest.c)
 *     RtlInitFunctionOverrideCapabilities @ 0x14080F954 (RtlInitFunctionOverrideCapabilities.c)
 */

char __fastcall MiInitializeFunctionOverrides(__int64 a1)
{
  int inited; // eax

  if ( !RtlFunctionOverrideSelfTest() )
    KeBugCheckEx(0x1Au, 0x301uLL, 0LL, 0LL, 0LL);
  if ( (MiFlags & 0x10000) != 0 )
  {
    inited = VslInitFunctionOverrideCapabilities((struct _MDL *)&stru_140E2D2D0.WpsFeedback);
    if ( inited < 0 )
      KeBugCheckEx(0x1Au, 0x1083uLL, inited, 0LL, 0LL);
  }
  else
  {
    LOBYTE(inited) = RtlInitFunctionOverrideCapabilities(
                       &stru_140E2D2D0.WpsFeedback,
                       *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3880LL),
                       *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3888LL));
  }
  return inited;
}
