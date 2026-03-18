/*
 * XREFs of VidSchiAllocateHistoryBufferStorage @ 0x14010B080
 * Callers:
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchiAllocateHistoryBufferStorage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 Pool2; // rax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( a2 <= 4 )
  {
    *(_QWORD *)(a1 + 624) = a1 + 176;
    *(_QWORD *)(a1 + 272) = a1 + 208;
    return 0LL;
  }
  v4 = a2;
  Pool2 = ExAllocatePool2(64LL, 8LL * a2, 1633773910LL);
  *(_QWORD *)(a1 + 624) = Pool2;
  if ( Pool2 )
  {
    v8 = ExAllocatePool2(64LL, 16 * v4, 1633773910LL);
    *(_QWORD *)(a1 + 272) = v8;
    if ( v8 )
      return 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 624), 0);
    *(_QWORD *)(a1 + 624) = 0LL;
    _InterlockedIncrement(&dword_14008A99C);
    v6 = 11782;
    WdLogSingleEntry1(6LL, 11782LL);
  }
  else
  {
    _InterlockedIncrement(&dword_14008A998);
    v6 = 11769;
    WdLogSingleEntry1(6LL, 11769LL);
  }
  WdLogGlobalForLineNumber = v6;
  DxgkLogInternalTriageEvent(v7, 262145LL);
  return 3221225495LL;
}
