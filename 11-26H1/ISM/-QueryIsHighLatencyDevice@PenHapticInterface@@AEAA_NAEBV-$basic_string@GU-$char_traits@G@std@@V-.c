/*
 * XREFs of ?QueryIsHighLatencyDevice@PenHapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801930F0
 * Callers:
 *     ?Initialize@PenHapticInterface@@QEAAJXZ @ 0x180192CB8 (-Initialize@PenHapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall PenHapticInterface::QueryIsHighLatencyDevice(__int64 a1, const WCHAR *a2)
{
  const WCHAR *v2; // rbx
  const WCHAR *v3; // rcx
  const char *v4; // r9
  void *v5; // rdi
  const struct std::nothrow_t *v6; // rdx
  bool v7; // bl
  const struct std::nothrow_t *v8; // rdx
  void *v10[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ULONG PropertyBufferSize; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+64h] [rbp+24h]
  DEVPROPTYPE PropertyType; // [rsp+68h] [rbp+28h] BYREF
  DEVNODE pdnDevInst; // [rsp+70h] [rbp+30h] BYREF
  DEVNODE dnDevInst; // [rsp+78h] [rbp+38h] BYREF

  v13 = HIDWORD(a1);
  v2 = a2;
  pdnDevInst = 0;
  dnDevInst = 0;
  PropertyType = 0;
  PropertyBufferSize = 0;
  v10[0] = 0LL;
  v3 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v3 = *(const WCHAR **)a2;
  CM_Get_Device_Interface_PropertyW(v3, &DEVPKEY_Device_InstanceId, &PropertyType, 0LL, &PropertyBufferSize, 0);
  if ( !PropertyBufferSize )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
      v4);
  v5 = operator new[](saturated_mul(PropertyBufferSize, 2uLL));
  v10[0] = v5;
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(const WCHAR **)v2;
  if ( CM_Get_Device_Interface_PropertyW(
         v2,
         &DEVPKEY_Device_InstanceId,
         &PropertyType,
         (PBYTE)v5,
         &PropertyBufferSize,
         0)
    || CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)v5, 0)
    || CM_Get_Parent(&dnDevInst, pdnDevInst, 0) )
  {
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v10, v6);
    return 0;
  }
  else
  {
    PropertyBufferSize = 0;
    v7 = CM_Get_DevNode_PropertyW(
           dnDevInst,
           &DEVPKEY_Bluetooth_DeviceAddress,
           &PropertyType,
           0LL,
           &PropertyBufferSize,
           0) != 37;
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v10, v8);
    return v7;
  }
}
