/*
 * XREFs of UsbhWaitConnect @ 0x140004380
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1400138D4 (UsbhSignalResumeEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhRequestPortSuspend @ 0x14001C704 (UsbhRequestPortSuspend.c)
 *     UsbhWcCancelEnumeration @ 0x140036D5C (UsbhWcCancelEnumeration.c)
 *     WPP_RECORDER_SF_dDD @ 0x1400541CC (WPP_RECORDER_SF_dDD.c)
 *     UsbhHandleOvercurrent @ 0x140057ABC (UsbhHandleOvercurrent.c)
 *     UsbhPortIgnoreChange @ 0x1400580E0 (UsbhPortIgnoreChange.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhWaitConnect(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v10; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  __int64 v16; // r9
  __int64 (__fastcall *v17)(); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9

  v5 = *(_DWORD *)(a4 + 400);
  v7 = a3;
  v8 = a2;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v10 = *(_QWORD *)(a2 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v10 = 1313754947;
        *(_QWORD *)(v10 + 24) = v8;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a4 + 4),
      a3,
      10,
      (__int64)&WPP_514d3d48908635b064432894a9af1f2f_Traceguids,
      *(_WORD *)(a4 + 4),
      a3,
      v8);
  if ( v8 <= 0x10000 )
  {
    if ( v8 == 0x10000 )
    {
      Log(a1, 4, 1129270900, v7, 0LL);
      v17 = off_140065428[2 * v29];
      if ( !v17 )
        return v5;
    }
    else
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 2;
          if ( v14 )
          {
            v15 = v14 - 4;
            if ( !v15 )
            {
              Log(a1, 4, 1129270902, v7, 0LL);
              return (unsigned int)UsbhHandleOvercurrent(a1, 0, a5, a4, a5);
            }
            if ( v15 != 8 )
              return v5;
            Log(a1, 4, 1129270898, v7, 0LL);
            v17 = off_140065028[2 * v16];
            if ( !v17 )
              return v5;
          }
          else
          {
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( a1 )
              {
                v26 = *(_QWORD *)(a1 + 64);
                if ( v26 )
                {
                  v27 = *(_QWORD *)(v26 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
                  *(_DWORD *)v27 = 1934511939;
                  *(_QWORD *)(v27 + 8) = 0LL;
                  *(_QWORD *)(v27 + 16) = v7;
                  *(_QWORD *)(v27 + 24) = 0LL;
                }
              }
            }
            v17 = (__int64 (__fastcall *)())qword_140065628[2 * v7];
            if ( !v17 )
              return v5;
          }
        }
        else
        {
          Log(a1, 4, 1129270885, v7, 0LL);
          v17 = off_140064E28[2 * v28];
          if ( !v17 )
            return v5;
        }
      }
      else
      {
        if ( (UsbhLogMask & 4) != 0 )
        {
          if ( a1 )
          {
            v22 = *(_QWORD *)(a1 + 64);
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
              *(_DWORD *)v23 = 1666076483;
              *(_QWORD *)(v23 + 8) = 0LL;
              *(_QWORD *)(v23 + 16) = v7;
              *(_QWORD *)(v23 + 24) = 0LL;
            }
          }
        }
        v17 = funcs_14000467B[2 * v7];
        if ( !v17 )
          return v5;
      }
    }
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v17)(a1, a4, a5);
  }
  if ( v8 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
          *(_DWORD *)v19 = 1884180291;
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_QWORD *)(v19 + 16) = v7;
          *(_QWORD *)(v19 + 24) = 0LL;
        }
      }
    }
    return (unsigned int)UsbhWcCancelEnumeration(a1, a4, a5);
  }
  if ( v8 != 0x40000 )
  {
    if ( v8 != 0x20000 )
    {
      if ( v8 == 0x100000 )
      {
        if ( (UsbhLogMask & 4) != 0 )
        {
          if ( a1 )
          {
            v24 = *(_QWORD *)(a1 + 64);
            if ( v24 )
            {
              v25 = *(_QWORD *)(v24 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
              *(_DWORD *)v25 = 1833848643;
              *(_QWORD *)(v25 + 8) = 0LL;
              *(_QWORD *)(v25 + 16) = v7;
              *(_QWORD *)(v25 + 24) = 0LL;
            }
          }
        }
        UsbhSignalResumeEvent(a1, a4);
      }
      return v5;
    }
    Log(a1, 4, 1129270904, v7, 0LL);
    v17 = (__int64 (__fastcall *)())qword_140065228[2 * v30];
    if ( !v17 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v17)(a1, a4, a5);
  }
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v21 = *(_QWORD *)(a2 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v21 = 1397641027;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = v7;
        *(_QWORD *)(v21 + 24) = 0LL;
      }
    }
  }
  return (unsigned int)UsbhRequestPortSuspend(a1, a2, (unsigned __int8)v7, a4, a5);
}
