/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x180038890
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800080C0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlGetProcessPreferredUILanguages(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // edi
  int v5; // ebp
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = (int)a4;
  v5 = a3;
  v7 = a1;
  if ( !a4 || !a2 || !a3 && *a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return 3221225485LL;
  }
  else
  {
    v7 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    if ( *(_QWORD *)(v11 + 72) )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      v10 = LdrpConvertLangFallbackListToMultiSz(*(_QWORD *)(v9 + 72), v9, v5, v4, v7, 0, a2);
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
    }
    else
    {
      return (unsigned int)LdrpConvertLangFallbackListToMultiSz(0, v11, v5, v4, v7, 0, a2);
    }
    return v10;
  }
  return result;
}
