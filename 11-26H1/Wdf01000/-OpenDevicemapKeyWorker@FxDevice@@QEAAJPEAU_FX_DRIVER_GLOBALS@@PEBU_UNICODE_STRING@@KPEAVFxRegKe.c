/*
 * XREFs of ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1400955A0
 * Callers:
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1400921D0 (imp_WdfDeviceOpenDevicemapKey.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x14006B2E0 (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     WPP_IFR_SF_Sd @ 0x140095780 (WPP_IFR_SF_Sd.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxDevice::OpenDevicemapKeyWorker(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *pFxDriverGlobals,
        const _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        FxRegKey *pKey)
{
  NTSTATUS id; // eax
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  const _GUID *CreateOptions; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING registryKeyPath; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t baseStringBuffer[256]; // [rsp+50h] [rbp-B0h] BYREF

  wcscpy(baseStringBuffer, L"\\REGISTRY\\MACHINE\\HARDWARE\\DEVICEMAP\\");
  *(_QWORD *)&registryKeyPath.Length = 33554506LL;
  memset(&baseStringBuffer[38], 0, 0x1B4uLL);
  registryKeyPath.Buffer = baseStringBuffer;
  id = RtlAppendUnicodeStringToString(&registryKeyPath, KeyName);
  v11 = id;
  if ( id >= 0 )
  {
    v12 = FxRegKey::_Create(0LL, &registryKeyPath, &pKey->m_Key, DesiredAccess, 1u, 0LL);
    v11 = v12;
    if ( v12 < 0 )
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 2u, 0x1Cu, WPP_FxDeviceKm_cpp_Traceguids, v12);
  }
  else
  {
    WPP_IFR_SF_Sd(pFxDriverGlobals, (unsigned __int8)KeyName->Buffer, v9, v10, CreateOptions, KeyName->Buffer, id);
  }
  return v11;
}
