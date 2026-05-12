/*
 * XREFs of StorEtwRaidMiniportEvent @ 0x140042204
 * Callers:
 *     StorEtwRaidMiniportEventProxy @ 0x14004EB50 (StorEtwRaidMiniportEventProxy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x14003E924 (StorpTelemetryMiniportEventWStr.c)
 *     StorEtwMiniportGetKeyword @ 0x140042684 (StorEtwMiniportGetKeyword.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorEtwRaidMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _WORD *a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 *v15; // r14
  EVENT_DESCRIPTOR v16; // xmm0
  __int64 v17; // rcx
  signed __int16 v18; // ax
  unsigned int v19; // ecx
  bool v20; // cc
  __int64 v22; // rax
  const wchar_t *v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ecx
  const wchar_t *v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  const wchar_t *v29; // r8
  __int64 v30; // rsi
  __int64 *Unit; // rax
  unsigned int v32; // ebx
  const int *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  const int *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  const int *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  ULONG UserDataCount; // ebx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  ULONG v49; // ebx
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned int v52; // r8d
  _QWORD *v53; // r11
  __int64 v54; // rcx
  unsigned int v55; // edx
  const wchar_t *v56; // r9
  __int64 v57; // rax
  ULONG v58; // ebx
  __int64 *v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // ebx
  int v62; // [rsp+44h] [rbp-BCh] BYREF
  int v63; // [rsp+48h] [rbp-B8h] BYREF
  int v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v67; // [rsp+68h] [rbp-98h]
  _WORD *v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h]
  __int64 v70; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  __int128 v72; // [rsp+98h] [rbp-68h] BYREF
  GUID ActivityId; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  int *v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  _WORD *v77; // [rsp+E0h] [rbp-20h]
  int v78; // [rsp+E8h] [rbp-18h]
  int v79; // [rsp+ECh] [rbp-14h]
  __int64 v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  __int64 v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  int *v84; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+118h] [rbp+18h]
  char *v86; // [rsp+120h] [rbp+20h]
  __int64 v87; // [rsp+128h] [rbp+28h]
  char *v88; // [rsp+130h] [rbp+30h]
  __int64 v89; // [rsp+138h] [rbp+38h]
  __int128 *v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  const int *v92; // [rsp+150h] [rbp+50h]
  int v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+15Ch] [rbp+5Ch]
  const int *v95; // [rsp+160h] [rbp+60h]
  int v96; // [rsp+168h] [rbp+68h]
  int v97; // [rsp+16Ch] [rbp+6Ch]
  const int *v98; // [rsp+170h] [rbp+70h]
  int v99; // [rsp+178h] [rbp+78h]
  int v100; // [rsp+17Ch] [rbp+7Ch]

  v69 = a11;
  v68 = a5;
  v64 = a4;
  v67 = a12;
  v65 = a9;
  v15 = 0LL;
  v70 = 0LL;
  v62 = 0;
  v63 = 0;
  v66 = 0LL;
  EventDescriptor = 0LL;
  ActivityId = 0LL;
  v72 = 0LL;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( (unsigned int)(a7 - 1) > 1 )
      {
        if ( a7 != 3 )
          goto LABEL_15;
        if ( a9 && (byte_140173445 & 4) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest2;
          }
        }
        else if ( a2 )
        {
          if ( (byte_140173445 & 4) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun2;
          }
        }
        else
        {
          if ( (byte_140173445 & 4) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning2;
          }
        }
      }
      else if ( a9 && (byte_140173444 & 0x10) != 0 )
      {
        if ( a10 <= 2 )
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest2;
        }
        else if ( a10 <= 4 )
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest8;
        }
      }
      else if ( a2 )
      {
        if ( (byte_140173444 & 0x10) == 0 )
          return 0LL;
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun2;
        }
      }
      else
      {
        if ( (byte_140173444 & 0x10) == 0 )
          return 0LL;
        if ( a10 <= 2 )
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError2;
        }
        else if ( a10 > 4 )
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError8;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError4;
        }
      }
    }
    else
    {
      if ( a3 != 2 )
        return 3221225485LL;
      if ( (unsigned int)(a7 - 1) <= 1 )
      {
        if ( a2 )
        {
          if ( (byte_140173445 & 0x10) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun2;
          }
        }
        else
        {
          if ( (byte_140173445 & 0x10) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError2;
          }
        }
      }
      else
      {
        if ( a7 != 3 )
          goto LABEL_15;
        if ( a2 )
        {
          if ( (byte_140173445 & 0x20) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun2;
          }
        }
        else
        {
          if ( (byte_140173445 & 0x20) == 0 )
            return 0LL;
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning8;
            else
              v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning4;
          }
          else
          {
            v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning2;
          }
        }
      }
    }
  }
  else if ( a9 && StorEtwLoggingEnabled && (byte_140173443 & 0x10) != 0 )
  {
    if ( a10 > 2 )
    {
      if ( a10 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_41;
    if ( !StorEtwLoggingEnabled )
      return 0LL;
    if ( (byte_140173443 & 0x10) != 0 )
    {
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportLun8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportLun4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportLun2;
      }
    }
    else
    {
LABEL_41:
      if ( !StorEtwLoggingEnabled || (byte_140173443 & 0x10) == 0 )
        return 0LL;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniport8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniport4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniport2;
      }
    }
  }
  EventDescriptor = v16;
LABEL_15:
  LOWORD(v62) = -1;
  BYTE2(v62) = -1;
  if ( a2 )
  {
    if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
    {
      LOWORD(v62) = *(_WORD *)(a2 + 8);
      BYTE2(v62) = *(_BYTE *)(a2 + 10);
      Unit = RaidAdapterFindUnit(a1, v62);
      v15 = Unit;
      if ( Unit )
        v72 = *(_OWORD *)(Unit + 263);
    }
  }
  if ( (unsigned int)(a3 - 1) <= 1 && (unsigned int)(a7 - 2) <= 2 )
  {
    v17 = 2LL * (a7 - 2);
    if ( v15 )
      v18 = _InterlockedExchangeAdd16((volatile signed __int16 *)((char *)v15 + v17 + 3536), 1u);
    else
      v18 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v17 + a1 + 6056), 1u);
    v19 = (__int16)(v18 + 1);
    switch ( a7 )
    {
      case 2:
        v20 = v19 <= StorEtwErrorEventThrottleLimit;
        break;
      case 3:
        v20 = v19 <= StorEtwWarningEventThrottleLimit;
        break;
      case 4:
        v20 = v19 <= StorEtwInfoEventThrottleLimit;
        break;
      default:
        goto LABEL_26;
    }
    if ( !v20 )
      return 0LL;
  }
LABEL_26:
  EventDescriptor.Opcode = a8;
  EventDescriptor.Level = a7;
  EventDescriptor.Keyword = StorEtwMiniportGetKeyword(a6, EventDescriptor.Keyword, 4LL, 1LL);
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(const wchar_t **)(v22 + 48);
  if ( v23 )
  {
    v27 = *(unsigned __int16 *)(v22 + 40);
    if ( (_WORD)v27 )
    {
      v28 = v27 >> 1;
      while ( v28 )
      {
        v29 = &v23[--v28];
        if ( *v29 == 92 )
        {
          if ( v29 )
            v23 = v29 + 1;
          break;
        }
      }
    }
  }
  if ( v23 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  UserData.Size = v25;
  v26 = L"NULL";
  if ( v23 )
    v26 = v23;
  UserData.Reserved = 0;
  UserData.Ptr = (unsigned __int64)v26;
  v75 = &v64;
  v76 = 4LL;
  if ( !v68 )
    return 3221225485LL;
  v30 = -1LL;
  do
    ++v30;
  while ( v68[v30] );
  if ( (unsigned int)(v30 - 1) > 0x3F )
    return 3221225485LL;
  v77 = v68;
  v32 = 5;
  v78 = 2 * v30 + 2;
  v79 = 0;
  v80 = a1 + 56;
  v82 = a1 + 5128;
  v81 = 4LL;
  v83 = 16LL;
  if ( v65 || a2 )
  {
    v91 = 16LL;
    v85 = 1LL;
    v84 = &v62;
    v86 = (char *)&v62 + 1;
    v88 = (char *)&v62 + 2;
    v90 = &v72;
    v33 = (const int *)(v15 + 21);
    v87 = 1LL;
    v89 = 1LL;
    if ( v15 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( *((_BYTE *)v33 + v34) );
      v35 = v34 + 1;
    }
    else
    {
      v35 = 1;
      v33 = &dword_140154ADC;
    }
    v92 = v33;
    v36 = (const int *)((char *)v15 + 177);
    v93 = v35;
    v94 = 0;
    if ( v15 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( *((_BYTE *)v36 + v37) );
      v38 = v37 + 1;
    }
    else
    {
      v38 = 1;
      v36 = &dword_140154ADC;
    }
    v95 = v36;
    v39 = (const int *)((char *)v15 + 242);
    v96 = v38;
    v97 = 0;
    if ( v15 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( *((_BYTE *)v39 + v40) );
      v41 = v40 + 1;
    }
    else
    {
      v41 = 1;
      v39 = &dword_140154ADC;
    }
    v98 = v39;
    v32 = 12;
    v99 = v41;
    v100 = 0;
  }
  if ( v15 )
    v42 = *((_BYTE *)v15 + 506) & 1;
  else
    v42 = *(unsigned __int8 *)(a1 + 104) >> 7;
  v63 = v42;
  v43 = v32;
  UserDataCount = v32 + 1;
  v43 *= 2LL;
  *(&UserData.Ptr + v43) = (unsigned __int64)&v63;
  v45 = v65;
  *((_QWORD *)&UserData.Size + v43) = 4LL;
  if ( v45 )
  {
    v46 = 80LL;
    if ( *(_BYTE *)(v45 + 2) != 40 )
      v46 = 48LL;
    v47 = *(_QWORD *)(v46 + v45);
    v66 = v47;
    if ( v47 )
      IoGetActivityIdIrp(v47, &ActivityId);
    v48 = 2LL * UserDataCount;
    v49 = UserDataCount + 1;
    *(&UserData.Ptr + v48) = (unsigned __int64)&v66;
    *((_QWORD *)&UserData.Size + v48) = 8LL;
    v50 = 2LL * v49;
    UserDataCount = v49 + 1;
    *(&UserData.Ptr + v50) = (unsigned __int64)&v65;
    *((_QWORD *)&UserData.Size + v50) = 8LL;
  }
  if ( 2 * a10 > 31 - (unsigned __int64)UserDataCount )
    return 3221225485LL;
  v51 = v69;
  v52 = 0;
  v53 = v67;
  while ( v52 < a10 )
  {
    v54 = *(_QWORD *)(v51 + 8LL * v52);
    if ( !v54 )
      goto LABEL_171;
    v30 = -1LL;
    do
      ++v30;
    while ( *(_WORD *)(v54 + 2 * v30) );
    if ( (unsigned int)v30 > 0x40 )
      return 3221225485LL;
    if ( (_DWORD)v30 )
    {
      v55 = 2 * v30 + 2;
    }
    else
    {
LABEL_171:
      v55 = 10;
      if ( !v54 || !(_DWORD)v30 )
      {
        v56 = L"NULL";
        goto LABEL_175;
      }
    }
    v56 = *(const wchar_t **)(v51 + 8LL * v52);
LABEL_175:
    v57 = UserDataCount;
    v58 = UserDataCount + 1;
    v57 *= 2LL;
    *(&UserData.Ptr + v57) = (unsigned __int64)v56;
    *(&UserData.Size + 2 * v57) = v55;
    *(&UserData.Reserved + 2 * v57) = 0;
    if ( !v54 || (v59 = &v53[v52], !(_DWORD)v30) )
      v59 = &v70;
    v60 = v58;
    UserDataCount = v58 + 1;
    v60 *= 2LL;
    ++v52;
    *(&UserData.Ptr + v60) = (unsigned __int64)v59;
    *((_QWORD *)&UserData.Size + v60) = 8LL;
  }
  v61 = EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, UserDataCount, &UserData);
  if ( (unsigned int)(a3 - 1) <= 1 )
    StorpTelemetryMiniportEventWStr(v64, v68, a1, a2, v65, a10, v51, v67);
  return v61;
}
