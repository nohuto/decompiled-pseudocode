/*
 * XREFs of KeUnmaskInterrupt @ 0x140423A04
 * Callers:
 *     IopUnmaskInterrupt @ 0x1404239DC (IopUnmaskInterrupt.c)
 * Callees:
 *     KiUnmaskSecondaryInterruptInternal @ 0x140423578 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiUnmaskInterruptInternal @ 0x14042370C (KiUnmaskInterruptInternal.c)
 *     KiIsInterruptTypeSecondary @ 0x140424BA4 (KiIsInterruptTypeSecondary.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v6; // ebx
  char IsInterruptTypeSecondary; // r8
  unsigned __int8 i; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax

  v6 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  for ( i = 0; i < a2; ++i )
  {
    v9 = a1[i];
    _m_prefetchw((const void *)(v9 + 104));
    if ( (_InterlockedAnd((volatile signed __int32 *)(v9 + 104), 0xFFFFFFFE) & 1) == 0 )
    {
      v12 = 295;
      goto LABEL_8;
    }
  }
  if ( *(_DWORD *)(a3 + 8) )
    return 0LL;
  v10 = *a1;
  v11 = *(_DWORD *)(a3 + 64);
  if ( IsInterruptTypeSecondary )
    v12 = KiUnmaskSecondaryInterruptInternal(*(_DWORD *)(v10 + 88), v11);
  else
    v12 = KiUnmaskInterruptInternal(v10, v11);
LABEL_8:
  if ( v12 != 296 )
    return v12;
  return v6;
}
