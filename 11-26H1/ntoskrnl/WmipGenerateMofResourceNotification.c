/*
 * XREFs of WmipGenerateMofResourceNotification @ 0x140B551C8
 * Callers:
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 *     WmipMRCleanup @ 0x140B4BBB0 (WmipMRCleanup.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipGenerateMofResourceNotification(_WORD *Src, _WORD *a2, _OWORD *a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v10; // r15
  char *Pool2; // rax
  char *v12; // rsi
  int v13; // eax
  size_t v14; // rdi
  __int64 v15; // rdx

  v4 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Src[v6] );
  do
    ++v4;
  while ( a2[v4] );
  v10 = 2 * v4 + 4;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v12 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v10 + 2 * (v6 + 38));
    *(_DWORD *)v12 = v10 + 2 * (v6 + 38);
    *((_DWORD *)v12 + 1) = a4;
    *((_QWORD *)v12 + 1) = 1LL;
    *((_DWORD *)v12 + 11) = 266;
    *(_OWORD *)(v12 + 24) = *a3;
    *((_QWORD *)v12 + 2) = MEMORY[0xFFFFF78000000014];
    *((_WORD *)v12 + 32) = 0;
    v13 = v10 + 2 * (v6 + 2);
    v14 = 2 * v6 + 2;
    *((_DWORD *)v12 + 15) = v13;
    *((_DWORD *)v12 + 12) = 64;
    *((_DWORD *)v12 + 14) = 72;
    *((_WORD *)v12 + 36) = v14;
    memmove(v12 + 74, Src, v14);
    v14 >>= 1;
    *(_WORD *)&v12[2 * v14 + 74] = v10 - 2;
    memmove(&v12[2 * v14 + 76], a2, v10 - 2);
    LOBYTE(v15) = 1;
    WmipProcessEvent((unsigned int *)v12, v15, 0);
    ExFreePoolWithTag(v12, 0);
  }
}
