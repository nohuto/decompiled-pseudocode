/*
 * XREFs of _CmGetDeviceContainerMappedPropertyLocales @ 0x14089DEF8
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140A3BF10 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceContainerMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx

  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( v9 < 4 )
  {
    v10 = (__int64)*(&off_140004120 + 2 * v9);
    if ( *(_DWORD *)(a4 + 16) == *(_DWORD *)(v10 + 16) )
    {
      v11 = *(_QWORD *)a4 - *(_QWORD *)v10;
      if ( *(_QWORD *)a4 == *(_QWORD *)v10 )
        v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v10 + 8);
      if ( !v11 )
      {
        *a7 = 1;
        if ( a6 )
        {
          v8 = 0;
          *a5 = 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
        return v8;
      }
    }
    ++v9;
  }
  return v8;
}
