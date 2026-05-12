/*
 * XREFs of StorPortSynchronizeAccess @ 0x140029780
 * Callers:
 *     sub_1401B77E0 @ 0x1401B77E0 (sub_1401B77E0.c)
 * Callees:
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall StorPortSynchronizeAccess(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v3; // rax
  KIRQL v4; // di
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  char v10; // si

  v3 = *(_QWORD *)(a1 - 16);
  v4 = 0;
  if ( !v3 )
    return 0;
  v8 = *(_DWORD **)v3;
  if ( !*(_QWORD *)v3 || (*(_BYTE *)(v3 + 248) & 1) != 0 || *v8 != 1094997074 )
    return 0;
  if ( v8[218] == 1 )
    v4 = sub_14001E1F0(*(_QWORD *)v3);
  v10 = a2(a1, a3);
  if ( v8[218] == 1 )
  {
    LOBYTE(v9) = v4;
    sub_140029830(v8, v9);
  }
  return v10;
}
