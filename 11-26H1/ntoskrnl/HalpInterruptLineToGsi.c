/*
 * XREFs of HalpInterruptLineToGsi @ 0x140435864
 * Callers:
 *     HalpInterruptConnect @ 0x14057DE80 (HalpInterruptConnect.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x1405854D0 (HalpTimerUnmapInterrupt.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 */

__int64 __fastcall HalpInterruptLineToGsi(int *a1, _DWORD *a2)
{
  ULONG_PTR *v2; // rax
  _DWORD *v3; // r10
  __int64 v4; // r11
  ULONG_PTR *v5; // r9
  ULONG_PTR *v6; // r8
  int v7; // eax
  ULONG_PTR *v8; // rcx
  int v9; // edx
  int v10; // eax
  int v11; // edx

  *a2 = -1;
  v2 = HalpInterruptLookupController(*a1);
  if ( v2 )
  {
    v5 = v2 + 33;
    v6 = (ULONG_PTR *)v2[33];
    while ( v6 != v5 )
    {
      v7 = *(_DWORD *)(v4 + 4);
      v8 = v6;
      v6 = (ULONG_PTR *)*v6;
      v9 = *((_DWORD *)v8 + 5);
      if ( v9 <= v7 && *((_DWORD *)v8 + 6) > v7 )
      {
        v10 = v7 - v9;
        if ( v8 )
        {
          v11 = *((_DWORD *)v8 + 7);
          if ( v11 != -1 )
          {
            *v3 = v11 + v10;
            return 0LL;
          }
        }
        return 3221225485LL;
      }
    }
  }
  return 3221225485LL;
}
