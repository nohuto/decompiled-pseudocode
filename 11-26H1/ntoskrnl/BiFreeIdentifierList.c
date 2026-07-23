/*
 * XREFs of BiFreeIdentifierList @ 0x1409A38EC
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x14089A258 (BiExportStoreAlterationsToEfi.c)
 *     BiBindEfiNamespaceObjects @ 0x1409A4844 (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall BiFreeIdentifierList(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  void *v5; // rcx

  v1 = (_QWORD *)*a1;
  while ( v1 != a1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    if ( (_QWORD *)v1[1] != v3 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
      __fastfail(3u);
    *v4 = v1;
    v1[1] = v4;
    if ( (v3[6] & 1) != 0 )
    {
      v5 = (void *)v3[5];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x4B444342u);
    }
    ExFreePoolWithTag(v3, 0x4B444342u);
  }
}
