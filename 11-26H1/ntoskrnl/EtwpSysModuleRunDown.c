/*
 * XREFs of EtwpSysModuleRunDown @ 0x1409BC6CC
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     HvlQueryConnection @ 0x1404915A0 (HvlQueryConnection.c)
 *     MmEnumerateSystemImages @ 0x1404DE6F0 (MmEnumerateSystemImages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpSysModuleRunDown(__int64 a1, char a2)
{
  __int16 v4; // ax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-51h] BYREF
  __int16 v12; // [rsp+58h] [rbp-39h]
  int v13; // [rsp+5Ah] [rbp-37h]
  __int16 v14; // [rsp+5Eh] [rbp-33h]
  _BYTE v15[40]; // [rsp+68h] [rbp-29h] BYREF
  __int128 v16; // [rsp+90h] [rbp-1h]
  PVOID *v17; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+1Fh]
  __int64 *v19; // [rsp+C8h] [rbp+37h]
  __int64 v20; // [rsp+D0h] [rbp+3Fh]

  v13 = 0;
  v14 = 0;
  memset_0(v15, 0, 0x40uLL);
  v10 = 0LL;
  if ( !a2 )
  {
    v6 = *(_DWORD *)a1;
    v7 = *(_QWORD *)(a1 + 1360);
    v17 = &PsNtosImageBase;
    v18 = 8LL;
    EtwpLogKernelEvent((__int64)&v17, v7, v6, 1u, 0x1421u, 0x501802u);
    if ( !(unsigned int)HvlQueryConnection(&v10) )
    {
      v8 = *(_DWORD *)a1;
      v9 = *(_QWORD *)(a1 + 1360);
      v17 = (PVOID *)&v10;
      v18 = 8LL;
      EtwpLogKernelEvent((__int64)&v17, v9, v8, 1u, 0x1422u, 0x501802u);
    }
  }
  v11[2] = a1;
  v11[1] = &v17;
  v11[0] = v15;
  v4 = 5123;
  if ( !a2 )
    v4 = 5124;
  v12 = v4;
  v18 = 56LL;
  v17 = (PVOID *)v15;
  v20 = 2LL;
  v19 = &EtwpNull;
  v16 = 0LL;
  return MmEnumerateSystemImages((__int64)EtwpSystemImageEnumCallback, (__int64)v11);
}
