/*
 * XREFs of VfIoPendingEntry @ 0x140649020
 * Callers:
 *     <none>
 * Callees:
 *     VfIoPendingUnload @ 0x140649100 (VfIoPendingUnload.c)
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     PpvUtilInit @ 0x140C27154 (PpvUtilInit.c)
 *     VfPendingInitPhase1 @ 0x140C35F38 (VfPendingInitPhase1.c)
 */

__int64 __fastcall VfIoPendingEntry(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+20h] [rbp-48h]
  _QWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+50h] [rbp-18h]

  v4[0] = 0LL;
  v6 = 0LL;
  LOBYTE(a1) = 1;
  v4[1] = VfIoPendingUnload;
  v5 = 0LL;
  PpvUtilInit(a1);
  if ( !VfForcedPendingLog )
  {
    if ( (unsigned int)VfForcedPendingLogLength > 0x100000 )
      VfForcedPendingLogLength = 0x100000;
    VfForcedPendingLog = (PVOID)ExAllocatePool3(
                                  64LL,
                                  (unsigned __int64)(unsigned int)VfForcedPendingLogLength << 9,
                                  1346790998LL,
                                  &VfExtendedParameters,
                                  1);
    if ( !VfForcedPendingLog )
    {
      v1 = -1073741801;
LABEL_6:
      VfIoPendingUnload();
      return (unsigned int)v1;
    }
  }
  v1 = DifRegisterPlugin(0LL, 0LL, 9LL, v4, v3);
  if ( v1 < 0 )
    goto LABEL_6;
  if ( (unsigned int)InitializationPhase > 1 && !ViPendingWorkersCount )
    VfPendingInitPhase1();
  return (unsigned int)v1;
}
