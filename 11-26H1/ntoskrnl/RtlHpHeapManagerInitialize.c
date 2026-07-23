/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x14062866C
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1406D70BC (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x14063CCC4 (RtlCSparseBitmapInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 */

void __fastcall RtlHpHeapManagerInitialize(_RTL_RUN_ONCE *a1, _RTL_RUN_ONCE *a2)
{
  _RTL_RUN_ONCE *v4; // rdi
  __int64 v5; // rax
  _RTL_RUN_ONCE *v6; // rdi
  __int64 v7; // rbx

  memset_0(&a1[11], 0, 0x3888uLL);
  a1->Value = (unsigned __int64)&PspTlsContext.Timer.Processor;
  memset_0(&a1[1], 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&a1[2], 72LL);
  memset_0(&a1[11], 0, 0x3840uLL);
  RtlCSparseBitmapInitialize(&a1[15], 2112LL);
  v4 = a1 + 283;
  v5 = 255LL;
  do
  {
    v4[-2].Value = 0LL;
    v4[1].Value = 0LL;
    v4[2].Value = 0LL;
    v4[3].Value = 0LL;
    v4[-1].Value = 0LL;
    v4->Value = 0LL;
    v4 += 6;
    --v5;
  }
  while ( v5 );
  qword_140F09830 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  qword_140F09828 = (__int64)&unk_140F09838;
  dword_140F09824 = 2048;
  memset64(&unk_140F09838, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  v6 = a1 + 1812;
  a1[1819].Ptr = a2->Ptr;
  v7 = 4LL;
  do
  {
    CmSiRWLockInitialize(v6);
    v6 += 2;
    --v7;
  }
  while ( v7 );
}
