/*
 * XREFs of sub_14002C5F0 @ 0x14002C5F0
 * Callers:
 *     sub_140014030 @ 0x140014030 (sub_140014030.c)
 *     sub_14002CA30 @ 0x14002CA30 (sub_14002CA30.c)
 * Callees:
 *     sub_14002BA4C @ 0x14002BA4C (sub_14002BA4C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002C5F0(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1560) + 516LL) )
    return sub_14002BA4C(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 8 * i + 1672);
    if ( v3 )
      sub_140032C80(v3, 0LL, 424LL);
  }
  *(_DWORD *)(a1 + 212) = 0;
  result = StorPortNotification(7LL, a1, 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
  return result;
}
