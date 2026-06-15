/*
 * XREFs of sub_1400AD738 @ 0x1400AD738
 * Callers:
 *     sub_140033800 @ 0x140033800 (sub_140033800.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400AD738(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 MessageAttribute; // rax
  __int64 v7; // rcx

  v3 = *a2;
  v4 = 0;
  if ( (*(_DWORD *)(a3 + 4) & 0x10000000) == 0 )
  {
    v4 = -1073741649;
    goto LABEL_8;
  }
  MessageAttribute = AlpcGetMessageAttribute(a3, 0x10000000LL);
  if ( !MessageAttribute )
  {
    v4 = -1073741816;
LABEL_8:
    *(_DWORD *)(v3 + 44) = v4;
    return v4;
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
    sub_1400B6010(v7);
  else
    NtClose(*(HANDLE *)(MessageAttribute + 8));
  return v4;
}
