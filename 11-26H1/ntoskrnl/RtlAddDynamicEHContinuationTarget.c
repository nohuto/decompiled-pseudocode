/*
 * XREFs of RtlAddDynamicEHContinuationTarget @ 0x14080F038
 * Callers:
 *     PspProcessDynamicEHContinuationTargets @ 0x140B694A0 (PspProcessDynamicEHContinuationTargets.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     RtlpDynamicEHContinuationTargetsTreeCompare @ 0x140A950DC (RtlpDynamicEHContinuationTargetsTreeCompare.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlAddDynamicEHContinuationTarget(unsigned __int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  bool v3; // di
  int v6; // eax
  _QWORD *v7; // rax
  _QWORD *Pool2; // rax

  v2 = (_QWORD *)*a1;
  v3 = 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      v6 = RtlpDynamicEHContinuationTargetsTreeCompare(a2, v2);
      if ( v6 <= 0 )
      {
        if ( v6 >= 0 )
          return 3221225496LL;
        v7 = (_QWORD *)*v2;
        if ( !*v2 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v2[1];
        if ( !v7 )
        {
          v3 = 1;
          break;
        }
      }
      v2 = v7;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x101uLL);
  if ( !Pool2 )
    return 3221225495LL;
  Pool2[3] = a2;
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v2, v3, Pool2);
  return 0LL;
}
