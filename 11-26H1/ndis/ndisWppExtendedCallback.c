/*
 * XREFs of ndisWppExtendedCallback @ 0x1400C88B0
 * Callers:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400C839C (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1400C8904 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWppExtendedCallback(char a1, int a2, char a3)
{
  unsigned __int8 v3; // r9
  int v4; // r11d
  __int64 result; // rax
  char v6; // cl
  unsigned __int8 i; // cl

  v3 = 0;
  if ( a1 )
  {
    v4 = 1;
    while ( v3 < 0x20u )
    {
      result = v3++;
      v6 = (a2 & v4) != 0 ? a3 : 0;
      v4 *= 2;
      ndisWppEnabledLevelPerFlag[result] = v6;
    }
  }
  else
  {
    for ( i = 0; i < 0x20u; ++i )
    {
      result = i;
      ndisWppEnabledLevelPerFlag[result] = 0;
    }
  }
  return result;
}
