/*
 * XREFs of NtGdiDDCCIGetVCPFeature @ 0x1401F2940
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1401F2A58 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetVCPFeature(
        void *a1,
        __int64 a2,
        _DWORD *Address,
        unsigned int *a4,
        unsigned int *Addressa)
{
  unsigned int v7; // ebx
  __int64 SessionState; // rax
  int VCPFeature; // edi
  unsigned int v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+34h] [rbp-14h] BYREF
  unsigned int v14[4]; // [rsp+38h] [rbp-10h] BYREF

  v7 = a2;
  v13 = 0;
  v12 = 0;
  v14[0] = 0;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  VCPFeature = CMonitorAPI::DdcciGetVCPFeature(
                 *(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL),
                 a1,
                 v7,
                 (enum _MC_VCP_CODE_TYPE *)&v13,
                 &v12,
                 v14);
  if ( VCPFeature >= 0 )
  {
    ProbeForWrite(a4, 4uLL, 1u);
    *a4 = v12;
    if ( Address )
    {
      ProbeForWrite(Address, 4uLL, 1u);
      *Address = v13;
    }
    if ( Addressa )
    {
      ProbeForWrite(Addressa, 4uLL, 1u);
      *Addressa = v14[0];
    }
  }
  return (unsigned int)VCPFeature;
}
