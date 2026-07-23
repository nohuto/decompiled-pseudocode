/*
 * XREFs of PiCMValidateDeviceInstance @ 0x14095AA88
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        void *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v9; // ebx
  const WCHAR *v10; // rsi
  int v11; // r14d
  __int64 v12; // r15
  __int64 v13; // rdi
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  HANDLE v19; // r15
  __int64 v20; // r14
  char v22; // al
  int v23; // edx
  int v24; // eax
  int v25; // eax
  char v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h]
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh]
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+68h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-98h] BYREF
  PCWSTR SourceString_8[2]; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  int v37[4]; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+A8h] [rbp-60h]
  char v39; // [rsp+ACh] [rbp-5Ch]
  HANDLE *p_Handle; // [rsp+B0h] [rbp-58h]
  int v41; // [rsp+B8h] [rbp-50h]
  int v42; // [rsp+BCh] [rbp-4Ch]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-10h] BYREF
  int v45; // [rsp+118h] [rbp+10h] BYREF
  char v46; // [rsp+11Ch] [rbp+14h]
  HANDLE *v47; // [rsp+120h] [rbp+18h]
  int v48; // [rsp+128h] [rbp+20h]
  int v49; // [rsp+12Ch] [rbp+24h]

  v6 = a6;
  v29 = 0;
  v27 = 0;
  v28 = 0;
  *a6 = 0;
  v34 = 0LL;
  v36 = 0LL;
  *(_OWORD *)SourceString_8 = 0LL;
  v31 = 0;
  v33 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v26 = 1;
  Handle = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v34);
  if ( v9 < 0 )
    goto LABEL_31;
  v10 = SourceString_8[0];
  v11 = DWORD1(v34);
  if ( !SourceString_8[0]
    || DWORD2(v34) != 1
    || (unsigned int)(DWORD1(v34) - 1) > 1
    || HIDWORD(SourceString_8[1])
    || !a3
    || a4 < 8 )
  {
    v16 = -1073741811;
    goto LABEL_28;
  }
  v12 = *(_QWORD *)&PiPnpRtlCtx;
  memset_0(v37, 0, 0x50uLL);
  v13 = *(_QWORD *)(v12 + 488);
  v14 = 0;
  p_Handle = &Handle;
  v39 = 0;
  v38 = 1;
  v42 = 0;
  if ( v13 )
  {
    v15 = guard_dispatch_icall_no_overrides(v12, (__int64)v10);
    if ( v15 == -1073741822 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        goto LABEL_54;
      if ( v15 )
        goto LABEL_57;
    }
    v14 = v42;
  }
  memset_0(&v45, 0, 0x40uLL);
  if ( (_WORD)v14 )
  {
    v16 = -1073741811;
  }
  else if ( *(_QWORD *)(v12 + 304) )
  {
    v45 = v38;
    v46 = v39;
    v47 = p_Handle;
    v49 = v14;
    v16 = guard_dispatch_icall_no_overrides(v12, (__int64)v10);
    v17 = v41;
    if ( v16 >= 0 )
      v17 = v48;
    v41 = v17;
  }
  else
  {
    v16 = -1073741822;
  }
  if ( v13 )
  {
    v37[0] = v16;
    v25 = guard_dispatch_icall_no_overrides(v12, (__int64)v10);
    if ( v25 != -1073741822 )
    {
      if ( v25 != -1073741536 )
      {
        if ( !v25 )
          goto LABEL_18;
LABEL_57:
        v16 = -1073741595;
        goto LABEL_27;
      }
LABEL_54:
      v16 = v37[0];
    }
  }
LABEL_18:
  if ( v16 >= 0 )
  {
    if ( v11 == 2 && PiAuDoesClientHaveAccess(2u) )
    {
LABEL_44:
      v30 = 4;
      if ( (int)PnpCtxRegQueryValue(v18, Handle, L"Phantom", &v29, &v27, &v30) >= 0 && v29 == 4 && v30 == 4 )
      {
        v24 = v16;
        if ( v27 )
          v24 = -1073741810;
        v16 = v24;
      }
      goto LABEL_27;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v16 = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, (int)v10, 1, (int)Handle, &SubjectContext, (__int64)&v26);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 >= 0 )
    {
      if ( v26 )
      {
        if ( v11 == 2 )
          goto LABEL_44;
        v19 = Handle;
        v20 = *(_QWORD *)&PiPnpRtlCtx;
        DestinationString = 0LL;
        v30 = 0;
        v29 = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString, v10) >= 0
          && *(_QWORD *)(v20 + 264)
          && (int)guard_dispatch_icall_no_overrides(v20, (__int64)&DestinationString) >= 0 )
        {
          v27 = 4;
          if ( (unsigned int)CmGetDeviceRegProp(
                               v20,
                               (__int64)v10,
                               (__int64)v19,
                               0xBu,
                               (__int64)&v30,
                               (__int64)&v29,
                               (__int64)&v27,
                               0)
            || v27 < 4
            || v30 != 4 )
          {
            v22 = 0;
          }
          else
          {
            v22 = v29;
          }
          v23 = v28;
          if ( (v22 & 4) != 0 )
          {
            v23 = v28 | 0x10;
            v28 |= 0x10u;
          }
          v6 = a6;
          if ( (v22 & 0x40) != 0 && (v23 & 0x400) == 0 )
          {
            v31 = 28;
            v28 = v23 | 0x400;
          }
          goto LABEL_28;
        }
      }
      v16 = -1073741810;
    }
  }
LABEL_27:
  v6 = a6;
LABEL_28:
  if ( Handle )
    ZwClose(Handle);
  v9 = PiCMReturnBasicResultData((unsigned int)v16, (unsigned int)v36, a3, a4, v6);
LABEL_31:
  if ( SourceString_8[0] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag((PVOID)SourceString_8[0], 0);
  return (unsigned int)v9;
}
