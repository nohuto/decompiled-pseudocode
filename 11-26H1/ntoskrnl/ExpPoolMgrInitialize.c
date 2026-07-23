/*
 * XREFs of ExpPoolMgrInitialize @ 0x140CEDCB4
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1406D6B74 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

ULONG (__fastcall *__fastcall ExpPoolMgrInitialize(__int64 *a1))(volatile signed __int32 *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  ULONG (__fastcall *result)(volatile signed __int32 *); // rax

  memset_0(a1, 0, 0x88uLL);
  v2 = a1 + 2;
  v3 = 2LL;
  v4 = (__int64)(a1 + 2);
  do
  {
    v2[1] = v4;
    *v2 = v4;
    v4 += 24LL;
    v2 += 3;
    --v3;
  }
  while ( v3 );
  a1[8] = 0LL;
  v5 = (unsigned __int64)(unsigned int)ExGenRandom(0, v4) << 32;
  a1[9] = v5 | (unsigned int)ExGenRandom(0, v6);
  result = ExpPoolMgrRebalanceWorker;
  a1[12] = (__int64)ExpPoolMgrRebalanceWorker;
  a1[13] = (__int64)a1;
  a1[10] = 0LL;
  return result;
}
