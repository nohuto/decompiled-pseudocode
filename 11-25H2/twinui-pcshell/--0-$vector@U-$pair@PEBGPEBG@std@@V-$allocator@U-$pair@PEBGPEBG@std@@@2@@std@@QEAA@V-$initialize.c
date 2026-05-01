/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x1803E6C14
 * Callers:
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E7A7C (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E7BA0 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@@std@@QEAA@XZ @ 0x18031D230 (--1-$_Tidy_guard@V-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@@st.c)
 *     ?_Buy_nonzero@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K@Z @ 0x18031F240 (-_Buy_nonzero@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

void **__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  const void *v3; // r14
  __int64 v5; // rbp
  signed __int64 v6; // rbp
  char *v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v3 = *(const void **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  *a1 = 0LL;
  v6 = v5 - (_QWORD)v3;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 >> 4 )
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy_nonzero(a1, v6 >> 4);
    v7 = (char *)*a1;
    memmove_0(*a1, v3, v6);
    v9 = 0LL;
    a1[1] = &v7[16 * (v6 >> 4)];
    std::_Tidy_guard<std::vector<std::pair<unsigned short const *,unsigned short const *>>>::~_Tidy_guard<std::vector<std::pair<unsigned short const *,unsigned short const *>>>(&v9);
  }
  return a1;
}
