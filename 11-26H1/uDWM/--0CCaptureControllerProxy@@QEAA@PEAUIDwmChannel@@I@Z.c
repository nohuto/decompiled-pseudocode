/*
 * XREFs of ??0CCaptureControllerProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x18009BDCC
 * Callers:
 *     ??$CreateFromSharedHandle@VCCaptureControllerProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A7B78 (--$CreateFromSharedHandle@VCCaptureControllerProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEA.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CCaptureControllerProxy *__fastcall CCaptureControllerProxy::CCaptureControllerProxy(
        CCaptureControllerProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CCaptureControllerProxy *v3; // rcx
  CCaptureControllerProxy *result; // rax

  CResourceProxy::CResourceProxy(this, a2, a3, 2LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
