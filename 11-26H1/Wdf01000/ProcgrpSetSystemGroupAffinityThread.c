/*
 * XREFs of ProcgrpSetSystemGroupAffinityThread @ 0x1400ACD70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall ProcgrpSetSystemGroupAffinityThread(_GROUP_AFFINITY *NewAffinity, _GROUP_AFFINITY *PreviousAffinity)
{
  unsigned __int64 Mask; // rdx
  unsigned __int64 v4; // rax

  Mask = 0LL;
  if ( !NewAffinity->Group && !NewAffinity->Reserved[0] && !NewAffinity->Reserved[1] && !NewAffinity->Reserved[2] )
    Mask = NewAffinity->Mask;
  v4 = PfnKeSetSystemAffinityThreadEx(Mask);
  if ( PreviousAffinity )
  {
    *(_QWORD *)&PreviousAffinity->Group = 0LL;
    PreviousAffinity->Mask = v4;
  }
}
