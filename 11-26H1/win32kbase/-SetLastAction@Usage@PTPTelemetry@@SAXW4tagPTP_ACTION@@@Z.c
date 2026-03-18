/*
 * XREFs of ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x14013D13C
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14013CC70 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     EtwTraceTouchpadGestureDetected @ 0x14013D560 (EtwTraceTouchpadGestureDetected.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@334@Z @ 0x14019C0D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

int __fastcall PTPTelemetry::Usage::SetLastAction(int a1, int a2, int a3)
{
  volatile signed __int64 *UserSessionState; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // r8
  LONGLONG v7; // rcx
  unsigned __int64 v8; // rdx
  signed __int64 v9; // rsi
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  _DWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned int v21; // r11d
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v26; // [rsp+58h] [rbp-9h] BYREF
  int v27; // [rsp+5Ch] [rbp-5h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-1h] BYREF
  LONGLONG v29; // [rsp+70h] [rbp+Fh] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp+1Fh] BYREF
  void *v32; // [rsp+90h] [rbp+2Fh]
  int v33; // [rsp+98h] [rbp+37h]
  int v34; // [rsp+9Ch] [rbp+3Bh]
  int *v35; // [rsp+A0h] [rbp+3Fh]
  __int64 v36; // [rsp+A8h] [rbp+47h]

  UserSessionState = (volatile signed __int64 *)W32GetUserSessionState(a1, a2, a3);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LODWORD(v6) = PerformanceCounter.LowPart;
  v7 = PerformanceCounter.QuadPart - _InterlockedCompareExchange64(UserSessionState + 414, 0LL, 0LL);
  v8 = (unsigned __int64)(1000 * v7) % gliQpcFreq.QuadPart;
  v9 = (unsigned __int64)(1000 * v7) / gliQpcFreq.QuadPart;
  if ( v9 <= 500 )
  {
    _InterlockedCompareExchange64(UserSessionState + 412, 0LL, 0LL);
    _InterlockedCompareExchange64(UserSessionState + 413, 0LL, 0LL);
    if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x400000000000LL) )
    {
      v26 = v21;
      v27 = a1;
      v22 = v6 - v20;
      *(_QWORD *)&EventDescriptor.Id = v9;
      v23 = 1000 * (v6 - v20);
      v24 = v6 - v19;
      v29 = v23 / gliQpcFreq.QuadPart;
      v30 = (unsigned __int64)(1000 * v24) / gliQpcFreq.QuadPart;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v22,
        (unsigned int)&unk_14028ACAA,
        v24,
        v19,
        (__int64)&EventDescriptor,
        (__int64)&v27,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v26);
    }
  }
  v10 = W32GetUserSessionState(v7, v8, v6);
  v14 = W32GetUserSessionState(v12, v11, v13);
  if ( *(_DWORD *)(v14 + 12264) || *(_QWORD *)(v14 + 12240) || *(__int64 *)(v14 + 12224) <= 0 )
    *(_DWORD *)(v10 + 12268) = a1;
  else
    *(_DWORD *)(v10 + 12264) = a1;
  v18 = (_DWORD *)W32GetUserSessionState(v16, v15, v17);
  if ( a1 > 16 )
  {
    if ( a1 <= 22 )
    {
      switch ( a1 )
      {
        case 22:
          ++v18[3025];
          break;
        case 17:
          ++v18[3028];
          break;
        case 18:
          ++v18[3022];
          break;
        case 19:
          ++v18[3023];
          break;
        case 20:
          ++v18[3026];
          break;
        default:
          ++v18[3027];
          break;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 23:
          ++v18[3036];
          break;
        case 24:
          ++v18[3037];
          break;
        case 25:
          ++v18[3021];
          break;
        case 26:
          ++v18[3038];
          break;
        case 27:
          ++v18[3035];
          break;
        default:
          goto LABEL_21;
      }
    }
    goto LABEL_34;
  }
  if ( a1 == 16 )
  {
    ++v18[3024];
    goto LABEL_34;
  }
  if ( a1 <= 7 )
  {
    switch ( a1 )
    {
      case 7:
        ++v18[3019];
        break;
      case 1:
        ++v18[3031];
        break;
      case 2:
        ++v18[3032];
        break;
      case 3:
        ++v18[3033];
        break;
      case 4:
        ++v18[3034];
        break;
      case 5:
        ++v18[3029];
        break;
      case 6:
        ++v18[3030];
        break;
      default:
        goto LABEL_21;
    }
    goto LABEL_34;
  }
  switch ( a1 )
  {
    case 8:
      ++v18[3020];
      goto LABEL_34;
    case 9:
      ++v18[3018];
      ++v18[3043];
      LODWORD(v18) = EtwTraceTouchpadGestureDetected();
      break;
    case 10:
      ++v18[3041];
      return (int)v18;
    case 11:
      ++v18[3039];
LABEL_34:
      ++v18[3043];
      break;
    case 12:
      ++v18[3040];
      goto LABEL_34;
  }
LABEL_21:
  if ( (unsigned int)dword_1402A9F58 > 5 )
  {
    v27 = a1;
    v35 = &v27;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1402A9F60;
    v36 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9F60;
    v32 = &unk_14028AC90;
    UserData.Reserved = 2;
    v33 = 25;
    v34 = 1;
    v26 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v18) = EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v18;
}
