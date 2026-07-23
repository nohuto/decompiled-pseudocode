/*
 * XREFs of MmFreeSecureKernelPages @ 0x1403CBD80
 * Callers:
 *     PspIumFreePhysicalPages @ 0x1403CCB2C (PspIumFreePhysicalPages.c)
 *     PspIumAllocatePhysicalPages @ 0x1406193C0 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiFreeSecureKernelPage @ 0x1403CCF10 (MiFreeSecureKernelPage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MmFreeSecureKernelPages(__int64 a1, int a2)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // r12
  unsigned __int64 result; // rax
  BOOL v8; // esi
  int v9; // [rsp+28h] [rbp-D8h]
  _DWORD v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v12; // [rsp+58h] [rbp-A8h]
  __int16 v13; // [rsp+5Ah] [rbp-A6h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]

  memset_0(&BugCheckParameter2, 0, 0xB0uLL);
  v4 = (_QWORD *)(a1 + 48);
  v5 = a1 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock
                 + 8 * ((*(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  result = KeGetCurrentIrql();
  v10[0] = 0;
  if ( a1 + 48 < v5 )
  {
    v8 = (_BYTE)result == 2;
    do
      result = MiFreeSecureKernelPage(*v4++, v6, a2, (unsigned int)&BugCheckParameter2, (__int64)v10, v9, v8);
    while ( (unsigned __int64)v4 < v5 );
    if ( v10[0] )
    {
      v15 = v10[0] << 12;
      BugCheckParameter2 = 0LL;
      v12 = 8 * (LOWORD(v10[0]) + 6);
      v14 = 0LL;
      v13 = 2;
      v16 = 0;
      result = MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, 0);
    }
  }
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
