/*
 * XREFs of MiInitializeSystemCache @ 0x140870CF8
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiQuerySystemBase @ 0x14048EB78 (MiQuerySystemBase.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(__int64 a1)
{
  unsigned int v1; // edi
  __int64 *v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (__int64 *)(a1 + 2560);
  v10 = 0LL;
  v4 = a1 + 2560;
  v5 = 4LL;
  do
  {
    v2[1] = v4;
    *v2 = v4;
    v4 += 32LL;
    v2 += 4;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 2696) = a1 + 2688;
  *(_QWORD *)(a1 + 2688) = a1 + 2688;
  *(_QWORD *)(a1 + 2728) = a1 + 2720;
  *(_QWORD *)(a1 + 2720) = a1 + 2720;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    LOBYTE(dword_140E36EF8) = dword_140E36EF8 & 0xF0 | 1;
    v6 = MiQuerySystemBase(4, &v10);
    v7 = v10;
    if ( !(unsigned int)MiInitializeDynamicRegion(7LL, v6, v10) )
      return 0LL;
    v8 = v7 >> 12;
  }
  else
  {
    v8 = 0LL;
  }
  LOBYTE(v1) = (int)MiInitializeSystemWorkingSetList(a1, a1 + 22592, 1, v8) >= 0;
  return v1;
}
