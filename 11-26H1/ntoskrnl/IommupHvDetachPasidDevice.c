/*
 * XREFs of IommupHvDetachPasidDevice @ 0x1405A07C8
 * Callers:
 *     IommupDeviceDisablePasidTaggedDma @ 0x140785058 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvDetachPasidDevice(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _QWORD *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 265) == 0;
  v3 = (_QWORD *)(a1 + 32);
  v9 = 0LL;
  if ( !v2 )
  {
    guard_dispatch_icall_no_overrides(*v3, a2);
    guard_dispatch_icall_no_overrides(*v3, 33LL);
  }
  if ( !*(_BYTE *)(a1 + 408) || HalpIommuSecurityPolicy == 1 )
  {
    guard_dispatch_icall_no_overrides(*v3, a2);
  }
  else
  {
    v5 = *v3;
    LODWORD(v9) = -1;
    BYTE4(v9) = 0;
    guard_dispatch_icall_no_overrides(v5, &v9);
  }
  result = guard_dispatch_icall_no_overrides(*v3, v6);
  if ( *(_BYTE *)(a1 + 265) )
  {
    v9 = *(unsigned int *)(a1 + 268) | 0x100000000LL;
    result = guard_dispatch_icall_no_overrides(&v9, v8);
  }
  *(_DWORD *)(a1 + 268) = -1;
  return result;
}
