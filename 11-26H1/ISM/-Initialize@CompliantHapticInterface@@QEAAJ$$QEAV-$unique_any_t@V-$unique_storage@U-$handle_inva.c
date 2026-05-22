/*
 * XREFs of ?Initialize@CompliantHapticInterface@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x18019DFE8
 * Callers:
 *     ?Initialize@TouchpadHapticDevice@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180189444 (-Initialize@TouchpadHapticDevice@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_invalid_.c)
 *     ?Initialize@MouseHapticDevice@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x18018CB9C (-Initialize@MouseHapticDevice@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_invalid_res.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800812E8 (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$_Func_class@X_NPEBG@std@@QEBAX_NPEBG@Z @ 0x18019DE04 (--R-$_Func_class@X_NPEBG@std@@QEBAX_NPEBG@Z.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 *     ?ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z @ 0x18019EE34 (-ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z.c)
 *     ?replace@?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x18019F1C0 (-replace@-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreeP.c)
 */

__int64 __fastcall CompliantHapticInterface::Initialize(void **this, void **a2, CompliantHapticInterface *a3)
{
  int HapticsSupport; // eax
  unsigned int v7; // edi
  char v9; // di
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this != a2 )
  {
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this,
      *a2);
    *a2 = (void *)-1LL;
  }
  if ( this + 1 != (void **)a3 )
    wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::replace(
      this + 1,
      a3);
  HapticsSupport = CompliantHapticInterface::QueryHapticsSupport((CompliantHapticInterface *)this);
  v7 = HapticsSupport;
  if ( HapticsSupport < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\complianthapticinterface.cpp",
      (const char *)(unsigned int)HapticsSupport);
    return v7;
  }
  v9 = 0;
  if ( !*((_BYTE *)this + 152) )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError(
      (CompliantHapticInterface *)this,
      L"Waveform capability is required");
  }
  if ( !*((_BYTE *)this + 228) )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError(
      (CompliantHapticInterface *)this,
      L"Duration capability is required");
  }
  if ( !*((_BYTE *)this + 336) )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError((CompliantHapticInterface *)this, L"Manual trigger is required");
  }
  if ( !this[30] )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError(
      (CompliantHapticInterface *)this,
      L"At least one waveform is required");
  }
  if ( !*((_BYTE *)this + 440) && *((_BYTE *)this + 432) )
  {
    if ( *((_BYTE *)this + 441) )
    {
      CompliantHapticInterface::ReportValidationError((CompliantHapticInterface *)this, L"Unexpected autotrigger");
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\complianthapticinterface.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    if ( this[65] )
      std::_Func_class<void,bool,unsigned short const *>::operator()(
        (__int64)(this + 58),
        0,
        (__int64)L"Unexpected autotrigger");
  }
  if ( v9 )
    goto LABEL_22;
  return 0LL;
}
