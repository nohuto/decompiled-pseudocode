/*
 * XREFs of CmpLockKcbStackShared @ 0x140984C50
 * Callers:
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409806EC (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B0F764 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpLockKcbStackShared(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = CmpLockKcbShared(v3);
  }
  return result;
}
