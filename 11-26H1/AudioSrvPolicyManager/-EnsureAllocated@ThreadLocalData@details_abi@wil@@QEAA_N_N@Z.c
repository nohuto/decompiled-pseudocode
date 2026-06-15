/*
 * XREFs of ?EnsureAllocated@ThreadLocalData@details_abi@wil@@QEAA_N_N@Z @ 0x18002E4A0
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18002B344 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180033A5C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

bool __fastcall wil::details_abi::ThreadLocalData::EnsureAllocated(
        wil::details_abi::ThreadLocalData *this,
        char a2,
        unsigned __int64 a3)
{
  _WORD *v4; // rax
  _WORD *v5; // rcx

  if ( !*((_QWORD *)this + 3) )
  {
    if ( a2 )
    {
      v4 = wil::details::ProcessHeapAlloc(8u, 0x190uLL, a3);
      *((_QWORD *)this + 3) = v4;
      if ( v4 )
      {
        v5 = v4 + 200;
        *((_DWORD *)this + 8) = 5;
        do
        {
          *v4 = 80;
          v4 += 40;
        }
        while ( v4 != v5 );
      }
    }
  }
  return *((_QWORD *)this + 3) != 0LL;
}
