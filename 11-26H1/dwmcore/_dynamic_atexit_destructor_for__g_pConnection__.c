/*
 * XREFs of _dynamic_atexit_destructor_for__g_pConnection__ @ 0x1802B9C20
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180228EE0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 */

CInternalMilCmdConnection *dynamic_atexit_destructor_for__g_pConnection__()
{
  CInternalMilCmdConnection *result; // rax

  if ( g_pConnection )
    return CInternalMilCmdConnection::`scalar deleting destructor'(g_pConnection, 1);
  return result;
}
