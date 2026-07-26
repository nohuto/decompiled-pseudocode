/*
 * XREFs of ?append@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@@Z @ 0x14014D914
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?grow@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x14014DA00 (-grow@-$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<LwfBindProperties,1>::append(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // r8

  result = Rtl::KArray<LwfBindProperties,1>::grow(a1, (unsigned int)(*(_DWORD *)(a1 + 4) + 1));
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = (unsigned __int64)*(unsigned int *)(a1 + 4) << 6;
    *(_OWORD *)(v6 + v5) = *(_OWORD *)a2;
    *(_DWORD *)(v6 + v5 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(v6 + v5 + 20) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v6 + v5 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(v6 + v5 + 32) = *(_DWORD *)(a2 + 32);
    result = 1;
    *(_DWORD *)(v6 + v5 + 36) = *(_DWORD *)(a2 + 36);
    *(_QWORD *)(v6 + v5 + 40) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_DWORD *)(v6 + v5 + 48) = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(v6 + v5 + 52) = *(_BYTE *)(a2 + 52);
    *(_DWORD *)(v6 + v5 + 56) = *(_DWORD *)(a2 + 56);
    ++*(_DWORD *)(a1 + 4);
  }
  return result;
}
