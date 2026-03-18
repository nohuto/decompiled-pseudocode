/*
 * XREFs of NtGdiDDCCIGetCapabilitiesStringLength @ 0x14026A200
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x14026A278 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetCapabilitiesStringLength(void *a1, unsigned int *Address)
{
  __int64 SessionState; // rax
  int CapabilitiesStringLength; // ebx
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  SessionState = W32GetSessionState((_DWORD)a1, Address);
  CapabilitiesStringLength = CMonitorAPI::DdcciGetCapabilitiesStringLength(
                               *(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL),
                               a1,
                               &v7);
  if ( CapabilitiesStringLength >= 0 )
  {
    ProbeForWrite(Address, 4uLL, 1u);
    *Address = v7;
  }
  return (unsigned int)CapabilitiesStringLength;
}
