/*
 * XREFs of CmpLockKcbStackShared @ 0x140946C60
 * Callers:
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409426FC (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B10F94 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
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
