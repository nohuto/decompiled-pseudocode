/*
 * XREFs of ?GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x1802215F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::GetViewForAppUserModelId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rdi
  struct IApplicationView *v7; // rbx
  char *i; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  LPCWCH lpString2; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  struct IApplicationView *v16; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v17; // [rsp+90h] [rbp+40h]

  v6 = this + 49;
  v17 = this + 49;
  AcquireSRWLockShared(this + 49);
  *a3 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  for ( i = 0LL; !v7 && i < this[51].Ptr; ++i )
  {
    lpString2 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v9 = (__int64 *)*((_QWORD *)this[50].Ptr + (_QWORD)i);
    v10 = *v9;
    v14 = -1LL;
    v15 = -1LL;
    if ( (*(int (__fastcall **)(__int64 *, LPCWCH *))(v10 + 136))(v9, &lpString2) >= 0
      && CompareStringOrdinal(a2, -1, lpString2, -1, 1) == 2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v16, (_QWORD *)this[50].Ptr + (_QWORD)i);
      v7 = v16;
    }
    if ( lpString2 )
      CoTaskMemFree((LPVOID)lpString2);
  }
  *a3 = v7;
  v11 = v7 == 0LL ? 0x8002802B : 0;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v11;
}
