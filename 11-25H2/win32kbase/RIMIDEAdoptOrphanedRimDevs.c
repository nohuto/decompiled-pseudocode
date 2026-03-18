/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1401D65E4
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14012A008 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMRemoveHoldingFrame @ 0x1401562A4 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMIDEIsCompatibleDevice @ 0x1401EA420 (RIMIDEIsCompatibleDevice.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD **v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rbx
  PVOID **v11; // rdi
  _QWORD *v12; // rdi
  int v13; // r8d
  _QWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r14
  PVOID ***v17; // r12
  _QWORD *v18; // rbx
  __int64 *v19; // r13
  const struct RIMDEV *v20; // r15
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 *v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rdx
  PVOID *v31; // r8
  _QWORD *v32; // rax
  _QWORD *result; // rax
  _QWORD *v34; // [rsp+28h] [rbp-18h] BYREF
  _QWORD **v35; // [rsp+30h] [rbp-10h]

  UserSessionState = W32GetUserSessionState(Object, a2);
  RIMLockExclusive(UserSessionState + 56);
  v8 = (_QWORD **)(W32GetUserSessionState(v5, v4) + 136);
  v9 = *v8;
  v35 = &v34;
  v34 = &v34;
  while ( v9 != v8 )
  {
    v10 = (unsigned __int64)(v9 + 7) & -(__int64)(v9 != (_QWORD *)16);
    v11 = *(PVOID ***)(v10 + 0x140);
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v11
        || !*((_BYTE *)v11 + 81)
        || !_bittest((const signed __int32 *)(v10 + 168), 0xDu)
        || (*(_DWORD *)(((unsigned __int64)(v9 + 7) & -(__int64)(v9 != (_QWORD *)16)) + 0xB8) & 4) != 0 )
      {
        goto LABEL_26;
      }
      if ( v11 == Object )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 873);
      if ( !(unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v9 + 7) & -(__int64)(v9 != (_QWORD *)16)) )
        goto LABEL_26;
      v12 = (_QWORD *)(v10 + 104);
      if ( (_QWORD *)*v12 == v12 )
        goto LABEL_24;
      v13 = 879;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(*(_QWORD *)(((unsigned __int64)(v9 + 7) & -(__int64)(v9 != (_QWORD *)16)) + 0x20) + 11LL) )
      goto LABEL_26;
    if ( !v11 )
      goto LABEL_26;
    if ( !*((_BYTE *)v11 + 81) )
      goto LABEL_26;
    v7 = (_QWORD *)*(unsigned int *)(((unsigned __int64)(v9 + 7) & -(__int64)(v9 != (_QWORD *)16)) + 0xA8);
    if ( ((unsigned __int16)v7 & 0x2000) == 0
      || (*(_DWORD *)(((unsigned __int64)(v9 + 7) & -(__int64)(v9 != (_QWORD *)16)) + 0xB8) & 4) != 0
      && ((unsigned int)v7 & 0x40000000) == 0 )
    {
      goto LABEL_26;
    }
    if ( v11 == Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 854);
    if ( !(unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v9 + 7) & -(__int64)(v9 != (_QWORD *)16)) )
      goto LABEL_26;
    v12 = (_QWORD *)(v10 + 104);
    if ( (_QWORD *)*v12 != v12 )
    {
      v13 = 860;
LABEL_23:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v13);
    }
LABEL_24:
    v14 = v35;
    if ( *v35 != &v34 )
LABEL_61:
      __fastfail(3u);
    v7 = &v34;
    *v12 = &v34;
    v12[1] = v14;
    *v14 = v12;
    v35 = (_QWORD **)v12;
    *(_DWORD *)(v10 + 184) |= 0x10u;
LABEL_26:
    v9 = (_QWORD *)*v9;
  }
  v15 = W32GetUserSessionState(v7, v6);
  RIMUnlockExclusive(v15 + 56);
  v16 = v34;
  while ( 1 )
  {
    result = &v34;
    if ( v16 == &v34 )
      return result;
    v17 = (PVOID ***)(v16 + 27);
    v18 = v16;
    v19 = (__int64 *)v16[27];
    v20 = (const struct RIMDEV *)(v16 - 13);
    RIMLockExclusive((__int64)(v19 + 13));
    v21 = (_QWORD *)*v16;
    v16 = v21;
    if ( (_QWORD *)v21[1] != v18 )
      goto LABEL_61;
    v22 = (_QWORD *)v18[1];
    if ( (_QWORD *)*v22 != v18 )
      goto LABEL_61;
    *v22 = v21;
    v23 = v19 + 53;
    v21[1] = v22;
    v18[1] = v18;
    *v18 = v18;
    while ( 1 )
    {
      v24 = *v23;
      if ( !*v23 )
        break;
      if ( (const struct RIMDEV *)v24 == v20 )
      {
        if ( v18[16] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 909);
        *v23 = *(v18 - 8);
        break;
      }
      v23 = (__int64 *)(v24 + 40);
    }
    if ( (v18[8] & 0x200) != 0 )
    {
      v25 = v18 - 2;
      if ( (_QWORD *)*v25 == v25 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 918);
      v26 = (_QWORD *)*v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v25 )
        goto LABEL_61;
      v27 = (_QWORD *)v25[1];
      if ( (_QWORD *)*v27 != v25 )
        goto LABEL_61;
      *v27 = v26;
      v26[1] = v27;
      v25[1] = v25;
      *v25 = v25;
      *((_DWORD *)v18 + 16) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice(v20);
    }
    if ( (*((_DWORD *)v18 + 20) & 0x80u) != 0 )
    {
      v28 = (_QWORD *)(v18[44] + 920LL);
      v29 = *v28;
      if ( *(_QWORD **)(*v28 + 8LL) != v28 )
        goto LABEL_61;
      v30 = *(_QWORD **)(v18[44] + 928LL);
      if ( (_QWORD *)*v30 != v28 )
        goto LABEL_61;
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      v28[1] = v28;
      *v28 = v28;
    }
    RIMRemoveHoldingFrame((__int64)v19, (__int64)v20);
    RIMUnlockExclusive((__int64)(v19 + 13));
    ObfDereferenceObject(v19);
    RIMLockExclusive((__int64)(Object + 13));
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 945);
    *v17 = Object;
    *(v18 - 8) = Object[53];
    Object[53] = (PVOID *)v20;
    if ( (Object[104] || *((_DWORD *)Object + 264))
      && !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_DWORD *)v18 + 16) = v18[8] & 0xFC27FFFF | 0x80000;
    }
    if ( (*((_DWORD *)v18 + 20) & 0x80u) != 0 )
    {
      v31 = Object[55];
      v32 = (_QWORD *)(v18[44] + 920LL);
      if ( *v31 != Object + 54 )
        goto LABEL_61;
      *v32 = Object + 54;
      v32[1] = v31;
      *v31 = v32;
      Object[55] = (PVOID *)v32;
    }
    RIMUnlockExclusive((__int64)(Object + 13));
  }
}
