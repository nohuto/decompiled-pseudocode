/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x14047A900
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140917770 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x140918340 (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchDeviceInterface @ 0x14099E8E0 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMapCmStatusToDispatchStatus(int a1)
{
  __int64 result; // rax

  if ( a1 <= -1073741637 )
  {
    if ( a1 == -1073741637 )
      return 3221226021LL;
    if ( a1 != -1073741810 )
    {
      if ( a1 == -1073741767 )
        return 3221225523LL;
      if ( a1 != -1073741766 )
        return (unsigned int)a1;
    }
    return 3221225524LL;
  }
  if ( a1 == -1073741632 )
    return 3221225524LL;
  result = 3221225524LL;
  if ( a1 != -1073741127 )
    return (unsigned int)a1;
  return result;
}
