/*
 * XREFs of ?MonitorCoordComp@@YAHPEBX0@Z @ 0x14025AE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorCoordComp(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // r10
  int v5; // ebx
  int v6; // r11d
  int v7; // r8d
  int v8; // edx

  v2 = *a1;
  v3 = 0;
  v4 = *a2;
  if ( *(_QWORD *)(*a1 + 96) )
  {
    v5 = *(_DWORD *)(v2 + 96);
  }
  else
  {
    v5 = (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 36LL) - *(_DWORD *)(*(_QWORD *)(v2 + 40) + 28LL)) / 2
       + *(_DWORD *)(*(_QWORD *)(v2 + 40) + 28LL);
    *(_QWORD *)(v2 + 96) = v5;
  }
  if ( *(_QWORD *)(v2 + 104) )
  {
    v6 = *(_DWORD *)(v2 + 104);
  }
  else
  {
    v6 = (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) - *(_DWORD *)(*(_QWORD *)(v2 + 40) + 32LL)) / 2
       + *(_DWORD *)(*(_QWORD *)(v2 + 40) + 32LL);
    *(_QWORD *)(v2 + 104) = v6;
  }
  if ( *(_QWORD *)(v4 + 96) )
  {
    v7 = *(_DWORD *)(v4 + 96);
  }
  else
  {
    v7 = (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 36LL) - *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL)) / 2
       + *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL);
    *(_QWORD *)(v4 + 96) = v7;
  }
  if ( *(_QWORD *)(v4 + 104) )
  {
    v8 = *(_DWORD *)(v4 + 104);
  }
  else
  {
    v8 = (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 40LL) - *(_DWORD *)(*(_QWORD *)(v4 + 40) + 32LL)) / 2
       + *(_DWORD *)(*(_QWORD *)(v4 + 40) + 32LL);
    *(_QWORD *)(v4 + 104) = v8;
  }
  if ( v5 >= v7 )
  {
    if ( v5 != v7 )
      return 1LL;
    if ( v6 >= v8 )
    {
      LOBYTE(v3) = v6 != v8;
      return v3;
    }
  }
  return 0xFFFFFFFFLL;
}
