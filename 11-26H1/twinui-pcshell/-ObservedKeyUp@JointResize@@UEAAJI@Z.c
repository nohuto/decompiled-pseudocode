/*
 * XREFs of ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x180538D00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1801BA37C (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 */

__int64 __fastcall JointResize::ObservedKeyUp(JointResize *this, int a2)
{
  char *v2; // rcx

  if ( a2 == 17 )
  {
    v2 = (char *)this - 112;
    if ( !*((_QWORD *)v2 + 24) )
      JointResize::CreateGhostDivider((__int64)v2, 1u);
  }
  return 0LL;
}
