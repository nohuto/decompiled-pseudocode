/*
 * XREFs of PipDeleteBindingId @ 0x1407A2984
 * Callers:
 *     IoResolveDependency @ 0x1404EF2D0 (IoResolveDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     PipFreeBindingId @ 0x140B33E60 (PipFreeBindingId.c)
 */

__int64 __fastcall PipDeleteBindingId(__int64 a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *v2; // rsi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // edi
  BOOLEAN v6; // al
  UNICODE_STRING **v7; // rcx
  void **Buffer; // rax

  v2 = (UNICODE_STRING *)(a1 + 56);
  v4 = *(UNICODE_STRING **)(a1 + 56);
  v5 = -1073741275;
  while ( v4 != v2 )
  {
    v6 = RtlEqualUnicodeString(v4 + 1, a2, 0);
    v7 = *(UNICODE_STRING ***)&v4->Length;
    if ( v6 )
    {
      if ( v7[1] != v4 || (Buffer = (void **)v4->Buffer, *Buffer != v4) )
        __fastfail(3u);
      *Buffer = v7;
      v7[1] = (UNICODE_STRING *)Buffer;
      PipFreeBindingId(v4);
      return 0;
    }
    v4 = *(UNICODE_STRING **)&v4->Length;
  }
  return v5;
}
