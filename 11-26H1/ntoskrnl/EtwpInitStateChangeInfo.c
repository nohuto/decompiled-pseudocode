/*
 * XREFs of EtwpInitStateChangeInfo @ 0x1409D0CD8
 * Callers:
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 * Callees:
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x14047D210 (PsGetProcessStartKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpInitStateChangeInfo(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int16 SessionId; // ax
  __int64 v6; // rcx
  __int16 v7; // r8
  __int16 v8; // ax
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-18h]

  memset_0((void *)a2, 0, 0x62uLL);
  v4 = *(_DWORD *)(a1 + 464);
  LODWORD(v10) = v4;
  SessionId = PsGetSessionId(a1);
  v6 = *(_QWORD *)(a1 + 504);
  v7 = SessionId;
  v8 = MEMORY[0xFFFFF780000002C4];
  WORD3(v10) = MEMORY[0xFFFFF780000002C4];
  WORD2(v10) = v7;
  *(_DWORD *)(a2 + 21) = v4;
  *(_WORD *)(a2 + 25) = v7;
  *(_WORD *)(a2 + 27) = v8;
  *(_QWORD *)(a2 + 29) = v6;
  *((_QWORD *)&v10 + 1) = PsGetProcessStartKey(a1);
  *(_OWORD *)(a2 + 2) = v10;
  *(_DWORD *)(a2 + 37) = *(_DWORD *)(a1 + 1656);
  *(_QWORD *)(a2 + 82) = _InterlockedIncrement64((volatile signed __int64 *)&stru_140F03830.WaitBlockFill11[16]);
  result = *(_QWORD *)(a1 + 1656);
  *(_QWORD *)(a2 + 90) = result;
  return result;
}
