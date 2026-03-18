/*
 * XREFs of InsertModecapList @ 0x140081C80
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14008124C (GetMonitorCapabilityFromInf.c)
 *     GetMonitorCapability1 @ 0x14008178C (GetMonitorCapability1.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall InsertModecapList(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // r10
  __int64 v6; // rbx
  int v7; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rcx

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a3 )
    {
      v11 = 3LL * a3;
      *(_OWORD *)(a2 + 8 * v11) = *(_OWORD *)a1;
      *(_QWORD *)(a2 + 8 * v11 + 16) = *(_QWORD *)(a1 + 16);
      return a3 + 1;
    }
    v6 = a2 + 24 * i;
    v7 = *(_DWORD *)a1 == *(_DWORD *)v6 ? *(_DWORD *)(a1 + 4) - *(_DWORD *)(v6 + 4) : *(_DWORD *)a1 - *(_DWORD *)v6;
    if ( v7 <= 0 )
      break;
  }
  if ( v7 )
  {
    if ( a3 < 0x24 )
    {
      memmove((void *)(a2 + 24LL * (unsigned int)(i + 1)), (const void *)(a2 + 24 * i), 24LL * (a3 - (unsigned int)i));
      *(_OWORD *)v6 = *(_OWORD *)a1;
      *(_QWORD *)(v6 + 16) = *(_QWORD *)(a1 + 16);
      return a3 + 1;
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(v6 + 8) < v9 )
    {
      *(_DWORD *)(v6 + 8) = v9;
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(a1 + 12);
    }
    v10 = *(_DWORD *)(a1 + 20);
    if ( *(_DWORD *)(v6 + 20) < v10 )
    {
      *(_DWORD *)(v6 + 20) = v10;
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(a1 + 16);
    }
  }
  return a3;
}
