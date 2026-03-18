/*
 * XREFs of DmaEnabler_AllocateCommonBufferPage @ 0x14001AD2C
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1400199C4 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E6C (XilCoreCommonBuffer_AllocateBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DmaEnabler_AllocateCommonBufferPage(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v7; // rdx
  int v8; // edx
  int v9; // edi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  int v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+44h] [rbp-3Ch]
  int v15; // [rsp+54h] [rbp-2Ch]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  void *v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+A8h] [rbp+28h] BYREF
  int v23; // [rsp+ACh] [rbp+2Ch]

  v21 = 0LL;
  v15 = 0;
  v18 = 0LL;
  v14 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v13 = -1;
    else
      v13 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v13 = 56;
  }
  v16 = 1;
  v17 = 1;
  v20 = off_14006AE38;
  v19 = a2 + 24;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0xA )
      v22 = -1;
    else
      v22 = *(_DWORD *)(WdfStructures + 80);
  }
  else
  {
    v22 = 8;
  }
  v7 = *a1;
  v23 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, int *, int *, __int64 *))(WdfFunctions_01033
                                                                                                 + 3064))(
         WdfDriverGlobals,
         v7,
         a3,
         &v22,
         &v13,
         &v21);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                      WdfDriverGlobals,
                      v21,
                      off_14006AE38);
    v10[2] = v21;
    *v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 176))(WdfDriverGlobals, v21);
    v10[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 184))(WdfDriverGlobals, v21);
    v11 = a5;
    *a4 = v10;
    *v11 = v10 + 3;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72),
      v8,
      18,
      12,
      (__int64)&WPP_4656eba9686234bf83124d5041977f77_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
