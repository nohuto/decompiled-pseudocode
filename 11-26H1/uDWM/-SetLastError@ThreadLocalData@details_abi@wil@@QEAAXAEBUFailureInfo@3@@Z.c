/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180092B50
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800912F0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18005C730 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x1800905A0 (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180092770 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  LPVOID v5; // rax
  _WORD *i; // rcx
  __int64 v7; // r9
  _DWORD *j; // rcx
  unsigned __int16 v9; // dx
  volatile signed __int32 *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  _WORD *v12; // [rsp+28h] [rbp-10h]

  v2 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v2 )
    {
      v5 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
      *((_QWORD *)this + 3) = v5;
      if ( v5 )
      {
        *((_DWORD *)this + 8) = 5;
        wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(&v11, (__int64)v5, 5LL);
        for ( i = (_WORD *)v11; i != v12; i += 40 )
          *i = 80;
      }
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( v2 )
    {
      wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(
        &v11,
        *((_QWORD *)this + 3),
        *((unsigned __int16 *)this + 16));
      for ( j = (_DWORD *)(v11 + 8); j - 2 != (_DWORD *)v12; j += 20 )
      {
        if ( *(j - 1) > *((_DWORD *)this + 4) && *j == *((_DWORD *)a2 + 2) )
          return;
      }
    }
    v9 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
    v10 = (volatile signed __int32 *)*((_QWORD *)this + 1);
    *((_WORD *)this + 17) = v9;
    wil::details_abi::ThreadLocalFailureInfo::Set(
      (wil::details_abi::ThreadLocalFailureInfo *)(v7 + 80LL * v9),
      a2,
      _InterlockedIncrement(v10));
  }
}
