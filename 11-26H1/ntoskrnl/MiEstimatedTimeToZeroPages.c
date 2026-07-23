/*
 * XREFs of MiEstimatedTimeToZeroPages @ 0x14048A0E0
 * Callers:
 *     MiPeriodicZeroingNeeded @ 0x1402A58F4 (MiPeriodicZeroingNeeded.c)
 *     MiImmediateZeroingNeeded @ 0x1402C09EC (MiImmediateZeroingNeeded.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEstimatedTimeToZeroPages(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8

  if ( !a2 )
    return 0LL;
  v3 = *(_QWORD *)(384LL * (unsigned int)(((int)a1 - *(_DWORD *)(*(_QWORD *)(a1 + 13896) + 16LL)) / 56320)
                 + qword_140E2D838
                 + 376);
  if ( !v3 )
    goto LABEL_6;
  v4 = 0LL;
  v5 = v3 + 128;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v5 + 48);
    if ( v6 )
      break;
    ++v4;
    v5 += 168LL;
    if ( v4 >= 3 )
      goto LABEL_6;
  }
  v8 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v8 )
  {
LABEL_6:
    v7 = 1216LL;
    v8 = 0x200000LL;
  }
  return ((a2 * v7) << 12) / v8;
}
