/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyLocales @ 0x1408A1E08
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14095F340 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // r8d
  unsigned int v8; // edx
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned int i; // edx
  __int64 v12; // r10
  __int64 v13; // rcx

  v7 = -1073741802;
  v8 = 0;
  *a7 = 0;
  while ( v8 < 3 )
  {
    v9 = (__int64)*(&off_140BDFEB0 + 2 * v8);
    if ( v9 && *(_DWORD *)(a4 + 16) == *(_DWORD *)(v9 + 16) )
    {
      v10 = *(_QWORD *)a4 - *(_QWORD *)v9;
      if ( *(_QWORD *)a4 == *(_QWORD *)v9 )
        v10 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v9 + 8);
      if ( !v10 )
      {
LABEL_16:
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
  for ( i = 0; i < 4; ++i )
  {
    v12 = (__int64)*(&off_140BE0710 + 2 * i);
    if ( *(_DWORD *)(a4 + 16) == *(_DWORD *)(v12 + 16) )
    {
      v13 = *(_QWORD *)a4 - *(_QWORD *)v12;
      if ( *(_QWORD *)a4 == *(_QWORD *)v12 )
        v13 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v12 + 8);
      if ( !v13 )
        goto LABEL_16;
    }
  }
  return v7;
}
