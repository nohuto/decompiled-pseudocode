/*
 * XREFs of ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EB358
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800EA82C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EC148 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EDCD8 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUP.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EE168 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEB.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EE828 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EF398 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EFBB0 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F0164 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUPars.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampArrayDevice::ParseReportDescriptors(
        HidLampArrayDevice *this,
        struct ParsedHidReportDescriptor *a2,
        unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v6; // r12
  int v7; // eax
  unsigned int v8; // ebx
  struct HidLampArrayAttributesReportParser *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  struct HidLampArrayAttributesReportParser *v13; // rbx
  __int64 v14; // rcx
  const struct ParsedHidReportDescriptor *v15; // rsi
  int v16; // eax
  struct HidLampArrayAttributesReportParser *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  struct HidLampArrayAttributesReportParser *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  struct HidLampArrayAttributesReportParser *v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  struct HidLampArrayAttributesReportParser *v26; // rbx
  __int64 v27; // rcx
  int v29; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  struct HidLampArrayAttributesReportParser *v32; // [rsp+78h] [rbp+58h] BYREF

  v3 = a3;
  v6 = 0LL;
  while ( (unsigned int)v6 < v3 )
  {
    if ( !*((_QWORD *)this + 73) )
    {
      v32 = 0LL;
      v7 = HidLampArrayAttributesReportParser::TryCreateAndInitialize(
             (const unsigned __int16 *)this + 12,
             (HidLampArrayDevice *)((char *)this + 538),
             (struct ParsedHidReportDescriptor *)((char *)a2 + 24 * v6),
             &v32);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D3,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v7);
        if ( v32 )
          (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v32 + 16LL))(v32);
        return v8;
      }
      v9 = v32;
      if ( v32 )
      {
        v10 = *((_QWORD *)this + 73);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        *((_QWORD *)this + 73) = v9;
        goto LABEL_41;
      }
    }
    if ( *((_QWORD *)this + 75) )
    {
      v11 = 24LL * (unsigned int)v6;
    }
    else
    {
      v32 = 0LL;
      v11 = 24LL * (unsigned int)v6;
      v12 = HidLampAttributesRequestReportParser::TryCreateAndInitialize(
              (const unsigned __int16 *)this + 12,
              (HidLampArrayDevice *)((char *)this + 538),
              (struct ParsedHidReportDescriptor *)((char *)a2 + v11),
              &v32);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E6,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v12);
        if ( v32 )
          (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v32 + 16LL))(v32);
        return v8;
      }
      v13 = v32;
      if ( v32 )
      {
        v14 = *((_QWORD *)this + 75);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        *((_QWORD *)this + 75) = v13;
        goto LABEL_41;
      }
    }
    v15 = (struct ParsedHidReportDescriptor *)((char *)a2 + v11);
    if ( *((_QWORD *)this + 76) )
      goto LABEL_65;
    v32 = 0LL;
    v16 = HidLampAttributesResponseReportParser::TryCreateAndInitialize(
            (const unsigned __int16 *)this + 12,
            (HidLampArrayDevice *)((char *)this + 538),
            v15,
            &v32);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v16);
      if ( v32 )
        (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v32 + 16LL))(v32);
      return v8;
    }
    v17 = v32;
    if ( !v32 )
    {
LABEL_65:
      if ( *((_QWORD *)this + 77) )
        goto LABEL_66;
      v32 = 0LL;
      v19 = HidLampMultiUpdateReportParser::TryCreateAndInitialize(
              (const unsigned __int16 *)this + 12,
              (HidLampArrayDevice *)((char *)this + 538),
              v15,
              &v32);
      v8 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x30C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v19);
        if ( v32 )
          (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v32 + 16LL))(v32);
        return v8;
      }
      v20 = v32;
      if ( !v32 )
      {
LABEL_66:
        if ( *((_QWORD *)this + 78) )
          goto LABEL_67;
        v32 = 0LL;
        v22 = HidLampRangeUpdateReportParser::TryCreateAndInitialize(
                (const unsigned __int16 *)this + 12,
                (HidLampArrayDevice *)((char *)this + 538),
                v15,
                &v32);
        v8 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x31F,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)(unsigned int)v22);
          if ( v32 )
            (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v32 + 16LL))(v32);
          return v8;
        }
        v23 = v32;
        if ( !v32 )
        {
LABEL_67:
          if ( !*((_QWORD *)this + 74) )
          {
            v32 = 0LL;
            v25 = HidLampArrayControlReportParser::TryCreateAndInitialize(
                    (const unsigned __int16 *)this + 12,
                    (HidLampArrayDevice *)((char *)this + 538),
                    v15,
                    &v32);
            v8 = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x332,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                (const char *)(unsigned int)v25);
              if ( v32 )
                (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v32 + 16LL))(v32);
              return v8;
            }
            v26 = v32;
            if ( v32 )
            {
              v27 = *((_QWORD *)this + 74);
              if ( v27 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
              *((_QWORD *)this + 74) = v26;
            }
          }
        }
        else
        {
          v24 = *((_QWORD *)this + 78);
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          *((_QWORD *)this + 78) = v23;
        }
      }
      else
      {
        v21 = *((_QWORD *)this + 77);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        *((_QWORD *)this + 77) = v20;
      }
    }
    else
    {
      v18 = *((_QWORD *)this + 76);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      *((_QWORD *)this + 76) = v17;
    }
LABEL_41:
    v6 = (unsigned int)(v6 + 1);
    v3 = a3;
  }
  v29 = HidLampArrayDevice::ValidateReportParsers(this);
  v8 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v29);
    return v8;
  }
  return 0LL;
}
