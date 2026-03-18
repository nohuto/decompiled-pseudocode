/*
 * XREFs of ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x140320654
 * Callers:
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x14032078C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x140390D18 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x140320A4C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        int a2,
        int a3,
        const struct _LUID *a4,
        unsigned int *a5)
{
  unsigned int v7; // edx
  _DWORD *v8; // r9
  __int64 v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // rdi
  _DWORD *v12; // r10
  _DWORD *v13; // rdi
  unsigned int i; // edx
  int v15; // ecx
  int v16; // eax
  __int64 v18; // rbx

  v10 = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  v11 = v7;
  if ( v10 > 1 << *(_DWORD *)(v9 + 68) )
    v10 = 1 << *(_DWORD *)(v9 + 68);
  if ( v7 >= v10 )
  {
    v18 = v10;
    WdLogSingleEntry2(1LL, v7, v10);
    WdLogGlobalForLineNumber = 5773;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"FindEntry called with invalid start table size (0x%lx), table size is only %lx)",
      v11,
      v18,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v12 = *(_DWORD **)(v9 + 48);
    v13 = &v12[4 * v7];
    for ( i = 0; i < v10; ++i )
    {
      v15 = v13[3] & 1 ^ (a3 == 0);
      if ( v8 && (*v8 != *v13 || v8[1] != v13[1]) )
        v15 = 0;
      if ( (!a5 || *a5 == v13[2]) && v15 )
        return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v13;
      v16 = a2 + 1;
      v13 += 4;
      if ( a2 + 1 == v10 )
        v13 = v12;
      a2 = 0;
      if ( v16 != v10 )
        a2 = v16;
    }
  }
  return 0LL;
}
