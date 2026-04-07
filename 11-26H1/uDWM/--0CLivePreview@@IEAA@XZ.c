/*
 * XREFs of ??0CLivePreview@@IEAA@XZ @ 0x18007C558
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18007B3EC (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x1800211A8 (--0CCanvasVisual@@IEAA@XZ.c)
 */

CLivePreview *__fastcall CLivePreview::CLivePreview(CLivePreview *this)
{
  __int64 v1; // r11
  CLivePreview *result; // rax

  CCanvasVisual::CCanvasVisual(this);
  *(_QWORD *)v1 = &CLivePreview::`vftable';
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_DWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_DWORD *)(v1 + 320) = 0;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_DWORD *)(v1 + 424) = -1;
  *(_DWORD *)(v1 + 428) = -1;
  result = (CLivePreview *)v1;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_DWORD *)(v1 + 408) = 3;
  *(_WORD *)(v1 + 187) = 0;
  return result;
}
