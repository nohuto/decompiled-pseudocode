/*
 * XREFs of WPP_SF_ddID @ 0x1800F6118
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F2A54 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddID(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, 27LL, &v5);
}
