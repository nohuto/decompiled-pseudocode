/*
 * XREFs of CreateNameSpaceObject @ 0x140010FE0
 * Callers:
 *     Field @ 0x1400102A0 (Field.c)
 *     OpRegion @ 0x140010510 (OpRegion.c)
 *     Name @ 0x1400107C0 (Name.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     CreateXField @ 0x140011840 (CreateXField.c)
 *     IndexField @ 0x140030BC0 (IndexField.c)
 *     BankField @ 0x140030DC0 (BankField.c)
 *     Method @ 0x14003E490 (Method.c)
 *     Device @ 0x14004E4C0 (Device.c)
 *     CreateNativeNameSpaceObject @ 0x140052A74 (CreateNativeNameSpaceObject.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D1E8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006D900 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006DAF8 (AMLIApplyNextNamespaceOverride.c)
 *     Event @ 0x14006F8C0 (Event.c)
 *     Mutex @ 0x14006F9F0 (Mutex.c)
 *     PowerRes @ 0x14006FAA0 (PowerRes.c)
 *     Processor @ 0x14006FC20 (Processor.c)
 *     ThermalZone @ 0x14006FD90 (ThermalZone.c)
 *     Alias @ 0x140070A30 (Alias.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400DC53C (Simulator_NotifyTablesAreLoaded.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     NewNameSpaceObject @ 0x14000FA34 (NewNameSpaceObject.c)
 *     InsertOwnerObjList @ 0x14003938C (InsertOwnerObjList.c)
 *     Simulator_NotifyNamespaceCollision @ 0x14006C9EC (Simulator_NotifyNamespaceCollision.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall CreateNameSpaceObject(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, int a6)
{
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int8 *v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // r15
  size_t v12; // rbx
  char *Pool2; // r12
  unsigned int NameSpaceObjectNoLock; // eax
  int v15; // ecx
  char *v16; // rax
  unsigned __int8 *v17; // rdi
  __int64 v18; // rbx
  __int64 *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  KIRQL v26; // bl
  struct _EX_RUNDOWN_REF *v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // r13
  KIRQL v30; // dl
  __int64 v31; // rcx
  __int64 *i; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  KIRQL v35; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v37; // [rsp+50h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 *v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  __int16 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  __int16 v46; // [rsp+A0h] [rbp-60h]
  char Str[128]; // [rsp+B0h] [rbp-50h] BYREF
  char pszDest[256]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a5;
  v45 = (__int64)a1;
  v7 = a4;
  v43 = a4;
  v37 = a5;
  v9 = (unsigned __int8 *)a2;
  v36 = 0LL;
  v10 = 0;
  v11 = 0LL;
  if ( a2 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(a2 + v12) );
    if ( v12 + 1 >= 0x80 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, v12 + 1, 1768973121LL);
      if ( !Pool2 )
        return 3221225626LL;
    }
    else
    {
      Pool2 = Str;
    }
    memmove(Pool2, v9, v12);
    a1 = (_QWORD *)v45;
    v9 = (unsigned __int8 *)Pool2;
    Pool2[v12] = 0;
    v7 = v43;
  }
  else
  {
    Pool2 = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( !v9 )
  {
    v11 = NewNameSpaceObject((__int64)a1, a2);
    if ( !v11 )
    {
      v10 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      PrintDebugMessage(0x24u, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_30;
    }
    v26 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    *(_QWORD *)(v11 + 16) = a3;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
    v27 = (struct _EX_RUNDOWN_REF *)v43;
    *(_QWORD *)(v11 + 48) = v43;
    if ( v27 )
    {
      *(struct _EX_RUNDOWN_REF *)(v11 + 56) = v27[3];
      v27[3].Count = v11;
      ExAcquireRundownProtection(v27 + 4);
    }
    v28 = *(__int64 **)(a3 + 32);
    v29 = a3 + 24;
    if ( *v28 != v29 )
      goto LABEL_52;
    *(_QWORD *)v11 = v29;
    v30 = v26;
    *(_QWORD *)(v11 + 8) = v28;
    *v28 = v11;
    *(_QWORD *)(v29 + 8) = v11;
LABEL_60:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v30);
    goto LABEL_28;
  }
  v35 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( !*v9 )
    goto LABEL_14;
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock((const char *)v9, a3, &v36, 1);
  v10 = NameSpaceObjectNoLock;
  if ( !NameSpaceObjectNoLock )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      v10 = -1073741771;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v35);
      v11 = v36;
      goto LABEL_28;
    }
    v11 = v36;
    if ( !_bittest16((const signed __int16 *)(v36 + 64), 8u) )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v35);
      if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v9, a3) < 0) && (a6 & 0x10000) == 0 )
      {
        LogError(-1073741771);
        AcpiDiagTraceAmlError(0LL, -1073741771);
        PrintDebugMessage(0x23u, v9, 0LL, 0LL, 0LL);
      }
      v10 = -1073741771;
      goto LABEL_28;
    }
    v31 = *(_QWORD *)(v36 + 48);
    if ( v31 )
    {
      for ( i = (__int64 *)(v31 + 24); ; i = (__int64 *)(v33 + 56) )
      {
        v33 = *i;
        if ( !*i )
          break;
        if ( v33 == v36 )
        {
          *i = *(_QWORD *)(v36 + 56);
          break;
        }
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v11 + 48) + 32LL));
    }
    InsertOwnerObjList(v43, v11);
    v30 = v35;
    *(_WORD *)(v11 + 64) = *(_WORD *)(v11 + 64) & 0xFE7F | 0x80;
    goto LABEL_60;
  }
  if ( NameSpaceObjectNoLock != -1073741772 )
  {
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v35);
    v11 = v36;
    goto LABEL_48;
  }
  v11 = v36;
LABEL_14:
  v10 = 0;
  v15 = *v9 - 92;
  if ( *v9 == 92 )
    v15 = v9[1];
  if ( v15 )
  {
    v36 = 0LL;
    v16 = strrchr((const char *)v9, 46);
    if ( v16 )
    {
      *v16 = 0;
      v17 = (unsigned __int8 *)(v16 + 1);
      v10 = GetNameSpaceObjectNoLock((const char *)v9, a3, &v36, -2147483647);
      if ( v10 )
      {
LABEL_26:
        v6 = v37;
        goto LABEL_27;
      }
      a3 = v36;
    }
    else if ( *v9 == 92 )
    {
      a3 = gpnsNameSpaceRoot;
      v17 = v9 + 1;
    }
    else
    {
      v17 = v9;
      if ( *v9 == 94 )
      {
        v24 = a3;
        v25 = a3;
        do
        {
          if ( !v24 )
            break;
          a3 = *(_QWORD *)(v25 + 16);
          ++v17;
          v24 = a3;
          v25 = a3;
        }
        while ( *v17 == 94 );
      }
    }
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    if ( *v17 && (unsigned int)v18 > 4 )
    {
      v10 = -1073741773;
      LogError(-1073741773);
      LODWORD(v36) = -1073741773;
      v43 = 0x41002F004ELL;
      v45 = 0x41002F004ELL;
      v44 = 0;
      v46 = 0;
      *(_QWORD *)&UserData.Size = 6LL;
      UserData.Ptr = (unsigned __int64)&v45;
      v40 = 6LL;
      v39 = &v43;
      v41 = &v36;
      v42 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        &ACPI_ETW_EVENT_AMLI_ERROR,
        0LL,
        3u,
        &UserData);
      if ( (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x19u, 0, off_14008CFB8, v17, 0LL, 0LL, 0LL);
        if ( (gDebugger & 0x40000) != 0 )
        {
          RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 37, v17, 0LL, 0LL, 0LL);
          DbgCommandString("ACPI", pszDest);
        }
      }
      else
      {
        RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 37, v17, 0LL, 0LL, 0LL);
        DbgPrintEx(0x19u, 0, "%s\n", pszDest);
      }
      goto LABEL_26;
    }
    v20 = HeapAlloc((_QWORD *)v45, 1330859592, 0xA0u);
    v11 = (__int64)v20;
    if ( !v20 )
    {
      v10 = -1073741670;
      LogError(-1073741670);
      LODWORD(v36) = -1073741670;
      v43 = 0x41002F004ELL;
      v45 = 0x41002F004ELL;
      v44 = 0;
      v46 = 0;
      *(_QWORD *)&UserData.Size = 6LL;
      UserData.Ptr = (unsigned __int64)&v45;
      v40 = 6LL;
      v39 = &v43;
      v41 = &v36;
      v42 = 4LL;
      EtwWrite(
        *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        &ACPI_ETW_EVENT_AMLI_ERROR,
        0LL,
        3u,
        &UserData);
      PrintDebugMessage(0x24u, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_26;
    }
    memset(v20, 0, 0xA0uLL);
    *(_QWORD *)(v11 + 32) = v11 + 24;
    *(_QWORD *)(v11 + 24) = v11 + 24;
    *(_DWORD *)(v11 + 112) = 2;
    *(_QWORD *)(v11 + 144) = 0LL;
    *(_DWORD *)(v11 + 128) = 1;
    *(_QWORD *)(v11 + 120) = v11;
    *(_QWORD *)(v11 + 152) = -1LL;
    if ( *v9 )
    {
      *(_DWORD *)(v11 + 40) = 1600085855;
      memmove((void *)(v11 + 40), v17, (unsigned int)v18);
    }
    else
    {
      *(_DWORD *)(v11 + 40) = 0;
    }
    *(_QWORD *)(v11 + 16) = a3;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
    v21 = (struct _EX_RUNDOWN_REF *)v43;
    *(_QWORD *)(v11 + 48) = v43;
    if ( v21 )
    {
      *(struct _EX_RUNDOWN_REF *)(v11 + 56) = v21[3];
      v21[3].Count = v11;
      ExAcquireRundownProtection(v21 + 4);
    }
    v22 = *(__int64 **)(a3 + 32);
    v23 = a3 + 24;
    if ( *v22 == v23 )
    {
      *(_QWORD *)v11 = v23;
      *(_QWORD *)(v11 + 8) = v22;
      *v22 = v11;
      *(_QWORD *)(v23 + 8) = v11;
      goto LABEL_26;
    }
LABEL_52:
    __fastfail(3u);
  }
  v34 = NewNameSpaceObject(v45, 0LL);
  v11 = v34;
  if ( v34 )
  {
    *(_DWORD *)(v34 + 40) = 1600085852;
    gpnsNameSpaceRoot = v34;
    InsertOwnerObjList(v7, v34);
  }
  else
  {
    v10 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(0x24u, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_27:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v35);
  if ( !v10 )
    goto LABEL_28;
LABEL_48:
  if ( v10 == -1073741771 )
  {
LABEL_28:
    if ( v6 )
      *v6 = v11;
  }
LABEL_30:
  if ( Pool2 )
  {
    if ( Str != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return v10;
}
