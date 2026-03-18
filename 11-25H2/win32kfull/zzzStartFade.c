/*
 * XREFs of zzzStartFade @ 0x1401E99CC
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14003D23C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     zzzStartSonar @ 0x140287B4C (zzzStartSonar.c)
 * Callees:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     zzzShowFade @ 0x1401E9AD4 (zzzShowFade.c)
 */

__int64 __fastcall zzzStartFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // al
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreSetDCOwnerEx(*(_QWORD *)(UserSessionState + 42992), 0LL, 0LL, 1LL);
  GreSetBitmapOwner(*(_QWORD *)(UserSessionState + 43000), 0LL);
  zzzShowFade();
  v3 = (40 * *(_DWORD *)(UserSessionState + 43024) + 255) / 0xFFu;
  v4 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - (unsigned int)v3;
  v5 = -(*(_DWORD *)(UserSessionState + 43032) & 0x80);
  *(_DWORD *)(UserSessionState + 43028) = v4;
  v6 = v5 != 0 ? 0x28 : 0;
  result = W32GetUserSessionState(v4, v3);
  v8 = *(_QWORD *)(result + 68472);
  if ( v8 )
  {
    result = _HMPheFromObject(*(_QWORD *)(result + 68472));
    if ( (*(_BYTE *)(result + 25) & 1) == 0 )
      return InternalSetTimer(v8, 65526LL, v6 + 10, (__int64)xxxSystemTimerProc, 0, 66);
  }
  return result;
}
