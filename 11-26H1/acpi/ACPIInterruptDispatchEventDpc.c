/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x140020600
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     CreateObjectHandle @ 0x14001F000 (CreateObjectHandle.c)
 *     ACPIGpeIndexToByteIndex @ 0x1400201A8 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x140021160 (ACPIGpeEnableDisableEvents.c)
 *     ACPICheckForInterruptStorm @ 0x14002124C (ACPICheckForInterruptStorm.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140032208 (OSNotifyDeviceWakeByGPEEvent.c)
 *     Simulator_AllocAndInitTestData @ 0x14005168C (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006C874 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006CD54 (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006CD8C (Simulator_TestNotifyRet.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

void __fastcall ACPIInterruptDispatchEventDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  size_t v4; // r14
  size_t v5; // r13
  __int64 v6; // r12
  __int64 v7; // rcx
  char *v8; // rdi
  char *v9; // r10
  char *v10; // rsi
  char *v11; // rbx
  char *v12; // r15
  char *v13; // r11
  __m128 v14; // xmm1
  __m128i v15; // xmm0
  char *v16; // rax
  __m128i v17; // xmm0
  char *v18; // rax
  __m128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // cl
  char *v23; // rax
  char *v24; // rcx
  __int64 v25; // rbx
  unsigned __int8 v26; // r15
  char v27; // si
  unsigned __int8 v28; // r12
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // rbx
  unsigned __int8 v32; // di
  unsigned int v33; // edx
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // r13d
  char v37; // al
  char v38; // cl
  unsigned __int64 v39; // rax
  size_t v40; // r13
  _BYTE *Pool2; // rax
  int NameSpaceObjectNoLock; // r13d
  __int64 v43; // rdx
  PVOID v44; // rcx
  __int64 *v45; // rdx
  __int64 v46; // r13
  int v47; // r13d
  int (__fastcall *v48)(__int64); // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rcx
  _DWORD *v53; // rdx
  __int64 v54; // rcx
  PVOID v55; // rax
  int v56; // eax
  void *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  int v59; // eax
  PVOID v60; // rcx
  int v61; // eax
  KIRQL v62[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v63; // [rsp+48h] [rbp-B8h]
  unsigned int v64; // [rsp+4Ch] [rbp-B4h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  __int64 *ObjectHandle; // [rsp+58h] [rbp-A8h]
  __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h]
  PVOID v69; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h]
  __int128 v72; // [rsp+88h] [rbp-78h] BYREF
  __int128 v73; // [rsp+98h] [rbp-68h]
  _OWORD v74[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v75[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v76[40]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v77[128]; // [rsp+110h] [rbp+10h] BYREF

  v63 = 0;
  v4 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  AcpiGpeDpcScheduled = 0;
  if ( AcpiGpeDpcRunning )
  {
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
    return;
  }
  v5 = (unsigned int)v4;
  AcpiGpeDpcRunning = 1;
  v72 = 0LL;
  v73 = 0LL;
  do
  {
    v6 = 0LL;
    AcpiGpeWorkDone = 0;
    if ( (_DWORD)v4 )
    {
      if ( (unsigned int)v4 < 0x10 )
        goto LABEL_31;
      v7 = (unsigned int)(v4 - 1);
      v8 = (char *)&v72 + v7;
      v9 = (char *)GpeComplete + v7;
      if ( GpeComplete <= (char *)&v72 + v7 && (char *)GpeComplete + (unsigned int)(v4 - 1) >= (char *)&v72 )
        goto LABEL_31;
      v10 = (char *)GpeIsLevel + v7;
      if ( GpeComplete <= (char *)GpeIsLevel + v7 && v9 >= GpeIsLevel )
        goto LABEL_31;
      v11 = (char *)v74 + v7;
      if ( GpeComplete <= (char *)v74 + v7 && v9 >= (char *)v74 )
        goto LABEL_31;
      v12 = &v75[v7];
      if ( GpeComplete <= &v75[v7] && v9 >= v75 )
        goto LABEL_31;
      v13 = (char *)GpeRunMethod + v7;
      if ( GpeComplete <= (char *)GpeRunMethod + v7 && v9 >= GpeRunMethod )
        goto LABEL_31;
      if ( &v72 <= (__int128 *)v10 && v8 >= GpeIsLevel )
        goto LABEL_31;
      if ( &v72 <= (__int128 *)v13 && v8 >= GpeRunMethod )
        goto LABEL_31;
      if ( v74 <= (_OWORD *)v10 && v11 >= GpeIsLevel )
        goto LABEL_31;
      if ( v74 <= (_OWORD *)v13 && v11 >= GpeRunMethod )
        goto LABEL_31;
      if ( v75 <= v10 && v12 >= GpeIsLevel )
        goto LABEL_31;
      if ( v75 <= v13 && v12 >= GpeRunMethod )
        goto LABEL_31;
      if ( GpeRunMethod <= v10 && v13 >= GpeIsLevel )
        goto LABEL_31;
      do
      {
        v14 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v72 + v6));
        v15 = _mm_loadu_si128((const __m128i *)((char *)GpeRunMethod + v6));
        *(_OWORD *)((char *)GpeRunMethod + v6) = 0LL;
        v16 = (char *)GpeIsLevel;
        *(__m128i *)&v75[v6] = v15;
        v17 = _mm_loadu_si128((const __m128i *)&v16[v6]);
        v18 = (char *)GpeComplete;
        *(__m128i *)((char *)v74 + v6) = v17;
        v19 = (__m128)_mm_loadu_si128((const __m128i *)&v18[v6]);
        *(_OWORD *)&v18[v6] = 0LL;
        *(__int128 *)((char *)&v72 + v6) = (__int128)_mm_or_ps(v14, v19);
        v6 = (unsigned int)(v6 + 16);
      }
      while ( (unsigned int)v6 < (v4 & 0xFFF0) );
      if ( (unsigned int)v6 < (unsigned int)v4 )
      {
LABEL_31:
        v20 = (unsigned int)v6;
        v21 = (unsigned int)(v4 - v6);
        do
        {
          v22 = *((char *)GpeRunMethod + v20++);
          *((char *)GpeRunMethod + v20 - 1) = 0;
          v23 = (char *)GpeIsLevel;
          *((_BYTE *)&v74[1] + v20 + 15) = v22;
          *((_BYTE *)&v73 + v20 + 15) = v23[v20 - 1];
          v24 = (char *)GpeComplete;
          *((_BYTE *)&v71 + v20 + 7) |= *((char *)GpeComplete + v20 - 1);
          v24[v20 - 1] = 0;
          --v21;
        }
        while ( v21 );
      }
    }
    memmove(v76, GpeWakeEnable, v5);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
    v25 = 0LL;
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        v26 = v75[v25];
        v27 = 0;
        v28 = *((_BYTE *)v74 + v25);
        if ( v26 )
          break;
LABEL_35:
        *((_BYTE *)&v72 + v25) |= v27;
        v25 = (unsigned int)(v25 + 1);
        if ( (unsigned int)v25 >= (unsigned int)v4 )
        {
          v5 = v4;
          goto LABEL_37;
        }
      }
      while ( 1 )
      {
        v33 = *((unsigned __int16 *)AcpiInformation + 43);
        v34 = FirstSetLeftBit[v26];
        v64 = 1 << FirstSetLeftBit[v26];
        v26 &= ~(_BYTE)v64;
        if ( (unsigned int)v25 >= v33 + *((unsigned __int16 *)AcpiInformation + 49) )
          KeBugCheckEx(0xA5u, 0x17uLL, (unsigned int)(v34 + 8 * v25), 2uLL, 0LL);
        if ( (unsigned int)v25 >= v33 )
          v35 = *((unsigned __int16 *)AcpiInformation + 50) + 8 * (v25 - v33);
        else
          v35 = 8 * v25;
        v36 = v35 + v34;
        ACPICheckForInterruptStorm((unsigned int)(v35 + v34));
        if ( ((unsigned __int8)v64 & *((_BYTE *)GpeHandlerType + v25)) == 0 )
        {
          if ( ((unsigned __int8)v64 & v76[v25]) != 0 )
          {
            OSNotifyDeviceWakeByGPEEvent(v36, (unsigned int)v25, v64);
          }
          else
          {
            v51 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex() + GpeMap);
            if ( v51 >= GpeVectorTableSize )
              goto LABEL_78;
            _mm_lfence();
            v52 = *((_QWORD *)GpeVectorTable + 2 * v51 + 1);
            if ( v52 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(v52 + 8))(v52, *(_QWORD *)(v52 + 16));
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v51) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v51,
                22,
                10,
                (__int64)&WPP_87274692d92b3c10bf5c12577f577a30_Traceguids,
                v36);
            }
          }
LABEL_77:
          v27 |= v64;
          goto LABEL_78;
        }
        ObjectHandle = 0LL;
        v37 = 76;
        if ( (v28 & (unsigned __int8)v64) == 0 )
          v37 = 69;
        v38 = v36;
        byte_14008E08F = v37;
        v39 = v36;
        v40 = -1LL;
        byte_14008E090 = HexDigit[v39 >> 4];
        byte_14008E091 = HexDigit[v38 & 0xF];
        do
          ++v40;
        while ( byte_14008E088[v40] );
        if ( v40 + 1 >= 0x80 )
        {
          Pool2 = (_BYTE *)ExAllocatePool2(64LL, v40 + 1, 1768973121LL);
          P = Pool2;
          if ( !Pool2 )
          {
            BYTE1(v63) = v64;
            LOBYTE(v63) = v25;
            BYTE2(v63) = v28;
            goto LABEL_78;
          }
        }
        else
        {
          Pool2 = v77;
          P = v77;
        }
        memmove(Pool2, byte_14008E088, v40);
        *((_BYTE *)P + v40) = 0;
        v62[0] = ExAcquireSpinLockShared(&ACPINamespaceLock);
        v67 = 0LL;
        dword_14008ED38 = 0;
        pszDest = 0;
        if ( (gDebugger & 0x1000) != 0 )
        {
          ConPrintf("\nProcess AML Debugger Request.\n");
          _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
          AMLIDebugger();
        }
        if ( *(_BYTE *)P )
        {
          NameSpaceObjectNoLock = GetNameSpaceObjectNoLock((const char *)P, 0LL, &v67, 0);
          if ( NameSpaceObjectNoLock >= 0 && v67 )
          {
            ObjectHandle = (__int64 *)CreateObjectHandle(v67);
            DereferenceObjectEx(v43);
          }
          if ( NameSpaceObjectNoLock == 32772 )
            NameSpaceObjectNoLock = 259;
        }
        else
        {
          NameSpaceObjectNoLock = -1073741810;
        }
        ExReleaseSpinLockShared(&ACPINamespaceLock, v62[0]);
        if ( v77 != P )
          ExFreePoolWithTag(P, 0);
        BYTE1(v63) = v64;
        LOBYTE(v63) = v25;
        BYTE2(v63) = v28;
        if ( NameSpaceObjectNoLock < 0 )
          goto LABEL_78;
        v44 = 0LL;
        v67 = v63;
        v70 = ACPIInterruptEventCompletion;
        v71 = 0LL;
        P = 0LL;
        dword_14008ED38 = 0;
        pszDest = 0;
        if ( (gDebugger & 0x1000) != 0 )
        {
          ConPrintf("\nProcess AML Debugger Request.\n");
          _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
          AMLIDebugger();
          v44 = P;
        }
        v45 = ObjectHandle;
        v46 = *ObjectHandle;
        v68 = *ObjectHandle;
        if ( g_SimulatorCallbackObject )
        {
          v69 = 0LL;
          P = (PVOID)Simulator_AllocAndInitTestData();
          if ( !P )
          {
            v47 = -1073741670;
LABEL_92:
            v45 = ObjectHandle;
            goto LABEL_75;
          }
          v47 = Simulator_Copy_Arguments(0LL, 0LL, &v69);
          if ( v47 < 0 )
          {
            v44 = P;
          }
          else
          {
            v53 = P;
            v54 = v68;
            v55 = v69;
            *(_DWORD *)P = 1;
            v53[1] = 2;
            v53[2] = 1;
            *((_QWORD *)v53 + 2) = v54;
            *((_QWORD *)v53 + 3) = 0LL;
            *((_QWORD *)v53 + 4) = 0LL;
            *((_QWORD *)v53 + 5) = v55;
            *((_QWORD *)v53 + 6) = ACPIInterruptEventCompletion;
            *((_QWORD *)v53 + 7) = v67;
            *((_QWORD *)v53 + 8) = 0LL;
            v70 = (__int64 (__fastcall *)())&Simulator_AsyncEvalObjectCallBack;
            v67 = (__int64)v53;
            v56 = Simulator_TestNotify(v53);
            v44 = P;
            v47 = v56;
            if ( v56 >= 0 && *((_QWORD *)P + 8) == 1LL )
              v71 = *((_QWORD *)P + 5);
          }
          if ( v47 )
            goto LABEL_92;
          v46 = v68;
          v45 = ObjectHandle;
        }
        if ( (*(_BYTE *)(v46 + 64) & 4) != 0 )
        {
          v47 = -1073741738;
          ObjectHandle = v45;
        }
        else
        {
          if ( *(_WORD *)(v46 + 66) == 128 )
          {
            ObjectHandle = v45;
            do
              v46 = *(_QWORD *)(v46 + 80);
            while ( *(_WORD *)(v46 + 66) == 128 );
            v68 = v46;
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v46 + 112));
          if ( (gDebugger & 8) != 0 )
          {
            ObjectPath = (void *)GetObjectPath(v46);
            CurrentThread = KeGetCurrentThread();
            v69 = ObjectPath;
            if ( ObjectPath )
            {
              PrintDebugMessage(0xBu, CurrentThread, ObjectPath, 0LL, 0LL);
              ExFreePoolWithTag(v69, 0);
            }
            else
            {
              PrintDebugMessage(0xBu, CurrentThread, byte_140075A82, 0LL, 0LL);
            }
          }
          v47 = AsyncEvalObject(v46, 0LL, 0, v71, (__int64)v70, v67, 1);
          DereferenceObjectEx(v68);
          v44 = P;
          v45 = ObjectHandle;
          if ( v47 == 32772 )
            v47 = 259;
        }
        if ( g_SimulatorCallbackObject && v47 != 259 )
        {
          if ( v44 )
          {
            v59 = Simulator_TestNotifyRet(v44);
            v60 = P;
            v47 = v59;
            v61 = *((_DWORD *)P + 1);
            if ( v61 == 1 || (unsigned int)(v61 - 2) <= 1 )
            {
              Simulator_Free_Arguments(*((unsigned int *)P + 8), *((_QWORD *)P + 5));
              v60 = P;
            }
            ExFreePoolWithTag(v60, 0);
            v45 = ObjectHandle;
          }
          else
          {
            v47 = -1073741823;
          }
        }
