/*
 * XREFs of ??1CRadialGradientBrush@@UEAA@XZ @ 0x1800E12EC
 * Callers:
 *     ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x1800E12A0 (--_GCRadialGradientBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E147C (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CRadialGradientBrush::~CRadialGradientBrush(CRadialGradientBrush *this)
{
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>((char *)this + 272);
  CGradientBrush::~CGradientBrush(this);
}
