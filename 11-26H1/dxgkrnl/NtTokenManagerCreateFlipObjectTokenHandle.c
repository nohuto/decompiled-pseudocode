/*
 * XREFs of NtTokenManagerCreateFlipObjectTokenHandle @ 0x140023FB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x140023904 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x140024424 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1400254D4 (-ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectTokenHandle(
        void *a1,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct FlipPropertyItem *a6,
        void *a7,
        void *a8,
        void *a9)
{
  int ProducerTokenInitInfo; // esi
  PVOID v12; // rbx
  __int64 v13; // r12
  void *v14; // r13
  __int64 Win32kImportTable; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  PVOID v20; // rcx
  __int64 v21; // rax
  PVOID Object; // [rsp+50h] [rbp-128h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-120h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-118h] BYREF
  __int64 v26; // [rsp+68h] [rbp-110h] BYREF
  PVOID v27; // [rsp+70h] [rbp-108h]
  __int64 v28; // [rsp+78h] [rbp-100h]
  void *v29; // [rsp+80h] [rbp-F8h]
  struct FlipPropertyItem *v30; // [rsp+88h] [rbp-F0h]
  void *v31; // [rsp+90h] [rbp-E8h]
  void *v32; // [rsp+98h] [rbp-E0h]
  void *v33; // [rsp+A0h] [rbp-D8h]
  void *v34; // [rsp+A8h] [rbp-D0h]
  void *v35; // [rsp+B0h] [rbp-C8h]
  __int128 v36; // [rsp+B8h] [rbp-C0h] BYREF
  char v37; // [rsp+C8h] [rbp-B0h]
  __int64 Src; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-A0h]
  __int64 v40; // [rsp+E0h] [rbp-98h]
  __int64 v41; // [rsp+E8h] [rbp-90h]
  __int128 v42; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v43; // [rsp+100h] [rbp-78h]
  __int128 v44; // [rsp+110h] [rbp-68h]
  __int128 v45; // [rsp+120h] [rbp-58h] BYREF

  v31 = a1;
  v34 = a1;
  v30 = a6;
  v33 = a7;
  v32 = a8;
  v29 = a9;
  v35 = a9;
  ProducerTokenInitInfo = 0;
  Handle = 0LL;
  v12 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v36 = 0LL;
  v37 = 0;
  Src = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v13 = 0LL;
  v28 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  KeEnterCriticalRegion();
  if ( a7 && a2 )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, a2, 8uLL);
    v12 = Object;
    v27 = Object;
    if ( a3 )
    {
      v26 = 0LL;
      RtlCopyFromUser(&v26, a3, 8uLL);
      v13 = v26;
      v28 = v26;
    }
    v14 = v29;
  }
  else
  {
    ProducerTokenInitInfo = -1073741811;
    v14 = v29;
  }
  if ( ProducerTokenInitInfo >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    ProducerTokenInitInfo = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(Win32kImportTable + 504))(
                              0x80000000LL,
                              &v24);
    if ( ProducerTokenInitInfo >= 0 )
    {
      LOBYTE(v16) = a4 != 0;
      ProducerTokenInitInfo = FlipManagerCreateProducerTokenInitInfo(
                                v31,
                                (struct _LUID)v12,
                                v16,
                                v13,
                                a5,
                                v30,
                                (struct FlipManagerTokenInitInfo *)&v36);
      if ( ProducerTokenInitInfo >= 0 )
      {
        if ( v39 && !v37 )
          ProducerTokenInitInfo = -1073741811;
        if ( ProducerTokenInitInfo >= 0 )
        {
          if ( v40 )
          {
            *(_QWORD *)&v45 = *(_QWORD *)(v40 + 32);
            *((_QWORD *)&v45 + 1) = *(_QWORD *)(v40 + 48);
          }
          LODWORD(v42) = 48;
          *((_QWORD *)&v42 + 1) = 0LL;
          DWORD2(v43) = 0;
          *(_QWORD *)&v43 = 0LL;
          v44 = v24;
          Object = 0LL;
          LOBYTE(v17) = 1;
          ProducerTokenInitInfo = ObCreateObject(0LL, g_pDxgkCompositionObjectType, &v42, v17, 0LL, 160, 0, 0, &Object);
          if ( ProducerTokenInitInfo >= 0 )
          {
            CurrentProcess = PsGetCurrentProcess();
            ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
            *((_DWORD *)Object + 2) = ProcessSessionId;
            ProducerTokenInitInfo = ZwAllocateLocallyUniqueId((PLUID)Object + 3);
            v20 = Object;
            if ( ProducerTokenInitInfo < 0
              || (ProducerTokenInitInfo = FlipManagerTokenObject::ObjectInit(
                                            (struct DxgkCompositionObject *)Object,
                                            &v36,
                                            (struct IDxgkCompositionObject **)Object + 2),
                  v20 = Object,
                  ProducerTokenInitInfo < 0) )
            {
              ObfDereferenceObject(v20);
            }
            else
            {
              ProducerTokenInitInfo = ObInsertObject(Object, 0LL, 3u, 0, 0LL, &Handle);
            }
          }
          if ( ProducerTokenInitInfo >= 0 )
          {
            if ( v32 )
              RtlCopyToUser(v32, &Src, 8uLL);
            if ( v14 )
              RtlCopyToUser(v14, &v45, 0x10uLL);
            RtlCopyToUser(v33, &Handle, 8uLL);
            Handle = 0LL;
          }
        }
      }
    }
  }
  if ( v24 )
  {
    v21 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(unsigned __int64))(v21 + 624))(v24);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v36);
  return (unsigned int)ProducerTokenInitInfo;
}
