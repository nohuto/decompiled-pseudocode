/*
 * XREFs of PspSanitizeResourceLimits @ 0x1407F5D30
 * Callers:
 *     PspReadUserQuotaLimits @ 0x140ABA648 (PspReadUserQuotaLimits.c)
 *     PsInitializeQuotaSystem @ 0x140CDF1C0 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSanitizeResourceLimits(unsigned int *a1, int a2)
{
  int v2; // r10d
  PVOID *v3; // r11
  unsigned int *v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // eax

  v2 = 0;
  v3 = &stru_140FC11F0.SchedulerApc.Reserved[1];
  v5 = a1;
  while ( v2 < 4 )
  {
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v6 = *v5;
      v7 = *v5 & 0x7F;
      if ( v7 > 0x64 || !v7 || v6 >= 0x80 )
      {
        if ( !a2 )
          return 3221225485LL;
        *v5 = v6 & 0xFFFFFF80 | 0x64;
      }
    }
    else if ( (*(_BYTE *)v3 & 1) != 0 && !*v5 )
    {
      *v5 = -1;
    }
    ++v2;
    ++v3;
    ++v5;
  }
  v8 = *a1;
  if ( *a1 != -1 )
  {
    if ( v8 >= 0xFFF )
    {
      if ( !a2 )
        return 3221225485LL;
      *a1 = -1;
    }
    else
    {
      *a1 = v8 << 20;
    }
  }
  v9 = a1[1];
  if ( v9 == -1 )
    return 0LL;
  if ( v9 < 0xFFF )
  {
    a1[1] = v9 << 20;
    return 0LL;
  }
  if ( a2 )
  {
    a1[1] = -1;
    return 0LL;
  }
  return 3221225485LL;
}
