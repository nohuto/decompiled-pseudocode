/*
 * XREFs of ??0?$atomic@P6AXPEAX@Z@std@@QEAA@Q6AXPEAX@Z@Z @ 0x180191590
 * Callers:
 *     ??0cancellable_promise@winrt@@QEAA@XZ @ 0x18019156C (--0cancellable_promise@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$?0PEAVICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@?$__compressed_pair@PEAVICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@$$QEAPEAVICortanaWNFService@Cortana@TwinUI@@$$QEAU?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@1@@Z @ 0x1800F6E58 (--$-0PEAVICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortana@TwinUI.c)
 */

__int64 __fastcall std::atomic<void (*)(void *)>::atomic<void (*)(void *)>(_QWORD *a1)
{
  __int64 v1; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0LL;
  wistd::__compressed_pair<TwinUI::Cortana::ICortanaWNFService *,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::__compressed_pair<TwinUI::Cortana::ICortanaWNFService *,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
    a1,
    v3);
  return v1;
}
