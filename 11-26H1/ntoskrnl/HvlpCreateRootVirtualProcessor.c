/*
 * XREFs of HvlpCreateRootVirtualProcessor @ 0x140794608
 * Callers:
 *     HvlpEnableRootVirtualProcessor @ 0x140794748 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallInitInputControl @ 0x1404866D0 (HvcallInitInputControl.c)
 *     HvlpDepositPages @ 0x1405107E8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpCreateRootVirtualProcessor(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r14d
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  __int16 v11; // bx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v17) = 0;
  v4 = *(unsigned __int16 *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 2)] + 2);
  v5 = *(_DWORD *)(KeNodeBlock[v4] + 4);
  HvcallInitInputControl(78, &v18);
  while ( 1 )
  {
    result = HvlpDepositPages(v4, v6, 0, 0);
    if ( (_DWORD)result )
      break;
    v8 = HvlpAcquireHypercallPage((__int64)&v15, 1, 0LL, 40LL);
    v9 = v17;
    *v8 = HvlPartitionId;
    v10 = *((_DWORD *)v8 + 7) & 0xC0000001;
    *((_DWORD *)v8 + 2) = a2;
    *((_BYTE *)v8 + 15) = 0;
    *((_DWORD *)v8 + 7) = v10 | 0x80000001;
    *((_DWORD *)v8 + 6) = v5;
    v8[4] = *(unsigned int *)(a1 + 4);
    v11 = HvcallInitiateHypercall(v18, v9);
    HvlpReleaseHypercallPage((unsigned int *)&v15, v12, v13, v14);
    if ( v11 != 11 )
      return v11 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
