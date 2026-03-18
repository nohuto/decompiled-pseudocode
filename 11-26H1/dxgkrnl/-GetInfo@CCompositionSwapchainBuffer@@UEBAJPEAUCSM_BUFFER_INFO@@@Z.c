/*
 * XREFs of ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x140055BC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z @ 0x14006BDC8 (-FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::GetInfo(CCompositionSwapchainBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  int FlipObjectHandle; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  struct FlipManagerObject *v6; // rcx
  __int128 v7; // xmm1

  FlipObjectHandle = 0;
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  v6 = (struct FlipManagerObject *)*((_QWORD *)this + 89);
  if ( !IsEnabledDeviceUsageNoInline && !v6
    || (FlipObjectHandle = FlipManagerCreateFlipObjectHandle(v6, *((_QWORD *)this + 90), (void **)a2 + 145),
        FlipObjectHandle >= 0) )
  {
    *(_DWORD *)a2 = 3;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
    *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
    *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
    *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
    *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
    *((_OWORD *)a2 + 8) = *((_OWORD *)this + 10);
    v7 = *((_OWORD *)this + 11);
    *((_DWORD *)a2 + 40) = 0;
    *((_OWORD *)a2 + 9) = v7;
    *((_DWORD *)a2 + 41) = *((_DWORD *)this + 72);
    *((_QWORD *)a2 + 146) = *((_QWORD *)this + 91);
  }
  return (unsigned int)FlipObjectHandle;
}
