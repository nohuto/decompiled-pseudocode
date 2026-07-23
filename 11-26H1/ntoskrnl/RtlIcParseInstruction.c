/*
 * XREFs of RtlIcParseInstruction @ 0x140C5C0E8
 * Callers:
 *     KiTpSetupCompletion @ 0x1407BF6C0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiTpReadImageData @ 0x1407BF5D0 (KiTpReadImageData.c)
 *     RtlpIcParseInstruction @ 0x140C5D4F8 (RtlpIcParseInstruction.c)
 */

__int64 __fastcall RtlIcParseInstruction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  result = KiTpReadImageData(a2, (void *)(a4 + 6), 0xFu, &v7);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a4 + 5) = v7;
    result = RtlpIcParseInstruction(a4);
    if ( (_DWORD)result == -1073741306 && v7 < 0xF )
    {
      *(_OWORD *)a4 = 0LL;
      *(_OWORD *)(a4 + 16) = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      result = KiTpReadImageData(a2, (void *)(a4 + 6), 0xFu, 0LL);
      if ( (int)result >= 0 )
      {
        *(_BYTE *)(a4 + 5) = 15;
        return RtlpIcParseInstruction(a4);
      }
    }
  }
  return result;
}
