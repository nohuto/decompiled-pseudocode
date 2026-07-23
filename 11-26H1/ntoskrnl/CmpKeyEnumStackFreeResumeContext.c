/*
 * XREFs of CmpKeyEnumStackFreeResumeContext @ 0x140AE1930
 * Callers:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 */

void __fastcall CmpKeyEnumStackFreeResumeContext(PPRIVILEGE_SET Privileges, __int64 a2, char a3)
{
  ULONG *p_Attributes; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rcx

  if ( SLOWORD(Privileges->PrivilegeCount) >= 0 )
  {
    p_Attributes = &Privileges->Privilege[0].Attributes;
    v7 = (unsigned __int16)(LOWORD(Privileges->PrivilegeCount) + 1);
    do
    {
      v8 = *(_QWORD *)p_Attributes;
      if ( *(_QWORD *)p_Attributes )
      {
        if ( a3 )
          CmpDelayDerefKeyControlBlock(v8, a2);
        else
          CmpDereferenceKeyControlBlock(v8);
      }
      p_Attributes += 6;
      --v7;
    }
    while ( v7 );
  }
  CmSiFreeMemory(Privileges);
}
