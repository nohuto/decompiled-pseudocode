/*
 * XREFs of RtlStringCbPrintfA @ 0x14000903C
 * Callers:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     PushTerm @ 0x140002590 (PushTerm.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ParseRelease @ 0x14000C360 (ParseRelease.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     ProcessIncDec @ 0x14000DFF0 (ProcessIncDec.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cbDest - 1;
    v5 = 0;
    v6 = _vsnprintf(pszDest, cbDest - 1, pszFormat, va);
    if ( v6 < 0 || v6 > v4 )
    {
      pszDest[v4] = 0;
      return -2147483643;
    }
    else if ( v6 == v4 )
    {
      pszDest[v4] = 0;
    }
  }
  return v5;
}
