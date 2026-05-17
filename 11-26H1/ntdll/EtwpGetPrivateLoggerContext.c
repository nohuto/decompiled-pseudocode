/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x180077F10
 * Callers:
 *     EtwpFlushUmLogger @ 0x18007654C (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180076678 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x180076A54 (EtwpQueryUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x180076BBC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180076C98 (EtwpUpdateUmLogger.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x180011110 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180077320 (EtwpGetPrivateLoggerContextByName.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  bool v11; // zf
  const wchar_t *v12; // rcx
  size_t v13; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    v11 = a1 == -176;
    v12 = (const wchar_t *)(a1 + 176);
    v14[0] = 0LL;
    v14[1] = v12;
    if ( !v11 )
    {
      v13 = 2 * wcslen(v12);
      if ( v13 >= 0xFFFE )
        LOWORD(v13) = -4;
      LOWORD(v14[0]) = v13;
      WORD1(v14[0]) = v13 + 2;
    }
    return EtwpGetPrivateLoggerContextByName((__int64)v14, a2, a3, a4);
  }
  else
  {
    v5 = *(unsigned __int16 *)(a1 + 8);
    v6 = EtwpLoggerArray;
    v7 = v5 & 0xFFFF7FFF;
    v15 = v5 & 0xFFFF7FFF;
    if ( !EtwpLoggerArray )
      return 4201LL;
    if ( v7 < 0x40 )
    {
LABEL_4:
      v8 = 16LL * v7;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + v6 + 8));
      v9 = *(_QWORD *)(v8 + EtwpLoggerArray);
      if ( (v9 & 1) == 0 )
      {
        *a2 = v9;
        return 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v8 + EtwpLoggerArray + 8));
      return 4201LL;
    }
    result = EtwpDemuxUmTraceHandle(v5, &v15);
    if ( !(_DWORD)result )
    {
      v7 = v15;
      v6 = EtwpLoggerArray;
      goto LABEL_4;
    }
  }
  return result;
}
