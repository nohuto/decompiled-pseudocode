/*
 * XREFs of UsbhWaitConnect @ 0x1400205C0
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     UsbhWcCancelEnumeration @ 0x1400212B0 (UsbhWcCancelEnumeration.c)
 *     UsbhRequestPortSuspend @ 0x140021600 (UsbhRequestPortSuspend.c)
 *     WPP_RECORDER_SF_dDD @ 0x1400546DC (WPP_RECORDER_SF_dDD.c)
 *     UsbhHandleOvercurrent @ 0x14005801C (UsbhHandleOvercurrent.c)
 *     UsbhPortIgnoreChange @ 0x140058640 (UsbhPortIgnoreChange.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhWaitConnect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 v7; // r15
  unsigned int v8; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 (__fastcall *v16)(); // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9

  v5 = *(_DWORD *)(a4 + 400);
  v7 = (unsigned __int8)a3;
  v8 = a2;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        a2 = 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884))
           + *(_QWORD *)(a2 + 888);
        *(_DWORD *)a2 = 1313754947;
        *(_QWORD *)(a2 + 24) = v8;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)(a2 + 16) = a4;
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
      v16 = off_140066428[2 * v27];
      if ( !v16 )
        return v5;
    }
    else
    {
      v11 = v8 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 2;
          if ( v13 )
          {
            v14 = v13 - 4;
            if ( !v14 )
            {
              Log(a1, 4, 1129270902, v7, 0LL);
              return (unsigned int)UsbhHandleOvercurrent(a1, 0, a5, a4, a5);
            }
            if ( v14 != 8 )
              return v5;
            Log(a1, 4, 1129270898, v7, 0LL);
            v16 = off_140066028[2 * v15];
            if ( !v16 )
              return v5;
          }
          else
          {
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( a1 )
              {
                v24 = *(_QWORD *)(a1 + 64);
                if ( v24 )
                {
                  v25 = 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884))
                      + *(_QWORD *)(v24 + 888);
                  *(_DWORD *)v25 = 1934511939;
                  *(_QWORD *)(v25 + 8) = 0LL;
                  *(_QWORD *)(v25 + 16) = v7;
                  *(_QWORD *)(v25 + 24) = 0LL;
                }
              }
            }
            v16 = (__int64 (__fastcall *)())qword_140066628[2 * v7];
            if ( !v16 )
              return v5;
          }
        }
        else
        {
          Log(a1, 4, 1129270885, v7, 0LL);
          v16 = off_140066228[2 * v26];
          if ( !v16 )
            return v5;
        }
      }
      else
      {
        if ( (UsbhLogMask & 4) != 0 )
        {
          if ( a1 )
          {
            v20 = *(_QWORD *)(a1 + 64);
            if ( v20 )
            {
              v21 = 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884))
                  + *(_QWORD *)(v20 + 888);
              *(_DWORD *)v21 = 1666076483;
              *(_QWORD *)(v21 + 8) = 0LL;
              *(_QWORD *)(v21 + 16) = v7;
              *(_QWORD *)(v21 + 24) = 0LL;
            }
          }
        }
        v16 = funcs_1400208C9[2 * v7];
        if ( !v16 )
          return v5;
      }
    }
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v16)(a1, a4, a5);
  }
  if ( v8 == 0x80000 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884))
              + *(_QWORD *)(v17 + 888);
          *(_DWORD *)v18 = 1884180291;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v7;
          *(_QWORD *)(v18 + 24) = 0LL;
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
            v22 = *(_QWORD *)(a1 + 64);
            if ( v22 )
            {
              v23 = 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884))
                  + *(_QWORD *)(v22 + 888);
              *(_DWORD *)v23 = 1833848643;
              *(_QWORD *)(v23 + 8) = 0LL;
              *(_QWORD *)(v23 + 16) = v7;
              *(_QWORD *)(v23 + 24) = 0LL;
            }
          }
        }
        UsbhSignalResumeEvent(a1, a4, a3, a4);
      }
      return v5;
    }
    Log(a1, 4, 1129270904, v7, 0LL);
    v16 = (__int64 (__fastcall *)())qword_140065E28[2 * v28];
    if ( !v16 )
      return v5;
    return ((unsigned int (__fastcall *)(__int64, __int64, __int64))v16)(a1, a4, a5);
  }
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        a2 = 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884))
           + *(_QWORD *)(a2 + 888);
        *(_DWORD *)a2 = 1397641027;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)(a2 + 16) = v7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
    }
  }
  return (unsigned int)UsbhRequestPortSuspend(a1, a2, (unsigned __int8)v7, a4, a5);
}
