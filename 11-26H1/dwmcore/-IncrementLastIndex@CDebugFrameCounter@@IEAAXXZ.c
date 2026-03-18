/*
 * XREFs of ?IncrementLastIndex@CDebugFrameCounter@@IEAAXXZ @ 0x18022F85C
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugFrameCounter::IncrementLastIndex(CDebugFrameCounter *this)
{
  int v1; // edx
  __int64 v2; // rdx

  v1 = (unsigned __int8)(*((_BYTE *)this + 4) + 1);
  *((_DWORD *)this + 1) = v1;
  if ( *(_DWORD *)this == v1 )
  {
    v2 = 16LL * *(unsigned int *)this;
    *((_QWORD *)this + 2) += *(_QWORD *)((char *)this + v2 + 40) - *(_QWORD *)((char *)this + v2 + 48);
    *(_QWORD *)((char *)this + v2 + 48) = 0LL;
    *(_QWORD *)((char *)this + v2 + 40) = 0LL;
    *(_DWORD *)this = (unsigned __int8)(*(_BYTE *)this + 1);
  }
}
