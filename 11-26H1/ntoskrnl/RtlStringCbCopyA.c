/*
 * XREFs of RtlStringCbCopyA @ 0x140475C38
 * Callers:
 *     ObpInitializeObjectRefInfo @ 0x1407C7D08 (ObpInitializeObjectRefInfo.c)
 *     ObpInitializeObjectRefsByStack @ 0x1407C7DF8 (ObpInitializeObjectRefsByStack.c)
 *     EtwpLogRefSetAutoMark @ 0x1408357CC (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140CC4068 (IopStoreArcInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax

  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cbDest;
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cbDest) )
        break;
      v5 = pszDest[v4];
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cbDest;
    }
    while ( cbDest );
    v6 = pszDest - 1;
    if ( cbDest )
      v6 = pszDest;
    *v6 = 0;
    return cbDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
