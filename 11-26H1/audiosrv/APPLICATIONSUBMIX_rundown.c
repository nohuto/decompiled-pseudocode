/*
 * XREFs of APPLICATIONSUBMIX_rundown @ 0x1800BD110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@QEAA@XZ @ 0x1800BB698 (--1-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixContext@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall APPLICATIONSUBMIX_rundown(__int64 *a1)
{
  __int64 *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  std::unique_ptr<CAppSubmixContext>::~unique_ptr<CAppSubmixContext>(&v1);
}
