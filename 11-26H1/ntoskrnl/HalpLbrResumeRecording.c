/*
 * XREFs of HalpLbrResumeRecording @ 0x14047FBB0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall HalpLbrResumeRecording(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ecx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned int v7; // rdx^4
  unsigned __int64 v8; // rax

  result = (unsigned int)dword_140F87A24;
  if ( !dword_140F87A24 )
    return result;
  if ( (_BYTE)a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    if ( dword_140F87A40 == 1 || dword_140F87A40 == 2 )
    {
      v5 = __readmsr(0x1D9u);
      if ( dword_140F87A40 == 1 )
      {
        __writemsr(0x1C8u, (unsigned int)dword_140F87A28);
        __writemsr(0x1C9u, (unsigned int)(dword_140F87A2C - 1));
        v5 |= 1uLL;
      }
      __writemsr(0x1D9u, v5 | 0x800);
      if ( dword_140F87A40 != 2 )
        goto LABEL_18;
      v6 = 5326;
      v7 = 0;
      LODWORD(v8) = dword_140F87A38 | 1;
    }
    else
    {
      if ( dword_140F87A40 != 3 )
      {
LABEL_18:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
      __writemsr(0xC000010E, (unsigned int)dword_140F87A28);
      __writemsr(0x1D9u, __readmsr(0x1D9u) | 0x801);
      v6 = -1073741553;
      v8 = __readmsr(0xC000010F) | 0x40;
      v7 = HIDWORD(v8);
    }
    __writemsr(v6, __PAIR64__(v7, v8));
    goto LABEL_18;
  }
  if ( dword_140F87A40 == 1 || dword_140F87A40 == 2 )
  {
    if ( dword_140F87A40 == 1 )
    {
      result = __readmsr(0x1D9u);
      if ( (result & 1) == 0 )
      {
        result |= 1uLL;
        __writemsr(0x1D9u, result);
      }
    }
    if ( !HalpLbrIsFreezeLegacy )
    {
      result = __readmsr(0x38Eu);
      if ( (result & 0x400000000000000LL) != 0 )
      {
        v2 = 912;
LABEL_10:
        result = 0LL;
        __writemsr(v2, 0x400000000000000uLL);
      }
    }
  }
  else if ( dword_140F87A40 == 3 )
  {
    v4 = __readmsr(0xC000010F);
    if ( (v4 & 0x40) == 0 )
      __writemsr(0xC000010F, v4 | 0x40);
    result = __readmsr(0xC0000300);
    if ( (result & 0x400000000000000LL) != 0 )
    {
      v2 = -1073741054;
      goto LABEL_10;
    }
  }
  return result;
}
