/*
 * XREFs of ??0CInputSink@@QEAA@XZ @ 0x14009C254
 * Callers:
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14009BE0C (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

CInputSink *__fastcall CInputSink::CInputSink(CInputSink *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rax

  *((_QWORD *)this + 1) = 0LL;
  v2 = (_DWORD *)((char *)this + 88);
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)this = &CInputSink::`vftable';
  memset((char *)this + 88, 0, 0x40uLL);
  v3 = 4LL;
  do
  {
    *v2 = 1065353216;
    v2 += 5;
    --v3;
  }
  while ( v3 );
  return this;
}
