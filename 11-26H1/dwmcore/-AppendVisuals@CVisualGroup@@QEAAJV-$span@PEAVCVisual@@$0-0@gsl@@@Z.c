/*
 * XREFs of ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x1802193E4
 * Callers:
 *     ?SetVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x1801A33DC (-SetVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18013ED10 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801A3300 (--1-$out_param_t@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualRefere.c)
 *     ??1?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@QEAA@XZ @ 0x1801A351C (--1-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReference@@@std@@@std.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@$$QEAV21@@Z @ 0x180262D7C (--$emplace_back@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::AppendVisuals(__int64 a1, _QWORD *a2)
{
  struct CVisual **v2; // rbx
  struct CVisual **v4; // rsi
  struct CVisual *v5; // rcx
  int v6; // eax
  int v8[2]; // [rsp+20h] [rbp-28h] BYREF
  struct CExcludeVisualReference *v9; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = (struct CVisual **)a2[1];
  v4 = &v2[*a2];
  while ( v2 != v4 )
  {
    v5 = *v2;
    if ( *v2 )
    {
      v12 = 0LL;
      *(_QWORD *)v8 = &v12;
      v9 = 0LL;
      v10 = 1;
      v6 = CExcludeVisualReference::Create(v5, &v9);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1B,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
          (const char *)(unsigned int)v6,
          v8[0]);
      wil::details::out_param_t<std::unique_ptr<CExcludeVisualReference>>::~out_param_t<std::unique_ptr<CExcludeVisualReference>>((__int64 **)v8);
      std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        a1 + 72,
        &v12);
      std::unique_ptr<CExcludeVisualReference>::~unique_ptr<CExcludeVisualReference>(&v12);
    }
    ++v2;
  }
  CResource::NotifyOnChanged(a1, 0, 0LL);
  return 0LL;
}
