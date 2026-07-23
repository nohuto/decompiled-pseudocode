/*
 * XREFs of HalpLbrConfigureProcessor @ 0x1405A54F0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

ULONG_PTR __fastcall HalpLbrConfigureProcessor(ULONG_PTR Argument)
{
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // ecx

  v2 = dword_140F87A2C - 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( !Argument )
  {
    if ( dword_140F87A40 != 1 && dword_140F87A40 != 2 )
    {
      if ( dword_140F87A40 != 3 )
        goto LABEL_32;
      __writemsr(0xC000010F, __readmsr(0xC000010F) & 0xFFFFFFFFFFFFFFBFuLL);
      __writemsr(0x1D9u, __readmsr(0x1D9u) & 0xFFFFFFFFFFFFF7FEuLL);
      LODWORD(v7) = 0;
      v6 = -1073741554;
      LODWORD(v11) = 0;
      goto LABEL_31;
    }
    v12 = __readmsr(0x1D9u);
    v13 = v12;
    if ( dword_140F87A40 == 2 )
    {
      v14 = 5326;
    }
    else
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
      v14 = 456;
    }
    __writemsr(v14, 0LL);
    v6 = 473;
    v8 = v13 & 0xFFFFFFFFFFFFF7FFuLL;
    LODWORD(v7) = v13 & 0xFFFFF7FF;
LABEL_30:
    v11 = HIDWORD(v8);
LABEL_31:
    __writemsr(v6, __PAIR64__(v11, v7));
    goto LABEL_32;
  }
  if ( dword_140F87A40 != 1 && dword_140F87A40 != 2 )
  {
    if ( dword_140F87A40 != 3 )
      goto LABEL_32;
    v4 = 0;
    if ( dword_140F87A2C )
    {
      v5 = -1073675519;
      do
      {
        __writemsr(v5 - 1, 0LL);
        __writemsr(v5, 0LL);
        ++v4;
        v5 += 2;
      }
      while ( v4 < dword_140F87A2C );
    }
    __writemsr(0xC000010E, (unsigned int)dword_140F87A28);
    __writemsr(0x1D9u, __readmsr(0x1D9u) | 0x801);
    v6 = -1073741553;
    v7 = __readmsr(0xC000010F) | 0x40;
    v8 = v7;
    goto LABEL_30;
  }
  v9 = __readmsr(0x1D9u);
  if ( dword_140F87A40 == 1 )
  {
    __writemsr(0x1C9u, v2);
    if ( dword_140F87A2C )
    {
      v10 = 1728;
      do
      {
        __writemsr(v10 - 64, 0LL);
        __writemsr(v10, 0LL);
        if ( HalpLbrInfoSupported )
          __writemsr(v10 + 1792, 0LL);
        ++v10;
      }
      while ( v10 - 1728 < dword_140F87A2C );
    }
    __writemsr(0x1C8u, (unsigned int)dword_140F87A28);
    v9 |= 1uLL;
  }
  __writemsr(0x1D9u, v9 | 0x800);
  if ( dword_140F87A40 == 2 )
  {
    __writemsr(0x14CFu, (unsigned int)dword_140F87A2C);
    v6 = 5326;
    v8 = (unsigned int)dword_140F87A38 | 1LL;
    LODWORD(v7) = dword_140F87A38 | 1;
    goto LABEL_30;
  }
LABEL_32:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  _InterlockedDecrement(&dword_140F87A3C);
  return 0LL;
}
