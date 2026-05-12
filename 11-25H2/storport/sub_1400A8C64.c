/*
 * XREFs of sub_1400A8C64 @ 0x1400A8C64
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400A80B0 @ 0x1400A80B0 (sub_1400A80B0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400A8C64(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        UCHAR a9,
        int a10,
        const wchar_t **a11,
        __int64 a12)
{
  int v12; // r8d
  const int *v15; // r14
  const int *v16; // rsi
  const int *v17; // rbx
  __int64 v18; // rcx
  signed __int16 v19; // ax
  unsigned int v20; // ecx
  bool v21; // cc
  EVENT_DESCRIPTOR v23; // xmm0
  ULONGLONG v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  const wchar_t *v28; // rax
  const int *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  const wchar_t **v39; // rbx
  __int64 v40; // rdi
  unsigned int v41; // r10d
  ULONG UserDataCount; // edx
  const wchar_t *v43; // r8
  __int64 v44; // rax
  ULONG v45; // r9d
  const wchar_t *v46; // r11
  __int64 v47; // rax
  ULONG v48; // edx
  __int64 *v49; // r8
  __int64 v50; // rax
  __int16 v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v54; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  const wchar_t *v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B8h] [rbp-48h]
  int v62; // [rsp+BCh] [rbp-44h]
  const int *v63; // [rsp+C0h] [rbp-40h]
  int v64; // [rsp+C8h] [rbp-38h]
  int v65; // [rsp+CCh] [rbp-34h]
  __int16 *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  int *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  int *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  const int *v72; // [rsp+100h] [rbp+0h]
  int v73; // [rsp+108h] [rbp+8h]
  int v74; // [rsp+10Ch] [rbp+Ch]
  const int *v75; // [rsp+110h] [rbp+10h]
  int v76; // [rsp+118h] [rbp+18h]
  int v77; // [rsp+11Ch] [rbp+1Ch]
  const int *v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+128h] [rbp+28h]
  int v80; // [rsp+12Ch] [rbp+2Ch]
  char *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  __int64 v83; // [rsp+140h] [rbp+40h]
  int v84; // [rsp+148h] [rbp+48h]
  int v85; // [rsp+14Ch] [rbp+4Ch]
  int v86; // [rsp+2E0h] [rbp+1E0h] BYREF

  v86 = a3;
  v12 = a8;
  v52 = 0;
  v53 = 0LL;
  v51 = -1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  ActivityId = 0LL;
  v54 = 0LL;
  if ( a2 && *(_DWORD *)a2 != 1314276178 )
    return -1073741811;
  if ( (unsigned int)(a8 - 2) <= 2 )
  {
    v18 = 2LL * (a8 - 2);
    if ( a2 )
      v19 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v18 + a2 + 736), 1u);
    else
      v19 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v18 + a1 + 1128), 1u);
    v20 = (__int16)(v19 + 1);
    switch ( v12 )
    {
      case 4:
        v21 = v20 <= dword_140168470;
        break;
      case 3:
        v21 = v20 <= dword_14016846C;
        break;
      case 2:
        v21 = v20 <= dword_140168474;
        break;
      default:
        goto LABEL_15;
    }
    if ( !v21 )
      return 0;
  }
LABEL_15:
  if ( a4 )
  {
    if ( a4 == 2 )
    {
      if ( (unsigned int)(v12 - 1) <= 1 )
      {
        v23 = (EVENT_DESCRIPTOR)xmmword_14014A750;
      }
      else if ( v12 == 3 )
      {
        v23 = (EVENT_DESCRIPTOR)xmmword_14014B218;
      }
      else
      {
        v23 = (EVENT_DESCRIPTOR)xmmword_14014AE38;
      }
    }
    else
    {
      if ( a4 != 1 )
        return -1073741811;
      if ( (unsigned int)(v12 - 1) <= 1 )
      {
        v23 = (EVENT_DESCRIPTOR)xmmword_14014A3B0;
      }
      else if ( v12 == 3 )
      {
        v23 = (EVENT_DESCRIPTOR)xmmword_14014AF38;
      }
      else
      {
        v23 = (EVENT_DESCRIPTOR)xmmword_14014A700;
      }
    }
  }
  else if ( (unsigned int)(v12 - 1) <= 1 )
  {
    v23 = (EVENT_DESCRIPTOR)xmmword_1401499C0;
  }
  else if ( v12 == 3 )
  {
    v23 = (EVENT_DESCRIPTOR)xmmword_14014A948;
  }
  else
  {
    v23 = (EVENT_DESCRIPTOR)xmmword_14014ADC8;
  }
  EventDescriptor = v23;
  EventDescriptor.Opcode = a9;
  EventDescriptor.Level = v12;
  v24 = sub_1400A80B0(a7, v23.Keyword);
  v25 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = v24;
  sub_1400403EC(v25, (__int64)&v54);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 56;
  v58 = a1 + 1032;
  v59 = 16LL;
  if ( *((_QWORD *)&v54 + 1) )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)(*((_QWORD *)&v54 + 1) + 2 * v26) );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v61 = v27;
  v28 = L"NULL";
  v62 = 0;
  if ( *((_QWORD *)&v54 + 1) )
    v28 = (const wchar_t *)*((_QWORD *)&v54 + 1);
  v60 = v28;
  if ( !a2 )
    goto LABEL_47;
  v16 = (const int *)(a2 + 800);
  v29 = *(const int **)(a2 + 792);
  v17 = (const int *)(a2 + 841);
  v51 = *(_WORD *)(a2 + 4);
  v15 = &dword_140149108;
  if ( *(_QWORD *)(a2 + 752) )
    v15 = *(const int **)(a2 + 752);
  v52 = *(_DWORD *)(a2 + 744);
  if ( v29 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_BYTE *)v29 + v30) );
    v31 = v30 + 1;
  }
  else
  {
LABEL_47:
    v31 = 1;
    v29 = &dword_140149108;
  }
  v64 = v31;
  v66 = &v51;
  v68 = &v86;
  v70 = &v52;
  v63 = v29;
  v65 = 0;
  v67 = 2LL;
  v69 = 4LL;
  v71 = 1LL;
  if ( v15 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_BYTE *)v15 + v32) );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 1;
    v15 = &dword_140149108;
  }
  v72 = v15;
  v73 = v33;
  v74 = 0;
  if ( v16 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *((_BYTE *)v16 + v34) );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 1;
    v16 = &dword_140149108;
  }
  v75 = v16;
  v76 = v35;
  v77 = 0;
  if ( v17 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v17 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 1;
    v17 = &dword_140149108;
  }
  v79 = v37;
  v81 = &a5;
  v78 = v17;
  v80 = 0;
  v82 = 4LL;
  if ( a6 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( *(_WORD *)(a6 + 2 * v38) );
    if ( (unsigned int)(v38 - 1) <= 0x3F )
    {
      v39 = a11;
      v40 = a12;
      v41 = 0;
      v83 = a6;
      UserDataCount = 12;
      v84 = 2 * v38 + 2;
      v85 = 0;
      while ( 1 )
      {
        v43 = *v39;
        if ( *v39 )
        {
          v44 = -1LL;
          do
            ++v44;
          while ( v43[v44] );
          if ( (unsigned int)v44 > 0x40 )
            return -1073741811;
          LODWORD(v38) = v44;
          if ( (_DWORD)v44 )
            break;
        }
        v45 = 10;
        if ( v43 && (_DWORD)v38 )
          goto LABEL_76;
        v46 = L"NULL";
LABEL_78:
        v47 = UserDataCount;
        v48 = UserDataCount + 1;
        v47 *= 2LL;
        *(&UserData.Ptr + v47) = (ULONGLONG)v46;
        *(&UserData.Size + 2 * v47) = v45;
        *(&UserData.Reserved + 2 * v47) = 0;
        if ( v43 && (_DWORD)v38 )
          v49 = (__int64 *)(v40 + 8LL * v41);
        else
          v49 = &v53;
        ++v41;
        v50 = 2LL * v48;
        UserDataCount = v48 + 1;
        ++v39;
        *(&UserData.Ptr + v50) = (ULONGLONG)v49;
        *((_QWORD *)&UserData.Size + v50) = 8LL;
        if ( v41 >= 8 )
          return EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, UserDataCount, &UserData);
      }
      v45 = 2 * v44 + 2;
LABEL_76:
      v46 = *v39;
      goto LABEL_78;
    }
  }
  return -1073741811;
}
