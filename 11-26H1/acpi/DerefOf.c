/*
 * XREFs of DerefOf @ 0x140011F60
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     GetBaseObject @ 0x140037400 (GetBaseObject.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int16 v6; // ax
  __int64 BaseObject; // rax

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "R");
  if ( !(_DWORD)result )
  {
    i = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(i + 2);
    if ( v6 == 128 )
    {
      BaseObject = GetBaseObject(*(_QWORD *)(i + 16));
      i = BaseObject + 64;
      DereferenceObjectEx(BaseObject);
    }
    else
    {
      while ( v6 == 129 )
      {
        for ( i = *(_QWORD *)(i + 16); ; i = *(_QWORD *)(i + 16) + 64LL )
        {
          v6 = *(_WORD *)(i + 2);
          if ( v6 != 128 )
            break;
        }
      }
    }
    return ReadObject(a1, i, *(_QWORD *)(a2 + 88));
  }
  return result;
}
