/*
 * XREFs of sub_1400560B0 @ 0x1400560B0
 * Callers:
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1400560B0(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  void (__fastcall *v4)(__int64); // rax

  v2 = *(_QWORD *)(a1 + 240);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 232);
    if ( v3 )
    {
      if ( !a2 && (*(_BYTE *)(a1 + 248) & 8) != 0 )
      {
        v4 = *(void (__fastcall **)(__int64))(v3 + 152);
        if ( v4 )
          v4(v2 + 16);
      }
    }
  }
}
