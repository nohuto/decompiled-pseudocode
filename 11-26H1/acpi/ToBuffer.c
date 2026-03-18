/*
 * XREFs of ToBuffer @ 0x140016F00
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     ConvertToBuffer @ 0x1400150F8 (ConvertToBuffer.c)
 */

__int64 __fastcall ToBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToBuffer(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
