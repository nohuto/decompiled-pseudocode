/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1400607D4
 * Callers:
 *     DpiDispatchPnp @ 0x1403C5890 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 Pool2; // rax
  __int64 v6; // rdi

  v3 = -1073741637;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL) == 7 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
    Pool2 = ExAllocatePool2(256LL, 16LL, 1953656900LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v4 + 152);
      ObfReferenceObject(*(PVOID *)(v4 + 152));
      v3 = 0;
      *(_QWORD *)(a2 + 56) = v6;
    }
    else
    {
      v3 = -1073741670;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 1543;
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL) != 8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1574;
  }
  return v3;
}
