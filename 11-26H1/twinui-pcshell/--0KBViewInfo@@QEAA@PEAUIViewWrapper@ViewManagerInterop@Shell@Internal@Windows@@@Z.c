/*
 * XREFs of ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180136608
 * Callers:
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180136344 (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x180136944 (--0-$atomic@_N@std@@QEAA@_N@Z.c)
 *     ??0?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@QEAA@XZ @ 0x180136B94 (--0-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@I@2@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
KBViewInfo *__fastcall KBViewInfo::KBViewInfo(
        KBViewInfo *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  std::atomic<bool>::atomic<bool>((char *)this + 32, 0LL);
  *((_BYTE *)this + 33) = 0;
  LOBYTE(v4) = 1;
  std::atomic<bool>::atomic<bool>((char *)this + 34, v4);
  *((_BYTE *)this + 35) = 0;
  std::unordered_set<unsigned int>::unordered_set<unsigned int>((char *)this + 40);
  *((_DWORD *)this + 26) = -1;
  *((_QWORD *)this + 14) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this, (__int64)a2);
  *((_QWORD *)this + 26) = GetTickCount64();
  return this;
}
