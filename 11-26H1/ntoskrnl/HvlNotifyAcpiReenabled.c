/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x1405C1B40
 * Callers:
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v0 = 0;
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( (HvlEnlightenments & 0x10000) != 0 )
  {
    v1 = HvlpAcquireHypercallPage((__int64)&v7, 1, 0LL, 8LL);
    v2 = v9;
    *(_DWORD *)v1 = 3;
    v0 = (unsigned __int16)HvcallInitiateHypercall(135LL, v2) != 0 ? 0xC0000001 : 0;
    HvlpReleaseHypercallPage((unsigned int *)&v7, v3, v4, v5);
  }
  return v0;
}
