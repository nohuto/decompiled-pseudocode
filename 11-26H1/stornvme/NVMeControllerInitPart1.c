/*
 * XREFs of NVMeControllerInitPart1 @ 0x140006C00
 * Callers:
 *     NVMeControllerPowerUp @ 0x1400075D0 (NVMeControllerPowerUp.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     NVMeControllerReinitialize @ 0x140024B08 (NVMeControllerReinitialize.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1400067B0 (AdminQueueInitialize.c)
 *     GetProcessorInformation @ 0x14000E550 (GetProcessorInformation.c)
 *     ControllerEnable @ 0x14000F460 (ControllerEnable.c)
 *     ControllerConfigure @ 0x14000FB30 (ControllerConfigure.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     NVMeControllerIdentify @ 0x140024388 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1400260A4 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x1400261A8 (NVMeGetControllerUUIDListIdentify.c)
 *     NVMeGetNVMSetAttributeList @ 0x1400269E0 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x140026B8C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x140026CF0 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  const wchar_t *v4; // rdi
  unsigned int v5; // esi
  signed __int32 v7; // ecx
  signed __int32 v8[10]; // [rsp+0h] [rbp-E8h] BYREF
  const wchar_t *v9; // [rsp+28h] [rbp-C0h]
  int v10; // [rsp+30h] [rbp-B8h]
  _OWORD *v11; // [rsp+38h] [rbp-B0h]
  int v12; // [rsp+40h] [rbp-A8h]
  _DWORD *v13; // [rsp+48h] [rbp-A0h]
  int *v14; // [rsp+50h] [rbp-98h]
  int v15; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v16[2]; // [rsp+68h] [rbp-80h] BYREF
  _OWORD v17[5]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-28h]

  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  if ( a2 && !AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(a1 + 28) = 7;
    v4 = L"Admin Queue Initialize failed";
LABEL_20:
    v5 = -1056964607;
    goto LABEL_21;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 36LL) = (*(_WORD *)(a1 + 324) - 1) & 0xFFF | (((*(_WORD *)(a1 + 324) - 1) & 0xFFF) << 16);
  _InterlockedOr(v8, 0);
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 48LL) = *(_QWORD *)(a1 + 552);
  _InterlockedOr(v8, 0);
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) = *(_QWORD *)(a1 + 344);
  _InterlockedOr(v8, 0);
  ControllerConfigure(a1);
  v5 = ControllerEnable(a1);
  if ( !v5 )
  {
    if ( a2 || (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 24) &= ~0x20u;
      v5 = NVMeControllerIdentify(a1);
      if ( v5 )
      {
        *(_DWORD *)(a1 + 28) = 30;
        v4 = L"Identify controller failed";
        goto LABEL_21;
      }
      NVMeGetControllerIoCommandSetIdentify(a1);
      NVMeGetControllerUUIDListIdentify(a1);
      if ( a2 )
      {
        if ( !*(_BYTE *)(a1 + 20) )
          NVMeGetNVMSetAttributeList(a1);
        NVMeNameSpaceIdentify(a1);
        NVMeGetNamespaceDescriptorListIdentify(a1);
        NVMeGetNamespaceIoCommandSetIdentify(a1);
      }
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_DWORD *)(a1 + 232) = 65537;
    }
    else if ( !(unsigned __int8)GetProcessorInformation(a1) )
    {
      *(_DWORD *)(a1 + 28) = 10;
      v4 = L"Get processor information failed";
      goto LABEL_20;
    }
    ++*(_DWORD *)(a1 + 4192);
    return v5;
  }
  *(_DWORD *)(a1 + 28) = 8;
  v4 = L"Controller enable failed";
LABEL_21:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v17);
    v16[0] = *(_DWORD *)(a1 + 24);
    v7 = (unsigned __int16)*(_DWORD *)(a1 + 28);
    v16[1] = *(_DWORD *)(a1 + 28);
    v14 = &v15;
    v13 = v16;
    v12 = 8;
    v11 = v17;
    v10 = 88;
    v9 = v4;
    v8[8] = v7;
    v15 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  ++*(_DWORD *)(a1 + 4196);
  return v5;
}
