/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x140028570
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     IsPciBusAsync @ 0x140028690 (IsPciBusAsync.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckBridge(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rdx
  const char *v7; // rax
  const char *v8; // rcx
  _UNKNOWN **v9; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 84);
  v4 = 0;
  if ( (v3 & 1) != 0 && (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
LABEL_8:
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
    return v4;
  }
  *(_DWORD *)(a1 + 32) = 7;
  if ( (v3 & 0x40) == 0 )
    goto LABEL_8;
  *(_DWORD *)(a1 + 128) = 0;
  v5 = IsPciBusAsync(*(_QWORD *)(v1 + 760), ACPIBuildCompleteMustSucceed, a1);
  v6 = *(_QWORD *)(v1 + 8);
  v4 = v5;
  v7 = byte_140075A82;
  v8 = byte_140075A82;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(v1 + 608);
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 616);
  }
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      6,
      58,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      v4,
      v1,
      (__int64)v7,
      (__int64)v8);
  }
  result = 259LL;
  if ( v4 != 259 )
    goto LABEL_8;
  return result;
}
