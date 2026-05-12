/*
 * XREFs of sub_14000ED78 @ 0x14000ED78
 * Callers:
 *     sub_14000E060 @ 0x14000E060 (sub_14000E060.c)
 * Callees:
 *     sub_140055FD0 @ 0x140055FD0 (sub_140055FD0.c)
 */

__int64 __fastcall sub_14000ED78(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rcx

  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    result = a1 + 144;
    v5 = *(_QWORD **)(a1 + 152);
    if ( *v5 != result )
      goto LABEL_12;
    *(_QWORD *)a2 = result;
    *(_QWORD *)(a2 + 8) = v5;
    *v5 = a2;
    *(_QWORD *)(result + 8) = a2;
    ++*(_DWORD *)(a1 + 16);
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 0x100000000uLL);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), (PSLIST_ENTRY)((a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_BYTE *)(a2 + 20) |= 2u;
    if ( *(_BYTE *)(a2 + 22) )
      ++*(_DWORD *)(a1 + 32);
    result = *(_QWORD *)(a1 + 88) / 0x100000000LL;
    if ( (int)result > *(_DWORD *)(a1 + 180) )
      *(_DWORD *)(a1 + 180) = result;
  }
  if ( (*(_BYTE *)(a2 + 22) & 8) != 0 )
    ++*(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(a2 + 22) & 0x20) != 0 )
  {
    result = sub_140055FD0(a2);
    v6 = a1 + 160;
    v7 = *(__int64 **)(v6 + 8);
    if ( *v7 == v6 )
    {
      *(_QWORD *)result = v6;
      *(_QWORD *)(result + 8) = v7;
      *v7 = result;
      *(_QWORD *)(v6 + 8) = result;
      return result;
    }
LABEL_12:
    __fastfail(3u);
  }
  return result;
}
