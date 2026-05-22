/*
 * XREFs of ??0GazeHidParser@@QEAA@XZ @ 0x180187798
 * Callers:
 *     ?CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800DC430 (-CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180069BE8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

GazeHidParser *__fastcall GazeHidParser::GazeHidParser(GazeHidParser *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  unsigned __int64 size_of; // rax
  _QWORD *v6; // rax
  _OWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF

  memset_0(v8, 0, sizeof(v8));
  v2 = v8[1];
  *(_OWORD *)this = v8[0];
  *((_QWORD *)this + 8) = 0LL;
  v3 = v8[2];
  *((_OWORD *)this + 1) = v2;
  v4 = v8[3];
  *((_OWORD *)this + 2) = v3;
  *((_OWORD *)this + 3) = v4;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 9) = v6;
  return this;
}
