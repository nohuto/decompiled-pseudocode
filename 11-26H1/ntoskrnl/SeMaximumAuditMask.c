/*
 * XREFs of SeMaximumAuditMask @ 0x14049F4D4
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB75F8 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 */

unsigned __int64 __fastcall SeMaximumAuditMask(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  char v10; // al
  int v11; // esi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  *a4 = 0;
  if ( a1 )
  {
    result = *(unsigned __int16 *)(a1 + 4);
    if ( (_WORD)result )
    {
      v8 = a1 + 8;
      v9 = *(unsigned __int16 *)(a1 + 4);
      do
      {
        v10 = *(_BYTE *)(v8 + 1);
        if ( (v10 & 8) == 0 && (*(_BYTE *)v8 == 2 || *(_BYTE *)v8 == 13) )
        {
          v11 = *(_DWORD *)(v8 + 4) & a2;
          if ( v11 && (v10 & 0x40) != 0 && SepSidInToken(a3, 0LL, (unsigned __int8 *)(v8 + 8), 1, 0, 0) )
            *a4 |= v11;
        }
        result = *(unsigned __int16 *)(v8 + 2);
        v8 += result;
        --v9;
      }
      while ( v9 );
    }
  }
  return result;
}
