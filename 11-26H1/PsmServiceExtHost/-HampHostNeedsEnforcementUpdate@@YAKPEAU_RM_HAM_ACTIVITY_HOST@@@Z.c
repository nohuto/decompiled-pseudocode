/*
 * XREFs of ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009E30
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostNeedsEnforcementUpdate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int128 v4; // xmm1
  struct _HAM_ACTIVITY *v6; // [rsp+30h] [rbp-59h] BYREF
  _OWORD Buf2[2]; // [rsp+38h] [rbp-51h] BYREF
  _OWORD Buf1[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v9; // [rsp+78h] [rbp-11h] BYREF
  __int128 v10; // [rsp+88h] [rbp-1h]
  __int128 v11; // [rsp+98h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+A8h] [rbp+1Fh]
  _OWORD v13[2]; // [rsp+B8h] [rbp+2Fh] BYREF

  v1 = *((_QWORD *)a1 + 83);
  v2 = 0;
  v6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v13, 0, sizeof(v13));
  v11 = 0LL;
  v12 = 0LL;
  if ( (v1 & 0x40000000000000LL) != 0 )
    return 1LL;
  if ( (v1 & 0x20000000000000LL) != 0 )
    return 1LL;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v9,
    (struct _RM_COMMIT_THRESHOLDS *)v13,
    (struct _RM_COMMIT_THRESHOLDS *)&v11,
    &v6);
  if ( (*((_QWORD *)a1 + 83) & 0x80000000000000LL) != 0
    && (SDWORD2(v10) >= 2 || (BYTE12(v10) & 0x70) != 0 || (BYTE12(v10) & 8) != 0) )
  {
    return 1LL;
  }
  if ( *((struct _HAM_ACTIVITY **)a1 + 126) != v6 )
    return 1LL;
  v4 = *((_OWORD *)a1 + 71);
  Buf1[0] = 0uLL;
  Buf1[1] = v4;
  Buf2[0] = 0uLL;
  Buf2[1] = v10;
  if ( memcmp_0(Buf1, Buf2, 0x20uLL) || v12 != __PAIR128__(*((_QWORD *)a1 + 107), *((_QWORD *)a1 + 108)) )
    return 1LL;
  if ( memcmp_0(v13, (char *)a1 + 880, 0x20uLL) )
    return 1;
  return v2;
}
