/*
 * XREFs of ??0CCpuClipAntialiasSink@@AEAA@XZ @ 0x1800E8974
 * Callers:
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800E7154 (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

CCpuClipAntialiasSink *__fastcall CCpuClipAntialiasSink::CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rsi

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CCpuClipAntialiasSink::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = operator new(0x30uLL);
  v3 = (_QWORD *)((char *)this + 40);
  v4 = 2LL;
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 2) = v2;
  *((_QWORD *)this + 4) = 0LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v3++);
    --v4;
  }
  while ( v4 );
  *((_BYTE *)this + 56) = 0;
  return this;
}
