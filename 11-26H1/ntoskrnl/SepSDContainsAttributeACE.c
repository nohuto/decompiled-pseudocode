/*
 * XREFs of SepSDContainsAttributeACE @ 0x140B5CE18
 * Callers:
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 */

bool __fastcall SepSDContainsAttributeACE(__int64 a1)
{
  char v1; // bl
  bool v2; // zf
  __int16 v3; // ax
  __int64 v4; // rax
  ACL *v5; // rax
  ULONG Index; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_BYTE *)a1 == 1;
  Index = 0;
  if ( v2 )
  {
    v3 = *(_WORD *)(a1 + 2);
    if ( (v3 & 0x10) != 0 )
    {
      if ( v3 >= 0 )
      {
        v5 = *(ACL **)(a1 + 24);
      }
      else
      {
        v4 = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)v4 )
          v5 = (ACL *)(a1 + v4);
        else
          v5 = 0LL;
      }
      return RtlFindAceByType(v5, 0x12u, &Index) != 0LL;
    }
  }
  return v1;
}
