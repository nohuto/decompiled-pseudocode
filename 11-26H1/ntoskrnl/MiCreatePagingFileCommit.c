/*
 * XREFs of MiCreatePagingFileCommit @ 0x1409894E4
 * Callers:
 *     MiCreatePagingFileMap @ 0x14098989C (MiCreatePagingFileMap.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiThreadIdealNode @ 0x1402F0BA4 (MiThreadIdealNode.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCreatePagingFileCommit(__int64 a1)
{
  unsigned __int64 v1; // r14
  ULONG *v2; // r15
  int *v3; // rsi
  int v6; // eax
  int v7; // eax
  int *v8; // rdi
  int *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-79h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-69h]
  __int64 v14; // [rsp+38h] [rbp-61h]
  int v15; // [rsp+40h] [rbp-59h]
  int v16; // [rsp+44h] [rbp-55h]
  __int64 v17; // [rsp+48h] [rbp-51h]
  __int128 v18; // [rsp+50h] [rbp-49h]
  _OWORD *v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int64 v21; // [rsp+70h] [rbp-29h]
  _OWORD v22[3]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B8h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(ULONG **)(a1 + 16);
  v3 = *(int **)a1;
  v12[0] = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  v24 = 0;
  if ( !(unsigned int)MiChargeCommit(v2, v1, 0) )
    return 3221225773LL;
  *(_BYTE *)(a1 + 152) = 1;
  if ( v3[4] >= 0 )
    return 0LL;
  if ( (unsigned int)MiChargeResident(v2, v1, 0LL) )
  {
    *(_BYTE *)(a1 + 153) = 1;
    v6 = v3[43];
    v7 = v6 ? v6 - 1 : MiThreadIdealNode(0LL, 0LL);
    v13 = v1;
    v15 = v7;
    v12[1] = v2;
    v8 = (int *)(qword_140E2D810 + 4LL * v7 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v14 = 512LL;
    v9 = &v8[(unsigned __int16)KeNumberNodes];
    v16 = v3[8];
    v17 = -1LL;
    v21 = a1 + 24;
    MiInitializeDemandCoalesceContext(v22, 512LL, v1 >> 9, 0);
    v19 = v22;
    MiAllocateLargeZeroPages((unsigned int *)v12);
    v10 = v20;
    v11 = v13;
    if ( v20 == v13 )
      goto LABEL_13;
    do
    {
      if ( ++v8 == v9 )
        break;
      v15 = *v8;
      MiAllocateLargeZeroPages((unsigned int *)v12);
      v10 = v20;
      v11 = v13;
    }
    while ( v20 != v13 );
    if ( v10 == v11 )
    {
LABEL_13:
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 40);
      return 0LL;
    }
  }
  return 3221225626LL;
}
