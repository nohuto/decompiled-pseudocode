/*
 * XREFs of sub_14017AF14 @ 0x14017AF14
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14017AF14(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  void (*v4)(void); // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        v4 = *(void (**)(void))(v3 + 8);
        if ( v4 )
        {
          v4();
          *(_OWORD *)a1 = 0LL;
          *((_OWORD *)a1 + 1) = 0LL;
        }
      }
    }
  }
}
