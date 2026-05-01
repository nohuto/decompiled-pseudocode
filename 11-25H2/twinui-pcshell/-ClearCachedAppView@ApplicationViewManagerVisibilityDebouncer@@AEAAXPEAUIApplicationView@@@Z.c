/*
 * XREFs of ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18003A068
 * Callers:
 *     ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180183F30 (-HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbx
  void *v5; // rsi
  char *i; // r15
  struct IApplicationView *v7; // rcx
  int v8; // r14d
  int v9; // r14d
  int v10; // eax
  _BYTE *Ptr; // r8
  struct IApplicationView *v12; // [rsp+80h] [rbp+40h]
  __int64 v13; // [rsp+90h] [rbp+50h] BYREF
  __int64 v14; // [rsp+98h] [rbp+58h] BYREF

  v4 = this + 23;
  AcquireSRWLockExclusive(this + 23);
  v5 = 0LL;
  for ( i = 0LL; i < this[25].Ptr; ++i )
  {
    v7 = (struct IApplicationView *)*((_QWORD *)this[24].Ptr + (_QWORD)i);
    v12 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = v12;
    }
    if ( v7 && a2 )
    {
      if ( v7 == a2 )
      {
        v9 = 0;
      }
      else
      {
        v14 = 0LL;
        v13 = 0LL;
        if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v7)(
               v7,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v14) < 0 )
          goto LABEL_13;
        v8 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
               a2,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v13);
        if ( v8 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v8 >= 0 && v14 == v13 )
          v9 = 0;
        else
LABEL_13:
          v9 = 1;
        v7 = v12;
      }
    }
    else
    {
      v9 = 1;
    }
    if ( v7 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( !v9 )
    {
      v5 = i;
      v10 = 0;
      goto LABEL_19;
    }
  }
  v10 = -2147319765;
LABEL_19:
  if ( v10 >= 0 && v5 != (void *)-1LL && v5 < this[25].Ptr )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this[24].Ptr + 8 * (_QWORD)v5);
    Ptr = this[25].Ptr;
    if ( v5 != Ptr - 1 )
      memmove_0(
        (char *)this[24].Ptr + 8 * (_QWORD)v5,
        (char *)this[24].Ptr + 8 * (_QWORD)v5 + 8,
        8 * (Ptr - (_BYTE *)v5) - 8);
    --this[25].Ptr;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
