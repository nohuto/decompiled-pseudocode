/*
 * XREFs of Divide @ 0x140015A70
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     PushPost @ 0x140015C84 (PushPost.c)
 */

__int64 __fastcall Divide(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = *(_QWORD *)(a2 + 80);
  v7 = 0LL;
  result = ValidateArgTypes(a1, v3, 0, "II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135, (__int64)&v6);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 135, (__int64)&v7);
      if ( !(_DWORD)result )
        return PushPost(a1, (unsigned int)ProcessDivide, a2, 0, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
