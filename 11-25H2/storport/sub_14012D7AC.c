/*
 * XREFs of sub_14012D7AC @ 0x14012D7AC
 * Callers:
 *     sub_140128F6C @ 0x140128F6C (sub_140128F6C.c)
 *     sub_14012E508 @ 0x14012E508 (sub_14012E508.c)
 * Callees:
 *     sub_14012D7EC @ 0x14012D7EC (sub_14012D7EC.c)
 */

__int64 __fastcall sub_14012D7AC(__int64 a1, __int64 a2, char a3)
{
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL) == 4 )
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = 0;
  if ( !a3 )
    _interlockedbittestandset(*(volatile signed __int32 **)(a1 + 256), 2u);
  sub_14012D7EC();
  return 0LL;
}
