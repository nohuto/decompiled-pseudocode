/*
 * XREFs of ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA8D0
 * Callers:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9F58 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140211228 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x140211310 (-InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@.c)
 * Callees:
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 */

struct tagPOINT __fastcall CPTPProcessor::TransformTPScreenToHimetric(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  LONG y; // rbx^4
  __int64 v7; // [rsp+30h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 21);
  v4 = *((_QWORD *)a1 + 20);
  y = a2.y;
  LODWORD(v7) = EngMulDiv(a2.x - v4, *((_DWORD *)a1 + 46), v2 - v4);
  HIDWORD(v7) = EngMulDiv(y - HIDWORD(v4), *((_DWORD *)a1 + 47), HIDWORD(v2) - HIDWORD(v4));
  return (struct tagPOINT)v7;
}
