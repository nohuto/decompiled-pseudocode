/*
 * XREFs of ?QueryHardwareProperties@PenHapticInterface@@AEAAJXZ @ 0x180192DB8
 * Callers:
 *     ?Initialize@PenHapticInterface@@QEAAJXZ @ 0x180192CB8 (-Initialize@PenHapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DECDC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x1801922C8 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?ExtractFeatureValue@PenHapticInterface@@AEAAJEGGGPEAH@Z @ 0x180192940 (-ExtractFeatureValue@PenHapticInterface@@AEAAJEGGGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticInterface::QueryHardwareProperties(PenHapticInterface *this)
{
  int v2; // r12d
  int v3; // edi
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  NTSTATUS SpecificValueCaps; // eax
  const struct std::nothrow_t *v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  unsigned int v8; // ebx
  USHORT v9; // r15
  USAGE UsageMin; // bx
  struct _HIDP_VALUE_CAPS *v11; // rax
  __int16 PhysicalMin; // bx
  int PhysicalMin_low; // ebx
  USAGE v14; // cx
  USAGE v15; // ax
  USAGE v16; // bx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rax
  __int64 v20; // rdx
  const char *ValueCapsLength; // [rsp+28h] [rbp-71h]
  int v23; // [rsp+40h] [rbp-59h] BYREF
  struct _HIDP_VALUE_CAPS *v24; // [rsp+48h] [rbp-51h] BYREF
  char v25[16]; // [rsp+50h] [rbp-49h] BYREF
  char v26[16]; // [rsp+60h] [rbp-39h] BYREF
  char v27[16]; // [rsp+70h] [rbp-29h] BYREF
  char v28[16]; // [rsp+80h] [rbp-19h] BYREF
  char v29[16]; // [rsp+90h] [rbp-9h] BYREF
  char v30[80]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  USAGE v32; // [rsp+100h] [rbp+67h] BYREF
  USAGE v33; // [rsp+108h] [rbp+6Fh] BYREF
  USHORT v34; // [rsp+110h] [rbp+77h] BYREF
  int v35; // [rsp+118h] [rbp+7Fh]

  v2 = 0;
  v3 = 0;
  v35 = 0;
  v34 = *((_WORD *)this + 110);
  ValueCaps = (struct _HIDP_VALUE_CAPS *)operator new[](saturated_mul(v34, 0x48uLL));
  v24 = ValueCaps;
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        0xAu,
                        *((_WORD *)this + 8),
                        0,
                        ValueCaps,
                        &v34,
                        *((PHIDP_PREPARSED_DATA *)this + 19));
  if ( SpecificValueCaps < 0 )
  {
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xA8,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
           (const char *)(unsigned int)SpecificValueCaps);
LABEL_31:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v24, v7);
    return v8;
  }
  v9 = 0;
  v33 = 0;
  if ( !v34 )
  {
LABEL_29:
    v19 = "A minimum of one waveform is requried.";
    v20 = 227LL;
LABEL_30:
    v8 = -2147418113;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
      (const char *)0x8000FFFFLL,
      (int)v19,
      ValueCapsLength);
    goto LABEL_31;
  }
  do
  {
    UsageMin = ValueCaps[v9].Range.UsageMin;
    if ( ValueCaps[v9].IsRange )
    {
      v32 = ValueCaps[v9].Range.UsageMin;
      if ( UsageMin > ValueCaps[v9].Range.UsageMax )
        goto LABEL_24;
      v14 = UsageMin;
      v15 = UsageMin;
      while ( ValueCaps[v9].LinkUsagePage == 14 )
      {
        if ( ValueCaps[v9].LinkUsage != 16 )
          goto LABEL_18;
        v23 = 0;
        if ( (int)PenHapticInterface::ExtractFeatureValue(
                    this,
                    ValueCaps[v9].ReportID,
                    ValueCaps[v9].LinkCollection,
                    ValueCaps[v9].UsagePage,
                    UsageMin,
                    &v23) >= 0 )
        {
          v16 = v32;
          *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                  (_QWORD *)this + 3,
                                  (__int64)v28,
                                  (unsigned __int8 *)&v32)
                   + 20LL) = v16;
          v17 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                  (_QWORD *)this + 3,
                  (__int64)v29,
                  (unsigned __int8 *)&v32);
          *(_WORD *)(*(_QWORD *)v17 + 22LL) = v23;
          ++v2;
          v3 = v35;
        }
LABEL_22:
        UsageMin = v32 + 1;
        v32 = UsageMin;
        v14 = UsageMin;
        v15 = UsageMin;
        if ( UsageMin > ValueCaps[v9].Range.UsageMax )
        {
          v9 = v33;
          goto LABEL_24;
        }
      }
      v15 = v14;
LABEL_18:
      if ( ValueCaps[v9].LinkUsagePage == 14 && ValueCaps[v9].LinkUsage == 17 )
      {
        v23 = 0;
        if ( (int)PenHapticInterface::ExtractFeatureValue(
                    this,
                    ValueCaps[v9].ReportID,
                    ValueCaps[v9].LinkCollection,
                    ValueCaps[v9].UsagePage,
                    v15,
                    &v23) >= 0 )
        {
          v18 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                  (_QWORD *)this + 3,
                  (__int64)v30,
                  (unsigned __int8 *)&v32);
          *(_DWORD *)(*(_QWORD *)v18 + 24LL) = (unsigned __int16)v23;
          v35 = ++v3;
        }
      }
      goto LABEL_22;
    }
    v33 = ValueCaps[v9].Range.UsageMin;
    v11 = &ValueCaps[v9];
    if ( v11->LinkUsagePage == 14 )
    {
      if ( v11->LinkUsage == 16 )
      {
        *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                (_QWORD *)this + 3,
                                (__int64)v25,
                                (unsigned __int8 *)&v33)
                 + 20LL) = UsageMin;
        PhysicalMin = ValueCaps[v9].PhysicalMin;
        *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                (_QWORD *)this + 3,
                                (__int64)v26,
                                (unsigned __int8 *)&v33)
                 + 22LL) = PhysicalMin;
        ++v2;
      }
      else if ( ValueCaps[v9].LinkUsagePage == 14 && v11->LinkUsage == 17 )
      {
        PhysicalMin_low = LOWORD(ValueCaps[v9].PhysicalMin);
        *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                 (_QWORD *)this + 3,
                                 (__int64)v27,
                                 (unsigned __int8 *)&v33)
                  + 24LL) = PhysicalMin_low;
        v35 = v3 + 1;
      }
    }
LABEL_24:
    v33 = ++v9;
    v3 = v35;
  }
  while ( v9 < v34 );
  if ( !v2 )
    goto LABEL_29;
  if ( v2 != v35 )
  {
    v19 = "The waveform list and duration list are not equal size.";
    v20 = 229LL;
    goto LABEL_30;
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v24, v6);
  return 0LL;
}
