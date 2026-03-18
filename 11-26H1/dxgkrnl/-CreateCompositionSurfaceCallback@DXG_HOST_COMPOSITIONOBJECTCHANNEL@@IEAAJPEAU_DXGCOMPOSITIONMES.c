/*
 * XREFs of ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401BE634
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401BFD70 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x14003DCE4 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *a3)
{
  struct CompositionSurfaceObject *v5; // rdi
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbx
  HANDLE v10; // rdi
  __int64 CurrentProcess; // rax
  int v12; // eax
  struct _KPROCESS *v13; // rdx
  void **v15; // [rsp+20h] [rbp-89h]
  struct CompositionSurfaceObject *v16; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v18; // [rsp+60h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES v19; // [rsp+68h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF
  char v21; // [rsp+C8h] [rbp+1Fh]

  v19.SecurityDescriptor = (PVOID)*((_QWORD *)this + 6);
  v18 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v19.Length = 48LL;
  v16 = 0LL;
  v5 = 0LL;
  memset(&v19.RootDirectory, 0, 24);
  v19.SecurityQualityOfService = 0LL;
  v15 = &v18;
  v6 = CompositionSurfaceObject::Create(0LL, &v19);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 227;
    goto LABEL_11;
  }
  v6 = CompositionSurfaceObject::ResolveHandle(v18, 2u, v7, &v16);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 242;
LABEL_7:
    v5 = v16;
    goto LABEL_11;
  }
  v9 = *((_QWORD *)this + 4);
  v10 = v18;
  CurrentProcess = PsGetCurrentProcess(v8);
  LODWORD(v15) = 0;
  v6 = ObDuplicateObject(CurrentProcess, v10, v9, &Handle, v15, 0, 6, 1);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 258;
    goto LABEL_7;
  }
  v5 = v16;
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct CompositionSurfaceObject *, __int64))(**((_QWORD **)this + 1) + 56LL))(
          *((_QWORD *)this + 1),
          v16,
          17LL);
  if ( v12 )
  {
    *((_DWORD *)a3 + 3) = v12;
    v5 = 0LL;
    *((_QWORD *)a3 + 2) = Handle;
    goto LABEL_13;
  }
  v6 = -1073741801;
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 277;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"AllocateHandle failed. Returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  if ( Handle )
  {
    v13 = (struct _KPROCESS *)*((_QWORD *)this + 4);
    v21 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v13);
    ObCloseHandle(Handle, 1);
    CPROCESSATTACHHELPER::Detach(&ApcState);
  }
LABEL_13:
  if ( v18 )
    ObCloseHandle(v18, 1);
  if ( v5 )
    DxgkCompositionObject::Release(v5);
  *((_DWORD *)a3 + 1) = v6;
  return (unsigned int)v6;
}
