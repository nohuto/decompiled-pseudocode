/*
 * XREFs of ObpAssignSecurity @ 0x140A52040
 * Callers:
 *     ObAssignSecurity @ 0x140A52010 (ObAssignSecurity.c)
 * Callees:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14044DBF0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x14045C290 (SeAssignSecurityEx2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpAssignSecurity(__int64 a1, __int64 a2, __int64 a3, POBJECT_TYPE a4, int a5, char a6)
{
  int v9; // r15d
  __int64 v10; // rdx
  __int64 result; // rax
  int v13; // edi
  __int64 v14; // rdx
  int v15; // edi
  int v16; // ebx
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h] BYREF
  PVOID v19; // [rsp+60h] [rbp-38h] BYREF
  int v20; // [rsp+A0h] [rbp+8h] BYREF

  v18 = 0LL;
  v20 = 0;
  v19 = 0LL;
  v9 = a2;
  P = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  LODWORD(v18) = 8;
  result = SeComputeAutoInheritByObjectTypeEx((__int64)a4, v10, a2, &v20, &v18);
  if ( (int)result >= 0 )
  {
    v13 = a5 | v20;
    if ( !a6
      || (result = SeAssignSecurityEx2(
                     0,
                     *(_QWORD *)(a1 + 64),
                     (int)&P,
                     0LL,
                     a4 == ObpDirectoryObjectType,
                     0,
                     0LL,
                     a1 + 32,
                     (__int64)&a4->TypeInfo.GenericMapping),
          (int)result >= 0) )
    {
      LODWORD(v14) = (_DWORD)P;
      if ( !P )
        v14 = *(_QWORD *)(a1 + 64);
      v15 = SeAssignSecurityEx2(
              v9,
              v14,
              (int)&v19,
              0LL,
              a4 == ObpDirectoryObjectType,
              v13,
              &v18,
              a1 + 32,
              (__int64)&a4->TypeInfo.GenericMapping);
      if ( v15 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        return (unsigned int)v15;
      }
      else
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        v16 = guard_dispatch_icall_no_overrides(a3, 3LL);
        if ( v16 < 0 )
        {
          if ( v19 )
            ExFreePoolWithTag(v19, 0);
        }
        return (unsigned int)v16;
      }
    }
  }
  return result;
}
