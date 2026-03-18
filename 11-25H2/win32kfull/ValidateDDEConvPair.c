/*
 * XREFs of ValidateDDEConvPair @ 0x1401DCF30
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessageCheckIL @ 0x1400CA9FC (_PostMessageCheckIL.c)
 *     _PostTransformableMessageIL @ 0x14012A580 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1401421C0 (NtUserPostMessage.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401DCF78 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

struct tagWND *__fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *result; // rax
  unsigned int v4; // ebx

  result = (struct tagWND *)ValidateHwnd(a1);
  v4 = 0;
  if ( result )
  {
    LOBYTE(v4) = FindDdeConv(result, a2) != 0LL;
    return (struct tagWND *)v4;
  }
  return result;
}
