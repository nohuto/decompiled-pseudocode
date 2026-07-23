/*
 * XREFs of MiInitializeDataMapParameters @ 0x140995CF8
 * Callers:
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiAweControlArea @ 0x140489730 (MiAweControlArea.c)
 */

__int64 __fastcall MiInitializeDataMapParameters(__int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  int v6; // eax
  unsigned __int64 v7; // rax
  int v9; // ecx

  if ( (*(_DWORD *)(*a1 + 60) & 2) != 0
    || (unsigned int)MiAweControlArea(a1[3])
    || (*(_DWORD *)(v2 + 40) & 0x2000) != 0 && !*(_QWORD *)(v3 + 64) )
  {
    return 3221225485LL;
  }
  v5 = *(_DWORD *)(v2 + 40);
  v6 = v5 & 0x40000000;
  if ( (v5 & 0x20000000) == 0 )
  {
    if ( !v6 || (v5 & 0x2000) == 0 && (*(_QWORD *)(*(_QWORD *)(v2 + 88) + 1600LL) || (*(_DWORD *)(v2 + 56) & 1) != 0) )
      goto LABEL_6;
    return 3221225485LL;
  }
  if ( v6
    || (*(_DWORD *)(v2 + 60) & 0x4000000) != 0
    && ((*(_DWORD *)(v2 + 24) & 0x1FFFFF) != 0 || (*(_DWORD *)(v4 + 40) & 0x1FFFFF) != 0 || *v1 % 0x200000LL) )
  {
    return 3221225485LL;
  }
  if ( (v5 & 0x2000) != 0 )
    return 3221225485LL;
  v9 = *(_DWORD *)(v4 + 32);
  if ( v9 == 24 || (v9 & 0xFFFFFFF8) == 0x10 || (v9 & 5) == 5 )
    return 3221225485LL;
  if ( *(_QWORD *)(v3 + 64) )
  {
    if ( (*(_DWORD *)(v3 + 56) & 0x30000000) != 0x10000000 )
      return 3221225485LL;
  }
  else if ( !_bittest16((const signed __int16 *)(*(_QWORD *)v3 + 12LL), 0xAu) )
  {
    return 3221225485LL;
  }
LABEL_6:
  v7 = *(_QWORD *)(v2 + 16);
  if ( v7 >= 0x200000 )
    return (*(_QWORD *)(v2 + 32) & (v7 - 1)) != 0 ? 0xC000001F : 0;
  else
    return 0LL;
}