LABEL_75:
        AMLIDereferenceHandleEx(v45);
        if ( v47 < 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
          *((_BYTE *)GpeRunMethod + v25) |= v64;
          if ( !AcpiGpeDpcScheduled )
          {
            AcpiGpeDpcScheduled = 1;
            KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
          }
          KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
          goto LABEL_78;
        }
        if ( v47 != 259 )
          goto LABEL_77;
LABEL_78:
        if ( !v26 )
          goto LABEL_35;
      }
    }
LABEL_37:
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  }
  while ( AcpiGpeWorkDone );
  v30 = 0;
  if ( (_DWORD)v4 )
  {
    v31 = 0LL;
    do
    {
      v32 = *((_BYTE *)&v72 + v31);
      if ( (*((_BYTE *)v74 + v31) & v32) != 0 )
      {
        v62[0] = *((_BYTE *)v74 + v31) & v32;
        v48 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
        if ( v30 >= *((unsigned __int16 *)AcpiInformation + 43) )
        {
          if ( v48(7LL) < 0 )
            goto LABEL_41;
          v49 = v30 - *((unsigned __int16 *)AcpiInformation + 43);
          v50 = 7LL;
          goto LABEL_83;
        }
        if ( v48(6LL) >= 0 )
        {
          v49 = v30;
          v50 = 6LL;
LABEL_83:
          (*(void (__fastcall **)(__int64, __int64, KIRQL *, __int64, _QWORD))(PmHalDispatchTable + 136))(
            v50,
            v49,
            v62,
            1LL,
            0LL);
        }
      }
LABEL_41:
      ++v30;
      *((_BYTE *)GpePending + v31) &= ~v32;
      v29 = *((unsigned __int8 *)GpeWakeHandler + v31);
      *((_BYTE *)GpeCurEnable + v31) |= v32 & (*((_BYTE *)GpeWakeEnable + v31) | *((_BYTE *)GpeEnable + v31) & ~(_BYTE)v29);
      ++v31;
    }
    while ( v30 < (unsigned int)v4 );
  }
  LOBYTE(v29) = 1;
  AcpiGpeDpcRunning = 0;
  ACPIGpeEnableDisableEvents(v29);
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
