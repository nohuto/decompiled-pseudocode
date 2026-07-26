/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x140150B80
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x140151230 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x140150C6C (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(_WORD *a1, __int64 a2, int *a3, PVOID *a4)
{
  __int16 v4; // ax
  _WORD *v7; // rdx
  _WORD *v8; // rdx
  int v9; // ebp
  __int64 v10; // rcx
  unsigned int AclForString; // ebx
  _WORD *i; // rcx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF
  _WORD *v15; // [rsp+60h] [rbp+18h]

  v4 = *a1;
  P = 0LL;
  v15 = 0LL;
  v7 = a1;
  *a4 = 0LL;
  *a3 = 0;
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
      AclForString = SepSddlGetAclForString(&v8[v10], (int)&P);
      if ( !AclForString )
      {
        for ( i = v15; *i == 32; ++i )
          ;
        if ( !*i )
        {
          *a4 = P;
          *a3 = v9;
          return AclForString;
        }
        AclForString = -1073741811;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      return AclForString;
    }
  }
  return 3221225485LL;
}
