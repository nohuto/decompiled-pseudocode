/*
 * XREFs of ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801946E8
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801940EC (-Initialize@PenInterface@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x180194408 (-ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerProp.c)
 */

__int64 __fastcall PenInterface::QueryTransducerPropertiesFeatureReport(
        PenInterface *this,
        struct PenInterface::TransducerPropertiesReport *a2)
{
  size_t v5; // rsi
  void *v6; // rax
  char *v7; // rbx
  unsigned int LastError; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  const char *v11; // r9
  const struct std::nothrow_t *v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 147) )
    return 2147500034LL;
  v5 = *((unsigned __int16 *)this + 40);
  v6 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v6;
  v7 = (char *)v6;
  if ( !v6 )
  {
    LastError = -2147024882;
    v9 = 205LL;
    v10 = 2147942414LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
      (const char *)v10);
    goto LABEL_11;
  }
  memset_0(v6, 0, v5);
  *v7 = *((_BYTE *)this + 147);
  if ( HidD_GetFeature(*((HANDLE *)this + 7), v7, v5) )
  {
    v13 = PenInterface::ParseTransducerPropertiesReport(this, HidP_Feature, v7, v5, a2);
    LastError = v13;
    if ( v13 >= 0 )
    {
      LastError = 0;
      goto LABEL_11;
    }
    v10 = (unsigned int)v13;
    v9 = 222LL;
    goto LABEL_9;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0xD7,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
                v11);
LABEL_11:
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v15, v12);
  return LastError;
}
