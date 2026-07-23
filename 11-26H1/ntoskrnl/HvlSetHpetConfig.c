/*
 * XREFs of HvlSetHpetConfig @ 0x1405C0900
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlSetHpetConfig(int a1, __int64 a2, char a3, _OWORD *a4)
{
  unsigned int v8; // edi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  __int16 v11; // bx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  _OWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v28; // [rsp+38h] [rbp-C8h]
  __int128 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _BYTE v32[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[2064]; // [rsp+80h] [rbp-80h] BYREF

  v27 = 0LL;
  LODWORD(v28) = 0;
  v30 = 0LL;
  LODWORD(v31) = 0;
  v32[31] = 0;
  v26 = 0LL;
  v29 = 0LL;
  memset_0(v32, 0, 0x82FuLL);
  v8 = 0;
  while ( 1 )
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v26, 1, (__int64)v32, 72LL);
    v10 = v28;
    *(_DWORD *)v9 = 6;
    *((_DWORD *)v9 + 4) = a1;
    v9[3] = a2;
    *((_BYTE *)v9 + 32) = a3;
    v11 = HvcallInitiateHypercall(111LL, v10);
    HvlpReleaseHypercallPage((unsigned int *)&v26, v12, v13, v14);
    if ( !HvlpHvStatusIsInsufficientMemory(v11) )
      break;
    result = HvlpHandleInsufficientMemory(v11);
    if ( (int)result < 0 )
      return result;
  }
  if ( v11 )
    return 3221225473LL;
  v16 = HvlpAcquireHypercallPage((__int64)&v26, 1, (__int64)v32, 16LL);
  v17 = HvlpAcquireHypercallPage((__int64)&v29, 2, (__int64)v33, 1032LL);
  v18 = v28;
  v19 = v17;
  *(_DWORD *)v16 = 7;
  if ( (unsigned __int16)HvcallInitiateHypercall(123LL, v18) )
    v8 = -1073741823;
  else
    *a4 = *v19;
  HvlpReleaseHypercallPage((unsigned int *)&v29, v20, v21, v22);
  HvlpReleaseHypercallPage((unsigned int *)&v26, v23, v24, v25);
  return v8;
}
