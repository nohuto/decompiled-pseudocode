/*
 * XREFs of EtwpQueryUmLogger @ 0x180076A54
 * Callers:
 *     EtwpFlushUmLogger @ 0x18007654C (EtwpFlushUmLogger.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180076830 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpIncrementUmLoggerFile @ 0x180076BBC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180076C98 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x180075F50 (RtlCopyUnicodeString.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180076484 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpGetPrivateLoggerContext @ 0x180077F10 (EtwpGetPrivateLoggerContext.c)
 */

__int64 __fastcall EtwpQueryUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0LL;
  result = EtwpGetPrivateLoggerContext(a4, v11);
  if ( !(_DWORD)result )
  {
    *a2 = 0;
    *a3 = 176;
    if ( a1 < 0xB0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v11[0] + 20) + EtwpLoggerArray + 8));
      return 234LL;
    }
    else
    {
      v9 = v11[0];
      if ( (unsigned int)*(unsigned __int16 *)(v11[0] + 138) + 176 < a1 )
      {
        *(_QWORD *)(a4 + 152) = a4 + 176;
        *(_WORD *)(a4 + 146) = *(_WORD *)(v9 + 138);
        RtlCopyUnicodeString((unsigned __int16 *)(a4 + 144), (unsigned __int16 *)(v9 + 136));
        *a3 += *(unsigned __int16 *)(v9 + 138);
      }
      EtwpGetUmLoggerInfoFromContext(a4, v9, 0LL);
      v10 = *(unsigned __int16 *)(a4 + 146) + 176;
      if ( v10 + *(unsigned __int16 *)(v9 + 154) < a1 )
      {
        *(_QWORD *)(a4 + 136) = a4 + v10;
        *(_WORD *)(a4 + 130) = *(_WORD *)(v9 + 154);
        RtlCopyUnicodeString((unsigned __int16 *)(a4 + 128), (unsigned __int16 *)(v9 + 152));
        *a3 += *(unsigned __int16 *)(v9 + 154);
      }
      *a2 = *a3;
      if ( *a3 < *(_DWORD *)a4 )
        *(_DWORD *)a4 = *a3;
      _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v9 + 20) + EtwpLoggerArray + 8));
      return 0LL;
    }
  }
  return result;
}
