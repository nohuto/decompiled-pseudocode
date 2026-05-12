/*
 * XREFs of sub_140068F10 @ 0x140068F10
 * Callers:
 *     sub_14001DAE0 @ 0x14001DAE0 (sub_14001DAE0.c)
 *     sub_14001E2C0 @ 0x14001E2C0 (sub_14001E2C0.c)
 *     sub_140068E6C @ 0x140068E6C (sub_140068E6C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140068F10(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v3 = *(struct _MDL **)(a1 + 16);
  if ( v3 )
  {
    IoFreeMdl(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
