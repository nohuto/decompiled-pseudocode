/*
 * XREFs of RtlWow64PopCrossProcessWorkFromFreeList @ 0x18014CD10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 */

_DWORD *__fastcall RtlWow64PopCrossProcessWorkFromFreeList(volatile signed __int64 *a1)
{
  signed __int64 v2; // r9
  _DWORD *v4; // r8
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rcx
  bool v7; // zf
  signed __int64 v8; // rax
  signed __int64 v9; // [rsp+48h] [rbp+10h]
  signed __int64 i; // [rsp+50h] [rbp+18h]

  v2 = *a1;
  for ( i = *a1; ; HIDWORD(i) = HIDWORD(v8) )
  {
    if ( (v2 & 0x7FFFFFFF) == 0 )
      return 0LL;
    v4 = (_DWORD *)((char *)a1 + (v2 & 0x7FFFFFFF));
    v5 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
    v6 = v4 + 10;
    if ( v5 <= ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
      || v6 <= v4
      || (unsigned __int64)v4 < ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
      || (unsigned __int64)v6 > v5 )
    {
      RtlRaiseStatus(-1073741811);
    }
    HIDWORD(v9) = HIDWORD(i) + 1;
    LODWORD(v9) = v2 & 0x80000000 | *v4 & 0x7FFFFFFF;
    v8 = _InterlockedCompareExchange64(a1, v9, v2);
    v7 = v2 == v8;
    v2 = v8;
    if ( v7 )
      break;
  }
  *v4 = 0;
  return v4;
}
