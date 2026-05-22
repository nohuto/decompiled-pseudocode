/*
 * XREFs of ?GetFeatureReport@CompliantHapticInterface@@AEAAJEPEAPEAD@Z @ 0x18019DE4C
 * Callers:
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace@AEAEV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@1@@Z @ 0x18019D58C (--$_Emplace@AEAEV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@@-$_Tree@V-$_Tmap_tr.c)
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@1@AEBG@Z @ 0x18019D960 (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D.c)
 *     ??$_Try_emplace@G$$V@?$map@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x18019DBD4 (--$_Try_emplace@G$$V@-$map@GV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@U-$less@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CompliantHapticInterface::GetFeatureReport(
        CompliantHapticInterface *this,
        unsigned __int8 a2,
        char **a3)
{
  unsigned __int16 v4; // r14
  __int64 *v6; // r15
  ULONG v8; // esi
  _BYTE *v9; // rax
  const char *v10; // r9
  const struct std::nothrow_t *v11; // rdx
  unsigned int LastError; // ebx
  _QWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int16 v16; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int8 v17; // [rsp+88h] [rbp+48h] BYREF
  void *v18; // [rsp+90h] [rbp+50h] BYREF

  v17 = a2;
  v4 = a2;
  *a3 = 0LL;
  if ( *(_QWORD *)this == -1LL || !*(_QWORD *)this )
  {
    LastError = -2147483629;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\complianthapticinterface.cpp",
      (const char *)0x80000013LL);
  }
  else
  {
    v6 = (__int64 *)((char *)this + 448);
    v16 = a2;
    std::_Tree<std::_Tmap_traits<unsigned short,std::unique_ptr<char [0]>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::unique_ptr<char [0]>>>,0>>::_Find_lower_bound<unsigned short>(
      (__int64 *)this + 56,
      v13,
      &v16);
    if ( !*(_BYTE *)(v14 + 25) && v4 >= *(_WORD *)(v14 + 32) && v14 != *v6 )
    {
      *a3 = *(char **)(v14 + 40);
      return 0LL;
    }
    v8 = *((unsigned __int16 *)this + 12);
    if ( !(_WORD)v8 )
      return 2147549183LL;
    v9 = operator new[](*((unsigned __int16 *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
    v18 = v9;
    *v9 = v4;
    if ( HidD_GetFeature(*(HANDLE *)this, v9, v8) )
    {
      std::_Tree<std::_Tmap_traits<unsigned short,std::unique_ptr<char [0]>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::unique_ptr<char [0]>>>,0>>::_Emplace<unsigned char &,std::unique_ptr<char [0]>>(
        v6,
        (__int64)v13,
        &v17,
        (__int64 *)&v18);
      v16 = v17;
      *a3 = *(char **)(*(_QWORD *)std::map<unsigned short,std::unique_ptr<char [0]>>::_Try_emplace<unsigned short,>(
                                    v6,
                                    (__int64)v13,
                                    &v16)
                     + 40LL);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x20F,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\compliant"
                         "hapticinterface.cpp",
                    v10);
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v18, v11);
  }
  return LastError;
}
