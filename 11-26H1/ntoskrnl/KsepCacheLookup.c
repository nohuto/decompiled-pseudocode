/*
 * XREFs of KsepCacheLookup @ 0x1409D7F70
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x1407BF87C (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x1407C137C (KseLookupHardwareId.c)
 *     KsepDbCacheQueryDevice @ 0x1409D7EA8 (KsepDbCacheQueryDevice.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall KsepCacheLookup(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD *i; // rsi
  _QWORD *v6; // rdi
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx

  v4 = guard_dispatch_icall_no_overrides(a2, a2);
  for ( i = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12))); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12))) )
    {
      ++*(_DWORD *)(a1 + 52);
      return 0LL;
    }
    v6 = i - 1;
    if ( v4 == *((_DWORD *)i - 2) )
    {
      if ( (unsigned int)guard_dispatch_icall_no_overrides(a2, (__int64)(i - 1)) )
        break;
    }
  }
  v8 = v6 + 3;
  v9 = v6[3];
  if ( *(_QWORD **)(v9 + 8) != v6 + 3
    || (v10 = (_QWORD *)v6[4], (_QWORD *)*v10 != v8)
    || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = *(_QWORD **)(a1 + 40), *v11 != a1 + 32) )
  {
    __fastfail(3u);
  }
  *v8 = a1 + 32;
  v6[4] = v11;
  *v11 = v8;
  *(_QWORD *)(a1 + 40) = v8;
  result = i - 1;
  ++*(_DWORD *)(a1 + 48);
  return result;
}
