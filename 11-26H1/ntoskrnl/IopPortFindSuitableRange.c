/*
 * XREFs of IopPortFindSuitableRange @ 0x1407A9850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFindRange @ 0x140AAEE80 (RtlFindRange.c)
 */

char __fastcall IopPortFindSuitableRange(_QWORD *a1, _QWORD *a2)
{
  char v4; // dl
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11

  v4 = 0;
  v5 = a2[5];
  v6 = *(_QWORD *)(v5 + 16);
  if ( !v6 )
  {
    a2[1] = *a2;
    return 1;
  }
  v8 = a2[4];
  v9 = *(_DWORD *)(v8 + 40);
  if ( !v9 || v9 == 2 || (*(_DWORD *)(v8 + 44) & 1) != 0 )
    v4 = 1;
  v10 = a2[3];
  v11 = a2[2];
  if ( v11 <= v10
    && ((int)RtlFindRange(
               a1[6],
               v11,
               v10,
               v6,
               *(_QWORD *)(v5 + 24),
               *(_BYTE *)(v5 + 36) & 1,
               v4,
               a1[41],
               a1[42],
               (__int64)a2) >= 0
     || (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)a1, (__int64)a2)) )
  {
    a2[1] = *a2 - 1LL + *(_QWORD *)(a2[5] + 16LL);
    return 1;
  }
  return 0;
}
