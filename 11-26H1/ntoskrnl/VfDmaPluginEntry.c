/*
 * XREFs of VfDmaPluginEntry @ 0x14064B280
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PpvDmaInit @ 0x140C27144 (PpvDmaInit.c)
 *     ViDmaInit @ 0x140C3F7EC (ViDmaInit.c)
 */

__int64 VfDmaPluginEntry()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v3; // [rsp+20h] [rbp-39h] BYREF
  int v4; // [rsp+28h] [rbp-31h]
  __int64 v5; // [rsp+30h] [rbp-29h]
  __int64 v6; // [rsp+38h] [rbp-21h]
  const char *v7; // [rsp+40h] [rbp-19h]
  int v8; // [rsp+48h] [rbp-11h]
  __int64 v9; // [rsp+50h] [rbp-9h]
  __int64 v10; // [rsp+58h] [rbp-1h]
  const char *v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  const char *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+3Fh]

  v4 = 373;
  qword_140F085A8 = (__int64)ViDmaUninit;
  v5 = 0LL;
  v6 = 0LL;
  v7 = "HalDmaAllocateCrashDumpRegistersEx";
  v8 = 372;
  v11 = "HalDmaFreeCrashDumpRegistersEx";
  v15 = "IoGetDmaAdapter";
  v9 = 0LL;
  v10 = 0LL;
  v12 = 371;
  v13 = 0LL;
  v14 = 0LL;
  v16 = 333;
  v17 = 0LL;
  v18 = 0LL;
  v0 = DifRegisterPlugin(&v3, 4LL, 7LL, &ViDmaSetting, "HalAllocateCrashDumpRegisters");
  if ( v0 >= 0 )
  {
    ViDmaInit();
    LOBYTE(v1) = 1;
    PpvDmaInit(v1);
  }
  return (unsigned int)v0;
}
