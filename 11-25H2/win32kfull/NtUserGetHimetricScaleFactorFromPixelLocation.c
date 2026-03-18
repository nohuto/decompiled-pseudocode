/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x14020E040
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x140090CA4 (_GetPointerDeviceRects.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     GetScreenRect @ 0x14022EE5C (GetScreenRect.c)
 *     GetHimetricScaleForMonitor @ 0x1402842C0 (GetHimetricScaleForMonitor.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  int v9; // esi
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-A8h] BYREF
  _DWORD v18[5]; // [rsp+24h] [rbp-A4h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v22; // [rsp+70h] [rbp-58h] BYREF
  __int128 v23; // [rsp+80h] [rbp-48h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  v22 = 0LL;
  v19[0] = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_18;
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v19, 0LL) || *(_DWORD *)(v19[0] + 24LL) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v22) )
    {
      v8 = 1;
      v9 = 1;
      v18[0] = 1;
      v10 = 1;
      v17 = 1;
      if ( ***(_DWORD ***)(W32GetUserSessionState(v12, v11) + 56968) > 1u )
      {
        v23 = *(_OWORD *)GetScreenRect(v21);
        v13 = v22.m128i_i64[0] - v23;
        if ( v22.m128i_i64[0] == (_QWORD)v23 )
          v13 = v22.m128i_i64[1] - *((_QWORD *)&v23 + 1);
        if ( !v13 )
        {
          v14 = MonitorFromPoint(a2, 2u, 0);
          GetHimetricScaleForMonitor(v14, &v17, v18);
          v10 = v17;
          v9 = v18[0];
        }
      }
      goto LABEL_13;
    }
LABEL_18:
    v8 = 0;
    UserSetLastError(87);
    goto LABEL_19;
  }
  v8 = 1;
  v9 = 1;
  v18[0] = 1;
  v10 = 1;
  v17 = 1;
LABEL_13:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v10;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v9;
  v18[3] = 1;
LABEL_19:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
  UserSessionSwitchLeaveCrit(v15);
  return v8;
}
