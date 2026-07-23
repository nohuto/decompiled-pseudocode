/*
 * XREFs of PspQueryProcessIdListCallback @ 0x140AE00D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall PspQueryProcessIdListCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned int v5; // edi

  if ( (*(_DWORD *)(a1 + 496) & 1) != 0 )
  {
    return 0;
  }
  else if ( *(_DWORD *)(a2 + 8) < 8u )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 464);
    v4 = *(__int64 **)a2;
    v5 = 0;
    if ( *(_BYTE *)(a2 + 20) )
      RtlWriteULong64ToUser(v4, v3);
    else
      *v4 = v3;
    ++*(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 += 8LL;
    *(_DWORD *)(a2 + 8) -= 8;
    --*(_DWORD *)(a2 + 16);
  }
  return v5;
}
