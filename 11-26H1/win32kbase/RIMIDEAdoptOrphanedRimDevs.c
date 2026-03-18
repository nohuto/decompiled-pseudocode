/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x14005E0A4
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x140167E38 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMRemoveHoldingFrame @ 0x140192634 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEIsCompatibleDevice @ 0x140209508 (RIMIDEIsCompatibleDevice.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  _QWORD *v9; // rcx
  int v10; // r8d
  _QWORD **v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rbx
  PVOID **v14; // rdi
  _QWORD *v15; // rdi
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  _QWORD *v22; // r15
  _QWORD *v23; // rax
  _QWORD *i; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  PVOID *v34; // r8
  _QWORD *v35; // rax
  _QWORD *result; // rax
  _QWORD *v37; // [rsp+28h] [rbp-18h] BYREF
  _QWORD **v38; // [rsp+30h] [rbp-10h]

  UserSessionState = W32GetUserSessionState((_DWORD)Object, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v11 = (_QWORD **)(W32GetUserSessionState(v6, v5, v7) + 136);
  v12 = *v11;
  v38 = &v37;
  v37 = &v37;
  while ( v12 != v11 )
  {
    v13 = (unsigned __int64)(v12 + 7) & -(__int64)(v12 != (_QWORD *)16);
    v14 = *(PVOID ***)(v13 + 0x140);
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline(v12 + 7) )
    {
      if ( !v14
        || !*((_BYTE *)v14 + 81)
        || !_bittest((const signed __int32 *)(v13 + 168), 0xDu)
        || (*(_DWORD *)(((unsigned __int64)(v12 + 7) & -(__int64)(v12 != (_QWORD *)16)) + 0xB8) & 4) != 0 )
      {
        goto LABEL_26;
      }
      if ( v14 == Object )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 873LL);
      if ( !(unsigned int)RIMIDEIsCompatibleDevice(
                            Object,
                            (unsigned __int64)(v12 + 7) & -(__int64)(v12 != (_QWORD *)16)) )
        goto LABEL_26;
      v15 = (_QWORD *)(v13 + 104);
      if ( (_QWORD *)*v15 == v15 )
        goto LABEL_24;
      v16 = 879LL;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(*(_QWORD *)(((unsigned __int64)(v12 + 7) & -(__int64)(v12 != (_QWORD *)16)) + 0x20) + 11LL) )
      goto LABEL_26;
    if ( !v14 )
      goto LABEL_26;
    if ( !*((_BYTE *)v14 + 81) )
      goto LABEL_26;
    LODWORD(v9) = *(_DWORD *)(((unsigned __int64)(v12 + 7) & -(__int64)(v12 != (_QWORD *)16)) + 0xA8);
    if ( ((unsigned __int16)v9 & 0x2000) == 0
      || (*(_DWORD *)(((unsigned __int64)(v12 + 7) & -(__int64)(v12 != (_QWORD *)16)) + 0xB8) & 4) != 0
      && ((unsigned int)v9 & 0x40000000) == 0 )
    {
      goto LABEL_26;
    }
    if ( v14 == Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 854LL);
    if ( !(unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v12 + 7) & -(__int64)(v12 != (_QWORD *)16)) )
      goto LABEL_26;
    v15 = (_QWORD *)(v13 + 104);
    if ( (_QWORD *)*v15 != v15 )
    {
      v16 = 860LL;
LABEL_23:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v16);
    }
LABEL_24:
    v17 = v38;
    if ( *v38 != &v37 )
LABEL_60:
      __fastfail(3u);
    v9 = &v37;
    *v15 = &v37;
    v15[1] = v17;
    *v17 = v15;
    v38 = (_QWORD **)v15;
    *(_DWORD *)(v13 + 184) |= 0x10u;
LABEL_26:
    v12 = (_QWORD *)*v12;
  }
  v18 = W32GetUserSessionState((_DWORD)v9, v8, v10);
  RIMUnlockExclusive(v18 + 56);
  v19 = v37;
  while ( 1 )
  {
    result = &v37;
    if ( v19 == &v37 )
      return result;
    v20 = v19 - 13;
    v21 = v19;
    v22 = (_QWORD *)v19[27];
    RIMLockExclusive((__int64)(v22 + 13));
    v19 = (_QWORD *)*v19;
    if ( (_QWORD *)v19[1] != v21 )
      goto LABEL_60;
    v23 = (_QWORD *)v21[1];
    if ( (_QWORD *)*v23 != v21 )
      goto LABEL_60;
    *v23 = v19;
    v19[1] = v23;
    v21[1] = v21;
    *v21 = v21;
    for ( i = v22 + 53; ; i = v25 + 5 )
    {
      v25 = (_QWORD *)*i;
      if ( !*i )
        break;
      if ( v25 == v20 )
      {
        if ( v20[29] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 909LL);
        *i = v20[5];
        break;
      }
    }
    if ( (v20[21] & 0x200) != 0 )
    {
      v26 = v20 + 11;
      if ( (_QWORD *)*v26 == v26 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 918LL);
      v27 = (_QWORD *)*v26;
      if ( *(_QWORD **)(*v26 + 8LL) != v26 )
        goto LABEL_60;
      v28 = (_QWORD *)v20[12];
      if ( (_QWORD *)*v28 != v26 )
        goto LABEL_60;
      *v28 = v27;
      v27[1] = v28;
      v20[12] = v26;
      *v26 = v26;
      *((_DWORD *)v20 + 42) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice((const struct RIMDEV *)v20);
    }
    if ( (*((_DWORD *)v20 + 46) & 0x80u) != 0 )
    {
      v29 = v20[57];
      v30 = (_QWORD *)(v29 + 920);
      v31 = *(_QWORD *)(v29 + 920);
      if ( *(_QWORD *)(v31 + 8) != v29 + 920 )
        goto LABEL_60;
      v32 = *(_QWORD **)(v29 + 928);
      if ( (_QWORD *)*v32 != v30 )
        goto LABEL_60;
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      *(_QWORD *)(v29 + 928) = v30;
      *v30 = v30;
    }
    RIMRemoveHoldingFrame(v22, v20);
    RIMUnlockExclusive((__int64)(v22 + 13));
    ObfDereferenceObject(v22);
    RIMLockExclusive((__int64)(Object + 13));
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 945LL);
    v20[40] = Object;
    v20[5] = Object[53];
    Object[53] = (PVOID *)v20;
    if ( (Object[104] || *((_DWORD *)Object + 264))
      && !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline(v33) )
    {
      *((_DWORD *)v20 + 42) = v20[21] & 0xFC27FFFF | 0x80000;
    }
    if ( (*((_DWORD *)v20 + 46) & 0x80u) != 0 )
    {
      v34 = Object[55];
      v35 = (_QWORD *)(v20[57] + 920LL);
      if ( *v34 != Object + 54 )
        goto LABEL_60;
      *v35 = Object + 54;
      v35[1] = v34;
      *v34 = v35;
      Object[55] = (PVOID *)v35;
    }
    RIMUnlockExclusive((__int64)(Object + 13));
  }
}
