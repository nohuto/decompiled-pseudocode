/*
 * XREFs of HalpRemoveProfileSourceFromList @ 0x140582CD8
 * Callers:
 *     EmonRemoveProfileSource @ 0x1405989E0 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1405A72D0 (Amd64RemoveProfileSource.c)
 * Callees:
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x1404E4A04 (HalpGetProfileDescriptor.c)
 */

char __fastcall HalpRemoveProfileSourceFromList(int *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  if ( (int)HalpGetProfileDescriptor(*a1, a2, &v9) < 0 )
    return 0;
  v5 = v9;
  *v3 = v9;
  if ( RtlSubtractAffinityEx((struct _KAFFINITY_EX *)(v5 + 32), (struct _KAFFINITY_EX *)(v4 + 8), v5 + 32) )
    return 0;
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v6 + 8) != v5 + 8 || (v7 = *(_QWORD **)(v5 + 16), *v7 != v5 + 8) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  return 1;
}
