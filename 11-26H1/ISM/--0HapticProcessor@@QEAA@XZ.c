/*
 * XREFs of ??0HapticProcessor@@QEAA@XZ @ 0x1800C7F04
 * Callers:
 *     ??$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@@Z @ 0x1800C7A74 (--$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18002D1A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18007686C (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
HapticProcessor *__fastcall HapticProcessor::HapticProcessor(HapticProcessor *this)
{
  unsigned __int64 size_of; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(this);
  *(_QWORD *)this = &HapticProcessor::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  size_of = std::_Get_size_of_n<72>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 2) = v3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v4 = operator new(0x50uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 4) = v4;
  return this;
}
