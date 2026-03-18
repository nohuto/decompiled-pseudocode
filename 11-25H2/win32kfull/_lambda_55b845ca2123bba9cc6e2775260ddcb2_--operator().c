/*
 * XREFs of _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1402A6914
 * Callers:
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402A87E0 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014DD7C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()(
        __int64 **a1,
        struct tagRECT *a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  __int128 *MonitorWorkRectForWindow; // rax
  const struct tagRECT *v7; // r9
  __int64 v8; // rcx
  struct tagRECT v9; // xmm0
  struct tagRECT *result; // rax
  struct tagRECT v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v3 = *a1;
  MonitorWorkRectForWindow = (__int128 *)GetMonitorWorkRectForWindow(
                                           (__int64)&v12,
                                           a3,
                                           *(const struct tagWND **)(**a1 + 16));
  v7 = (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 60LL);
  v8 = *v3;
  v12 = *MonitorWorkRectForWindow;
  v9 = *WindowMargins::ExtendRect(&v11, *(struct tagRECT **)(v8 + 16), (const struct tagWND *)&v12, v7);
  result = a2;
  *a2 = v9;
  return result;
}
