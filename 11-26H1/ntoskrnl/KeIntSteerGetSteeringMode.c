/*
 * XREFs of KeIntSteerGetSteeringMode @ 0x1404322B0
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14043217C (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExpQueryInterruptSteeringInformation @ 0x14077CDEC (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     HalpInterruptAffinityIsSteerable @ 0x140432AF8 (HalpInterruptAffinityIsSteerable.c)
 */

__int64 __fastcall KeIntSteerGetSteeringMode(char a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int IsSteerable; // eax
  char v8; // cl
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v5 = 0;
  if ( KiIntSteerEnabled && a3 )
  {
    v10 = 0;
    IsSteerable = HalpInterruptAffinityIsSteerable(a5, &v10);
    v8 = v10;
    if ( IsSteerable < 0 )
      v8 = 0;
    if ( v8 )
    {
      if ( (KiInterruptControllerInfo & 1) != 0 && !a4 )
        return 1;
      if ( a4 == 1 )
      {
        if ( (((unsigned int)KiInterruptControllerInfo >> 1) & 1) != 0 )
          return 1;
        if ( (KiInterruptControllerInfo & 1) != 0 )
          return 2;
      }
    }
  }
  return v5;
}
