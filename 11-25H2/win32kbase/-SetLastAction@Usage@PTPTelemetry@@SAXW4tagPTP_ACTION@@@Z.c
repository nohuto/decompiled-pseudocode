/*
 * XREFs of ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1401158EC
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@334@Z @ 0x140002100 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     EtwTraceTouchpadGestureDetected @ 0x140115CF0 (EtwTraceTouchpadGestureDetected.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int __fastcall PTPTelemetry::Usage::SetLastAction(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v23; // [rsp+58h] [rbp-19h] BYREF
  int v24; // [rsp+5Ch] [rbp-15h] BYREF
  LONGLONG v25; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-9h] BYREF
  __int64 v27; // [rsp+70h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp+17h] BYREF
  void *v30; // [rsp+98h] [rbp+27h]
  int v31; // [rsp+A0h] [rbp+2Fh]
  int v32; // [rsp+A4h] [rbp+33h]
  int *v33; // [rsp+A8h] [rbp+37h]
  __int64 v34; // [rsp+B0h] [rbp+3Fh]

  v2 = a1;
  v3 = W32GetUserSessionState(a1, a2) + 3296;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = PerformanceCounter.QuadPart - _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 16), 0LL, 0LL);
  v6 = (unsigned __int64)(1000 * v5) % gliQpcFreq.QuadPart;
  if ( (__int64)((unsigned __int64)(1000 * v5) / gliQpcFreq.QuadPart) <= 500 )
  {
    _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 0LL);
    _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), 0LL, 0LL);
    v14 = *(_DWORD *)(v3 + 28);
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
    {
      v23 = v14;
      v24 = v2;
      v19 = v15 - v18;
      v27 = v16;
      v20 = 1000 * (v15 - v18);
      v21 = v15 - v17;
      v25 = v20 / gliQpcFreq.QuadPart;
      v26 = (unsigned __int64)(1000 * v21) / gliQpcFreq.QuadPart;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v19,
        (__int64)&unk_1402806AE,
        v21,
        v16,
        (__int64)&v27,
        (__int64)&v24,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v23);
    }
  }
  UserSessionState = W32GetUserSessionState(v5, v6);
  v10 = W32GetUserSessionState(v9, v8);
  if ( *(_DWORD *)(v10 + 12264) || *(_QWORD *)(v10 + 12240) || *(__int64 *)(v10 + 12224) <= 0 )
    *(_DWORD *)(UserSessionState + 12268) = v2;
  else
    *(_DWORD *)(UserSessionState + 12264) = v2;
  v13 = (_DWORD *)W32GetUserSessionState(v12, v11);
  if ( v2 > 16 )
  {
    if ( v2 <= 22 )
    {
      switch ( v2 )
      {
        case 22:
          ++v13[3025];
          break;
        case 17:
          ++v13[3028];
          break;
        case 18:
          ++v13[3022];
          break;
        case 19:
          ++v13[3023];
          break;
        case 20:
          ++v13[3026];
          break;
        default:
          ++v13[3027];
          break;
      }
    }
    else
    {
      switch ( v2 )
      {
        case 23:
          ++v13[3036];
          break;
        case 24:
          ++v13[3037];
          break;
        case 25:
          ++v13[3021];
          break;
        case 26:
          ++v13[3038];
          break;
        case 27:
          ++v13[3035];
          break;
        default:
          goto LABEL_21;
      }
    }
    goto LABEL_34;
  }
  if ( v2 == 16 )
  {
    ++v13[3024];
    goto LABEL_34;
  }
  if ( v2 <= 7 )
  {
    switch ( v2 )
    {
      case 7:
        ++v13[3019];
        break;
      case 1:
        ++v13[3031];
        break;
      case 2:
        ++v13[3032];
        break;
      case 3:
        ++v13[3033];
        break;
      case 4:
        ++v13[3034];
        break;
      case 5:
        ++v13[3029];
        break;
      case 6:
        ++v13[3030];
        break;
      default:
        goto LABEL_21;
    }
    goto LABEL_34;
  }
  switch ( v2 )
  {
    case 8:
      ++v13[3020];
      goto LABEL_34;
    case 9:
      ++v13[3018];
      ++v13[3043];
      LODWORD(v13) = EtwTraceTouchpadGestureDetected();
      break;
    case 10:
      ++v13[3041];
      return (int)v13;
    case 11:
      ++v13[3039];
      goto LABEL_34;
    case 12:
      ++v13[3040];
LABEL_34:
      ++v13[3043];
      break;
  }
LABEL_21:
  if ( (unsigned int)dword_14029EF38 > 5 )
  {
    v24 = v2;
    v33 = &v24;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_14029EF40;
    v34 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_14029EF40;
    v30 = &unk_140280694;
    UserData.Reserved = 2;
    v31 = 25;
    v32 = 1;
    v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v13) = EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v13;
}
