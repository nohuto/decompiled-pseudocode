/*
 * XREFs of NtDCompositionSynchronize @ 0x1400A65B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x1400A67C4 (-Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x1400A6900 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionSynchronize(int a1, void *a2)
{
  struct DirectComposition::CBatch **v4; // r14
  struct DirectComposition::CBatch **v5; // rsi
  __int64 v6; // rdi
  struct DirectComposition::CProcessData *v7; // rax
  struct DirectComposition::CProcessData *v8; // r15
  _QWORD *v9; // rax
  signed int v10; // ebx
  __int64 v11; // rcx
  __int64 DCompSessionState; // rax
  _DWORD Buffer[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 Src; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = DirectComposition::CProcessData::Current();
  v8 = v7;
  if ( v7 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v7 + 1));
    Buffer[0] = a1;
    Buffer[1] = 0;
    v15 = 0LL;
    v9 = RtlLookupElementGenericTable(*(PRTL_GENERIC_TABLE *)v8, Buffer);
    if ( v9 )
      v6 = v9[1];
    v10 = v6 == 0 ? 0xC0000022 : 0;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    ExReleaseResourceLite(*((PERESOURCE *)v8 + 1));
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = -1073741823;
  }
  if ( v6 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(v6 + 32));
    v5 = (struct DirectComposition::CBatch **)v6;
  }
  if ( v10 >= 0 )
  {
    if ( (*((unsigned int (__fastcall **)(struct DirectComposition::CBatch **))*v5 + 1))(v5) == 1 )
    {
      v4 = v5;
    }
    else
    {
      v10 = -1073741811;
      (*(void (__fastcall **)(struct DirectComposition::CBatch **))*v5)(v5);
    }
    if ( v10 >= 0 )
    {
      DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)v4, 0);
      DCompSessionState = W32GetDCompSessionState(v11);
      v10 = DirectComposition::CSynchronizationManager::Synchronize(
              *(DirectComposition::CSynchronizationManager **)(DCompSessionState + 24),
              v4[22]);
      if ( v10 >= 0 )
        Src = *(_QWORD *)(*((_QWORD *)v4[22] + 5) + 8LL);
      (*(void (__fastcall **)(struct DirectComposition::CBatch **))*v4)(v4);
      if ( v10 >= 0 )
      {
        if ( a2 )
          RtlCopyToUser(a2, &Src, 8uLL);
        else
          return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v10;
}
