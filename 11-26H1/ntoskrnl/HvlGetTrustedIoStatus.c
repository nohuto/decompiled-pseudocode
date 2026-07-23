/*
 * XREFs of HvlGetTrustedIoStatus @ 0x1405BFBE0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlGetTrustedIoStatus(_BYTE *a1, _BYTE *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdx
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  unsigned __int16 v9; // bx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+38h] [rbp-C8h]
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v21; // [rsp+58h] [rbp-A8h]
  _BYTE v22[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[2064]; // [rsp+80h] [rbp-80h] BYREF

  *a1 = 0;
  *a2 = 0;
  v20 = 0LL;
  LODWORD(v21) = 0;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v16 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v19, 1, (__int64)v22, 16LL);
  v5 = HvlpAcquireHypercallPage((__int64)&v16, 2, (__int64)v23, 1032LL);
  v6 = v21;
  *(_OWORD *)v4 = 0LL;
  *(_DWORD *)v4 = 21;
  v7 = v5;
  *((_DWORD *)v4 + 2) = 26;
  v9 = HvcallInitiateHypercall(123LL, v6);
  if ( !v9 )
  {
    if ( *v7 == 1 )
    {
      *a1 = 1;
    }
    else if ( *v7 == 2 )
    {
      *a1 = 1;
      *a2 = 1;
    }
  }
  HvlpReleaseHypercallPage((unsigned int *)&v16, v8, v10, v11);
  HvlpReleaseHypercallPage((unsigned int *)&v19, v12, v13, v14);
  return HvlpHvToNtStatus(v9);
}
