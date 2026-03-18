/*
 * XREFs of ??0VIDMM_PHYSICAL_ADAPTER@@QEAA@PEAVVIDMM_GLOBAL@@GPEBUDXGK_PHYSICALADAPTERINFO@@PEBUDXGADAPTER_GPUMMUCAPS@@@Z @ 0x1400B39AC
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     ?VidMmReadPhysicalAdapterConfiguration@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400A6C3C (-VidMmReadPhysicalAdapterConfiguration@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 */

VIDMM_PHYSICAL_ADAPTER *__fastcall VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        __int16 a3,
        const struct DXGK_PHYSICALADAPTERINFO *a4,
        const struct DXGADAPTER_GPUMMUCAPS *a5)
{
  char v7; // dl
  char v8; // cl
  char v9; // al
  bool v10; // r9
  char v11; // al
  char v12; // cl
  char v13; // r8

  *((_WORD *)this + 36) = a3;
  *(_QWORD *)this = &VIDMM_PHYSICAL_ADAPTER::`vftable';
  *((_QWORD *)this + 70) = a5;
  *((_QWORD *)this + 7) = a2;
  v7 = 1;
  *((_QWORD *)this + 8) = a4;
  *((_QWORD *)this + 221) = (char *)this + 1760;
  *((_QWORD *)this + 220) = (char *)this + 1760;
  *((_QWORD *)this + 223) = (char *)this + 1776;
  *((_QWORD *)this + 222) = (char *)this + 1776;
  *((_QWORD *)this + 225) = (char *)this + 1792;
  *((_QWORD *)this + 224) = (char *)this + 1792;
  *((_QWORD *)this + 227) = (char *)this + 1808;
  *((_QWORD *)this + 226) = (char *)this + 1808;
  *((_DWORD *)this + 456) = 0;
  *((_QWORD *)this + 74) = (char *)this + 584;
  *((_QWORD *)this + 73) = (char *)this + 584;
  *((_QWORD *)this + 76) = (char *)this + 600;
  *((_QWORD *)this + 75) = (char *)this + 600;
  v8 = *((_BYTE *)this + 556) ^ (*((_BYTE *)this + 556) ^ (8 * *((_BYTE *)a4 + 16))) & 8;
  *((_BYTE *)this + 556) = v8;
  v9 = *((_DWORD *)a4 + 4) >> 1;
  v10 = (*((_DWORD *)a4 + 4) & 2) != 0;
  v11 = v8 ^ (v8 ^ (4 * v9)) & 4;
  *((_BYTE *)this + 556) = v11;
  v12 = v11 ^ (v11 ^ (16 * (*((_DWORD *)a4 + 4) >> 6))) & 0x10;
  *((_BYTE *)this + 556) = v12;
  v13 = v12 ^ (v12 ^ (32 * (*((_DWORD *)a4 + 4) >> 7))) & 0x20;
  if ( (v13 & 0x30) == 0 )
    v7 = v10;
  *((_BYTE *)this + 556) = v13 & 0xBF | (v7 << 6);
  VidMmReadPhysicalAdapterConfiguration(this);
  return this;
}
