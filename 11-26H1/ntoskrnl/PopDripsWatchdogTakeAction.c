/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x14061674C
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxLockDevice @ 0x1403C13A4 (PopFxLockDevice.c)
 *     PopFxNextComponentChildRelationSafe @ 0x14046AAC0 (PopFxNextComponentChildRelationSafe.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404CD980 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDeviceConstraintsEnforced @ 0x1404FA644 (PopDeviceConstraintsEnforced.c)
 *     PpmIdlePrevetoWatchdog @ 0x140604DE0 (PpmIdlePrevetoWatchdog.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14060AF34 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14060B124 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopCheckTestsigningEnabled @ 0x1407CBC1C (PopCheckTestsigningEnabled.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B41E58 (PopFxDestroyDripsBlockingDeviceList.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopDripsWatchdogTakeAction(__int64 a1, __int16 a2, char a3)
{
  ULONG_PTR v3; // r15
  __int64 v4; // rbx
  __int16 v5; // si
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int128 *v10; // rdi
  char v11; // r13
  unsigned __int16 *v12; // r14
  int v13; // eax
  __int64 *v14; // rsi
  __int64 v15; // rsi
  ULONG_PTR v16; // r14
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  const UNICODE_STRING *v24; // rsi
  __int64 v25; // rcx
  bool v26; // [rsp+60h] [rbp-A0h]
  KIRQL NewIrql; // [rsp+61h] [rbp-9Fh]
  char v28; // [rsp+64h] [rbp-9Ch]
  int v29; // [rsp+68h] [rbp-98h] BYREF
  __int16 v30; // [rsp+6Ch] [rbp-94h]
  int v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v34; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v37)(int, int, int, int, int, int, int, __int64); // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v40; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v41; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h] BYREF
  wchar_t v46; // [rsp+110h] [rbp+10h]
  __int128 v47; // [rsp+118h] [rbp+18h] BYREF
  __int64 v48; // [rsp+128h] [rbp+28h]
  int v49; // [rsp+130h] [rbp+30h]
  wchar_t v50; // [rsp+134h] [rbp+34h]
  _OWORD v51[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v52; // [rsp+158h] [rbp+58h]
  int v53; // [rsp+160h] [rbp+60h]
  wchar_t v54; // [rsp+164h] [rbp+64h]

  v3 = 0LL;
  v44 = aPci[4];
  v4 = a1;
  v33 = 0LL;
  v42 = a1;
  v5 = a2;
  v40.Buffer = (wchar_t *)&v43;
  v46 = aUsb_0[4];
  v41.Buffer = (wchar_t *)&v45;
  v53 = *(_DWORD *)L"DO";
  v54 = aUsb4VirtualPow[22];
  v34.Buffer = (wchar_t *)v51;
  v49 = *(_DWORD *)L"er";
  v45 = *(_QWORD *)L"USB\\";
  v50 = aUsb4hostrouter[14];
  String1.Buffer = (wchar_t *)&v47;
  v51[0] = *(_OWORD *)L"USB4\\VIRTUAL_POWER_PDO";
  v29 = 0;
  v52 = *(_QWORD *)L"ER_PDO";
  v30 = 0;
  v7 = *(unsigned int *)(a1 + 8);
  v43 = *(_QWORD *)L"PCI\\";
  v28 = a2;
  v47 = *(_OWORD *)L"Usb4HostRouter";
  *(_QWORD *)&v40.Length = 655368LL;
  v51[1] = *(_OWORD *)L"TUAL_POWER_PDO";
  v48 = *(_QWORD *)L"Router";
  *(_QWORD *)&v41.Length = 655368LL;
  *(_QWORD *)&v34.Length = 3014700LL;
  *(_QWORD *)&String1.Length = 1966108LL;
  v38 = 0LL;
  v37 = 0LL;
  v31 = 0;
  v39 = 0LL;
  result = PopFxBuildDripsBlockingDeviceList(10000 * v7, (__int64 *)&v33);
  if ( (int)result >= 0 )
  {
    v10 = (__int128 *)v33;
    v11 = (_QWORD)v33 != (_QWORD)&v33;
    v26 = (_QWORD)v33 != (_QWORD)&v33;
    if ( (__int128 *)v33 != &v33 )
    {
      do
      {
        v12 = (unsigned __int16 *)(*((_QWORD *)v10 - 108) + 56LL);
        if ( *((_DWORD *)v10 + 8) )
        {
          do
          {
            PopDiagTraceCsDripsWatchdog(
              *(_DWORD *)v4,
              *(_DWORD *)(v4 + 12),
              *(_DWORD *)(v4 + 8),
              *(_BYTE *)(v4 + 24) != 0,
              *(_DWORD *)(v4 + 20),
              1u,
              v5,
              v12,
              (unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v10 + 3) + 8LL * (unsigned int)v3) + 56LL),
              0,
              a3);
            LODWORD(v3) = v3 + 1;
          }
          while ( (unsigned int)v3 < *((_DWORD *)v10 + 8) );
          v3 = 0LL;
        }
        else
        {
          PopDiagTraceCsDripsWatchdog(
            *(_DWORD *)v4,
            *(_DWORD *)(v4 + 12),
            *(_DWORD *)(v4 + 8),
            *(_BYTE *)(v4 + 24) != 0,
            *(_DWORD *)(v4 + 20),
            1u,
            v5,
            v12,
            0LL,
            0,
            a3);
        }
        v10 = *(__int128 **)v10;
      }
      while ( v10 != &v33 );
      v11 = v26;
    }
    if ( !v11 )
    {
      PpmIdlePrevetoWatchdog(10000LL * *(unsigned int *)(v4 + 8), &v31, &v39);
      PopDiagTraceCsDripsWatchdog(
        *(_DWORD *)v4,
        *(_DWORD *)(v4 + 12),
        *(_DWORD *)(v4 + 8),
        *(_BYTE *)(v4 + 24) != 0,
        *(_DWORD *)(v4 + 20),
        0,
        v5,
        0LL,
        0LL,
        v31,
        a3);
    }
    v13 = *(unsigned __int8 *)(v4 + 24);
    if ( !(_BYTE)v13 || (v5 & 1) != 0 )
    {
      if ( (v5 & 2) != 0 )
        PopDiagTraceCsDripsWatchdogPerfTrack(
          *(_DWORD *)v4,
          *(_DWORD *)(v4 + 12),
          *(_DWORD *)(v4 + 8),
          v13,
          *(_DWORD *)(v4 + 20),
          v11,
          v5);
      if ( v11 )
      {
        v14 = (__int64 *)(v33 - 912 + 48);
        if ( *(_DWORD *)(v33 + 32) )
          v14 = *(__int64 **)(v33 + 24);
        v15 = *v14;
        v3 = v33 - 912;
        v16 = v15;
        v17 = v33;
        if ( (_QWORD)v33 != 912LL )
        {
          if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(*(_QWORD *)(v33 - 912 + 48) + 56LL), 0) )
          {
            v37 = PopDripsWatchdogTakeActionLiveDumpUsb4Callback;
            v38 = &v29;
            if ( v15 )
            {
              if ( RtlPrefixUnicodeString(&v34, (PCUNICODE_STRING)(v15 + 40), 0) )
              {
                v18 = PopFxLockDevice(v15, 3, 0);
                *(_QWORD *)&String1.Length = v18;
                if ( v18 )
                {
                  if ( *(_DWORD *)(v18 + 868) )
                  {
                    v19 = *(__int64 **)(v18 + 872);
                    v32 = 0LL;
                    v36 = *v19;
                    *(_QWORD *)&v34.Length = v36 + 128;
                    NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 128));
                    if ( PopFxNextComponentChildRelationSafe(v36, 0LL, &v32) )
                    {
                      v20 = v36;
                      do
                      {
                        v21 = v32;
                        v22 = *(_QWORD *)(v32 + 48);
                        if ( *(_DWORD *)v32 )
                          v23 = *(_QWORD *)(*(_QWORD *)(v22 - 48) + 48LL);
                        else
                          v23 = *(_QWORD *)(v22 - 1232);
                        if ( *(_DWORD *)(v23 + 156) == 1 )
                        {
                          v24 = (const UNICODE_STRING *)(v23 + 40);
                          if ( RtlPrefixUnicodeString(&v40, (PCUNICODE_STRING)(v23 + 40), 0) )
                          {
                            LOWORD(v29) = v29 + 1;
                          }
                          else if ( RtlPrefixUnicodeString(&v41, v24, 0) )
                          {
                            ++HIWORD(v29);
                          }
                          else
                          {
                            ++v30;
                          }
                        }
                      }
                      while ( PopFxNextComponentChildRelationSafe(v20, v21, &v32) );
                      v4 = v42;
                    }
                    KeReleaseSpinLock(*(PKSPIN_LOCK *)&v34.Length, NewIrql);
                    PopFxDereferenceDevice(*(__int64 *)&String1.Length, 3);
                  }
                }
              }
            }
          }
        }
        LOBYTE(v5) = v28;
        v11 = v26;
      }
      else
      {
        v16 = 0LL;
        v17 = 0LL;
      }
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
      {
        if ( (ViVerifierEnabled || (unsigned __int8)PopCheckTestsigningEnabled()) && v11 && (v5 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v3, *(unsigned int *)(v17 + 16), v16);
      }
      else if ( (v5 & 8) != 0 )
      {
        if ( *(_DWORD *)(v4 + 16) <= 0x64u )
          __debugbreak();
      }
      else if ( v11 )
      {
        if ( (v5 & 0x40) != 0 )
          NT_ASSERT(
            "*** DRIPS watchdog timeout
    This break point indicates that screen-off battery
    life is being compromi"
            "sed. This AOAC system broke
    into the debugger because a device has prevented
    the deepest runtime idl"
            "e platform state (DRIPS) for
    a certain period of time, despite being in the
    resiliency phase of conn"
            "ected standby without
    activators active.

    Run !platformidle to identify the device with an
    unsat"
            "isifed DRIPS constraint.
");
        if ( (v5 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v3, *(unsigned int *)(v17 + 16), v16);
      }
      if ( PopDeviceConstraintsEnforced(v9) && (v5 & 4) != 0 )
      {
        if ( v11 )
        {
          DbgkWerCaptureLiveKernelDump(
            (unsigned int)L"DripsWatchdog",
            351,
            2,
            v3,
            *(unsigned int *)(v17 + 16),
            v16,
            (__int64)v38,
            (__int64)v37,
            0);
        }
        else if ( v31 )
        {
          if ( qword_140E676E8 )
            v25 = *(_QWORD *)(qword_140E676E8 + 104);
          else
            v25 = 0LL;
          DbgkWerCaptureLiveKernelDump((unsigned int)L"DripsWatchdog", 351, 3, v31, v39, v25, 0LL, 0LL, 0);
        }
      }
    }
    return PopFxDestroyDripsBlockingDeviceList(&v33);
  }
  return result;
}
