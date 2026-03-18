/*
 * XREFs of GreSetLCDOrientation @ 0x140221040
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLCDOrientation(int a1, __int64 a2)
{
  char v2; // bl
  __int64 SessionState; // rax
  void *v4; // rcx
  __int64 result; // rax

  v2 = a1;
  SessionState = W32GetSessionState(a1, a2);
  v4 = &unk_140359630;
  if ( (v2 & 1) == 0 )
    v4 = &unk_140359460;
  result = *(_QWORD *)(SessionState + 96);
  *(_QWORD *)(result + 13464) = v4;
  return result;
}
