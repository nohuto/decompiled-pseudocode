/*
 * XREFs of WdipSemDisableAllProviders @ 0x1408279C0
 * Callers:
 *     WdipSemShutdown @ 0x140826AD4 (WdipSemShutdown.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x140AD65E0 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemDisableAllProviders()
{
  __int64 v0; // rbx
  __int32 v1; // edi
  __int32 i; // esi
  __int64 v3; // rbp
  __int64 result; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange((volatile __int32 *)&stru_140F06A28.QuantumTarget, stru_140F06A28.QuantumTarget);
  for ( i = _InterlockedExchange((_DWORD *)&stru_140F06A28.QuantumTarget + 1, SHIDWORD(stru_140F06A28.QuantumTarget));
        (unsigned int)v0 < dword_140F06A20;
        v0 = (unsigned int)(v0 + 1) )
  {
    v3 = *((_QWORD *)&stru_140F049E8.StackBase + v0);
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
