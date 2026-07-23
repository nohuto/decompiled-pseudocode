/*
 * XREFs of HvlGetDeviceCapabilities @ 0x1405BF220
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpAcpiDeviceIdToHv @ 0x1405C0F94 (HvlpAcpiDeviceIdToHv.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlGetDeviceCapabilities(int *a1, _OWORD *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  __int16 v10; // ax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int16 v13; // bx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+20h] [rbp-79h]
  __int128 v20; // [rsp+28h] [rbp-71h] BYREF
  __int64 v21; // [rsp+38h] [rbp-61h]
  __int64 v22; // [rsp+40h] [rbp-59h]
  __int128 v23; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h]
  unsigned __int64 v25; // [rsp+60h] [rbp-39h]
  _BYTE v26[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v27[48]; // [rsp+88h] [rbp-11h] BYREF

  v24 = 0LL;
  LODWORD(v25) = 0;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v4 = *a1;
  v23 = 0LL;
  v20 = 0LL;
  if ( v4 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( v4 != 2 )
      return 3221225659LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*((_QWORD *)a1 + 1) + v6) );
    v5 = (v6 + 8) & 0xFFFFFFF8;
  }
  if ( (unsigned __int64)v5 + 24 > 0x1000 )
    return 3221225485LL;
  *a2 = 0LL;
  v19 = (v5 << 14) & 0x3FE0000 | 0xAALL;
  v8 = HvlpAcquireHypercallPage((__int64)&v23, 1, (__int64)v27, 24LL);
  v9 = HvlpAcquireHypercallPage((__int64)&v20, 2, (__int64)v26, 16LL);
  memset_0(v8, 0, v5 + 24LL);
  if ( *a1 == 1 )
  {
    *v8 = 0x4000000000000000LL;
    v10 = *((_WORD *)v8 + 3);
    *((_WORD *)v8 + 1) = *((_WORD *)a1 + 4);
    *(_WORD *)v8 = *((_WORD *)a1 + 6);
    *((_WORD *)v8 + 3) = v10 ^ (*((_WORD *)a1 + 5) ^ v10) & 3;
  }
  else
  {
    HvlpAcpiDeviceIdToHv(a1, v8, v8 + 3, v5, v19, v20, *((_QWORD *)&v20 + 1), v21, v22, v23, *((_QWORD *)&v23 + 1), v24);
  }
  v11 = v25;
  *((_DWORD *)v8 + 4) = 0;
  v13 = HvcallInitiateHypercall(v19, v11);
  if ( !v13 )
    *a2 = *(_OWORD *)v9;
  HvlpReleaseHypercallPage((unsigned int *)&v20, v12, v14, v15);
  HvlpReleaseHypercallPage((unsigned int *)&v23, v16, v17, v18);
  return HvlpHvToNtStatus(v13);
}
