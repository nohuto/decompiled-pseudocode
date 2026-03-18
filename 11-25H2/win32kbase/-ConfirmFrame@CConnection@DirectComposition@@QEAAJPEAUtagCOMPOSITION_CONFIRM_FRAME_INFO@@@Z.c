/*
 * XREFs of ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x140197EF0
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1400B6700 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x140058A20 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?UpdateStats@CConnection@DirectComposition@@AEAAXPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1400B4E44 (-UpdateStats@CConnection@DirectComposition@@AEAAXPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140227FAC (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::ConfirmFrame(
        DirectComposition::CConnection *this,
        struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // esi
  struct _ERESOURCE *v8; // rdi
  DirectComposition::CBatch *v9; // rcx
  DirectComposition::CBatch *v10; // rdi
  __int64 v11; // r15
  struct _ERESOURCE *v12; // rdi
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
    (*(void (__fastcall **)(_QWORD, struct tagCOMPOSITION_CONFIRM_FRAME_INFO *))(**((_QWORD **)this + 37) + 256LL))(
      *((_QWORD *)this + 37),
      a2);
  v4 = *((_QWORD *)this + 24);
  v5 = 0LL;
  v6 = *(_QWORD *)a2;
  v7 = -1073741275;
  v18 = 0LL;
  if ( v4 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, v6, &v18);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  DirectComposition::CConnection::UpdateStats(this, a2);
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v8, 1u);
  v9 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v9 )
  {
    do
    {
      v10 = *(DirectComposition::CBatch **)v9;
      DirectComposition::CBatch::ReturnToApplication(v9, 1);
      v9 = v10;
    }
    while ( v10 );
  }
  v11 = *(_QWORD *)a2;
  v12 = (struct _ERESOURCE *)*((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v12, 1u);
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 6);
    if ( v5 >= v13 )
      break;
    v14 = (_QWORD *)(*((_QWORD *)this + 3) + v5 * *((_QWORD *)this + 7));
    while ( 1 )
    {
      v15 = v5++;
      if ( *v14 )
        break;
      v14 = (_QWORD *)((char *)v14 + *((_QWORD *)this + 7));
      if ( v5 >= v13 )
        goto LABEL_13;
    }
    _mm_lfence();
    v17 = *(_QWORD *)(*((_QWORD *)this + 7) * v15 + *((_QWORD *)this + 3));
    if ( !v17 )
      break;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v11);
  }
LABEL_13:
  ExReleaseResourceLite(*((PERESOURCE *)this + 10));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
