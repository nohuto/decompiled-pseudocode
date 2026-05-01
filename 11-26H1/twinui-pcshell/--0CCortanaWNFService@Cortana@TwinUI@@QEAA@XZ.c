/*
 * XREFs of ??0CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x1803D7D30
 * Callers:
 *     ??$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@XZ @ 0x1803C6CB4 (--$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VCCortanaW.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
TwinUI::Cortana::CCortanaWNFService *__fastcall TwinUI::Cortana::CCortanaWNFService::CCortanaWNFService(
        TwinUI::Cortana::CCortanaWNFService *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx

  *(_QWORD *)this = &TwinUI::Cortana::CCortanaWNFService::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = 0LL;
  v2[1] = 0LL;
  *((_BYTE *)v2 + 16) = 0;
  std::wstring::wstring((__int64)(v2 + 3));
  *((_QWORD *)this + 8) = v3;
  return this;
}
