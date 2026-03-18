/*
 * XREFs of VidSchSetAbsolutePriorityContext @ 0x140122F90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiSetPriorityContext @ 0x140046788 (VidSchiSetPriorityContext.c)
 *     ?VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z @ 0x1400541F0 (-VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z.c)
 */

__int64 __fastcall VidSchSetAbsolutePriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2, char a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( a1 )
  {
    if ( a2 > 0x1E )
    {
      WdLogSingleEntry2(1LL, a2, -1073741811LL);
      WdLogGlobalForLineNumber = 6197;
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
    }
    v6 = *((_QWORD *)a1 + 13);
    if ( *(_BYTE *)(v6 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 208), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v6, -1071775232LL);
      result = 3223192064LL;
      WdLogGlobalForLineNumber = 6208;
    }
    else
    {
      v7 = *((_QWORD *)a1 + 13);
      v8 = *(_QWORD *)(v7 + 48);
      if ( a2 < 0x1E
        || a3
        || (result = VidSchiCheckProcessGPUPriorityPrivilege(*(struct _VIDSCH_PROCESS **)(v7 + 48)), (int)result >= 0) )
      {
        v9 = *(_QWORD *)(v6 + 40);
        if ( !*(_BYTE *)(v9 + 7079)
          || *(_BYTE *)(v8 + 2632)
          || (v13 = *(_QWORD *)(v8 + 8)) == 0
          || (*(_DWORD *)(v13 + 408) & 2) != 0 )
        {
          if ( *(_BYTE *)(v9 + 7085) )
            *((_BYTE *)a1 + 918) = 1;
          VidSchiSetPriorityContext(a1, a2);
        }
        return 0LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6186;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}
