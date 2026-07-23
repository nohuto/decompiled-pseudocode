/*
 * XREFs of LdrpApplyPatchImage @ 0x1800915AC
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x180030D90 (LdrpGetProcedureAddress.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18008FFAC (LdrpLogEtwHotPatchStatus.c)
 *     LdrpApplyPatchImageCommon @ 0x1801237CC (LdrpApplyPatchImageCommon.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpApplyPatchImage(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  void *v5; // rcx
  char *v6; // r15
  __int64 v7; // r12
  bool v8; // al
  int v9; // edx
  _QWORD *v10; // rsi
  int ProcedureAddress; // edi
  unsigned int v12; // eax
  int v14; // eax
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+40h] [rbp-40h]
  PVOID BaseAddress; // [rsp+50h] [rbp-30h] BYREF
  char *v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+68h] [rbp-18h]

  BaseAddress = 0LL;
  v20 = 0LL;
  v5 = *(void **)(a1 + 184);
  v6 = 0LL;
  v21 = 0;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  LdrpFindLoadedDllByHandle(v5, (__int64 *)&BaseAddress, 0LL, a4);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 200LL);
  v8 = LdrInitState < 3 || *(_DWORD *)(a1 + 276) == 1;
  v9 = *(_DWORD *)(a1 + 304);
  v10 = BaseAddress;
  if ( v9 != 2 && !v8 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__PatchMainCallout__", 0, &v19);
    if ( ProcedureAddress == -1073741267 )
      goto LABEL_27;
    v9 = *(_DWORD *)(a1 + 304);
    v6 = v19;
    LODWORD(v20) = 1;
  }
  LODWORD(v16) = 2;
  *((_QWORD *)&v16 + 1) = -1LL;
  *(_QWORD *)&v17 = v10[6];
  *((_QWORD *)&v17 + 1) = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    if ( v9 == 1 )
    {
      DWORD1(v16) |= 1u;
      ProcedureAddress = LdrpApplyPatchImageCommon(&v16, v7);
      if ( ProcedureAddress < 0 )
        goto LABEL_14;
      *(_DWORD *)(a1 + 304) = 2;
      HIDWORD(v20) = 0;
      ProcedureAddress = ((__int64 (__fastcall *)(__int64 *, __int64))v6)(&v20, 12LL);
      if ( ProcedureAddress < 0 )
        goto LABEL_28;
    }
    DWORD1(v16) = DWORD1(v16) & 0xFFFFFFFC | 2;
    if ( (int)LdrpApplyPatchImageCommon(&v16, v7) >= 0 )
    {
      HIDWORD(v20) = 1;
      v15 = ((__int64 (__fastcall *)(__int64 *, __int64))v6)(&v20, 12LL);
      ProcedureAddress = v15;
      if ( v15 < 0 )
      {
        LdrpLogEtwHotPatchStatus(
          (unsigned __int16 *)(LdrpImageEntry + 88),
          (__int64)v10,
          (unsigned __int16 *)(a1 + 72),
          v15,
          6);
        __fastfail(0x44u);
      }
      goto LABEL_16;
    }
    HIDWORD(v20) = 2;
    v14 = ((__int64 (__fastcall *)(__int64 *, __int64))v6)(&v20, 12LL);
    ProcedureAddress = v14;
    if ( v14 < 0 )
    {
      LdrpLogEtwHotPatchStatus(
        (unsigned __int16 *)(LdrpImageEntry + 88),
        (__int64)v10,
        (unsigned __int16 *)(a1 + 72),
        v14,
        7);
      __fastfail(0x44u);
    }
    *((_DWORD *)v10 + 76) = 4;
LABEL_27:
    if ( ProcedureAddress >= 0 )
      goto LABEL_17;
    goto LABEL_28;
  }
  if ( v9 == 1 )
    v12 = DWORD1(v16) | 1;
  else
    v12 = DWORD1(v16) & 0xFFFFFFFE;
  DWORD1(v16) = v12 | 2;
  ProcedureAddress = LdrpApplyPatchImageCommon(&v16, v7);
  if ( ProcedureAddress >= 0 )
  {
    *(_DWORD *)(a1 + 304) = 2;
LABEL_16:
    *((_DWORD *)v10 + 76) = 3;
    v10[37] = *(_QWORD *)(a1 + 48);
    goto LABEL_17;
  }
  if ( *(_DWORD *)(a1 + 304) == 1 )
LABEL_14:
    *(_DWORD *)(a1 + 304) = 4;
LABEL_28:
  LdrpLogEtwHotPatchStatus(
    (unsigned __int16 *)(LdrpImageEntry + 88),
    (__int64)v10,
    (unsigned __int16 *)(a1 + 72),
    ProcedureAddress,
    4);
LABEL_17:
  if ( v10 )
    LdrpDereferenceModule((char *)v10);
  return (unsigned int)ProcedureAddress;
}
