/*
 * XREFs of ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140172BC8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     CleanupShellHandwritingInputDelegation @ 0x140172BB0 (CleanupShellHandwritingInputDelegation.c)
 * Callees:
 *     <none>
 */

void __fastcall DelegationAPI::ScrubShellHandwritingDelegateThread(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*((_QWORD *)this + 57) + 328LL); i; i = *(_QWORD *)(i + 696) )
  {
    if ( *(DelegationAPI **)(i + 1496) == this )
    {
      *(_QWORD *)(i + 1496) = 0LL;
      *(_DWORD *)(i + 1488) = 0;
    }
  }
}
