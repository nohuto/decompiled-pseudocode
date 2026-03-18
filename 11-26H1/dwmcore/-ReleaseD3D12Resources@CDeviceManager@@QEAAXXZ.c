/*
 * XREFs of ?ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ @ 0x180295650
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x1801DB624 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 *     ??R?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@Z @ 0x18029656C (--R-$default_delete@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV-$CAsyncTask@UD3D.c)
 */

void __fastcall CDeviceManager::ReleaseD3D12Resources(CDeviceManager *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  CDeviceManager *v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = this;
  v7 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v1 = qword_1803DE688;
  v2 = xmmword_1803DE690;
  while ( v1 != v2 )
  {
    v3 = *(_QWORD *)v1;
    v4 = *(_QWORD *)(*(_QWORD *)v1 + 1072LL);
    if ( v4 )
    {
      v6 = 0LL;
      CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(v4, &v6);
      v5 = *(_QWORD *)(v3 + 1072);
      *(_QWORD *)(v3 + 1072) = 0LL;
      if ( v5 )
        std::default_delete<CAsyncTask<CD3DDevice::D3D12Resources>>::operator()();
    }
    v1 += 16LL;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
}
