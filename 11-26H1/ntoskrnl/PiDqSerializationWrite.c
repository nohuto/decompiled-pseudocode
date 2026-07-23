/*
 * XREFs of PiDqSerializationWrite @ 0x140AD8160
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

unsigned __int64 __fastcall PiDqSerializationWrite(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  void *v7; // rcx

  v5 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - v5);
  if ( (unsigned int)result < a3 )
  {
    *(_BYTE *)(a1 + 29) = 1;
  }
  else
  {
    v7 = (void *)(*(_QWORD *)a1 + v5);
    if ( *(_BYTE *)(a1 + 28) )
      result = (unsigned __int64)RtlCopyToUser(v7, a2, a3);
    else
      result = (unsigned __int64)memmove(v7, a2, a3);
    *(_DWORD *)(a1 + 12) += a3;
  }
  return result;
}
