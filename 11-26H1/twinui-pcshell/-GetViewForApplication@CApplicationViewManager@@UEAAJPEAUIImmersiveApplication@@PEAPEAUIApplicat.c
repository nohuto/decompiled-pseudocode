/*
 * XREFs of ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1801403E0
 * Callers:
 *     ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1801402A0 (-ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@.c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::operator() @ 0x1803082E4 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationViewManager::GetViewForApplication(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rdi
  struct IApplicationView *v7; // rbx
  PVOID i; // rsi
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD *Ptr; // rax
  struct IApplicationView *v14; // r14
  __int64 v15; // rcx
  int v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+80h] [rbp+50h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  v6 = this + 49;
  AcquireSRWLockShared(this + 49);
  *a3 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; !v7 && i < this[51].Ptr; i = (char *)i + 1 )
  {
    v18 = 0LL;
    v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[50].Ptr + (_QWORD)i);
    if ( (**v9)(v9, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v18) >= 0 )
    {
      v17 = 0LL;
      v16 = 0;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v17) >= 0
        && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v17 + 104LL))(
             v17,
             a2,
             &v16) >= 0 )
      {
        if ( v16 )
        {
          Ptr = this[50].Ptr;
          v14 = (struct IApplicationView *)Ptr[(_QWORD)i];
          if ( v14 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(Ptr[(_QWORD)i]);
            v7 = v14;
          }
        }
      }
      v15 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  *a3 = v7;
  v11 = v7 == 0LL ? 0x8002802B : 0;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v11;
}
