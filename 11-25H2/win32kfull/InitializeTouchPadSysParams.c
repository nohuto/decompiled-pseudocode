/*
 * XREFs of InitializeTouchPadSysParams @ 0x1402AF7B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline @ 0x1402AF704 (Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline @ 0x1402AF758 (Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InitializeTouchPadSysParams(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (_DWORD *)(UserSessionState + 16768);
  *(_OWORD *)(UserSessionState + 16768) = 0LL;
  *(_OWORD *)(UserSessionState + 16784) = 0LL;
  *(_QWORD *)(UserSessionState + 16800) = 0LL;
  *(_DWORD *)(UserSessionState + 16808) = 0;
  if ( (unsigned int)Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline() )
  {
    *v3 = 3;
  }
  else
  {
    v5 = (unsigned int)((unsigned int)Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline() != 0) + 1;
    *v3 = v5;
  }
  v3[3] |= 0x10u;
  *(_DWORD *)(W32GetUserSessionState(v5, v4) + 352) = 1;
  v3[9] = 0;
  v3[10] = 0;
  v3[7] = 50;
  v3[8] = 50;
  v6 = v3[4] & 0xFFFFFDBF;
  v3[5] = 2;
  v3[6] = 10;
  v3[4] = v6 | 0x1BF;
  return CPTPProcessor::EnvironmentChanged();
}
