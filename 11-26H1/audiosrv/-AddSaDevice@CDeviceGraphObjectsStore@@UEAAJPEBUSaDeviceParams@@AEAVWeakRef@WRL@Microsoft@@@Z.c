/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180046D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180046EC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180046FE4 (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CDeviceGraphObjectsStore::AddSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        struct Microsoft::WRL::WeakRef *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 **v7; // rsi
  __int64 *v8; // r15
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 **v14; // [rsp+20h] [rbp-38h]
  __int64 v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = (__int64 **)((char *)this + 24 * *((int *)a2 + 2) + 96);
  v8 = *v7;
  v9 = v7[1];
  if ( v9 == v7[2] )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v7, *v7, a3);
  }
  else
  {
    v10 = *(_QWORD *)a3;
    if ( v8 == v9 )
    {
      *v9 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      ++v7[1];
    }
    else
    {
      v14 = v7;
      v15[0] = *(_QWORD *)a3;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *v9 = 0LL;
      *v9 = *(v9 - 1);
      *(v9 - 1) = 0LL;
      ++v7[1];
      std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v8, v9 - 1, v9);
      v12 = v15[0];
      v15[0] = 0LL;
      v13 = *v8;
      *v8 = v12;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v15);
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_315cf95596543faf822237737ca2f47c_Traceguids, 0LL, v14);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
