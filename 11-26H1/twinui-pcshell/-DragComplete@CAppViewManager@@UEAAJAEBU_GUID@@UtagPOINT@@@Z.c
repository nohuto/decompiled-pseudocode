/*
 * XREFs of ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F1500
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F1660 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppViewManager::DragComplete(CAppViewManager *this, const struct _GUID *a2, struct tagPOINT a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, const struct _GUID *, __int64 *); // rdi
  RTL_SRWLOCK *v12[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  CIAMGlobals::AcquireExclusive((__int64)this, v12);
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 16) + 48LL))(
         *((_QWORD *)this + 16),
         a2,
         &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1105LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v12);
    goto LABEL_14;
  }
  v9 = *((_QWORD *)this + 16);
  v10 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int64 *))(*(_QWORD *)v9 + 56LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v6 = v10(v9, a2, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1106LL;
    goto LABEL_10;
  }
  if ( (v14 & 2) == 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct tagPOINT))(**((_QWORD **)this + 16) + 80LL))(
           *((_QWORD *)this + 16),
           a2,
           a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1112LL;
      goto LABEL_10;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 16) + 40LL))(
           *((_QWORD *)this + 16),
           a2,
           1LL,
           1LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1113LL;
      goto LABEL_10;
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v12);
  if ( (v14 & 2) != 0 )
    v7 = CAppViewManager::DragCompleteWorker((CAppViewManager *)((char *)this - 56), a2, a3);
  else
    v7 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v7;
}
