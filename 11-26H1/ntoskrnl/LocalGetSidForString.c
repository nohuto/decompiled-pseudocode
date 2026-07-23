/*
 * XREFs of LocalGetSidForString @ 0x140901030
 * Callers:
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x140B56E2C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     LookupSidInTable @ 0x140901140 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x140A6D254 (LocalpConvertStringSidToSid.c)
 *     RtlNtStatusToDosError @ 0x140A6F610 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall LocalGetSidForString(wchar_t *a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  ULONG v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  NTSTATUS v12; // eax
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v8 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a4 = 0;
  if ( *a1 && a1[1] )
  {
    *a3 = a1 + 2;
    v9 = LookupSidInTable(a1, 0LL, v13, 0, (__int64)&v14);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v10 = v14;
      if ( !v14 )
      {
        *a3 -= 4LL;
        v12 = LocalpConvertStringSidToSid(a1, a2, a3);
        if ( v12 >= 0 || (v8 = RtlNtStatusToDosError(v12)) == 0 )
        {
          if ( *a2 )
            *a4 = 1;
        }
        return v8;
      }
      *a4 = 1;
    }
    *a2 = v10;
    return v8;
  }
  return 1332LL;
}
