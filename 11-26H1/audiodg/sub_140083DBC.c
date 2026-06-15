/*
 * XREFs of sub_140083DBC @ 0x140083DBC
 * Callers:
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140083DBC(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  _QWORD *v7; // [rsp+50h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+20h]

  sub_1400B6010(*(_QWORD *)(a1 + 800));
  v3 = MEMORY[0];
  v7 = (_QWORD *)MEMORY[0];
  if ( MEMORY[0] )
  {
    while ( 1 )
    {
      v4 = sub_1400265D8(v3, &v7);
      v5 = *v4;
      if ( *(_QWORD *)(*v4 + 16LL) == a2 )
        break;
      if ( !v7 )
        goto LABEL_4;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v5;
  }
  else
  {
LABEL_4:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
}
