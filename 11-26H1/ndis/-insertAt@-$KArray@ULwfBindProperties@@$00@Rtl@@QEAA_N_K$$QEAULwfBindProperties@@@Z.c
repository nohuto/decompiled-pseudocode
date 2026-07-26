/*
 * XREFs of ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x14014DA88
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?grow@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x14014DA00 (-grow@-$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?moveElements@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z @ 0x14014DB6C (-moveElements@-$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z.c)
 */

char __fastcall Rtl::KArray<LwfBindProperties,1>::insertAt(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rbx
  char result; // al

  v3 = *(unsigned int *)(a1 + 4);
  if ( a2 > v3 || !Rtl::KArray<LwfBindProperties,1>::grow((unsigned int *)a1, (unsigned int)(v3 + 1)) )
    return 0;
  v7 = *(unsigned int *)(a1 + 4);
  if ( a2 < v7 )
    Rtl::KArray<LwfBindProperties,1>::moveElements(
      a1,
      (unsigned int)a2,
      (unsigned int)(a2 + 1),
      (unsigned int)(v7 - a2));
  v8 = *(_QWORD *)(a1 + 8);
  v9 = a2 << 6;
  *(_OWORD *)(v9 + v8) = *(_OWORD *)a3;
  *(_DWORD *)(v9 + v8 + 16) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(v9 + v8 + 20) = *(_DWORD *)(a3 + 20);
  *(_QWORD *)(v9 + v8 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(v9 + v8 + 32) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(v9 + v8 + 36) = *(_DWORD *)(a3 + 36);
  *(_QWORD *)(v9 + v8 + 40) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(v9 + v8 + 48) = *(_DWORD *)(a3 + 48);
  *(_BYTE *)(v9 + v8 + 52) = *(_BYTE *)(a3 + 52);
  *(_DWORD *)(v9 + v8 + 56) = *(_DWORD *)(a3 + 56);
  result = 1;
  ++*(_DWORD *)(a1 + 4);
  return result;
}
