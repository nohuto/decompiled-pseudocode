/*
 * XREFs of _CmGetDeviceMappedPropertyLocales @ 0x140ADA514
 * Callers:
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int i; // edx
  __int64 v13; // r8
  unsigned int j; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx

  v7 = -1073741802;
  v8 = 0;
  *a7 = 0;
  while ( v8 < 0x21 )
  {
    v9 = (__int64)*(&CmDeviceRegPropMap + 3 * v8);
    if ( v9 && *(_DWORD *)(a4 + 16) == *(_DWORD *)(v9 + 16) )
    {
      v10 = *(_QWORD *)a4 - *(_QWORD *)v9;
      if ( *(_QWORD *)a4 == *(_QWORD *)v9 )
        v10 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v9 + 8);
      if ( !v10 )
      {
LABEL_9:
        *a7 = 1;
        if ( a6 )
        {
          v7 = 0;
          *a5 = 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
        return v7;
      }
    }
    ++v8;
  }
  for ( i = 0; i < 2; ++i )
  {
    v13 = (__int64)*(&off_140BE03F0 + 4 * i);
    if ( v13 && *(_DWORD *)(a4 + 16) == *(_DWORD *)(v13 + 16) )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)v13;
      if ( *(_QWORD *)a4 == *(_QWORD *)v13 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v13 + 8);
      if ( !v17 )
        goto LABEL_9;
    }
  }
  for ( j = 0; j < 0x1C; ++j )
  {
    v15 = (__int64)*(&off_140BE2850 + 2 * j);
    if ( *(_DWORD *)(a4 + 16) == *(_DWORD *)(v15 + 16) )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)v15;
      if ( *(_QWORD *)a4 == *(_QWORD *)v15 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v15 + 8);
      if ( !v16 )
        goto LABEL_9;
    }
  }
  return v7;
}
