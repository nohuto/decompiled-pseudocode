/*
 * XREFs of ?HampWakeContextNotificationCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180056E80
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampWakeContextNotificationCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4)
{
  DWORD v5; // edi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  DWORD v8; // esi
  _QWORD *Value; // rdi
  __int64 *v10; // rax
  __int64 v11; // r8
  DWORD v13; // ebx
  _BYTE TlsValue[144]; // [rsp+30h] [rbp-A8h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v5, TlsValue);
  }
  _m_prefetchw(a4 + 3);
  v6 = a4[3];
  while ( (unsigned __int64)(v6 + 1) > 1 )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange64(a4 + 3, v6 + 1, v6);
    if ( v7 == v6 )
    {
      v8 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *Value |= 0x800uLL;
        ++Value[12];
      }
      RtlAcquireSRWLockExclusive(a4 + 5);
      *((_DWORD *)a4 + 12) = GetCurrentThreadId();
      *((_BYTE *)a4 + 185) |= 1u;
      if ( (a4[23] & 3) == 0 )
      {
        if ( _InterlockedIncrement64(a4 + 3) <= 1 )
          __fastfail(0xEu);
        TpPostWork(a4[12]);
        *((_BYTE *)a4 + 184) |= 1u;
      }
      if ( HampLockTrackerId != -1 )
      {
        v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v11 = *v10;
        if ( (*v10 & 0x800) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        if ( v10[12]-- == 1 )
          *v10 = v11 & 0xFFFFFFFFFFFFF7FFuLL;
      }
      *((_DWORD *)a4 + 12) = 0;
      RtlReleaseSRWLockExclusive(a4 + 5);
      CemRcObjectDereference(a4);
      goto LABEL_18;
    }
  }
  if ( v6 )
    __fastfail(0xEu);
LABEL_18:
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v13, 0LL);
  }
  return 0LL;
}
