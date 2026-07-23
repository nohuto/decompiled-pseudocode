/*
 * XREFs of PnprQueryReplaceFeatures @ 0x1405DE598
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprQueryReplaceFeatures(__int64 a1, PVOID *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rdx
  _OWORD v7[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+80h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  v9 = 0;
  v8 = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (v2 & 4) != 0 )
  {
    v4 = 8;
  }
  else
  {
    v4 = 0;
    if ( (v2 & 8) != 0 )
      v4 = 16;
  }
  result = v4 | 0x20;
  if ( (v2 & 0x10) == 0 )
    result = v4;
  if ( !(_DWORD)result )
  {
    if ( (int)PnpQueryInterface(*a2, 0LL, v7) >= 0 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(*((_QWORD *)&v7[0] + 1), &v9) >= 0 )
      {
        if ( (v9 & 1) != 0 )
        {
          v3 = 8;
        }
        else if ( (v9 & 2) != 0 )
        {
          v3 = 16;
        }
        if ( (v9 & 4) != 0 )
          v3 |= 0x20u;
      }
      guard_dispatch_icall_no_overrides(*((_QWORD *)&v7[0] + 1), v6);
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
