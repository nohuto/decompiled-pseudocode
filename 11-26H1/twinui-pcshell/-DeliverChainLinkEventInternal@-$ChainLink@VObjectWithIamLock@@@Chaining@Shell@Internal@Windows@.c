/*
 * XREFs of ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1802FCEC4
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1802FE6FC (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1802FE6D4 (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
        __int64 a1,
        int a2)
{
  int v3; // edx
  char v4; // si
  __int64 *v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v9; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 && (v3 = a2 - 1) != 0 )
  {
    if ( v3 == 1 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 88LL))(a1, 0LL, 2LL);
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v8 = 0LL;
      ObjectWithIamLock::LockExclusive(a1, &v9);
      if ( *(_BYTE *)(a1 + 81) )
      {
        if ( !v4 )
          break;
      }
      v4 = 1;
      *(_BYTE *)(a1 + 81) = 1;
      if ( !*(_BYTE *)(a1 + 80) )
        goto LABEL_15;
      *(_BYTE *)(a1 + 80) = 0;
      if ( *(_QWORD *)(a1 + 72) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v8, (_QWORD *)(a1 + 72));
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 72));
        *(_BYTE *)(a1 + 80) = *(_QWORD *)(a1 + 56) != 0LL;
        v6 = 1;
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 56) )
          goto LABEL_15;
        v5 = Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 72), (_QWORD *)(a1 + 56));
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v8, v5);
        v6 = 0;
      }
      v7 = v8;
      if ( !v8 )
      {
LABEL_15:
        *(_BYTE *)(a1 + 81) = 0;
        break;
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v7, v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  }
}
