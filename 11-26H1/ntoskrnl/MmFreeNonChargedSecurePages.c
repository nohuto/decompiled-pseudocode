/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x1403CCD54
 * Callers:
 *     PspIumFreePartitionPages @ 0x1403CCC98 (PspIumFreePartitionPages.c)
 *     PspIumAllocatePartitionState @ 0x14061920C (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x140619720 (PspIumFreePartitionState.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiFreeSecureKernelPage @ 0x1403CCF10 (MiFreeSecureKernelPage.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG **BugCheckParameter2, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  ULONG *v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v10; // r15
  int v11; // [rsp+28h] [rbp-D8h]
  _BYTE v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v13[3]; // [rsp+44h] [rbp-BCh] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v15; // [rsp+58h] [rbp-A8h]
  __int16 v16; // [rsp+5Ah] [rbp-A6h]
  __int64 v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]

  v4 = a3;
  v12[0] = 0;
  memset_0(&BugCheckParameter2a, 0, 0xB0uLL);
  v13[0] = 0;
  v8 = MiPartitionObjectToPartition(BugCheckParameter2, 1, v12);
  CurrentIrql = KeGetCurrentIrql();
  v10 = &a4[v4];
  while ( a4 < v10 )
  {
    MiFreeSecureKernelPage(*a4, (_DWORD)v8, 0, (unsigned int)&BugCheckParameter2a, (__int64)v13, v11, CurrentIrql == 2);
    if ( !a2 && _InterlockedDecrement64((volatile signed __int64 *)v8 + 63) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)v8, 0LL, 0LL);
    ++a4;
  }
  if ( v13[0] )
  {
    v18 = v13[0] << 12;
    v16 = 2;
    v15 = 8 * (LOWORD(v13[0]) + 6);
    BugCheckParameter2a = 0LL;
    v17 = 0LL;
    v19 = 0;
    MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2a, 0, 0, 0);
  }
  if ( a2 )
    MiReleaseNonPagedResources((__int64)v8, v4);
  if ( v12[0] )
    PsDereferencePartition(*((_QWORD *)v8 + 32));
}
