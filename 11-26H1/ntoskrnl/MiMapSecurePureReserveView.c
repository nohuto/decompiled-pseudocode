/*
 * XREFs of MiMapSecurePureReserveView @ 0x140AC6170
 * Callers:
 *     MiCfgInitializeProcess @ 0x14077B82C (MiCfgInitializeProcess.c)
 *     MmInitializeImageViewExtension @ 0x140D00404 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MmMapViewOfSectionEx @ 0x1404B623C (MmMapViewOfSectionEx.c)
 */

__int64 __fastcall MiMapSecurePureReserveView(ULONG_PTR a1, ULONG_PTR a2, _QWORD *a3, unsigned __int64 *a4, _QWORD *a5)
{
  int v6; // edx
  unsigned __int64 v7; // rax
  int v8; // r10d
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // [rsp+58h] [rbp+7h]
  _QWORD v12[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v13; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+C8h] [rbp+77h] BYREF

  v15 = 0LL;
  v12[1] = &v13;
  v16 = 0LL;
  v14 = 0LL;
  v6 = 0;
  v7 = *a4;
  v8 = 0;
  v12[0] = 1LL;
  v13 = 0LL;
  if ( !v7 )
    v7 = *(_QWORD *)(a2 + 48);
  if ( *a3 )
  {
    v8 = 8;
  }
  else if ( v7 > 0x4000000 )
  {
    v10 = *((_QWORD *)&v13 + 1);
    v6 = 0x100000;
    if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
      v10 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v13 + 1) = v10;
  }
  result = MmMapViewOfSectionEx(
             a2,
             a1,
             (__int64)a3,
             (__int64)&v16,
             (__int64)a4,
             v6,
             1,
             v12,
             1,
             -2147483647,
             (__int64)&v15,
             v11,
             v8);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *a5 = v15;
  }
  return result;
}
