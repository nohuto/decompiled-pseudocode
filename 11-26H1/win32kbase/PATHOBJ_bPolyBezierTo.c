/*
 * XREFs of PATHOBJ_bPolyBezierTo @ 0x1400C0D40
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1AF0 (-bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 */

BOOL __stdcall PATHOBJ_bPolyBezierTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]

  v4[1] = cptfx;
  v4[0] = pptfx;
  v4[2] = 0LL;
  v5 = 0;
  return (unsigned __int8)((__int64 (__fastcall *)(PATHOBJ *, _QWORD, _QWORD *, _QWORD))EPATHOBJ::bPolyBezierTo)(
                            ppo,
                            0LL,
                            v4,
                            cptfx);
}
