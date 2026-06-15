/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@2@_K1@Z @ 0x18005E700
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18007CD1C (--$_Emplace_reallocate@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConne.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180013CA8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??1?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@QEAA@XZ @ 0x18005E7A8 (--1-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConnectorFormatCharacteris.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall std::vector<std::unique_ptr<CConnectorFormatCharacteristics>>::_Change_array(
        void **a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  char *v10; // rcx
  signed __int64 v11; // rdx
  const struct std::nothrow_t *v12; // rdx
  char *result; // rax
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = (char *)*a1;
  if ( *a1 )
  {
    v9 = (char *)a1[1];
    while ( v4 != v9 )
    {
      std::unique_ptr<CConnectorFormatCharacteristics>::~unique_ptr<CConnectorFormatCharacteristics>(v4);
      v4 += 8;
    }
    v10 = (char *)*a1;
    v11 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    v14 = *a1;
    v12 = (const struct std::nothrow_t *)(v11 & 0xFFFFFFFFFFFFFFF8uLL);
    v15 = (unsigned __int64)v12;
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v14, &v15);
      v10 = (char *)v14;
      v12 = (const struct std::nothrow_t *)v15;
    }
    operator delete(v10, v12);
  }
  *a1 = a2;
  a1[1] = &a2[8 * a3];
  result = &a2[8 * a4];
  a1[2] = result;
  return result;
}
