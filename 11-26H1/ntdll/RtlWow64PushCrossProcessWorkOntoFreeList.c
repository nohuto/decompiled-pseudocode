/*
 * XREFs of RtlWow64PushCrossProcessWorkOntoFreeList @ 0x180125060
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 */

char __fastcall RtlWow64PushCrossProcessWorkOntoFreeList(volatile signed __int64 *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v10; // [rsp+50h] [rbp+18h]

  v4 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
  v6 = a2 + 10;
  if ( v5 <= v4 || (unsigned __int64)a2 < v4 || (unsigned __int64)v6 > v5 || v6 <= a2 )
    RtlRaiseStatus(-1073741811);
  v7 = *a1;
  do
  {
    HIDWORD(v10) = HIDWORD(v7) + 1;
    *a2 = v7 & 0x7FFFFFFF;
    LODWORD(v10) = ((_DWORD)a2 - (_DWORD)a1) & 0x7FFFFFFF | v7 & 0x80000000;
    v8 = v7;
    v7 = _InterlockedCompareExchange64(a1, v10, v7);
  }
  while ( v8 != v7 );
  return 1;
}
