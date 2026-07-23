/*
 * XREFs of HvlpLpCpuid @ 0x140794834
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x140CBF41C (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140CBF60C (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallInitInputControl @ 0x1404866D0 (HvcallInitInputControl.c)
 */

__int64 __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  _DWORD *v13; // rbx
  _DWORD *v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  __int128 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h]
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  unsigned __int64 v29; // [rsp+60h] [rbp-10h]

  v23 = 0LL;
  v28 = 0LL;
  LODWORD(v29) = 0;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v27 = 0LL;
  v24 = 0LL;
  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = result;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    HvcallInitInputControl(136, &v23);
    HIDWORD(v23) = HIDWORD(v23) & 0xF000F000 | 1;
    v13 = HvlpAcquireHypercallPage((__int64)&v27, 1, 0LL, 16LL);
    v14 = HvlpAcquireHypercallPage((__int64)&v24, 2, 0LL, 16LL);
    v15 = v29;
    v16 = v23;
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    HvcallInitiateHypercall(v16, v15);
    *a4 = *v14;
    a4[1] = v14[1];
    a4[2] = v14[2];
    a4[3] = v14[3];
    HvlpReleaseHypercallPage((unsigned int *)&v24, v17, v18, v19);
    return HvlpReleaseHypercallPage((unsigned int *)&v27, v20, v21, v22);
  }
  return result;
}
