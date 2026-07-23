/*
 * XREFs of RtlpHpLfhContextMetadataAllocate @ 0x140348E44
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x140348DE8 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140513284 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhContextUnlockExtension @ 0x140532FB0 (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhContextLockExtension @ 0x14053398C (RtlpHpLfhContextLockExtension.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataAllocate(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  bool v5; // zf
  __int64 v6; // rbx
  char v8; // al
  __int64 v9; // rdx
  _DWORD v10[6]; // [rsp+20h] [rbp-18h]

  v3 = (int)a2;
  v10[0] = 256;
  v10[1] = 256;
  v5 = a1[(int)a2 + 17] == 0LL;
  v10[2] = ((((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) + 1) << 6;
  if ( v5 )
    return guard_dispatch_icall_no_overrides(*a1, (unsigned int)v10[v3], a3);
  v8 = RtlpHpLfhContextLockExtension(a1, a2);
  v6 = a1[v3 + 17];
  LOBYTE(v9) = v8;
  if ( v6 )
    a1[v3 + 17] = *(_QWORD *)v6;
  if ( (_DWORD)v3 == 1 && v6 )
  {
    if ( (_QWORD *)v6 == a1 + 24 )
      __int2c();
    if ( *(_BYTE *)(v6 + 250) != 1 )
      __int2c();
    *(_BYTE *)(v6 + 250) = 0;
  }
  RtlpHpLfhContextUnlockExtension(a1, v9);
  if ( !v6 )
    return guard_dispatch_icall_no_overrides(*a1, (unsigned int)v10[v3], a3);
  return v6;
}
