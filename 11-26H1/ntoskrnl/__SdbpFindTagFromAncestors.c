/*
 * XREFs of __SdbpFindTagFromAncestors @ 0x14088BDFC
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 _SdbpFindTagFromAncestors(__int64 a1, ...)
{
  __int64 v1; // rdx
  __int64 result; // rax
  va_list v4; // rdi
  unsigned __int16 v5; // bx
  int FirstTag; // eax
  unsigned int v7; // ecx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  va_list va; // [rsp+58h] [rbp+10h]
  va_list va1; // [rsp+60h] [rbp+18h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v8 = va_arg(va1, _QWORD);
  v1 = v8;
  result = 0LL;
  if ( v8 )
  {
    va_copy(v4, va);
    do
    {
      v4 += 8;
      v5 = *(_WORD *)v4;
      v8 = v1 - 1;
      FirstTag = SdbFindFirstTag(a1, (unsigned int)result, v5);
      v1 = v8;
      v7 = v5 != 0 ? FirstTag : 0;
      result = v7;
    }
    while ( v8 && v7 );
  }
  return result;
}
