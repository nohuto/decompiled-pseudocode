/*
 * XREFs of DifClearCallerContext @ 0x14064A670
 * Callers:
 *     <none>
 * Callees:
 *     DifIsSupportedDomain @ 0x140640170 (DifIsSupportedDomain.c)
 *     DifPushSegment @ 0x14064D11C (DifPushSegment.c)
 */

void DifClearCallerContext()
{
  __int64 v0; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)VfRuleClasses )
  {
    if ( DifIsSupportedDomain(retaddr) )
    {
      v0 = *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64];
      if ( v0 )
      {
        if ( *(_QWORD *)v0 )
        {
          *(_QWORD *)v0 = **(_QWORD **)v0;
          DifPushSegment(&stru_140E27B08.InGlobalForegroundList);
        }
        if ( !*(_QWORD *)v0 && !*(_QWORD *)(v0 + 8) )
        {
          DifPushSegment(&stru_140E27B08.792);
          *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = 0LL;
        }
      }
    }
  }
}
