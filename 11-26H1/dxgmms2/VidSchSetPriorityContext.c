/*
 * XREFs of VidSchSetPriorityContext @ 0x14011A270
 * Callers:
 *     VidSchiCreateContextInternal @ 0x14002D178 (VidSchiCreateContextInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiSetPriorityContext @ 0x140046788 (VidSchiSetPriorityContext.c)
 *     VidSchiComputePriority @ 0x14011A3B4 (VidSchiComputePriority.c)
 */

__int64 __fastcall VidSchSetPriorityContext(struct _VIDSCH_CONTEXT *a1, int a2, int a3, int a4, int a5, char a6)
{
  __int64 v8; // rdx
  int v9; // edi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0;
  if ( !a1 )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6310;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return v11;
  }
  v8 = *((_QWORD *)a1 + 13);
  if ( *(_BYTE *)(v8 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 208), 0, 0) )
  {
    v11 = -1071775232;
    WdLogSingleEntry2(3LL, v8, -1071775232LL);
    WdLogGlobalForLineNumber = 6326;
    return v11;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 7085LL) )
  {
    if ( a6 )
    {
      if ( *((_BYTE *)a1 + 918) )
        return 0LL;
    }
    else
    {
      *((_BYTE *)a1 + 918) = 0;
    }
  }
  v9 = VidSchiComputePriority((_DWORD)a1, a2, a3, a4, a5, (__int64)&v13);
  if ( v9 >= 0 )
  {
    VidSchiSetPriorityContext(a1, v13);
    *((_DWORD *)a1 + 101) = a2;
  }
  return (unsigned int)v9;
}
