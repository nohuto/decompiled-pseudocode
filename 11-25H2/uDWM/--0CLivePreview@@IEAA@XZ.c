/*
 * XREFs of ??0CLivePreview@@IEAA@XZ @ 0x18008D844
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18008C6C4 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CLivePreview *__fastcall CLivePreview::CLivePreview(CLivePreview *this)
{
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d
  CLivePreview *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CLivePreview::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 264, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 296, v2, v3);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 328, v4, v5);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 360, v6, v7);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 126) = -1;
  *((_DWORD *)this + 127) = -1;
  result = this;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 122) = 3;
  *(_WORD *)((char *)this + 243) = 0;
  return result;
}
