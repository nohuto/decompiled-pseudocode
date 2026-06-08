/*
 * XREFs of PerfTargetPTStates @ 0x140003590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfTargetPTStates(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        _QWORD *a6)
{
  __int64 v6; // r11
  unsigned int v9; // r10d
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // rdx

  v6 = *(_QWORD *)(a1 + 56);
  if ( (a5 & 1) != 0 )
  {
    v9 = *(_DWORD *)(v6 + 64);
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 68);
    if ( !v9 )
      v9 = 1;
  }
  v10 = *(_QWORD *)(v6 + 56);
  if ( (a5 & 2) != 0 )
  {
    v11 = 0;
    v12 = *(_QWORD *)(v6 + 56);
    if ( v9 )
    {
      while ( 1 )
      {
        v12 = v10 + 32LL * v11;
        if ( *(unsigned __int8 *)(v12 + 24) <= a2 )
          break;
        if ( ++v11 >= v9 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( v11 == v9 )
        v11 = v9 - 1;
    }
  }
  else
  {
    v11 = v9;
    do
      v12 = v10 + 32LL * --v11;
    while ( *(unsigned __int8 *)(v12 + 24) < a2 && v11 );
  }
  while ( *(unsigned __int8 *)(v12 + 24) < a3 && v11 )
    v12 = v10 + 32LL * --v11;
  for ( ; *(unsigned __int8 *)(v12 + 24) > a4; v12 = v10 + 32LL * ++v11 )
  {
    if ( v11 == *(_DWORD *)(v6 + 64) - 1 )
      break;
  }
  if ( a6 )
    *a6 = v11;
  return *(unsigned __int8 *)(v12 + 24);
}
