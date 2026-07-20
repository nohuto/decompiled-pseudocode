/*
 * XREFs of SmpFindModuleInModuleList @ 0x140008FB0
 * Callers:
 *     SmpInitializeKnownDllsInternal @ 0x1400088B0 (SmpInitializeKnownDllsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpFindModuleInModuleList(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  __int16 v4; // cx
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v2 = SmpKnownDllsList;
  String1 = 0LL;
  while ( (__int64 *)v2 != &SmpKnownDllsList )
  {
    String1 = *(UNICODE_STRING *)(v2 + 16);
    if ( *(_WORD *)(v2 + 16) )
    {
      v4 = **(_WORD **)(v2 + 24);
      if ( v4 == 95 || v4 == 42 )
      {
        ++String1.Buffer;
        String1.Length -= 2;
        String1.MaximumLength -= 2;
      }
    }
    if ( !RtlCompareUnicodeString(&String1, a2, 1u) )
      return v2;
    v2 = *(_QWORD *)v2;
  }
  return 0LL;
}
