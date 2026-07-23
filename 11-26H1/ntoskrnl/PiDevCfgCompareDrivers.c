/*
 * XREFs of PiDevCfgCompareDrivers @ 0x1404EA8CC
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgCompareDrivers(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r9
  _DWORD *v5; // rbx
  int v7; // ecx
  __int64 result; // rax
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v3 = (_DWORD *)(a2 + 184);
  v5 = (_DWORD *)(a1 + 184);
  if ( (a3 & 4) == 0 )
  {
    v7 = *v3 & 4;
    if ( (*v5 & 4) != 0 )
    {
      result = v7 == 0;
      if ( !v7 )
        return result;
    }
    else if ( v7 )
    {
      return 0xFFFFFFFFLL;
    }
  }
  if ( (a3 & 2) != 0 )
    goto LABEL_9;
  v9 = *v3 & 2;
  if ( (*v5 & 2) == 0 )
  {
    if ( v9 )
      return 1LL;
LABEL_9:
    v10 = *(_DWORD *)(a2 + 108);
    if ( *(_DWORD *)(a1 + 108) < v10 )
      return 0xFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 108) == v10 )
    {
      v11 = *(_QWORD *)(a2 + 112);
      if ( *(_QWORD *)(a1 + 112) > v11 )
        return 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 112) == v11 )
      {
        v12 = *(_QWORD *)(a2 + 120);
        if ( *(_QWORD *)(a1 + 120) > v12 )
          return 0xFFFFFFFFLL;
        if ( *(_QWORD *)(a1 + 120) == v12 )
        {
          v13 = *(_QWORD *)(a2 + 136);
          if ( *(_QWORD *)(a1 + 136) )
          {
            if ( !v13 )
              return 0xFFFFFFFFLL;
            return 0LL;
          }
          if ( !v13 )
            return 0LL;
        }
      }
    }
    return 1LL;
  }
  result = (unsigned int)(v9 != 0) - 1;
  if ( v9 )
    goto LABEL_9;
  return result;
}
