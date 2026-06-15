/*
 * XREFs of sub_14001D96C @ 0x14001D96C
 * Callers:
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 *     sub_14001D308 @ 0x14001D308 (sub_14001D308.c)
 *     sub_14001D774 @ 0x14001D774 (sub_14001D774.c)
 *     sub_14001D960 @ 0x14001D960 (sub_14001D960.c)
 *     sub_14001E3D8 @ 0x14001E3D8 (sub_14001E3D8.c)
 *     sub_140021024 @ 0x140021024 (sub_140021024.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 *     sub_140046D40 @ 0x140046D40 (sub_140046D40.c)
 *     sub_140050E20 @ 0x140050E20 (sub_140050E20.c)
 *     sub_1400518C0 @ 0x1400518C0 (sub_1400518C0.c)
 *     sub_140052B80 @ 0x140052B80 (sub_140052B80.c)
 *     sub_14005334C @ 0x14005334C (sub_14005334C.c)
 *     sub_14005A55C @ 0x14005A55C (sub_14005A55C.c)
 *     sub_14005A8C4 @ 0x14005A8C4 (sub_14005A8C4.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_14005B2C0 @ 0x14005B2C0 (sub_14005B2C0.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_14006B61C @ 0x14006B61C (sub_14006B61C.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 *     sub_140075868 @ 0x140075868 (sub_140075868.c)
 *     sub_140087460 @ 0x140087460 (sub_140087460.c)
 *     sub_140088D3C @ 0x140088D3C (sub_140088D3C.c)
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14001D96C(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
