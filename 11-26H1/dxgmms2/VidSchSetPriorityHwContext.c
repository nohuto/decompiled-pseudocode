/*
 * XREFs of VidSchSetPriorityHwContext @ 0x14011C570
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x14011C670 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetPriorityHwContext(__int64 a1, int a2, __int64 a3, int a4, int a5, char a6)
{
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx

  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v7 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 208), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v7, -1071775232LL);
      result = 3223192064LL;
      WdLogGlobalForLineNumber = 6099;
    }
    else
    {
      *(_DWORD *)(a1 + 80) = a5;
      *(_DWORD *)(a1 + 68) = a2;
      *(_DWORD *)(a1 + 76) = a4;
      if ( *(_BYTE *)(*(_QWORD *)(v7 + 40) + 7085LL) )
      {
        if ( !a6 )
          *(_BYTE *)(a1 + 148) = 0;
      }
      VidSchiUpdateDdiHwContextPriority((struct VIDSCH_HW_CONTEXT *)a1);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6085;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}
