/*
 * XREFs of ??0CompliantHapticInterface@@QEAA@_N0@Z @ 0x180188570
 * Callers:
 *     ??0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z @ 0x18018863C (--0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z.c)
 *     ??0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18018CA68 (--0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV-$basic_string@GU-$char_t.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
CompliantHapticInterface *__fastcall CompliantHapticInterface::CompliantHapticInterface(CompliantHapticInterface *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  *(_QWORD *)this = -1LL;
  *((_QWORD *)this + 1) = 0LL;
  memset_0((char *)this + 16, 0, 0x40uLL);
  *((_BYTE *)this + 152) = 0;
  *((_BYTE *)this + 228) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  v2 = operator new(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 29) = v2;
  *((_BYTE *)this + 336) = 0;
  *((_BYTE *)this + 432) = 0;
  *((_WORD *)this + 220) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  v3 = operator new(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 56) = v3;
  *((_QWORD *)this + 65) = 0LL;
  return this;
}
