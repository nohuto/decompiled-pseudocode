/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180044B60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180045A20 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180046EC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180046FE4 (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(__int64 **this, struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // r12d
  __int64 *v6; // r15
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12[6]; // [rsp+28h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+70h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 4);
  v13 = (struct _RTL_CRITICAL_SECTION *)(this + 4);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  v5 = 0;
  CDeviceGraphObjectsStore::RemoveStaleObjects((CDeviceGraphObjectsStore *)this);
  try
  {
    v6 = this[9];
    v7 = this[10];
    if ( v7 == this[11] )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(this + 9, this[9], a2);
    }
    else
    {
      v8 = *(_QWORD *)a2;
      if ( v6 == v7 )
      {
        *v7 = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        ++this[10];
      }
      else
      {
        v12[0] = *(_QWORD *)a2;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        *v7 = 0LL;
        *v7 = *(v7 - 1);
        *(v7 - 1) = 0LL;
        ++this[10];
        std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v6, v7 - 1, v7);
        v10 = v12[0];
        v12[0] = 0LL;
        v11 = *v6;
        *v6 = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v12);
      }
    }
  }
  catch ( std::bad_alloc )
  {
    v5 = -2147024882;
    v4 = v13;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
