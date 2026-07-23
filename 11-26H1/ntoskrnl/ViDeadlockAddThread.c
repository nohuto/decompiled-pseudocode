/*
 * XREFs of ViDeadlockAddThread @ 0x140C3CD4C
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfUtilAddressRangeAdd @ 0x140C27600 (VfUtilAddressRangeAdd.c)
 */

__int64 __fastcall ViDeadlockAddThread(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // r11
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10

  result = 0LL;
  if ( a2 )
  {
    v5 = ViDeadlockGlobals;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_BYTE *)(a2 + 48) = 0;
    *(_QWORD *)a2 = a1;
    v6 = (_QWORD *)(a2 + 24);
    v7 = 2 * ((a1 >> 12) % 0x3FF);
    v8 = v7 * 8 + v5[2050];
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
      __fastfail(3u);
    *v6 = v9;
    *(_QWORD *)(a2 + 32) = v8;
    *(_QWORD *)(v9 + 8) = v6;
    *(_QWORD *)v8 = v6;
    VfUtilAddressRangeAdd(&v5[v7 + 2052], a1, 1944LL);
    result = v10;
    ++*((_QWORD *)ViDeadlockGlobals + 2051);
  }
  return result;
}
