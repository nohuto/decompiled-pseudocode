/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630
 * Callers:
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C550 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D2970 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D6FF0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D9D50 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DADC0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DB7D0 (-OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DBFE0 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC4E0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCFF0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DE1E0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF060 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF540 (-OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x18005C958 (-ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x18007E838 (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18008A840 (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800DF9F0 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  __int64 v5; // rdi
  __int64 i; // rcx
  __int64 v7; // rsi
  __int64 v8; // r13
  int v9; // eax
  void *v10; // r12
  NTSTATUS Caps; // eax
  HIDDeviceCollection *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // r9
  __int64 v21; // rdx
  _DWORD *v22; // rbx
  __int64 v23; // rdx
  const struct std::nothrow_t *v24; // rdx
  size_t Size; // [rsp+20h] [rbp-79h] BYREF
  __int64 v26; // [rsp+28h] [rbp-71h] BYREF
  void *v27; // [rsp+30h] [rbp-69h] BYREF
  int v28; // [rsp+38h] [rbp-61h]
  int v29; // [rsp+3Ch] [rbp-5Dh] BYREF
  _OWORD v30[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v31; // [rsp+60h] [rbp-39h]
  _HIDP_CAPS Capabilities; // [rsp+70h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v28 = a2;
  v29 = 0;
  LODWORD(Size) = 0;
  v26 = 0LL;
  memset(v30, 0, sizeof(v30));
  v31 = 0LL;
  if ( !a3 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL,
      Size);
  v5 = (__int64)*a3;
  if ( !*a3 )
  {
    v22 = operator new(0x60CuLL);
    v27 = v22;
    memset_0(v22, 0, 0x60CuLL);
    v22[2] = 1548;
    std::unique_ptr<LegacyDeviceInfo>::reset(&v26, v22);
    v5 = v26;
    if ( !v26 )
    {
      v14 = -2147024882;
      v21 = 243LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
        (const char *)v14,
        Size);
LABEL_17:
      std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(&v26);
      return v14;
    }
    a2 = v28;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x100 )
    {
      v14 = -2147023728;
      v21 = 248LL;
      goto LABEL_16;
    }
    v7 = *((_QWORD *)this + i + 78);
    if ( v7 )
    {
      if ( !*(_QWORD *)(v7 + 16) || *(_DWORD *)(v7 + 40) == a2 )
        break;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, _QWORD))(*(_QWORD *)this + 104LL))(
          this,
          *((_QWORD *)this + i + 78)) )
  {
    v14 = -2147418113;
    v21 = 252LL;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(v7 + 16);
  v9 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v8, 0LL, &Size);
  if ( v9 < 0 )
  {
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x10B,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)v9,
            Size);
    goto LABEL_17;
  }
  v10 = operator new[]((unsigned int)Size);
  v27 = v10;
  memset_0(v10, 0, (unsigned int)Size);
  Caps = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v8, v10, &Size);
  if ( Caps < 0 )
  {
    v23 = 280LL;
LABEL_28:
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v23,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)Caps,
            Size);
LABEL_30:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v27, v24);
    goto LABEL_17;
  }
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v10, &Capabilities);
  if ( Caps < 0 )
  {
    v23 = 286LL;
    goto LABEL_28;
  }
  v13 = HIDDeviceCollection::ConvertHIDTLCIdToInputType(
          v12,
          Capabilities.Usage,
          Capabilities.UsagePage,
          (enum InputType *)&v29);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v13,
      Size);
    goto LABEL_30;
  }
  v15 = Size;
  *(_QWORD *)(v7 + 48) = v10;
  *(_DWORD *)(v7 + 56) = v15;
  v27 = 0LL;
  *(_DWORD *)v5 = v28;
  *(_DWORD *)(v5 + 4) = v29;
  if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v8, v30) >= 0 )
  {
    v17 = WORD4(v30[0]);
    *(_WORD *)(v5 + 32) = WORD4(v30[0]);
    v18 = WORD5(v30[0]);
    *(_WORD *)(v5 + 34) = WORD5(v30[0]);
    v19 = WORD6(v30[0]);
    *(_WORD *)(v5 + 36) = WORD6(v30[0]);
    RawInputProvidersTelemetry::LogRawInputDeviceAttached(*(_DWORD *)(v5 + 4), v17, v18, v19);
  }
  *a3 = (struct DeviceInfo *)v5;
  v26 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v27, v16);
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(&v26);
  return 0LL;
}
