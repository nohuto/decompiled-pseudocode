/*
 * XREFs of ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x18002FE90
 * Callers:
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180067F64 (-GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180061AAC (--4-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVariant.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180063028 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18013C138 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ReadFormatProperty(__int64 a1, __int64 a2, PROPVARIANT *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-38h]
  char *v9; // [rsp+28h] [rbp-30h]
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  memset(&pvar, 0, sizeof(pvar));
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, struct tagPROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, a2, &pvar);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( pvar.vt )
    {
      if ( pvar.vt != 65 )
      {
        LODWORD(v9) = pvar.vt;
        v6 = wil::details::in1diag3::Return_Win32Msg(
               retaddr,
               (void *)0x1AE5,
               (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
               (const char *)0xD,
               (unsigned int)"unexpected vartype 0x%x",
               v9);
LABEL_11:
        v5 = v6;
        goto LABEL_9;
      }
      if ( !(unsigned int)IsValidWfxBlob(&pvar) )
      {
        v6 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x1AD8,
               (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
               (const char *)0xD,
               v8);
        goto LABEL_11;
      }
      wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::operator=(a3);
    }
    v5 = 0;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1ACA,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  PropVariantClear((PROPVARIANT *)&pvar);
  return v5;
}
