/*
 * XREFs of HvlpUpdateLpcbIndex @ 0x1405BDDCC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlpUpdateLpcbIndex(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int16 v8; // bx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-28h]

  v2 = *(_DWORD *)(a1 + 4);
  result = 0LL;
  v15 = 0LL;
  if ( v2 != a2 )
  {
    LODWORD(v15) = a2;
    v12 = 0LL;
    v13 = 0LL;
    LODWORD(v14) = 0;
    v6 = HvlpAcquireHypercallPage((__int64)&v12, 1, 0LL, 40LL);
    v7 = v14;
    *(_OWORD *)(v6 + 1) = v15;
    *(_DWORD *)v6 = v2;
    *(_OWORD *)(v6 + 3) = 0LL;
    *((_DWORD *)v6 + 1) = 2;
    v8 = HvcallInitiateHypercall(121LL, v7);
    HvlpReleaseHypercallPage((unsigned int *)&v12, v9, v10, v11);
    result = v8 != 0 ? 0xC0000001 : 0;
    if ( !v8 )
      *(_DWORD *)(a1 + 4) = a2;
  }
  return result;
}
