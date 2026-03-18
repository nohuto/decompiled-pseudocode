/*
 * XREFs of ?ResStrCmp@@YAHREAU_UNICODE_STRING@@PEAU1@@Z @ 0x14028C5A4
 * Callers:
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x140160DF4 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResStrCmp(struct _UNICODE_STRING *volatile a1, struct _UNICODE_STRING *a2)
{
  unsigned int v4; // [rsp+20h] [rbp-28h]
  UNICODE_STRING String; // [rsp+30h] [rbp-18h] BYREF
  ULONG Value; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( a1->Length )
  {
    if ( a2->Length )
    {
      return RtlEqualUnicodeString(a1, a2, 1u) != 0;
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
  }
  else if ( a1->Buffer == a2->Buffer )
  {
    return 1LL;
  }
  return v4;
}
