/*
 * XREFs of ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x180538CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1801CC820 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 */

__int64 __fastcall JointResize::ObservedKeyDown(JointResize *this, int a2)
{
  JointResize *v2; // rcx

  if ( a2 == 17 )
  {
    v2 = (JointResize *)((char *)this - 112);
    if ( *((_QWORD *)v2 + 24) )
      JointResize::DestroyGhostDivider(v2);
  }
  return 0LL;
}
