/*
 * XREFs of WdipSemDisableAllProviders @ 0x1408217B0
 * Callers:
 *     WdipSemShutdown @ 0x1408208C4 (WdipSemShutdown.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x140AD9B30 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemDisableAllProviders()
{
  __int64 v0; // rbx
  __int32 v1; // edi
  __int32 i; // esi
  __int64 v3; // rbp
  __int64 result; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange((_DWORD *)&stru_140F066E8.SListFaultAddress + 1, SHIDWORD(stru_140F066E8.SListFaultAddress));
  for ( i = _InterlockedExchange(
              (volatile __int32 *)&stru_140F066E8.SListFaultAddress,
              (__int32)stru_140F066E8.SListFaultAddress); (unsigned int)v0 < dword_140F060A0; v0 = (unsigned int)(v0 + 1) )
  {
    v3 = *((_QWORD *)&stru_140F03F40.WaitBlock[0].Object + v0);
    if ( *(_BYTE *)(v3 + 37) && v1 )
      result = WdipSemEnableDisableTrace((unsigned __int16)v1, v3, 0, 0, 0, 0);
    if ( *(_BYTE *)(v3 + 69) )
    {
      if ( i )
        result = WdipSemEnableDisableTrace((unsigned __int16)i, v3, 0, 0, 0, 0);
    }
  }
  return result;
}
