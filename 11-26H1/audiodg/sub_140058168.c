/*
 * XREFs of sub_140058168 @ 0x140058168
 * Callers:
 *     sub_140055E50 @ 0x140055E50 (sub_140055E50.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 */

void __fastcall sub_140058168(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v3 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(a1 + 72);
    v6 = v2;
    while ( v3 != v4 )
    {
      _InterlockedAnd(*(volatile signed __int32 **)(v3 + 8), *(_DWORD *)v3 != 0 ? -5 : -2111);
      v3 += 16LL;
    }
    v5 = 1;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 28) != -1 )
      v5 = *(_DWORD *)(a1 + 28) + 1;
    *(_DWORD *)(a1 + 28) = v5;
    sub_14003A998(&v6);
  }
}
