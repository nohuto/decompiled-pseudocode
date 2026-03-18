/*
 * XREFs of SepSDContainsAttributeACE @ 0x140B59F30
 * Callers:
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404330E0 (RtlFindAceByType.c)
 */

bool __fastcall SepSDContainsAttributeACE(__int64 a1)
{
  char v1; // bl
  bool v2; // zf
  __int16 v3; // ax
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_BYTE *)a1 == 1;
  v7 = 0;
  if ( v2 )
  {
    v3 = *(_WORD *)(a1 + 2);
    if ( (v3 & 0x10) != 0 )
    {
      if ( v3 >= 0 )
      {
        v5 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v4 = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)v4 )
          v5 = a1 + v4;
        else
          v5 = 0LL;
      }
      return RtlFindAceByType(v5, 18, &v7) != 0LL;
    }
  }
  return v1;
}
