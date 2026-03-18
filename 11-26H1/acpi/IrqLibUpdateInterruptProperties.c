/*
 * XREFs of IrqLibUpdateInterruptProperties @ 0x1400BC0D4
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1400AFC90 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x14004E6E8 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x140055C20 (IrqLibReleaseArbiterLock.c)
 *     ProcessorUpdateInterruptProperties @ 0x1400BCC20 (ProcessorUpdateInterruptProperties.c)
 *     IrqArbUpdateInterruptProperties @ 0x1400BE2F4 (IrqArbUpdateInterruptProperties.c)
 *     IcIsInterruptTypeSecondary @ 0x1400D3968 (IcIsInterruptTypeSecondary.c)
 */

__int64 __fastcall IrqLibUpdateInterruptProperties(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int updated; // ebx
  __int64 i; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rcx

  IrqLibAcquireArbiterLock(1);
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(a1) && a1 < 0xFFF00000 )
  {
    updated = ProcessorUpdateInterruptProperties(a1, a2);
    if ( updated >= 0 )
    {
      for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
      {
        if ( *(int *)(i + 28) >= 0 )
        {
          v8 = *(_DWORD *)(i + 16);
          if ( a1 >= v8 && a1 <= *(_DWORD *)(i + 20) )
          {
            v9 = 200LL * (a1 - v8);
            *(_DWORD *)(v9 + i + 64) = a2;
            *(_DWORD *)(v9 + i + 60) = a3;
            updated = IrqArbUpdateInterruptProperties(a1, a2, a3);
            goto LABEL_13;
          }
        }
      }
      updated = -1073741275;
    }
  }
  else
  {
    updated = -1073741811;
  }
LABEL_13:
  IrqLibReleaseArbiterLock();
  return (unsigned int)updated;
}
