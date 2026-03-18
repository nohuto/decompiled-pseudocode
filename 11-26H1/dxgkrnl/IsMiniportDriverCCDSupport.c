/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1402D7108
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1402D6FF0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  BOOL v4; // ebx
  __int64 v5; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-38h]
  __int64 LowPart; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v9);
  v4 = 0;
  if ( v3 )
  {
    v5 = *((_QWORD *)v3 + 395);
    if ( v5 )
      v4 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 3044LL) >= 1105;
    DXGADAPTER::ReleaseReference(v3);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 9049;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed in adapter ptr to query driver Ccd support, returnign on support (0x%I64x::0x%I64x).",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
  }
  return v4;
}
