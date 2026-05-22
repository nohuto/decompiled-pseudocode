/*
 * XREFs of ?ExtractFeatureValue@PenHapticInterface@@AEAAJEGGGPEAH@Z @ 0x180192940
 * Callers:
 *     ?QueryHardwareProperties@PenHapticInterface@@AEAAJXZ @ 0x180192DB8 (-QueryHardwareProperties@PenHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180031330 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x18005408C (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Try_emplace@G$$V@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x1801923D8 (--$_Try_emplace@G$$V@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@s.c)
 *     ??$emplace@AEAEV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x1801924E8 (--$emplace@AEAEV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@@-$_Hash@V-$_Umap_tra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticInterface::ExtractFeatureValue(
        PenHapticInterface *this,
        unsigned __int8 a2,
        USHORT a3,
        USAGE a4,
        USAGE a5,
        int *a6)
{
  unsigned __int8 v7; // r14
  _QWORD *v9; // r12
  unsigned __int16 *v10; // rdi
  __int64 appended; // rax
  size_t v12; // rsi
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rbx
  unsigned int LastError; // ebx
  const struct std::nothrow_t *v16; // rdx
  const char *v17; // r9
  const struct std::nothrow_t *v19; // rdx
  ULONG ReportLength; // ebx
  __int64 v21; // rax
  LONG UsageValue; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned __int8 *v25; // [rsp+A0h] [rbp+40h] BYREF
  __int16 v26; // [rsp+A8h] [rbp+48h] BYREF
  USHORT v27; // [rsp+B0h] [rbp+50h]

  v27 = a3;
  LOBYTE(v26) = a2;
  v7 = a2;
  v9 = (_QWORD *)((char *)this + 88);
  LOWORD(v25) = a2;
  v10 = (unsigned __int16 *)((char *)this + 168);
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v25, 2uLL);
  if ( !std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
          v9,
          v23,
          &v25,
          appended)[1] )
  {
    v12 = *v10;
    v13 = (unsigned __int8 *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    v25 = v13;
    if ( !v13 )
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x79,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
        (const char *)0x8007000ELL);
LABEL_6:
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v25, v16);
      return LastError;
    }
    memset_0(v13, 0, v12);
    *v14 = v7;
    if ( !HidD_GetFeature(*((HANDLE *)this + 32), v14, v12) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x83,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhap"
                         "ticinterface.cpp",
                    v17);
      goto LABEL_6;
    }
    std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::emplace<unsigned char &,std::unique_ptr<unsigned char [0]>>(
      v9,
      (__int64)v23,
      (unsigned __int8 *)&v26,
      (__int64 *)&v25);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v25, v19);
    v7 = v26;
  }
  UsageValue = 0;
  ReportLength = *v10;
  v26 = v7;
  v21 = std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Try_emplace<unsigned short,>(
          v9,
          (__int64)v23,
          (unsigned __int8 *)&v26);
  if ( HidP_GetScaledUsageValue(
         HidP_Feature,
         a4,
         v27,
         a5,
         &UsageValue,
         *((PHIDP_PREPARSED_DATA *)this + 19),
         *(PCHAR *)(*(_QWORD *)v21 + 24LL),
         ReportLength) < 0 )
    return 2147500037LL;
  *a6 = UsageValue;
  return 0LL;
}
