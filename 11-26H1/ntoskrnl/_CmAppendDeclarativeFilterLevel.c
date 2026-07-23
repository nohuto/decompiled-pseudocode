/*
 * XREFs of _CmAppendDeclarativeFilterLevel @ 0x1408A15BC
 * Callers:
 *     _CmAppendDeclarativeDefaultFilters @ 0x1408A14D4 (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmGetDeclarativeFilterList @ 0x1408A1C14 (_CmGetDeclarativeFilterList.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x140975750 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpMultiSzAppend @ 0x140A97EF4 (_PnpMultiSzAppend.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmAppendDeclarativeFilterLevel(int a1, int a2, int a3, wchar_t *a4, int a5, _DWORD *a6)
{
  unsigned int v6; // r14d
  wchar_t *v7; // r15
  int v8; // ebx
  int v9; // edi
  void *Pool2; // rsi
  int v11; // r13d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r12d
  char v16; // al
  unsigned int v18; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  wchar_t *v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+A8h] [rbp+48h] BYREF

  v6 = 0;
  v7 = a4;
  v20 = a4;
  Handle = 0LL;
  v8 = 0;
  v18 = 0;
  *a6 = 0;
  v9 = 0;
  v21 = 0;
  Pool2 = 0LL;
  v11 = 0;
  v12 = PnpCtxRegOpenKey(a1, a2, a3, 0, 0x80000000, (__int64)&Handle);
  if ( v12 < 0 || (v12 = PnpCtxRegQueryInfoKey(v13, Handle, 0LL, 0LL, &v18, &v21, 0LL), v12 < 0) )
  {
    v8 = v12;
  }
  else if ( !v7 || (v11 = v21 + 1, (Pool2 = (void *)ExAllocatePool2(0x100uLL)) != 0LL) )
  {
    while ( 1 )
    {
      v15 = v8;
      if ( v6 >= v18 )
        break;
      v21 = v11;
      v8 = PnpCtxRegEnumValue(v14, Handle, v6, Pool2, &v21, 0LL, 0LL, 0LL);
      if ( v8 == -1073741789 )
      {
        v9 += v21;
        v8 = -1073741789;
      }
      else
      {
        if ( v8 < 0 )
          break;
        v9 += v21;
        v8 = v15;
        if ( v7 )
        {
          v21 = a5;
          ++v9;
          v16 = PnpMultiSzAppend(v7);
          v7 = v20;
          if ( !v16 )
            v8 = -1073741789;
        }
      }
      ++v6;
    }
    *a6 = 2 * v9;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    v8 = -1073741801;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
