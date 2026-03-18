/*
 * XREFs of ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x140051678
 * Callers:
 *     DpiProcessOpmVmBusRequest @ 0x140091C9C (DpiProcessOpmVmBusRequest.c)
 *     DpiPdoHandleOpmIoctls @ 0x1403BC9A4 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?DpiOpmLogCreateContext@@YAXJI@Z @ 0x1400528FC (-DpiOpmLogCreateContext@@YAXJI@Z.c)
 *     McTemplateK0ptpqqq_EtwWriteTransfer @ 0x1400529C4 (McTemplateK0ptpqqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpjq_EtwWriteTransfer @ 0x140052A7C (McTemplateK0ptpjq_EtwWriteTransfer.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140091690 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiOpmLogSetLevel@@YAXJII@Z @ 0x140091924 (-DpiOpmLogSetLevel@@YAXJII@Z.c)
 *     McTemplateK0ptpjqq_EtwWriteTransfer @ 0x140091D8C (McTemplateK0ptpjqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpq_EtwWriteTransfer @ 0x140091E4C (McTemplateK0ptpq_EtwWriteTransfer.c)
 *     McTemplateK0ptpqq_EtwWriteTransfer @ 0x140091EE4 (McTemplateK0ptpqq_EtwWriteTransfer.c)
 *     McTemplateK0ptqppq_EtwWriteTransfer @ 0x140091F8C (McTemplateK0ptqppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403DF030 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403E76C0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403EA9FC (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkOpmTranslateHandle @ 0x1403ED26C (DxgkOpmTranslateHandle.c)
 *     DpiPdoVerifyOpmParameters @ 0x1403F0578 (DpiPdoVerifyOpmParameters.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1403F8EA0 (DxgkOpmTranslateAndDestroyHandle.c)
 *     DxgkOpmCreateHandle @ 0x14040A220 (DxgkOpmCreateHandle.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctlsInternal(
        struct _FDO_CONTEXT *RenderAdapterForSession,
        struct _PDO_CONTEXT *a2,
        int a3,
        char *a4,
        unsigned int a5,
        void **a6,
        unsigned int a7,
        unsigned __int64 *a8)
{
  int v9; // ecx
  struct _PDO_CONTEXT *v12; // r14
  __int64 v13; // rdi
  unsigned int v14; // r12d
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  int v19; // r15d
  int v20; // r15d
  char v21; // r15
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64, __int64, char *, void **); // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // r15d
  int v36; // r15d
  int v37; // r15d
  char v38; // r15
  int v39; // ecx
  int v40; // r8d
  char v41; // r15
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v45; // esi
  __int64 (__fastcall *v46)(_QWORD, _QWORD, _QWORD, void **); // rax
  unsigned int v47; // esi
  __int64 v48; // rcx
  __int64 v49; // r8
  char v50; // r15
  int v51; // ecx
  int v52; // r8d
  char v53; // r15
  int v54; // ecx
  int v55; // r8d
  char v56; // r15
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 (__fastcall *v63)(__int64, void *, char *, _QWORD, char *); // rax
  __int64 v64; // rcx
  int v65; // eax
  unsigned int v66; // r8d
  unsigned int v67; // edx
  char v68; // r15
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  __int64 (__fastcall *v72)(__int64, void *, char *, void **); // rax
  __int64 v73; // rcx
  void *v74; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-91h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-91h]
  void **v77; // [rsp+28h] [rbp-89h]
  void **v78; // [rsp+28h] [rbp-89h]
  __int64 v79; // [rsp+30h] [rbp-81h]
  __int64 v80; // [rsp+30h] [rbp-81h]
  int v81; // [rsp+50h] [rbp-61h]
  void *v82; // [rsp+58h] [rbp-59h] BYREF
  __int64 v83; // [rsp+60h] [rbp-51h]
  struct _PDO_CONTEXT *v84; // [rsp+68h] [rbp-49h]
  void **v85; // [rsp+70h] [rbp-41h]
  int v86; // [rsp+78h] [rbp-39h]
  void **v87; // [rsp+80h] [rbp-31h]
  unsigned __int64 *v88; // [rsp+88h] [rbp-29h]
  struct _FDO_CONTEXT *v89[2]; // [rsp+90h] [rbp-21h] BYREF

  v9 = (int)a6;
  v85 = a6;
  v88 = a8;
  *a8 = 0LL;
  v12 = a2;
  LODWORD(v13) = -1073741637;
  v81 = 0;
  v14 = 0;
  LODWORD(v83) = 1;
  v86 = 0;
  v84 = a2;
  v89[0] = RenderAdapterForSession;
  if ( *((_BYTE *)RenderAdapterForSession + 1158) )
  {
    v65 = *((_DWORD *)RenderAdapterForSession + 291);
    if ( v65 == 2 )
    {
      v12 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = (struct _FDO_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_167:
        ReleaseMiniportListMutex();
        return (unsigned int)v13;
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)RenderAdapterForSession + 484) )
        DpiCheckForOutstandingD3Requests((__int64)RenderAdapterForSession);
      ExAcquireResourceSharedLite(*((PERESOURCE *)RenderAdapterForSession + 21), 1u);
      v14 = 1;
      if ( a3 == 2303115 )
        v86 = 1;
      else
        ReleaseMiniportListMutex();
      v9 = (int)v85;
    }
    else
    {
      if ( v65 != 1 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 393;
        return (unsigned int)v13;
      }
      LODWORD(v83) = 0;
    }
  }
  if ( *((_QWORD *)RenderAdapterForSession + 399) )
  {
    v15 = a3 - 2303107;
    if ( !v15 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303107, (_DWORD)a4, a5, v9, a7, 4, 4);
      if ( (int)v13 < 0 )
        goto LABEL_48;
      v31 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_48;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, void **))RenderAdapterForSession + 399))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v31,
              v85);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v79) = *(_DWORD *)v85;
        LODWORD(v77) = v31;
        LODWORD(Timeout) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v32,
          &EventOpmGetCertificateSize,
          v33,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeout,
          v77,
          v79,
          v13);
      }
      WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 455;
      v34 = 4;
      goto LABEL_44;
    }
    v16 = v15 - 4;
    if ( !v16 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303111, (_DWORD)a4, a5, v9, a7, 4, a7);
      if ( (int)v13 < 0 )
        goto LABEL_48;
      v47 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_48;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      v34 = a7;
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 400))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v47,
              a7,
              v85);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v80) = a7;
        LODWORD(v78) = v47;
        LODWORD(Timeouta) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v48,
          &EventOpmGetCertificate,
          v49,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeouta,
          v78,
          v80,
          v13);
      }
      WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 505;
      goto LABEL_44;
    }
    v17 = v16 - 4;
    if ( !v17 )
    {
      v82 = 0LL;
      v87 = 0LL;
      v41 = -1;
      v81 = 8;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303115, (_DWORD)a4, a5, v9, a7, 4, 8);
      if ( (int)v13 >= 0 )
      {
        v45 = *(_DWORD *)a4;
        if ( (_DWORD)v83 && v45 == DXGKMDT_OPM_VOS_OPM_INDIRECT_DISPLAY )
        {
          LODWORD(v13) = -1073741198;
          WdLogSingleEntry4(4LL, -1073741198LL, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
          WdLogGlobalForLineNumber = 540;
          goto LABEL_48;
        }
        v87 = v85;
        if ( v14 )
        {
          LODWORD(v84) = *((_DWORD *)v84 + 126);
          LODWORD(v13) = CreateProtectedOutputIndirectDisplay(
                           RenderAdapterForSession,
                           v89[0],
                           v45,
                           (unsigned int)v84,
                           v85,
                           &v82);
        }
        else
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_48;
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
          v46 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, void **))*((_QWORD *)RenderAdapterForSession + 401);
          LODWORD(v84) = *((_DWORD *)v12 + 126);
          LODWORD(v13) = v46(*((_QWORD *)RenderAdapterForSession + 6), (unsigned int)v84, (unsigned int)v45, &v82);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DxgkOpmCreateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
            if ( (int)v13 < 0 )
            {
              (*((void (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 407))(
                *((_QWORD *)RenderAdapterForSession + 6),
                v82);
              if ( (_DWORD)v13 == -1073741198 )
                LODWORD(v13) = -1073741637;
            }
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        }
        DpiOpmLogCreateContext(v13, v45);
        v41 = (char)v84;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptqppq_EtwWriteTransfer(
          v43,
          v42,
          v44,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v41,
          (char)v82,
          (char)*v87,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 608;
      goto LABEL_43;
    }
    v18 = v17 - 4;
    if ( !v18 )
    {
      v53 = 0;
      v82 = 0LL;
      v81 = 16;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303119, (_DWORD)a4, a5, v9, a7, 8, 16);
      if ( (int)v13 >= 0 )
      {
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_48;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
        v53 = (char)v82;
        LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
        if ( (int)v13 >= 0 )
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, void **))RenderAdapterForSession + 402))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           v82,
                           v85);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptpq_EtwWriteTransfer(
          v54,
          (unsigned int)&EventOPMGetRandomNumber,
          v55,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v53,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 663;
      goto LABEL_43;
    }
    v19 = v18 - 4;
    if ( !v19 )
    {
      v50 = 0;
      v82 = 0LL;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303123, (_DWORD)a4, a5, v9, a7, 264, 0);
      if ( (int)v13 >= 0 )
      {
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_48;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
        v50 = (char)v82;
        LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
        if ( (int)v13 >= 0 )
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, char *))RenderAdapterForSession + 403))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           v82,
                           a4 + 8);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptpq_EtwWriteTransfer(
          v51,
          (unsigned int)&EventOPMSetSigningKeyAndSequenceNumbers,
          v52,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v50,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 713;
      goto LABEL_43;
    }
    v20 = v19 - 4;
    if ( v20 )
    {
      v36 = v20 - 4;
      if ( v36 )
      {
        v37 = v36 - 4;
        if ( v37 )
        {
          if ( v37 != 4 )
            goto LABEL_48;
          v38 = 0;
          v82 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303139, (_DWORD)a4, a5, v9, a7, 8, 0);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_48;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
            v38 = (char)v82;
            LODWORD(v13) = DxgkOpmTranslateAndDestroyHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
            if ( (int)v13 >= 0 )
              LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 407))(
                               *((_QWORD *)RenderAdapterForSession + 6),
                               v82);
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpq_EtwWriteTransfer(
              v39,
              (unsigned int)&EventOPMDestroyProtectedOutput,
              v40,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v38,
              v13);
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
          WdLogGlobalForLineNumber = 995;
        }
        else
        {
          v56 = 0;
          v82 = 0LL;
          LODWORD(v83) = 0;
          *(_OWORD *)v89 = 0LL;
          LODWORD(v84) = -1;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303135, (_DWORD)a4, a5, v9, a7, 4112, 0);
          if ( (int)v13 >= 0 )
          {
            v60 = *((_QWORD *)RenderAdapterForSession + 3);
            LODWORD(v83) = *((_DWORD *)a4 + 1026);
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(v60, 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_48;
            v61 = *((_QWORD *)RenderAdapterForSession + 504);
            LODWORD(v84) = *((_DWORD *)a4 + 6);
            DxgkAcquireAdapterOpmI2CSync(v61);
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
            v56 = (char)v82;
            LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
            if ( (int)v13 >= 0 )
            {
              v63 = (__int64 (__fastcall *)(__int64, void *, char *, _QWORD, char *))*((_QWORD *)RenderAdapterForSession
                                                                                     + 406);
              v64 = *((_QWORD *)RenderAdapterForSession + 6);
              *(_OWORD *)v89 = *(_OWORD *)(a4 + 24);
              LODWORD(v13) = v63(v64, v82, a4 + 8, (unsigned int)v83, a4 + 4108);
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            v62 = *((_QWORD *)a4 + 3) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
            if ( !v62 )
              v62 = *((_QWORD *)a4 + 4) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
            if ( !v62 && *((_DWORD *)a4 + 11) >= 0x10u )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0ptpqqq_EtwWriteTransfer(
                  v58,
                  (unsigned int)&EventOPMSetProtectionLevel,
                  v59,
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v14,
                  (char)v82,
                  *((_DWORD *)a4 + 12),
                  *((_DWORD *)a4 + 13),
                  v13);
              WdLogSingleEntry4(
                4LL,
                (int)v13,
                *((_QWORD *)RenderAdapterForSession + 6),
                v14,
                *((unsigned int *)a4 + 12));
              v66 = *((_DWORD *)a4 + 13);
              v67 = *((_DWORD *)a4 + 12);
              WdLogGlobalForLineNumber = 936;
              DpiOpmLogSetLevel(v13, v67, v66);
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpjqq_EtwWriteTransfer(
              v58,
              v57,
              v59,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v56,
              (__int64)v89,
              v83,
              v13);
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, (unsigned int)v84);
          WdLogGlobalForLineNumber = 948;
        }
      }
      else
      {
        v82 = 0LL;
        v68 = 0;
        v81 = 4096;
        *(_OWORD *)v89 = 0LL;
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303131, (_DWORD)a4, a5, v9, a7, 4104, 4096);
        if ( (int)v13 >= 0 )
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_48;
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
          v68 = (char)v82;
          LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
          if ( (int)v13 >= 0 )
          {
            v72 = (__int64 (__fastcall *)(__int64, void *, char *, void **))*((_QWORD *)RenderAdapterForSession + 405);
            v73 = *((_QWORD *)RenderAdapterForSession + 6);
            *(_OWORD *)v89 = *(_OWORD *)(a4 + 24);
            LODWORD(v13) = v72(v73, v82, a4 + 8, v85);
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptpjq_EtwWriteTransfer(
            v70,
            v69,
            v71,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v68,
            (__int64)v89,
            v13);
        WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
        WdLogGlobalForLineNumber = 868;
      }
      goto LABEL_43;
    }
    v83 = 0LL;
    v21 = 0;
    v81 = 4096;
    LODWORD(v84) = -1;
    *(_OWORD *)v89 = 0LL;
    LODWORD(v13) = DpiPdoVerifyOpmParameters(2303127, (_DWORD)a4, a5, v9, a7, 4120, 4096);
    if ( (int)v13 >= 0 )
    {
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_48;
      v25 = *((_QWORD *)RenderAdapterForSession + 504);
      LODWORD(v84) = *((_DWORD *)a4 + 10);
      DxgkAcquireAdapterOpmI2CSync(v25);
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
      if ( (int)v13 >= 0 )
      {
        v26 = (__int64 (__fastcall *)(__int64, __int64, char *, void **))*((_QWORD *)RenderAdapterForSession + 404);
        v27 = *((_QWORD *)RenderAdapterForSession + 6);
        *(_OWORD *)v89 = *(_OWORD *)(a4 + 40);
        LODWORD(v13) = v26(v27, v83, a4 + 8, v85);
      }
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      v28 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
      if ( !v28 )
        v28 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
      if ( !v28 && *((_DWORD *)v85 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        {
LABEL_42:
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, (unsigned int)v84);
          WdLogGlobalForLineNumber = 810;
LABEL_43:
          v34 = v81;
LABEL_44:
          if ( (int)v13 >= 0 )
          {
            *v88 = v34;
            goto LABEL_46;
          }
LABEL_48:
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1009;
          goto LABEL_46;
        }
        v74 = &EventOPMGetConnectorType;
LABEL_156:
        McTemplateK0ptpqq_EtwWriteTransfer(
          v23,
          (_DWORD)v74,
          v24,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v83,
          *((_DWORD *)v85 + 10),
          v13);
        goto LABEL_42;
      }
      v29 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
      if ( !v29 )
        v29 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
      if ( !v29 && *((_DWORD *)v85 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_42;
        v74 = &EventOPMGetSupportedProtectionTypes;
        goto LABEL_156;
      }
      v30 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
      if ( !v30 )
        v30 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
      if ( !v30 && *((_DWORD *)a4 + 15) >= 4u && *((_DWORD *)v85 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptpqqq_EtwWriteTransfer(
            v23,
            (unsigned int)&EventOPMGetActualProtectionLevel,
            v24,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v83,
            *((_DWORD *)a4 + 16),
            *((_DWORD *)v85 + 10),
            v13);
        goto LABEL_42;
      }
      v21 = v83;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ptpjq_EtwWriteTransfer(
        v23,
        v22,
        v24,
        *((_QWORD *)RenderAdapterForSession + 6),
        v14,
        v21,
        (__int64)v89,
        v13);
    goto LABEL_42;
  }
LABEL_46:
  if ( v14 )
  {
    if ( *((_BYTE *)RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*((_QWORD *)RenderAdapterForSession + 3));
    ExReleaseResourceLite(*((PERESOURCE *)RenderAdapterForSession + 21));
    KeLeaveCriticalRegion();
    if ( v86 )
      goto LABEL_167;
  }
  return (unsigned int)v13;
}
