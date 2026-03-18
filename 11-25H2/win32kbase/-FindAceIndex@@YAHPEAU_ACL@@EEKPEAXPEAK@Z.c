/*
 * XREFs of ?FindAceIndex@@YAHPEAU_ACL@@EEKPEAXPEAK@Z @ 0x1401AF38C
 * Callers:
 *     ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x14019DCF0 (-RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindAceIndex(PACL Acl, __int64 a2, __int64 a3, int a4, PSID Sid1, unsigned int *a6)
{
  unsigned int *v6; // r14
  unsigned int v7; // ebx
  ULONG v10; // edi
  _DWORD *v11; // rsi
  PVOID Ace; // [rsp+40h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  Ace = 0LL;
  v10 = 0;
  *a6 = 0;
  while ( v10 < Acl->AceCount && RtlGetAce(Acl, v10, &Ace) >= 0 )
  {
    v11 = Ace;
    if ( !*(_BYTE *)Ace && !*((_BYTE *)Ace + 1) && RtlEqualSid(Sid1, (char *)Ace + 8) && a4 == v11[1] )
    {
      *v6 = v10;
      return 1;
    }
    ++v10;
  }
  return v7;
}
