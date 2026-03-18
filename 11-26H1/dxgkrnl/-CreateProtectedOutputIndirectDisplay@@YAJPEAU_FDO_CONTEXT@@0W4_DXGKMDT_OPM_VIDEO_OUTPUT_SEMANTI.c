/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140091690
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x140051678 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1401AA1AC (DxgkOpmGetRedirectionInfo.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403DF030 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403EA9FC (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkOpmCreateHandle @ 0x14040A220 (DxgkOpmCreateHandle.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        void **a6)
{
  bool v6; // cf
  __int64 v10; // r14
  int RedirectionInfo; // ebx
  void *v12; // rcx
  int v13; // eax
  int v14; // eax
  void *v16; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+70h] [rbp-19h]
  int v20; // [rsp+78h] [rbp-11h]

  v6 = *((_DWORD *)a1 + 788) < 2u;
  v10 = a4;
  v16 = 0LL;
  v17 = 0LL;
  if ( !v6 )
  {
    RedirectionInfo = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
    if ( RedirectionInfo < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 77;
      return (unsigned int)RedirectionInfo;
    }
    v12 = (void *)*((_QWORD *)a2 + 504);
    memset(v18, 0, sizeof(v18));
    v19 = 0LL;
    v20 = 0;
    RedirectionInfo = DxgkOpmGetRedirectionInfo(v12, v10, &v17);
    DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
    if ( RedirectionInfo < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 88;
      return (unsigned int)RedirectionInfo;
    }
    if ( !v17 )
    {
      RedirectionInfo = -1073741637;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 96;
      return (unsigned int)RedirectionInfo;
    }
    RedirectionInfo = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
    if ( RedirectionInfo < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 106;
      return (unsigned int)RedirectionInfo;
    }
    DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 504));
    DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 504), 1LL);
    v13 = *((_DWORD *)a1 + 788);
    if ( v13 == 2 )
    {
      v14 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, _DWORD, void **))a1 + 409))(
              *((_QWORD *)a1 + 6),
              a3,
              v17,
              v18,
              v10,
              &v16);
    }
    else
    {
      if ( v13 != 3 )
      {
        RedirectionInfo = -1073741637;
LABEL_20:
        DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 504));
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
        return (unsigned int)RedirectionInfo;
      }
      v14 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, __int64, int, void **))a1 + 408))(
              *((_QWORD *)a1 + 6),
              a3,
              v17,
              v18,
              v10,
              15,
              &v16);
    }
    RedirectionInfo = v14;
    if ( v14 >= 0 )
    {
      RedirectionInfo = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 504));
      if ( RedirectionInfo < 0 )
        (*((void (__fastcall **)(_QWORD, void *))a1 + 407))(*((_QWORD *)a1 + 6), v16);
      else
        *a6 = v16;
    }
    goto LABEL_20;
  }
  RedirectionInfo = -1073741637;
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 67;
  return (unsigned int)RedirectionInfo;
}
