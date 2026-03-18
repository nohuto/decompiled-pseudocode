/*
 * XREFs of RtlpWriteExtendedContext @ 0x1409EC994
 * Callers:
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403D6B50 (RtlpValidateContextFlags.c)
 *     RtlpCopyExtendedContext @ 0x140417400 (RtlpCopyExtendedContext.c)
 *     RtlpGetLegacyContextLength @ 0x14048CA10 (RtlpGetLegacyContextLength.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 */

__int64 __fastcall RtlpWriteExtendedContext(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  ULONG Alignment[6]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  result = RtlpValidateContextFlags(a4, &v10);
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      return 3221225659LL;
    }
    else
    {
      Alignment[0] = 0;
      RtlpGetLegacyContextLength(a4, 0LL, Alignment);
      if ( (v10 & 1) != 0 )
        ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 8)), *(unsigned int *)(a3 + 12), Alignment[0]);
      if ( (v10 & 2) != 0 )
        ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 16)), *(unsigned int *)(a3 + 20), 0x40u);
      result = RtlpCopyExtendedContext(0, a2, a3, a4, a5, 0LL);
      Alignment[1] = result;
    }
  }
  return result;
}
