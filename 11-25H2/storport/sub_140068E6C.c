/*
 * XREFs of sub_140068E6C @ 0x140068E6C
 * Callers:
 *     sub_14001DAE0 @ 0x14001DAE0 (sub_14001DAE0.c)
 *     sub_14001E2C0 @ 0x14001E2C0 (sub_14001E2C0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140068F10 @ 0x140068F10 (sub_140068F10.c)
 */

__int64 __fastcall sub_140068E6C(__int64 *a1, __int64 a2, ULONG a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  void *v8; // rax
  PMDL Mdl; // rax

  v3 = *a1;
  v7 = 0;
  sub_140068F10(a1);
  v8 = (void *)sub_1400143E0(64LL, a3, 842096978LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = v8;
  if ( !v8 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(a2 + 40) = a3;
  Mdl = IoAllocateMdl(v8, a3, 0, 0, 0LL);
  *(_QWORD *)(a2 + 8) = Mdl;
  if ( !Mdl )
  {
    sub_140068F10(a1);
    return (unsigned int)-1073741801;
  }
  return v7;
}
