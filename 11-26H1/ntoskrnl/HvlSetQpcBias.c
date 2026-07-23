/*
 * XREFs of HvlSetQpcBias @ 0x1405353E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetQpcBias(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v10; // [rsp+38h] [rbp-B0h]
  _BYTE v11[144]; // [rsp+40h] [rbp-A8h] BYREF

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v8, 1, (__int64)v11, 72LL);
  v3 = v10;
  *(_DWORD *)v2 = 18;
  v2[1] = a1;
  LOWORD(a1) = HvcallInitiateHypercall(111LL, v3);
  HvlpReleaseHypercallPage((unsigned int *)&v8, v4, v5, v6);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
