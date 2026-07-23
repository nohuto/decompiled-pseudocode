/*
 * XREFs of HvlSetSystemSleepProperty @ 0x1405C0D10
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(int a1, char a2, char a3)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v14; // [rsp+38h] [rbp-B0h]
  _BYTE v15[144]; // [rsp+40h] [rbp-A8h] BYREF

  v13 = 0LL;
  LODWORD(v14) = 0;
  v12 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v12, 1, (__int64)v15, 72LL);
  v7 = v14;
  *(_DWORD *)v6 = 3;
  *((_DWORD *)v6 + 2) = a1;
  *((_BYTE *)v6 + 12) = a2;
  *((_BYTE *)v6 + 13) = a3;
  LOWORD(a1) = HvcallInitiateHypercall(111LL, v7);
  HvlpReleaseHypercallPage((unsigned int *)&v12, v8, v9, v10);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
