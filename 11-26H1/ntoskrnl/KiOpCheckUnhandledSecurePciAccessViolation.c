/*
 * XREFs of KiOpCheckUnhandledSecurePciAccessViolation @ 0x1403D5E8C
 * Callers:
 *     KiPreprocessFault @ 0x1403D5010 (KiPreprocessFault.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiOpCheckUnhandledSecurePciAccessViolation(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rcx
  _WORD v6[8]; // [rsp+30h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  v6[0] = 0;
  if ( v2 != -1 && off_140E00CC0[0] )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v2, v6) )
    {
      v5 = (unsigned __int64)v6[0] << 8;
      *(_DWORD *)a2 = 268435465;
      *(_DWORD *)(a2 + 24) = 4;
      *(_QWORD *)(a2 + 32) = *(unsigned __int8 *)(a1 + 56);
      *(_QWORD *)(a2 + 48) = v2 & 0xFFF;
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 40) = v5 << 8;
    }
  }
}
