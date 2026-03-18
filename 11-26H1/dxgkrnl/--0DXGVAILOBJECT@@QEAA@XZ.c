/*
 * XREFs of ??0DXGVAILOBJECT@@QEAA@XZ @ 0x14020C890
 * Callers:
 *     ?ObjectInit@DXGVAILOBJECT@@SAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14020E6A0 (-ObjectInit@DXGVAILOBJECT@@SAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

DXGVAILOBJECT *__fastcall DXGVAILOBJECT::DXGVAILOBJECT(DXGVAILOBJECT *this)
{
  *(_QWORD *)this = &DXGVAILOBJECT::`vftable';
  *((_QWORD *)this + 4) = &DXGVAIL::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = -1;
  *((_DWORD *)this + 20) = 76;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = -1;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 11);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 11);
  return this;
}
