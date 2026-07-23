/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x140474270
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14095F340 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchInterfaceClass @ 0x1409721D0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x140972DA0 (_PnpDispatchInstallerClass.c)
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
