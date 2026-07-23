/*
 * XREFs of DifSetCallerContext @ 0x14064E5A0
 * Callers:
 *     <none>
 * Callees:
 *     DifIsSupportedDomain @ 0x140643D50 (DifIsSupportedDomain.c)
 *     DifPopSegment @ 0x140650C14 (DifPopSegment.c)
 *     DifPushSegment @ 0x140650CFC (DifPushSegment.c)
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 */

char __fastcall DifSetCallerContext(unsigned __int64 a1)
{
  char v1; // bl
  __int64 v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( (_DWORD)VfRuleClasses
    && a1 >= 0xFFFF800000000000uLL
    && DifIsSupportedDomain(retaddr)
    && VfTargetDriversGetVerifierData(a1) )
  {
    v3 = DifPopSegment(&stru_140E27C48.SchedulerApcFill5[48]);
    v4 = (_QWORD *)v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 24) = retaddr;
      *(_QWORD *)(v3 + 8) = a1;
      v5 = *(_QWORD **)&KeGetCurrentThread()[1].WaitBlockFill11[64];
      if ( !v5 )
      {
        v6 = DifPopSegment(&stru_140E27C48.792);
        v5 = (_QWORD *)v6;
        if ( !v6 )
        {
          DifPushSegment(&stru_140E27C48.SchedulerApcFill5[48]);
          return v1;
        }
        *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = v6;
      }
      v1 = 1;
      *v4 = *v5;
      *v5 = v4;
    }
    return v1;
  }
  return 0;
}
