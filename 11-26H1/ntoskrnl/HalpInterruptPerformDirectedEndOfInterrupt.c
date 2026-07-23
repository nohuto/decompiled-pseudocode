/*
 * XREFs of HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B0844
 * Callers:
 *     HvlPerformEndOfInterrupt @ 0x1404B07E0 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpInterruptPerformDirectedEndOfInterrupt(__int64 a1)
{
  _DWORD *v1; // rbx
  _DWORD *LinesForGsiRange; // rax
  ULONG_PTR *v3; // r9

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 108) )
    {
      v1 = *(_DWORD **)(a1 + 160);
      if ( v1 )
      {
        if ( !v1[2] )
        {
          LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v1[16], v1[16] + 1);
          if ( LinesForGsiRange )
          {
            v3 = HalpInterruptLookupController(LinesForGsiRange[4]);
            if ( (*((_DWORD *)v3 + 61) & 0x400) != 0 )
              guard_dispatch_icall_no_overrides(v3[2], (unsigned int)v1[3]);
          }
        }
      }
    }
  }
}
