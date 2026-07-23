/*
 * XREFs of TtmNotifyDeviceInput @ 0x1407EAA40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpFindDeviceByToken @ 0x1407EB6E0 (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x1407EC1A0 (TtmiAcquireCurrentSession.c)
 *     TtmiLogDeviceInputNotified @ 0x1407EEC58 (TtmiLogDeviceInputNotified.c)
 *     TtmiGetTerminalById @ 0x1407F1870 (TtmiGetTerminalById.c)
 *     TtmiResetTerminalTimeouts @ 0x1407F1BE4 (TtmiResetTerminalTimeouts.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

void __fastcall TtmNotifyDeviceInput(unsigned int a1, __int64 a2, int a3)
{
  char v6; // bl
  char DeviceByToken; // si
  char v8; // bp
  int TerminalById; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v17[6]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v18 = 0LL;
  v17[0] = 0LL;
  v6 = 0;
  DeviceByToken = 0;
  v8 = 0;
  TerminalById = TtmiAcquireCurrentSession(&v18);
  v10 = v18;
  if ( TerminalById < 0 )
  {
    v11 = 723LL;
LABEL_3:
    v12 = (unsigned int)TerminalById;
LABEL_4:
    TtmiLogError("TtmNotifyDeviceInput", v11, v12, 0xFFFFFFFFLL);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v18 + 4) & 4) != 0 )
  {
    v11 = 731LL;
    v12 = 3221226581LL;
    goto LABEL_4;
  }
  DeviceByToken = TtmpFindDeviceByToken(v18, a1, a2, &v16);
  if ( !DeviceByToken )
  {
    v11 = 748LL;
    v12 = 3221226021LL;
    goto LABEL_4;
  }
  v14 = v16;
  *(_QWORD *)(v16 + 608) = MEMORY[0xFFFFF78000000008];
  if ( *(_DWORD *)(v14 + 596) != -1 )
  {
    TerminalById = TtmiGetTerminalById(v17, v10);
    if ( TerminalById < 0 )
    {
      v11 = 767LL;
      goto LABEL_3;
    }
    if ( (a3 & 1) != 0 )
      v6 = *(char *)(v15 + 600) < 0;
    v8 = TtmiResetTerminalTimeouts(v10, v17[0], 4, 1414809921, v6);
  }
LABEL_15:
  LOBYTE(v13) = DeviceByToken;
  TtmiLogDeviceInputNotified(a1, a2, a3, v13, v8, v6);
  if ( v10 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
}
