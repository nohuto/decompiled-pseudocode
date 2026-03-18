/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1400DAA50
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1400DB100 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1400DAB3C (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(
        wchar_t *SecurityDescriptorString,
        unsigned int SecurityDescriptorControlFlags,
        unsigned int *DiscretionaryAcl,
        _ACL **a4)
{
  wchar_t v4; // ax
  const wchar_t *v7; // rdx
  _WORD *v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rcx
  unsigned int AclForString; // ebx
  wchar_t *i; // rcx
  _ACL *Dacl; // [rsp+50h] [rbp+8h] BYREF
  wchar_t *End; // [rsp+60h] [rbp+18h] BYREF

  v4 = *SecurityDescriptorString;
  Dacl = 0LL;
  End = 0LL;
  v7 = SecurityDescriptorString;
  *a4 = 0LL;
  *DiscretionaryAcl = 0;
  while ( v4 == 32 )
    v4 = *++v7;
  if ( v4 == 68 )
  {
    v8 = v7 + 1;
    if ( *v8 == 58 )
    {
      v9 = 4104;
      if ( v8[1] != 80 )
        v9 = 8;
      v10 = 2LL;
      if ( v8[1] != 80 )
        v10 = 1LL;
      AclForString = SepSddlGetAclForString(&v8[v10], &Dacl, &End);
      if ( !AclForString )
      {
        for ( i = End; *i == 32; ++i )
          ;
        if ( !*i )
        {
          *a4 = Dacl;
          *DiscretionaryAcl = v9;
          return AclForString;
        }
        AclForString = -1073741811;
      }
      if ( Dacl )
        ExFreePoolWithTag(Dacl, 0);
      return AclForString;
    }
  }
  return 3221225485LL;
}
