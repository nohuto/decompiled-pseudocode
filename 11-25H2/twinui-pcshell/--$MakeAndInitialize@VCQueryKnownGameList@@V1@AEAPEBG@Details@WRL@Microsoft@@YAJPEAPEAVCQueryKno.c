/*
 * XREFs of ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x1801413BC
 * Callers:
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x1801412CC (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x180033728 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CQueryKnownGameList@@QEAA@XZ @ 0x180141490 (--0CQueryKnownGameList@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CQueryKnownGameList,CQueryKnownGameList,unsigned short const * &>(
        CQueryKnownGameList **a1,
        const unsigned __int16 **a2)
{
  void *v4; // rax
  CQueryKnownGameList *v5; // rbx
  int v6; // edi
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CQueryKnownGameList *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x328uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (CQueryKnownGameList *)v4;
  if ( v4 )
  {
    v5 = CQueryKnownGameList::CQueryKnownGameList((CQueryKnownGameList *)v4);
    v9 = v5;
    v8 = 0LL;
    v6 = CQueryKnownGameList::RuntimeClassInitialize(v5, *a2);
    if ( v6 < 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(CQueryKnownGameList *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      if ( v5 )
        (*(void (__fastcall **)(CQueryKnownGameList *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      if ( v5 )
        (*(void (__fastcall **)(CQueryKnownGameList *))(*(_QWORD *)v5 + 16LL))(v5);
      return 0;
    }
    return (unsigned int)v6;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
    return 2147942414LL;
  }
}
