/*
 * XREFs of ?CreateProxy_List_uint@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoList_uint_Proxy@2Lib@Bamo@Microsoft@@@Z @ 0x18023F2B4
 * Callers:
 *     ?Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18023FED8 (-Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprov.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateProxy_List_uint(
        struct dataprovider_AutoBamos::BamoPeer *a1,
        struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy **a2)
{
  struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *)operator new(0x48uLL);
  if ( v3 )
  {
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 2) = &Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_ProxyImpl::`vftable';
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *(_QWORD *)v3 = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListProxy<unsigned int>::`vftable'{for `Microsoft::Bamo::BamoProxy'};
    *((_QWORD *)v3 + 1) = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListProxy<unsigned int>::`vftable'{for `Microsoft::Bamo::Lib::dataprovider_AutoBamos::IList_uint_Proxy'};
    *a2 = v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BEE,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
