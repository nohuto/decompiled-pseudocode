/*
 * XREFs of sub_1401155A0 @ 0x1401155A0
 * Callers:
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 * Callees:
 *     sub_1401146B0 @ 0x1401146B0 (sub_1401146B0.c)
 */

__int64 __fastcall sub_1401155A0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  PSLIST_ENTRY v5; // r8
  unsigned __int16 *v6; // rax
  int v7; // r8d
  __int64 result; // rax

  v3 = a2;
  v4 = a2;
  v5 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * a2));
  if ( v5 )
    return (__int64)v5;
  v6 = *(unsigned __int16 **)(56 * v4 + *((_QWORD *)qword_140168E40 + 4) + 48);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0x80000000;
  result = sub_1401146B0(a1, v3, v7);
  v5 = (PSLIST_ENTRY)result;
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8 * v3) + 16LL));
    return (__int64)v5;
  }
  return result;
}
