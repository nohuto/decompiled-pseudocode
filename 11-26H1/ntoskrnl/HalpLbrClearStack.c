/*
 * XREFs of HalpLbrClearStack @ 0x140414790
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall HalpLbrClearStack(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  unsigned __int64 v7; // r9
  unsigned int v8; // ecx
  unsigned __int64 v9; // r9
  int v10; // r10d
  unsigned int v11; // r8d

  if ( !dword_140F87A2C || !dword_140F87A34 )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  switch ( dword_140F87A40 )
  {
    case 1:
      v9 = __readmsr(0x1D9u);
      __writemsr(0x1D9u, v9 & 0xFFFFFFFFFFFFFFFEuLL);
      v10 = dword_140F87A2C;
      __writemsr(0x1C9u, (unsigned int)(dword_140F87A2C - 1));
      v11 = 0;
      if ( v10 )
      {
        do
        {
          __writemsr(v11 + 1664, 0LL);
          ++v11;
        }
        while ( v11 < dword_140F87A2C );
      }
      v7 = v9 | 1;
      v8 = 473;
      goto LABEL_18;
    case 2:
      __writemsr(0x14CEu, 0LL);
      __writemsr(0x14CFu, (unsigned int)dword_140F87A2C);
      __writemsr(0x14CEu, (unsigned int)dword_140F87A38 | 1LL);
      break;
    case 3:
      v4 = __readmsr(0xC000010F);
      __writemsr(0xC000010F, v4 & 0xFFFFFFFFFFFFFFBFuLL);
      v5 = 0;
      if ( dword_140F87A2C )
      {
        v6 = -1073675519;
        do
        {
          __writemsr(v6 - 1, 0LL);
          __writemsr(v6, 0LL);
          ++v5;
          v6 += 2;
        }
        while ( v5 < dword_140F87A2C );
      }
      v7 = v4 | 0x40;
      v8 = -1073741553;
LABEL_18:
      __writemsr(v8, v7);
      break;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 1;
}
