/*
 * XREFs of PsTlsSetValue @ 0x140A9E5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     RtlpFlsSetValue @ 0x140A9E618 (RtlpFlsSetValue.c)
 */

__int64 __fastcall PsTlsSetValue(__int64 a1, __int64 a2)
{
  unsigned __int16 *p_UserAffinityPrimaryGroup; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  p_UserAffinityPrimaryGroup = &KeGetCurrentThread()[1].UserAffinityPrimaryGroup;
  if ( (*(_DWORD *)p_UserAffinityPrimaryGroup & 3) != 0 )
  {
    return (unsigned int)-1073741749;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = RtlpFlsSetValue(a1, p_UserAffinityPrimaryGroup, (unsigned int)a1, a2);
    KeLeaveGuardedRegion();
  }
  return v5;
}
