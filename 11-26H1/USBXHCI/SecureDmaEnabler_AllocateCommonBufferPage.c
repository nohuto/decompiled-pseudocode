/*
 * XREFs of SecureDmaEnabler_AllocateCommonBufferPage @ 0x1400827F8
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1400199C4 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x140040174 (CommonBuffer_AcquireSecureBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E6C (XilCoreCommonBuffer_AllocateBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     SecureDmaEnabler_MapMemory @ 0x140082264 (SecureDmaEnabler_MapMemory.c)
 */

__int64 __fastcall SecureDmaEnabler_AllocateCommonBufferPage(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v8; // r12
  ULONG v9; // r15d
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r9
  _QWORD *v15; // rbx
  __int16 v16; // r10
  _QWORD *v17; // rdx
  struct _MDL *Mdl; // rax
  int v19; // edx
  struct _MDL *v20; // rcx
  _DWORD v22[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v23)(__int64); // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  int v25; // [rsp+58h] [rbp-28h]
  int v26; // [rsp+5Ch] [rbp-24h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  void *v29; // [rsp+70h] [rbp-10h]
  PVOID VirtualAddress; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+D0h] [rbp+50h] BYREF

  VirtualAddress = 0LL;
  v31 = 0LL;
  v22[1] = 0;
  v24 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v22[0] = -1;
    else
      v22[0] = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v22[0] = 56;
  }
  v8 = a5;
  v9 = a3;
  v25 = 1;
  v26 = 1;
  v29 = off_14006B2B8;
  v27 = *a1;
  v23 = SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback;
  v28 = (a2 & -(__int64)(a5 != 0LL)) + 128;
  if ( a3 <= 0x1000 )
    v9 = 4096;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, _QWORD, __int64 *, PVOID *))(WdfFunctions_01033 + 1536))(
          WdfDriverGlobals,
          v22,
          (unsigned int)ExDefaultNonPagedPoolType,
          1229146200LL,
          v9,
          &v31,
          &VirtualAddress);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72),
        v10,
        18,
        20,
        (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids,
        v11);
    }
LABEL_19:
    if ( v31 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
    return (unsigned int)v11;
  }
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v31,
          off_14006B2B8);
  v13 = (_QWORD *)v12;
  *(_QWORD *)(v12 + 16) = v31;
  *(_QWORD *)(v12 + 24) = a1;
  *(_QWORD *)(v12 + 88) = 0LL;
  if ( a3 > 0x1000 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, v9, 0, 0, 0LL);
    v13[11] = Mdl;
    if ( !Mdl )
    {
      v11 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72),
          v19,
          18,
          21,
          (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids,
          154);
      }
      goto LABEL_16;
    }
    MmBuildMdlForNonPagedPool(Mdl);
    v17 = (_QWORD *)v13[11];
  }
  else
  {
    v14 = (unsigned __int64)VirtualAddress;
    v15 = (_QWORD *)(v12 + 32);
    v16 = (__int16)VirtualAddress;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_WORD *)(v12 + 42) = 0;
    *(_DWORD *)(v12 + 72) = v9;
    *(_QWORD *)(v12 + 64) = v14 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v12 + 76) = v16 & 0xFFF;
    *(_WORD *)(v12 + 40) = 8 * ((((v16 & 0xFFF) + 4095LL + (unsigned __int64)v9) >> 12) + 6);
    MmBuildMdlForNonPagedPool((PMDL)(v12 + 32));
    v17 = v15;
  }
  v11 = SecureDmaEnabler_MapMemory((__int64)a1, v17, v9, (__int64)(v13 + 12));
  if ( v11 < 0 )
  {
LABEL_16:
    if ( v13 )
    {
      v20 = (struct _MDL *)v13[11];
      if ( v20 )
        IoFreeMdl(v20);
    }
    goto LABEL_19;
  }
  *v13 = VirtualAddress;
  v13[1] = v13[12];
  *a4 = v13;
  if ( v8 )
    *v8 = v13 + 16;
  return (unsigned int)v11;
}
