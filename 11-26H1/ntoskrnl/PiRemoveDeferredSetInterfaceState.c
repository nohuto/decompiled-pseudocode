/*
 * XREFs of PiRemoveDeferredSetInterfaceState @ 0x140B3BB84
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiRemoveDeferredSetInterfaceState(UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *v2; // rsi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // edi
  BOOLEAN v7; // al
  UNICODE_STRING **v8; // rcx
  void **Buffer; // rax

  v2 = a1 + 38;
  v4 = *(UNICODE_STRING **)&a1[38].Length;
  v5 = -1073741823;
  while ( v4 != v2 )
  {
    v7 = RtlEqualUnicodeString(v4 + 1, a2, 1u);
    v8 = *(UNICODE_STRING ***)&v4->Length;
    if ( v7 )
    {
      if ( v8[1] != v4 || (Buffer = (void **)v4->Buffer, *Buffer != v4) )
        __fastfail(3u);
      *Buffer = v8;
      v8[1] = (UNICODE_STRING *)Buffer;
      ExFreePoolWithTag(v4[1].Buffer, 0);
      ExFreePoolWithTag(v4, 0);
      return 0;
    }
    v4 = *(UNICODE_STRING **)&v4->Length;
  }
  return v5;
}
