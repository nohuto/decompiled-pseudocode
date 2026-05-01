/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180181868
 * Callers:
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180308E90 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v6; // rbx
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 **); // rdx
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 **); // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 528);
  v12 = (RTL_SRWLOCK *)(a1 + 528);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 528));
  if ( a3 )
  {
    if ( a3 == 1 && a2 == *(_QWORD *)(a1 + 568) )
    {
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
      return 0LL;
    }
    goto LABEL_4;
  }
  if ( a2 != *(_QWORD *)(a1 + 568) || (*(_BYTE *)(a1 + 576) & 1) != 0 )
  {
LABEL_4:
    v7 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 **))(a1 + 568);
    if ( v7 && v7 != (void (__fastcall ***)(_QWORD, GUID *, __int64 **))a2 )
      CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v7, 9u, a2);
    v8 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 **))(a1 + 568);
    if ( v8 != (void (__fastcall ***)(_QWORD, GUID *, __int64 **))a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 568) = a2;
      v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 **))a2;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2);
        v8 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 **))(a1 + 568);
      }
    }
    v10 = *(_DWORD *)(a1 + 576) | 1;
    if ( a3 != 1 )
      v10 = *(_DWORD *)(a1 + 576) & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 576) = v10;
    if ( v8 )
      CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v8, 8 - (a3 != 1), 0LL);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return 0LL;
}
