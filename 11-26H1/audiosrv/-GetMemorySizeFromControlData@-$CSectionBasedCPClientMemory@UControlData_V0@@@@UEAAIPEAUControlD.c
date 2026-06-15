/*
 * XREFs of ?GetMemorySizeFromControlData@?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAIPEAUControlData_V0@@@Z @ 0x18015F500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBasedCPClientMemory<ControlData_V0>::GetMemorySizeFromControlData(__int64 a1, _DWORD *a2)
{
  if ( a2[45] == -1 )
    return (unsigned int)a2[92];
  else
    return (unsigned int)a2[94];
}
