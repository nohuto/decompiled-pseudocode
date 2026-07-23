/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x1405BCA74
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1405BC94C (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x1405BFD00 (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  _QWORD *v4; // rbx
  int *v5; // rax
  int v6; // esi
  unsigned __int64 v7; // rdx
  int *v8; // r14
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+38h] [rbp-28h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  unsigned __int64 v23; // [rsp+58h] [rbp-8h]

  v22 = 0LL;
  LODWORD(v23) = 0;
  v19 = 0LL;
  LODWORD(v20) = 0;
  v21 = 0LL;
  v18 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v21, 1, 0LL, 16LL);
  v5 = (int *)HvlpAcquireHypercallPage((__int64)&v18, 2, 0LL, 4LL);
  v6 = 0;
  v7 = v23;
  v8 = v5;
  *v4 = -1LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = a1;
  v9 = HvcallInitiateHypercall(0x10000009ALL, v7);
  if ( !v9 )
    v6 = *v8;
  *a2 = v6;
  v13 = v9 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v18, v10, v11, v12);
  HvlpReleaseHypercallPage((unsigned int *)&v21, v14, v15, v16);
  return v13;
}
