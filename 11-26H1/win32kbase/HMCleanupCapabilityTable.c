/*
 * XREFs of HMCleanupCapabilityTable @ 0x14017E7DC
 * Callers:
 *     HMCleanupObjectSecurity @ 0x14017E734 (HMCleanupObjectSecurity.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

PVOID __fastcall HMCleanupCapabilityTable(PRTL_AVL_TABLE Table)
{
  struct _RTL_AVL_TABLE *v1; // rdi
  BOOLEAN v2; // dl
  PVOID result; // rax
  PVOID v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PACL Sacl; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int8 DaclPresent; // [rsp+60h] [rbp+30h] BYREF
  PACL Dacl; // [rsp+68h] [rbp+38h] BYREF

  v1 = Table;
  DaclPresent = 0;
  DaclDefaulted = 0;
  v2 = 1;
  Dacl = 0LL;
  Sacl = 0LL;
  while ( 1 )
  {
    result = RtlEnumerateGenericTableAvl(Table, v2);
    v4 = result;
    if ( !result )
      break;
    RtlGetDaclSecurityDescriptor(result, &DaclPresent, &Dacl, &DaclDefaulted);
    if ( Dacl )
      GreDeleteFastMutex((char *)Dacl, v5, v6, v7);
    RtlGetSaclSecurityDescriptor(v4, &DaclPresent, &Sacl, &DaclDefaulted);
    if ( Sacl )
      GreDeleteFastMutex((char *)Sacl, v8, v9, v10);
    RtlDeleteElementGenericTableAvl(v1, v4);
    v2 = 0;
    Table = v1;
  }
  return result;
}
