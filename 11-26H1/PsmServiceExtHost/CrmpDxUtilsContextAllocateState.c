/*
 * XREFs of CrmpDxUtilsContextAllocateState @ 0x180069D60
 * Callers:
 *     CrmStateMonitorAttemptNpuContextRefresh @ 0x18006C9A4 (CrmStateMonitorAttemptNpuContextRefresh.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmpDxUtilsContextAllocateState(_DWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // ebx
  __int128 v4; // xmm0
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  if ( !IsApiSetImplemented("ext-ms-win-dxcore-l1-1-0") )
  {
    v2 = -1073741822;
    goto LABEL_12;
  }
  v3 = DXCoreCreateAdapterFactory(&GUID_78ee5945_c36e_4b13_a669_005dd11c0f06, &v6);
  if ( v3 < 0 )
    goto LABEL_4;
  if ( *a1 )
  {
    if ( *a1 != 1 )
    {
      v2 = -1073741811;
      goto LABEL_12;
    }
    v4 = DXCORE_HARDWARE_TYPE_ATTRIBUTE_NPU;
  }
  else
  {
    v4 = DXCORE_HARDWARE_TYPE_ATTRIBUTE_GPU;
  }
  v7 = v4;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, GUID *, _DWORD *))(*(_QWORD *)v6 + 24LL))(
         v6,
         1LL,
         &v7,
         &GUID_526c7776_40e9_459b_b711_f32ad76dfc28,
         a1 + 2);
  if ( v3 < 0 )
  {
LABEL_4:
    v2 = v3 | 0xC0000000;
    goto LABEL_12;
  }
  v2 = 0;
LABEL_12:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v2;
}
