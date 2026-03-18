/*
 * XREFs of EPATHOBJ_bPolyLineTo @ 0x1400C10A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 */

__int64 __fastcall EPATHOBJ_bPolyLineTo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[1] = a4;
  v5[0] = a3;
  v5[2] = 0LL;
  v6 = 0;
  return (unsigned __int8)EPATHOBJ::bPolyLineTo(a1, a2, v5);
}
