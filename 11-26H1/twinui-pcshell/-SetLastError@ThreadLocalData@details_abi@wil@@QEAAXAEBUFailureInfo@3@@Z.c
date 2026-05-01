/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800CAF20
 * Callers:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800CABF8 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800EB9A4 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1802D728C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  __int64 v6; // r9
  _WORD *v7; // rax
  _WORD *v8; // rcx
  __int64 i; // rcx
  unsigned __int16 v10; // dx
  volatile signed __int32 *v11; // rax

  v3 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v3 )
    {
      v7 = wil::details::ProcessHeapAlloc(8u, 0x190uLL, a3);
      *((_QWORD *)this + 3) = v7;
      if ( v7 )
      {
        *((_DWORD *)this + 8) = 5;
        v8 = v7 + 200;
        while ( v7 != v8 )
        {
          *v7 = 80;
          v7 += 40;
        }
      }
    }
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    if ( v3 )
    {
      for ( i = *((_QWORD *)this + 3); i != v6 + 80LL * *((unsigned __int16 *)this + 16); i += 80LL )
      {
        if ( *(_DWORD *)(i + 4) > *((_DWORD *)this + 4) && *(_DWORD *)(i + 8) == *((_DWORD *)a2 + 2) )
          return;
      }
    }
    v10 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
    v11 = (volatile signed __int32 *)*((_QWORD *)this + 1);
    *((_WORD *)this + 17) = v10;
    wil::details_abi::ThreadLocalFailureInfo::Set(
      (wil::details_abi::ThreadLocalFailureInfo *)(v6 + 80LL * v10),
      a2,
      _InterlockedIncrement(v11));
  }
}
