/*
 * XREFs of WmipEnableCollectOrEvent @ 0x140A0D280
 * Callers:
 *     WmipOpenBlock @ 0x140A0D540 (WmipOpenBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipSendEnableRequest @ 0x140A0A1B0 (WmipSendEnableRequest.c)
 */

__int64 __fastcall WmipEnableCollectOrEvent(ULONG_PTR BugCheckParameter2, int a2, _BYTE *a3)
{
  int v5; // edx
  int v6; // ebx
  char v7; // si
  __int64 *i; // rax
  int v9; // ecx

  *a3 = 0;
  v5 = a2 - 2244924;
  if ( !v5 )
  {
    v6 = 0;
    v7 = 0;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    for ( i = *(__int64 **)(BugCheckParameter2 + 56); i != (__int64 *)(BugCheckParameter2 + 56); i = (__int64 *)*i )
    {
      v9 = *((_DWORD *)i + 4);
      if ( (v9 & 0x1000) == 0 && ((v9 & 0x8000) == 0 || !v6) && (v6 || (v9 & 4) != 0) )
        v6 = 1;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( !v6 )
      return (unsigned int)v6;
LABEL_14:
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v6 = WmipSendEnableRequest((_DWORD *)BugCheckParameter2, v7);
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( v6 >= 0 )
      *a3 = 1;
    return (unsigned int)v6;
  }
  if ( v5 == 4 )
  {
    v7 = 1;
    goto LABEL_14;
  }
  return 3221225647LL;
}
