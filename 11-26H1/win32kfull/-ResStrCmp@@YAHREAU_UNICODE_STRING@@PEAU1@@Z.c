/*
 * XREFs of ?ResStrCmp@@YAHREAU_UNICODE_STRING@@PEAU1@@Z @ 0x14001E4A8
 * Callers:
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x14001E2C8 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResStrCmp(struct _UNICODE_STRING *volatile a1, struct _UNICODE_STRING *a2)
{
  unsigned int v3; // ebx
  UNICODE_STRING String; // [rsp+30h] [rbp-18h] BYREF
  ULONG Value; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  if ( a1->Length )
  {
    if ( a2->Length )
    {
      if ( RtlEqualUnicodeString(a1, a2, 1u) )
        return 1;
    }
    else if ( *a1->Buffer == 35 )
    {
      String = 0LL;
      Value = 0;
      String.Length = a1->Length - 2;
      String.MaximumLength = String.Length;
      String.Buffer = a1->Buffer + 1;
      RtlUnicodeStringToInteger(&String, 0xAu, &Value);
      return Value == LODWORD(a2->Buffer);
    }
    return v3;
  }
  if ( a1->Buffer != a2->Buffer )
    return v3;
  return 1LL;
}
