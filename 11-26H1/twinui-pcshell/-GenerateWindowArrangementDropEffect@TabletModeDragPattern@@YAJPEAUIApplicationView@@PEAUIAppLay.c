/*
 * XREFs of ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180532DBC
 * Callers:
 *     ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x18052C8FC (-UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180532B44 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z @ 0x180532FB8 (-GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 TabletModeDragPattern::GenerateWindowArrangementDropEffect(
        ApplicationViewHelpers *a1,
        TabletModeDragPattern *a2,
        int a3,
        __int64 a4,
        ...)
{
  unsigned int v7; // ebx
  wchar_t **v8; // r13
  char v9; // r15
  unsigned int v10; // edi
  int StringWithMap; // eax
  int v12; // edi
  struct IApplicationView **v14; // r9
  int ViewAtIndex; // esi
  __int64 v16; // rdx
  struct IApplicationView **v17; // r9
  struct IApplicationView **v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  ApplicationViewHelpers *v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h]
  wchar_t **v22; // [rsp+A0h] [rbp+60h] BYREF
  va_list va; // [rsp+A0h] [rbp+60h]
  va_list va1; // [rsp+A8h] [rbp+68h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v22 = va_arg(va1, wchar_t **);
  v21 = a4;
  v7 = 0;
  v8 = v22;
  *v22 = 0LL;
  v9 = 0;
  v20 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v22 = 0LL;
  switch ( a3 )
  {
    case 1:
      if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *))(*(_QWORD *)a2 + 184LL))(
             a2,
             a1) )
      {
        v10 = 2008;
        break;
      }
      v10 = 2010;
      v9 = 1;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, (unsigned int)va, v18);
      if ( ViewAtIndex >= 0 )
        break;
      v16 = 149LL;
      goto LABEL_19;
    case 2:
      if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *))(*(_QWORD *)a2 + 184LL))(
             a2,
             a1) )
      {
        v10 = 2009;
        break;
      }
      v10 = 2011;
      v9 = 1;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, (unsigned int)va, v17);
      if ( ViewAtIndex >= 0 )
        break;
      v16 = 163LL;
      goto LABEL_19;
    case 3:
    case 4:
      v9 = 1;
      v10 = 2007;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, (struct IAppLayout *)(a3 != 3), (unsigned int)va, v14);
      if ( ViewAtIndex >= 0 )
        break;
      v16 = 172LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)ViewAtIndex);
      v7 = ViewAtIndex;
      goto LABEL_11;
    case 5:
      v10 = 2005;
      break;
    case 6:
      v10 = 2006;
      break;
    default:
      goto LABEL_11;
  }
  StringWithMap = TabletModeDragPattern::GenerateStringWithMap(
                    (unsigned int)(v22 != 0LL) + 1,
                    a1,
                    (ApplicationViewHelpers *)v22,
                    v21,
                    v10,
                    v9,
                    v8);
  v12 = StringWithMap;
  if ( StringWithMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)StringWithMap);
  v7 = v12;
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  return v7;
}
