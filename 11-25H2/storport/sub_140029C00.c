/*
 * XREFs of sub_140029C00 @ 0x140029C00
 * Callers:
 *     sub_14002B140 @ 0x14002B140 (sub_14002B140.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_140029C00(__int64 a1)
{
  int v1; // r9d
  __int64 v3; // rax
  int v4; // edi
  PSLIST_ENTRY result; // rax
  unsigned int v6; // ecx
  int v7; // esi

  v1 = *(_DWORD *)(a1 + 64);
  if ( !v1 )
    return ExpInterlockedPopEntrySList((PSLIST_HEADER)a1);
  v3 = (unsigned int)(v1
                    * (HIDWORD(KeGetPcr()[1].LockArray) % *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 64LL) + 976LL)))
     / *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 64LL) + 976LL);
  v4 = v3;
  result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)a1 + 8 * v3));
  if ( result )
    goto LABEL_3;
  v6 = *(_DWORD *)(a1 + 64);
  v7 = 1;
  if ( v6 > 1 )
  {
    while ( !result )
    {
      result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)a1 + 8LL * ((v7 + v4) % v6)));
      v6 = *(_DWORD *)(a1 + 64);
      if ( ++v7 >= v6 )
      {
        if ( result )
          break;
        return result;
      }
    }
LABEL_3:
    LODWORD(result->Next) = v4;
  }
  return result;
}
