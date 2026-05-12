/*
 * XREFs of StorEtwNvmeMiniportEvent @ 0x1400B1BA0
 * Callers:
 *     StorEtwNvmeMiniportEventProxy @ 0x14007A9D0 (StorEtwNvmeMiniportEventProxy.c)
 * Callees:
 *     StorEtwMiniportGetKeyword @ 0x140042684 (StorEtwMiniportGetKeyword.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorEtwNvmeMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r12
  int v13; // r8d
  const int *v16; // r14
  const int *v17; // rsi
  const int *v18; // rbx
  __int64 v19; // rcx
  signed __int16 v20; // ax
  unsigned int v21; // ecx
  bool v22; // cc
  EVENT_DESCRIPTOR v24; // xmm0
  unsigned __int64 Keyword; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  const wchar_t *v29; // rax
  const int *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdi
  unsigned int v41; // r9d
  ULONG UserDataCount; // edx
  __int64 v43; // r8
  unsigned int v44; // r10d
  const wchar_t *v45; // r11
  __int64 v46; // rax
  ULONG v47; // edx
  __int64 *v48; // r8
  __int64 v49; // rax
  __int16 v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  const wchar_t *v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
  const int *v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+CCh] [rbp-34h]
  __int16 *v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  int *v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  int *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  const int *v71; // [rsp+100h] [rbp+0h]
  int v72; // [rsp+108h] [rbp+8h]
  int v73; // [rsp+10Ch] [rbp+Ch]
  const int *v74; // [rsp+110h] [rbp+10h]
  int v75; // [rsp+118h] [rbp+18h]
  int v76; // [rsp+11Ch] [rbp+1Ch]
  const int *v77; // [rsp+120h] [rbp+20h]
  int v78; // [rsp+128h] [rbp+28h]
  int v79; // [rsp+12Ch] [rbp+2Ch]
  char *v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  __int64 v82; // [rsp+140h] [rbp+40h]
  int v83; // [rsp+148h] [rbp+48h]
  int v84; // [rsp+14Ch] [rbp+4Ch]
  int v85; // [rsp+2E0h] [rbp+1E0h] BYREF

  v85 = a3;
  v12 = a11;
  v13 = a8;
  v51 = 0;
  v50 = -1;
  v52 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  ActivityId = 0LL;
  v53 = 0LL;
  if ( a2 && *(_DWORD *)a2 != 1314276178 )
    return -1073741811;
  if ( (unsigned int)(a8 - 2) <= 2 )
  {
    v19 = 2LL * (a8 - 2);
    if ( a2 )
      v20 = _InterlockedExchangeAdd16((volatile signed __int16 *)(a2 + v19 + 736), 1u);
    else
      v20 = _InterlockedExchangeAdd16((volatile signed __int16 *)(a1 + v19 + 1144), 1u);
    v21 = (__int16)(v20 + 1);
    switch ( v13 )
    {
      case 4:
        v22 = v21 <= StorEtwInfoEventThrottleLimit;
        break;
      case 3:
        v22 = v21 <= StorEtwWarningEventThrottleLimit;
        break;
      case 2:
        v22 = v21 <= StorEtwErrorEventThrottleLimit;
        break;
      default:
        goto LABEL_15;
    }
    if ( !v22 )
      return 0;
  }
LABEL_15:
  if ( a4 )
  {
    if ( a4 == 2 )
    {
      if ( (unsigned int)(v13 - 1) <= 1 )
      {
        v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportHealthError;
      }
      else if ( v13 == 3 )
      {
        v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportHealthWarning;
      }
      else
      {
        v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportHealthInformational;
      }
    }
    else
    {
      if ( a4 != 1 )
        return -1073741811;
      if ( (unsigned int)(v13 - 1) <= 1 )
      {
        v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportError;
      }
      else if ( v13 == 3 )
      {
        v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportWarning;
      }
      else
      {
        v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportInformational;
      }
    }
  }
  else if ( (unsigned int)(v13 - 1) <= 1 )
  {
    v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportDiagnosticError;
  }
  else if ( v13 == 3 )
  {
    v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportDiagnosticWarning;
  }
  else
  {
    v24 = (EVENT_DESCRIPTOR)EventNVMeMiniportDiagnosticInformational;
  }
  EventDescriptor = v24;
  EventDescriptor.Opcode = a9;
  EventDescriptor.Level = v13;
  Keyword = StorEtwMiniportGetKeyword(a7, v24.Keyword);
  v26 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = Keyword;
  RaidDriverGetName(v26, (__int64)&v53);
  UserData.Ptr = a1 + 56;
  *(_QWORD *)&UserData.Size = 4LL;
  v57 = a1 + 1048;
  v58 = 16LL;
  if ( *((_QWORD *)&v53 + 1) )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(*((_QWORD *)&v53 + 1) + 2 * v27) );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v60 = v28;
  v29 = L"NULL";
  v61 = 0;
  if ( *((_QWORD *)&v53 + 1) )
    v29 = (const wchar_t *)*((_QWORD *)&v53 + 1);
  v59 = v29;
  if ( !a2 )
    goto LABEL_47;
  v17 = (const int *)(a2 + 800);
  v30 = *(const int **)(a2 + 792);
  v18 = (const int *)(a2 + 841);
  v50 = *(_WORD *)(a2 + 4);
  v16 = &dword_140154ADC;
  if ( *(_QWORD *)(a2 + 752) )
    v16 = *(const int **)(a2 + 752);
  v51 = *(_DWORD *)(a2 + 744);
  if ( v30 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *((_BYTE *)v30 + v31) );
    v32 = v31 + 1;
  }
  else
  {
LABEL_47:
    v30 = &dword_140154ADC;
    v32 = 1;
  }
  v63 = v32;
  v65 = &v50;
  v67 = &v85;
  v69 = &v51;
  v62 = v30;
  v64 = 0;
  v66 = 2LL;
  v68 = 4LL;
  v70 = 1LL;
  if ( v16 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *((_BYTE *)v16 + v33) );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 1;
    v16 = &dword_140154ADC;
  }
  v71 = v16;
  v72 = v34;
  v73 = 0;
  if ( v17 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( *((_BYTE *)v17 + v35) );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 1;
    v17 = &dword_140154ADC;
  }
  v74 = v17;
  v75 = v36;
  v76 = 0;
  if ( v18 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *((_BYTE *)v18 + v37) );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 1;
    v18 = &dword_140154ADC;
  }
  v78 = v38;
  v80 = &a5;
  v77 = v18;
  v79 = 0;
  v81 = 4LL;
  if ( a6 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *(_WORD *)(a6 + 2 * v39) );
    if ( (unsigned int)(v39 - 1) <= 0x3F )
    {
      v40 = a12;
      v82 = a6;
      v41 = 0;
      v83 = 2 * v39 + 2;
      UserDataCount = 12;
      v84 = 0;
      while ( 1 )
      {
        if ( v41 >= 8 )
          return EtwWriteEx(
                   StorPortEventProvider_Context,
                   &EventDescriptor,
                   0LL,
                   1u,
                   &ActivityId,
                   0LL,
                   UserDataCount,
                   &UserData);
        v43 = *(_QWORD *)(v12 + 8LL * v41);
        if ( !v43 )
          goto LABEL_75;
        v39 = -1LL;
        do
          ++v39;
        while ( *(_WORD *)(v43 + 2 * v39) );
        if ( (unsigned int)v39 > 0x40 )
          return -1073741811;
        if ( (_DWORD)v39 )
        {
          v44 = 2 * v39 + 2;
        }
        else
        {
LABEL_75:
          v44 = 10;
          if ( !v43 || !(_DWORD)v39 )
          {
            v45 = L"NULL";
            goto LABEL_79;
          }
        }
        v45 = *(const wchar_t **)(v12 + 8LL * v41);
LABEL_79:
        v46 = UserDataCount;
        v47 = UserDataCount + 1;
        v46 *= 2LL;
        *(&UserData.Ptr + v46) = (unsigned __int64)v45;
        *(&UserData.Size + 2 * v46) = v44;
        *(&UserData.Reserved + 2 * v46) = 0;
        if ( !v43 || (v48 = (__int64 *)(v40 + 8LL * v41), !(_DWORD)v39) )
          v48 = &v52;
        ++v41;
        v49 = 2LL * v47;
        UserDataCount = v47 + 1;
        *(&UserData.Ptr + v49) = (unsigned __int64)v48;
        *((_QWORD *)&UserData.Size + v49) = 8LL;
      }
    }
  }
  return -1073741811;
}
