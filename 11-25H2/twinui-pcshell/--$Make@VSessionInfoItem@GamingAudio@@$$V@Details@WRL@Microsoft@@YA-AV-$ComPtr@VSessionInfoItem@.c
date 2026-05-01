/*
 * XREFs of ??$Make@VSessionInfoItem@GamingAudio@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSessionInfoItem@GamingAudio@@@12@XZ @ 0x180357518
 * Callers:
 *     ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x1803587E8 (-GetSessionInfo@AppList@GamingAudio@@AEAAXV-$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SessionInfoItem@GamingAudio@@QEAA@XZ @ 0x1803579A4 (--0SessionInfoItem@GamingAudio@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::Details::Make<GamingAudio::SessionInfoItem,>(__int64 *a1)
{
  void *v2; // rax
  __int64 v3; // rdi
  void *v5; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x308uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v2;
  if ( v2 )
  {
    v3 = GamingAudio::SessionInfoItem::SessionInfoItem((GamingAudio::SessionInfoItem *)v2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
    v5 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v5);
  return a1;
}
