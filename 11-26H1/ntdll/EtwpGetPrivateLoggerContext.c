/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x180066730
 * Callers:
 *     EtwpFlushUmLogger @ 0x180064D6C (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180064E98 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x180065274 (EtwpQueryUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800653DC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800654B8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180065B40 (EtwpGetPrivateLoggerContextByName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(unsigned __int16 *a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  bool v9; // zf
  wchar_t *v10; // rcx
  size_t v11; // rax
  _UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a1[72] )
  {
    v9 = a1 + 88 == 0LL;
    v10 = a1 + 88;
    *(_QWORD *)&String2.Length = 0LL;
    String2.Buffer = v10;
    if ( !v9 )
    {
      v11 = 2 * wcslen(v10);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      String2.Length = v11;
      String2.MaximumLength = v11 + 2;
    }
    return EtwpGetPrivateLoggerContextByName(&String2, a2);
  }
  else
  {
    v3 = a1[4];
    v4 = EtwpLoggerArray;
    v5 = v3 & 0xFFFF7FFF;
    v13 = v3 & 0xFFFF7FFF;
    if ( !EtwpLoggerArray )
      return 4201LL;
    if ( v5 < 0x40 )
    {
LABEL_4:
      v6 = 16LL * v5;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + v4 + 8));
      v7 = *(_QWORD *)(v6 + EtwpLoggerArray);
      if ( (v7 & 1) == 0 )
      {
        *a2 = v7;
        return 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
      return 4201LL;
    }
    result = EtwpDemuxUmTraceHandle(v3, &v13);
    if ( !(_DWORD)result )
    {
      v5 = v13;
      v4 = EtwpLoggerArray;
      goto LABEL_4;
    }
  }
  return result;
}
