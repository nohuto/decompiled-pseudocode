/*
 * XREFs of KiPopulateNodeInformation @ 0x140CD0B2C
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140CD0A5C (KiPerformGroupConfiguration.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiAllocateKNode @ 0x1405F19B8 (KiAllocateKNode.c)
 *     KiQueryNodeCapacity @ 0x1405F2590 (KiQueryNodeCapacity.c)
 *     KiQueryProximityNode @ 0x1405F2710 (KiQueryProximityNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MmGetChannelInformation @ 0x140B0E978 (MmGetChannelInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall KiPopulateNodeInformation(_DWORD *a1, int *a2)
{
  int *v2; // r13
  _DWORD *v3; // r15
  __int64 KNode; // rax
  unsigned __int16 i; // bx
  unsigned __int16 v6; // ax
  int v7; // r12d
  int v8; // esi
  unsigned __int16 v9; // bx
  _WORD *v10; // rcx
  _DWORD *v11; // rdi
  _WORD *v12; // r14
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // bx
  unsigned __int16 v15; // di
  __int64 j; // r14
  unsigned __int16 k; // bx
  __int64 v18; // rax
  int ChannelInformation; // eax
  unsigned int m; // ecx
  char v21; // r8
  PVOID v22; // rcx
  __int64 v23; // r10
  __int64 *v24; // r9
  __int64 v25; // r8
  PVOID P; // [rsp+38h] [rbp-20h] BYREF
  size_t v28[3]; // [rsp+40h] [rbp-18h] BYREF
  int v31; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+60h]

  v2 = a2;
  v3 = a1;
  v32 = 0;
  v28[0] = 0LL;
  v31 = 0;
  KiQueryNodeCapacity(0LL, (__int64)&v31);
  KNode = KiAllocateKNode(
            0,
            ((unsigned int)(unsigned __int16)KiMaximumSubNodeSize + v31 - 1) / (unsigned __int16)KiMaximumSubNodeSize,
            KeNodeBlock[0]);
  if ( !KNode )
    goto LABEL_41;
  KeNodeBlock[0] = KNode;
  for ( i = 1; ; ++i )
  {
    *(_WORD *)(KNode + 8) = v31;
    v6 = KeNumberNodes;
    if ( i >= (unsigned __int16)KeNumberNodes )
      break;
    KiQueryNodeCapacity(i, (__int64)&v31);
    KNode = KiAllocateKNode(
              i,
              ((unsigned int)(unsigned __int16)KiMaximumSubNodeSize + v31 - 1) / (unsigned __int16)KiMaximumSubNodeSize,
              0LL);
    KeNodeBlock[i] = KNode;
    if ( !KNode )
      goto LABEL_41;
  }
  LODWORD(P) = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v10 = (_WORD *)KeNodeBlock[v9];
      v11 = v10 + 2;
      v7 += (unsigned __int16)v10[4];
      v12 = v10 + 1;
      if ( KiNumaQueryProximityId )
      {
        guard_dispatch_icall_no_overrides(v9, (__int64)(v10 + 2));
        KiQueryProximityNode(v32, (__int64)v12);
        if ( *v11 == v32 )
          ++v8;
      }
      else
      {
        v8 = 1;
        *v11 = 0;
        *v12 = *v10;
      }
      v6 = KeNumberNodes;
      ++v9;
    }
    while ( v9 < (unsigned __int16)KeNumberNodes );
    v2 = a2;
    LODWORD(P) = v7;
  }
  if ( v6 > 1u )
  {
    KeNodeDistance = (_UNKNOWN *)ExAllocatePool2(64LL, 4 * v6 * (unsigned int)v6, 0x2020654Bu);
    if ( !KeNodeDistance )
LABEL_41:
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v13 = KeNumberNodes;
  v14 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v15 = 0;
      for ( j = KeNodeBlock[v14]; v15 < v13; ++v15 )
      {
        guard_dispatch_icall_no_overrides(v14, v15);
        v13 = KeNumberNodes;
        *((_DWORD *)KeNodeDistance + v15 + v14 * (unsigned __int16)KeNumberNodes) = 0;
        if ( v14 != v15 )
          *(_BYTE *)(j + 10) |= 4u;
      }
      ++v14;
    }
    while ( v14 < v13 );
    v7 = (int)P;
    v2 = a2;
    v3 = a1;
  }
  P = 0LL;
  for ( k = 0; ; ++k )
  {
    LOBYTE(v18) = KeNumberNodes;
    if ( k >= (unsigned __int16)KeNumberNodes )
      break;
    if ( *(_WORD *)KeNodeBlock[k] == *(_WORD *)(KeNodeBlock[k] + 2) )
    {
      ChannelInformation = MmGetChannelInformation(0, k, &P, v28);
      if ( ChannelInformation < 0 )
        KeBugCheckEx(0x32u, ChannelInformation, 0LL, 0LL, 0LL);
      for ( m = 0; ; ++m )
      {
        v21 = 1;
        if ( m >= v28[0] / 0x28 )
          break;
        if ( *((_QWORD *)P + 5 * m + 1) )
        {
          v21 = 0;
          break;
        }
      }
      v22 = P;
      *(_BYTE *)(KeNodeBlock[k] + 10) = v21 | *(_BYTE *)(KeNodeBlock[k] + 10) & 0xFE;
      ExFreePoolWithTag(v22, 0);
      P = 0LL;
    }
  }
  if ( KeNumberNodes )
  {
    v23 = (unsigned __int16)KeNumberNodes;
    v24 = KeNodeBlock;
    do
    {
      v25 = *v24;
      v18 = *(unsigned __int16 *)(*v24 + 2);
      if ( *(_WORD *)*v24 != (_WORD)v18 )
      {
        LOBYTE(v18) = *(_BYTE *)(v25 + 10) ^ (*(_BYTE *)(KeNodeBlock[v18] + 10) ^ *(_BYTE *)(v25 + 10)) & 1;
        *(_BYTE *)(v25 + 10) = v18;
      }
      ++v24;
      --v23;
    }
    while ( v23 );
    v2 = a2;
  }
  *v3 = v7;
  *v2 = v8;
  return v18;
}
