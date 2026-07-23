/*
 * XREFs of WdipSemCaptureState @ 0x1404DC660
 * Callers:
 *     WdipSemDisableContextProvider @ 0x140AD6238 (WdipSemDisableContextProvider.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x140AD65E0 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemCaptureState(__int64 a1, char a2)
{
  char v3; // si
  unsigned int v4; // ecx
  unsigned __int16 v5; // di
  int v6; // edx
  int v8; // edx
  __int64 v10; // r9
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // r9

  v3 = 0;
  v4 = 0;
  if ( !a2 )
  {
    if ( !a1 )
      return (unsigned int)-1073741811;
    v5 = _InterlockedExchange((_DWORD *)&stru_140F06A28.QuantumTarget + 1, SHIDWORD(stru_140F06A28.QuantumTarget));
    v6 = *(_DWORD *)(a1 + 32);
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          return v4;
        return (unsigned int)WdipSemEnableDisableTrace(v5, a1, 0, 0, 0, 2);
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 40);
        if ( !*(_BYTE *)(v10 + 69) )
        {
          v11 = *(unsigned __int8 *)(v10 + 48);
          v3 = 1;
          v12 = *(_DWORD *)(a1 + 36) | *(_DWORD *)(v10 + 64);
          v13 = *(unsigned __int8 *)(a1 + 18);
          v14 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v10 + 56);
          if ( (unsigned __int8)v13 <= (unsigned __int8)v11 )
            v13 = v11;
          v4 = WdipSemEnableDisableTrace(v5, a1, v13, v14, v12, 1);
          if ( (v4 & 0x80000000) != 0 )
            return v4;
        }
        v4 = WdipSemEnableDisableTrace(v5, a1, 0, 0, 0, 2);
        if ( !v3 )
          return v4;
        return (unsigned int)WdipSemEnableDisableTrace(v5, a1, 0, 0, 0, 0);
      }
    }
  }
  return v4;
}
