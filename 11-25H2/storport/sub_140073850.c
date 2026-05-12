/*
 * XREFs of sub_140073850 @ 0x140073850
 * Callers:
 *     <none>
 * Callees:
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140073850(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 v2; // rax

  v1 = *(_BYTE **)(a1 - 16);
  if ( (v1[248] & 1) == 0 )
  {
    v2 = sub_140039148(v1);
    if ( v2 )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(v2 + 880) + 8LL) + 96LL))();
  }
}
