/*
 * XREFs of ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x14019DCF0
 * Callers:
 *     ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140126640 (-UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z.c)
 *     ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x140169480 (-UserSetUserObjectCapability@@YAHPEAXK0H@Z.c)
 * Callees:
 *     ?FindAceIndex@@YAHPEAU_ACL@@EEKPEAXPEAK@Z @ 0x1401AF38C (-FindAceIndex@@YAHPEAU_ACL@@EEKPEAXPEAK@Z.c)
 */

_BOOL8 __fastcall RemoveCapabilityFromDescriptor(void *a1, unsigned int a2, void *a3)
{
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  NTSTATUS Ace; // r8d
  PACL v8; // rcx
  __int16 v9; // bx
  ULONG v10; // edx
  ULONG v11; // edi
  unsigned __int8 DaclDefaulted[8]; // [rsp+30h] [rbp-20h] BYREF
  ULONG AceIndex[2]; // [rsp+38h] [rbp-18h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 DaclPresent; // [rsp+78h] [rbp+28h] BYREF

  AceIndex[0] = 0;
  Dacl = 0LL;
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  if ( RtlGetDaclSecurityDescriptor(a1, &DaclPresent, &Dacl, DaclDefaulted) < 0
    || !DaclPresent
    || !Dacl
    || !(unsigned int)FindAceIndex(Dacl, v5, v6, a2, a3, AceIndex) )
  {
    return 0LL;
  }
  Ace = RtlDeleteAce(Dacl, AceIndex[0]);
  if ( Ace >= 0 )
  {
    v8 = Dacl;
    v9 = 8;
    v10 = 0;
    if ( Dacl->AceCount )
    {
      v11 = 0;
      while ( 1 )
      {
        *(_QWORD *)AceIndex = 0LL;
        Ace = RtlGetAce(v8, v10, (PVOID *)AceIndex);
        if ( Ace < 0 )
          break;
        v10 = v11 + 1;
        v8 = Dacl;
        v11 = v10;
        v9 += *(_WORD *)(*(_QWORD *)AceIndex + 2LL);
        if ( v10 >= Dacl->AceCount )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v8->AclSize = v9;
    }
  }
  return Ace >= 0;
}
