/*
 * XREFs of _CmGetDeviceContainerMappedPropertyKeys @ 0x140B1FFB8
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140A3BF10 (_PnpDispatchDeviceContainer.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140B1FE00 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceContainerMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v12; // rcx
  unsigned int v13; // ecx

  v7 = 0;
  *a7 = 0;
  while ( 1 )
  {
    if ( v7 >= 4 )
      return a6 < *a7 ? 0xC0000023 : 0;
    v8 = (__int64)*(&off_140004120 + 2 * v7);
    if ( v8 )
      break;
LABEL_4:
    ++v7;
  }
  if ( a5 )
  {
    v9 = *a7;
    if ( (unsigned int)v9 < a6 )
    {
      v12 = 5 * v9;
      *(_OWORD *)(a5 + 4 * v12) = *(_OWORD *)v8;
      *(_DWORD *)(a5 + 4 * v12 + 16) = *(_DWORD *)(v8 + 16);
    }
  }
  v10 = *a7 + 1;
  if ( v10 >= *a7 )
  {
    *a7 = v10;
    goto LABEL_4;
  }
  v13 = -1073741675;
  *a7 = 0;
  return v13;
}
