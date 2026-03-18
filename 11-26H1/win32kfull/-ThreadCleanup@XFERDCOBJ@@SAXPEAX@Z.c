/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x140310FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x140295574 (--1XFERDCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x140310400 (--0DCOBJA@@QEAA@XZ.c)
 */

void __fastcall XFERDCOBJ::ThreadCleanup(__int64 *a1)
{
  __int64 v1; // rbx
  _QWORD v2[12]; // [rsp+20h] [rbp-78h] BYREF
  char v3; // [rsp+80h] [rbp-18h]

  v1 = *a1;
  DCOBJA::DCOBJA((DCOBJA *)v2);
  v3 = 0;
  v2[0] = v1;
  XFERDCOBJ::~XFERDCOBJ((XFERDCOBJ *)v2);
}
