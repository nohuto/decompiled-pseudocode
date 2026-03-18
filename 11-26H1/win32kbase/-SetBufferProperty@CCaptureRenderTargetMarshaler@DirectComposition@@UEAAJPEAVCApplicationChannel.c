/*
 * XREFs of ?SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140245890
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 )
  {
    if ( a5 == 8 )
    {
      v10 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x100u;
      *(_QWORD *)(a1 + 60) = v10;
      goto LABEL_9;
    }
  }
  else if ( a3 == 12
         && (unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline()
         && a5 == 8 )
  {
    v9 = *a4;
    *(_DWORD *)(a1 + 16) |= 0x20000u;
    *(_QWORD *)(a1 + 144) = v9;
LABEL_9:
    *a6 = 1;
    return v6;
  }
  return (unsigned int)-1073741811;
}
