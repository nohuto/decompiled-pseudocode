/*
 * XREFs of EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1402841D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x140044C70 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x140154510 (TransformVectorWithInputTargetPrecedence.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x140277050 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 */

struct tagPOINT __fastcall EditionPhysicalToLogicalDPIPointWithInputDestHint(
        struct tagPOINT *a1,
        struct tagPOINT a2,
        const struct _SUBPIXELS *a3,
        __int64 a4)
{
  const struct tagWND *v6; // rbx
  int v7; // eax
  const struct _SUBPIXELS *v8; // r8
  struct tagPOINT result; // rax
  struct tagPOINT v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( *(_DWORD *)(a4 + 92) != 2 || (v6 = *(const struct tagWND **)(a4 + 80)) == 0LL )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 3502);
    goto LABEL_8;
  }
  v7 = Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline();
  v8 = a3;
  if ( v7 )
    goto LABEL_6;
  if ( !(unsigned int)TransformVectorWithInputTargetPrecedence(v6, (int)&v10, (int)a3) )
  {
    v8 = a3;
LABEL_6:
    PhysicalToLogicalDPIPointWithHitTest(&v10, &v10, v8, v6);
  }
LABEL_8:
  result = v10;
  *a1 = v10;
  return result;
}
