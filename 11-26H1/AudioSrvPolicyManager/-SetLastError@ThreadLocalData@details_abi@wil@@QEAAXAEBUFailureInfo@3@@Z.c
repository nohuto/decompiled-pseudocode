/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18002B344
 * Callers:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18002EC90 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?EnsureAllocated@ThreadLocalData@details_abi@wil@@QEAA_N_N@Z @ 0x18002E4A0 (-EnsureAllocated@ThreadLocalData@details_abi@wil@@QEAA_N_N@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180034B10 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  _DWORD *i; // rcx
  unsigned __int16 v8; // dx

  v2 = *((_DWORD *)this + 4);
  if ( wil::details_abi::ThreadLocalData::EnsureAllocated(this, v2 != 0) )
  {
    if ( v2 )
    {
      v5 = *((_QWORD *)this + 3);
      v6 = (_DWORD *)(v5 + 80LL * *((unsigned __int16 *)this + 16));
      for ( i = (_DWORD *)(v5 + 8); i - 2 != v6; i += 20 )
      {
        if ( *(i - 1) > *((_DWORD *)this + 4) && *i == *((_DWORD *)a2 + 2) )
          return;
      }
    }
    v8 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
    *((_WORD *)this + 17) = v8;
    wil::details_abi::ThreadLocalFailureInfo::Set(
      (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 80LL * v8),
      a2,
      _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
  }
}
