/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x140B262B8
 * Callers:
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiVadPageTableChargeLevel @ 0x140471E50 (MiVadPageTableChargeLevel.c)
 *     MiCommittedVadsInRegion @ 0x1404AD22C (MiCommittedVadsInRegion.c)
 *     MiUpdateChargedWsles @ 0x140526724 (MiUpdateChargedWsles.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 *     MiReturnVadBitmapCommit @ 0x140AE3FD0 (MiReturnVadBitmapCommit.c)
 *     MiComputeVadCommitBelow @ 0x140B26574 (MiComputeVadCommitBelow.c)
 *     MiComputeVadCommitAbove @ 0x140B265BC (MiComputeVadCommitAbove.c)
 */

void __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _BYTE *a7,
        int a8)
{
  BOOL v12; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  int v17; // r12d
  __int64 v18; // rbx
  int v19; // r14d
  int v20; // r15d
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD v24[2]; // [rsp+28h] [rbp-99h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-89h]
  unsigned __int64 v26; // [rsp+40h] [rbp-81h]
  __int64 v27; // [rsp+48h] [rbp-79h]
  unsigned __int64 v28; // [rsp+50h] [rbp-71h]
  unsigned __int64 v29; // [rsp+58h] [rbp-69h]
  BOOL v30; // [rsp+60h] [rbp-61h]
  __int64 v31; // [rsp+68h] [rbp-59h]
  unsigned __int64 v32; // [rsp+70h] [rbp-51h]
  __int64 v33; // [rsp+78h] [rbp-49h]
  _BYTE *v34; // [rsp+80h] [rbp-41h]
  int v35; // [rsp+88h] [rbp-39h]
  __int64 v36; // [rsp+90h] [rbp-31h]
  __int64 v37; // [rsp+98h] [rbp-29h]
  __int64 v38; // [rsp+A0h] [rbp-21h]
  __int64 v39; // [rsp+A8h] [rbp-19h]
  __int64 v40; // [rsp+B0h] [rbp-11h]
  int v41; // [rsp+B8h] [rbp-9h]
  __int64 v45; // [rsp+130h] [rbp+6Fh]

  memset_0(v24, 0, 0x98uLL);
  v27 = a6;
  v12 = MiVadPureReserve(a6);
  v14 = *(unsigned int *)(v13 + 52);
  v15 = *(unsigned __int8 *)(v13 + 34);
  v30 = v12;
  v41 = a8;
  v40 = *(_QWORD *)(a3 + 1040) + 896LL;
  v25 = a4;
  v26 = a5;
  v24[0] = a1;
  v24[1] = a2;
  if ( (v14 | (unsigned __int64)(v15 << 32)) < 0x7FFFFFFFDLL
    || (*(unsigned int *)(v13 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 32)) == 0x7FFFFFFFELL )
  {
    v29 = 0LL;
    if ( (a4 & 1) != 0 )
    {
      v25 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
      v29 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    v28 = 0LL;
    if ( (a5 & 1) != 0 )
    {
      v26 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
      v28 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    v16 = a1 >> 21;
    v17 = MiVadPageTableChargeLevel(v13);
    v18 = a2 >> 21;
    v32 = a2 >> 21;
    v19 = 0;
    v38 = 0LL;
    v31 = v16;
    v33 = 1023LL;
    v34 = a7;
    v36 = -1LL;
    v37 = 0LL;
    v39 = 0LL;
    do
    {
      v20 = 0;
      v35 = v19;
      v21 = v16;
      v45 = v18;
      if ( *a7 )
      {
        if ( !v30 || (unsigned int)MiCommittedVadsInRegion(a1, a2) )
        {
          MiComputeVadCommitBelow(v24);
          v18 = v32;
          v16 = v31;
        }
        else
        {
          v20 = 1;
        }
      }
      else
      {
        v31 = ++v16;
      }
      if ( a7[1] )
      {
        if ( !v20 )
        {
          MiComputeVadCommitAbove(v24);
          v18 = v32;
          v16 = v31;
        }
      }
      else
      {
        v32 = --v18;
      }
      if ( v16 > v18 )
        break;
      if ( v19 >= v17 )
        MiReturnVadBitmapCommit((__int64)v24);
      *a7 >>= 1;
      ++v19;
      a7[1] >>= 1;
      v33 >>= 9;
      v16 = v21 >> 9;
      v18 = v45 >> 9;
      v31 = v21 >> 9;
      v32 = v45 >> 9;
    }
    while ( v19 < 3 );
    v22 = v38;
    if ( v38 )
      MiUpdateChargedWsles(a3 + 1024, -v38);
    v23 = v39;
    if ( v39 )
      *(_QWORD *)(v40 + 240) -= v39;
    if ( v23 + v22 )
      MiReturnFullProcessCommitment(a3, v23 + v22);
  }
}
