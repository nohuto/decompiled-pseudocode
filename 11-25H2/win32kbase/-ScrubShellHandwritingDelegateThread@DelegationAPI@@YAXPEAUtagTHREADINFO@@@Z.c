/*
 * XREFs of ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401415A8
 * Callers:
 *     CleanupShellHandwritingInputDelegation @ 0x140141590 (CleanupShellHandwritingInputDelegation.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DelegationAPI::ScrubShellHandwritingDelegateThread(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*((_QWORD *)this + 58) + 320LL); i; i = *(_QWORD *)(i + 704) )
  {
    if ( *(DelegationAPI **)(i + 1496) == this )
    {
      *(_QWORD *)(i + 1496) = 0LL;
      *(_DWORD *)(i + 1488) = 0;
    }
  }
}
