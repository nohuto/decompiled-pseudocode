/*
 * XREFs of VidSchIsSyncObjectWaitUnordered @ 0x14010FD90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2)
{
  int v3; // edx
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12294;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 != 4 && (unsigned int)(v3 - 5) > 1 )
  {
    if ( v3 != 2 )
      return 0;
    v5 = *(_BYTE *)(a1 + 28) ? *(_QWORD *)(*(_QWORD *)(a1 + 344) + 40LL) : *(_QWORD *)(a1 + 72);
    if ( v5 >= a2 )
      return 0;
  }
  return 1;
}
