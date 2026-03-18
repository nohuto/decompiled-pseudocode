/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x140282EAC
 * Callers:
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140219D50 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?xxxBroadcastImeShowStatusChange@@YAHPEAUtagWND@@H@Z @ 0x1402825B0 (-xxxBroadcastImeShowStatusChange@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140168DC8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x14028320C (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x140285E98 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

void __fastcall xxxNotifyImeShowStatus(PRKPROCESS ***a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // r14
  PRKPROCESS **v7; // rdi
  ULONG64 v8; // rcx
  BOOL v9; // eax
  struct tagWND *v10; // rsi
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+24h] [rbp-34h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  struct tagIMEUI *v14; // [rsp+68h] [rbp+10h]
  struct tagIMEUI **v15; // [rsp+70h] [rbp+18h]

  v11 = 0;
  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872) & 4) != 0 && *((char *)a1[5] + 20) >= 0 )
  {
    v15 = (struct tagIMEUI **)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
    if ( v15 )
    {
      v6 = PtiCurrent(v4, v3);
      v7 = a1[2];
      if ( v7 != (PRKPROCESS **)v6 )
        KeAttachProcess(*v7[58]);
      v14 = *v15;
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)*v15 < MmUserProbeAddress )
        v8 = (ULONG64)*v15;
      v9 = (*(_DWORD *)(v8 + 44) & 0x20) != 0 && *(_DWORD *)(W32GetUserSessionState(v8, v5) + 14304);
      v12 = v9;
      LOBYTE(v5) = 1;
      v13 = HMValidateHandleNoSecure(*((_QWORD *)v14 + 2), v5);
      if ( v13 || (v10 = a1[2][59][15], (v13 = (__int64)v10) != 0) )
      {
        v11 = 1;
        *((_DWORD *)v14 + 11) = *((_DWORD *)v14 + 11) & 0xFFFFFFFE | v12 & 1;
        v10 = (struct tagWND *)v13;
      }
      if ( v7 != (PRKPROCESS **)v6 )
        KeDetachProcess();
      if ( v11 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v7, v14, v10, v12);
      if ( *((char *)a1[5] + 20) >= 0 )
        xxxCheckImeShowStatus((struct tagWND *)a1, 0LL);
    }
  }
}
