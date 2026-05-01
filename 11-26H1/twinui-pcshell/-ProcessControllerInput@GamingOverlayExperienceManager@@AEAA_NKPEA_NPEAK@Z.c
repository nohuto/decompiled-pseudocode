/*
 * XREFs of ?ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z @ 0x180350E74
 * Callers:
 *     ?XInputWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180357814 (-XInputWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z @ 0x1803502A8 (-OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall GamingOverlayExperienceManager::ProcessControllerInput(
        GamingOverlayExperienceManager *this,
        unsigned int a2,
        bool *a3,
        unsigned int *a4)
{
  __int64 (__fastcall *v8)(_QWORD, _OWORD *); // rax
  int v9; // eax
  int v10; // r8d
  int v11; // ecx
  int v13; // edi
  bool v14; // r9
  _OWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF

  v8 = (__int64 (__fastcall *)(_QWORD, _OWORD *))*((_QWORD *)this + 38);
  memset(v15, 0, sizeof(v15));
  v9 = v8(a2, v15);
  v10 = 0;
  if ( v9 )
  {
    if ( *a3 )
    {
      *a3 = 0;
      *a4 = 0;
    }
    return 0;
  }
  else
  {
    if ( *a3 )
    {
      v13 = (LODWORD(v15[0]) != 0) | (DWORD1(v15[0]) != 0 ? 2 : 0);
      v14 = DWORD1(v15[0]) != 0;
      if ( (LODWORD(v15[0]) != 0) != (*(_BYTE *)a4 & 1) || v14 != ((*a4 & 2) != 0) )
        GamingOverlayExperienceManager::OnXInputSystemButtonsChanged(this, a2, LODWORD(v15[0]) != 0, v14);
      *a4 = v13;
    }
    else
    {
      v11 = DWORD1(v15[0]);
      LOBYTE(v10) = LODWORD(v15[0]) != 0;
      *a3 = 1;
      *a4 = v10 | (v11 != 0 ? 2 : 0);
    }
    return 1;
  }
}
