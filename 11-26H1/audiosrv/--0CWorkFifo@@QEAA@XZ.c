/*
 * XREFs of ??0CWorkFifo@@QEAA@XZ @ 0x1801245E4
 * Callers:
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180124478 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x1800D6FBC (--0-$atomic@_N@std@@QEAA@_N@Z.c)
 */

CWorkFifo *__fastcall CWorkFifo::CWorkFifo(CWorkFifo *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rax
  CWorkFifo *result; // rax

  v1 = (_QWORD *)((char *)this + 96);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  v3[1] = 0LL;
  *v1 = v3;
  *v3 = v1;
  std::atomic<bool>::atomic<bool>((_BYTE *)this + 136);
  std::atomic<bool>::atomic<bool>((_BYTE *)this + 137);
  *((_QWORD *)this + 18) = 258LL;
  *(_OWORD *)((char *)this + 168) = 0LL;
  result = this;
  *(_OWORD *)((char *)this + 184) = 0LL;
  *(_OWORD *)((char *)this + 200) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 54) = -1;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 6) = 3;
  *((_DWORD *)this + 21) = 1;
  *((_DWORD *)this + 22) = 72;
  return result;
}
