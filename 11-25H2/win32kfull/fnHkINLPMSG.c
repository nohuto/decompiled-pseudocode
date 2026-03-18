/*
 * XREFs of fnHkINLPMSG @ 0x1400C4FD0
 * Callers:
 *     xxxCallCtfHook @ 0x1400C4B80 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     _FreeTouchInputInfo @ 0x1400CABF0 (_FreeTouchInputInfo.c)
 *     IsTouchInputMessage @ 0x140150C60 (IsTouchInputMessage.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14017D4C8 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14022458C (RtlMBMessageWParamCharToWCS.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x140224710 (-THREAD_CODEPAGE@@YAGXZ.c)
 *     _FreeGestureInfo @ 0x1402694A0 (_FreeGestureInfo.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINLPMSG(
        unsigned int a1,
        __int64 a2,
        __int128 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        _DWORD *a7)
{
  int v8; // esi
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  ULONG BytesInUnicodeString; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // ecx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagTHREADINFO *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r15
  _OWORD *v39; // rbx
  int v40; // ecx
  __int64 v42; // [rsp+30h] [rbp-118h] BYREF
  __int64 v43; // [rsp+40h] [rbp-108h]
  _QWORD v44[2]; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int128 v45; // [rsp+60h] [rbp-E8h]
  __int128 v46; // [rsp+70h] [rbp-D8h]
  WCHAR UnicodeString[8]; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v48; // [rsp+90h] [rbp-B8h]
  __int64 v49; // [rsp+A0h] [rbp-A8h]
  _BYTE v50[8]; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-88h] BYREF
  volatile void *Address; // [rsp+D0h] [rbp-78h]
  __int64 v53; // [rsp+D8h] [rbp-70h]
  __int128 v54; // [rsp+F0h] [rbp-58h]
  volatile void *v55; // [rsp+100h] [rbp-48h]
  unsigned int MultiByteString; // [rsp+150h] [rbp+8h] BYREF
  int v57; // [rsp+158h] [rbp+10h] BYREF
  void *Src; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v59; // [rsp+168h] [rbp+20h]

  v59 = a4;
  v8 = 0;
  Src = 0LL;
  v57 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v44[0] = a1;
  v44[1] = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v46 = *a3;
  *(_OWORD *)UnicodeString = a3[1];
  v48 = a3[2];
  v11 = *((_DWORD *)a3 + 2);
  if ( ((v11 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v11 == 576 || ((v11 - 281) & 0xFFFFFFFD) == 0 )
    {
      v9 = *((_QWORD *)a3 + 2);
      v10 = *((_QWORD *)a3 + 3);
      LOBYTE(a2) = -1;
      v20 = HMValidateHandleWithDescriptor(v10, a2);
      v22 = v20;
      if ( !v20 )
        return 0LL;
      v23 = *((_DWORD *)a3 + 2);
      v24 = v23 == 576;
      v25 = (unsigned int)(v23 - 576);
      if ( v24 && *(_BYTE *)(_HMPheFromObject(v20) + 24) != 20 )
        return 0LL;
      if ( ((*((_DWORD *)a3 + 2) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v22) + 24) != 21 )
        return 0LL;
      v43 = *((_QWORD *)PtiCurrent(v25, v21) + 92);
      v42 = *((_QWORD *)PtiCurrent(v27, v26) + 93);
      *((_QWORD *)PtiCurrent(v29, v28) + 92) = v10;
      *((_QWORD *)PtiCurrent(v31, v30) + 93) = v9;
    }
  }
  else
  {
    v9 = *((_QWORD *)a3 + 2);
    MultiByteString = 0;
    if ( v11 <= 0x106 )
    {
      if ( v11 != 262 && v11 != 47 && v11 != 204 && v11 - 258 >= 2 )
        goto LABEL_33;
LABEL_13:
      v12 = THREAD_CODEPAGE();
      UserSessionState = W32GetUserSessionState(v14, v13);
      BytesInUnicodeString = 2;
      if ( (**(_DWORD **)(UserSessionState + 19872) & 2) == 0 )
        BytesInUnicodeString = 4;
      if ( (_WORD)v12 == NlsAnsiCodePage || !(_WORD)v12 )
      {
        if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, UnicodeString, BytesInUnicodeString) >= 0 )
        {
LABEL_18:
          if ( (**(_DWORD **)(W32GetUserSessionState(v18, v17) + 19872) & 2) != 0 )
          {
            v19 = (unsigned __int8)MultiByteString;
            if ( (MultiByteString & 0xFF00) != 0 )
            {
              *(_QWORD *)UnicodeString = ((unsigned __int64)(unsigned __int16)MultiByteString >> 8) | (((unsigned __int8)MultiByteString | ((unsigned __int64)UnicodeString[1] << 8)) << 8);
              goto LABEL_33;
            }
          }
          else
          {
            v19 = MultiByteString;
          }
          *(_QWORD *)UnicodeString = v19;
          goto LABEL_33;
        }
      }
      else if ( ConvertToAndFromWideChar(v12, UnicodeString, BytesInUnicodeString, (char *)&MultiByteString, 4, 0) )
      {
        goto LABEL_18;
      }
      *(_QWORD *)UnicodeString = 0LL;
      goto LABEL_33;
    }
    if ( v11 == 263 || v11 == 271 || v11 == 288 || v11 == 646 )
      goto LABEL_13;
  }
LABEL_33:
  v45 = __PAIR128__(a5, v59);
  LODWORD(v49) = *a7;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v50);
  EtwTraceBeginCallback(47LL);
  v32 = KeUserModeCallback(47LL, v44, 88LL, &Src, &v57);
  EtwTraceEndCallback(47LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v50);
  v34 = v11 - 576;
  if ( v11 == 576 || (v34 = ((v11 - 281) & 0xFFFFFFFD) == 0) != 0 )
  {
    v35 = PtiCurrent(v34, v33);
    v36 = v43;
    *((_QWORD *)v35 + 92) = v43;
    *((_QWORD *)PtiCurrent(v36, v37) + 93) = v42;
  }
  if ( v32 < 0 || v57 != 24 )
    return 0LL;
  v42 = 0LL;
  RtlCopyFromUser(&v42, Src, 8uLL);
  v38 = v42;
  v53 = v42;
  v51 = 0LL;
  Address = 0LL;
  RtlCopyFromUser(&v51, Src, 0x18uLL);
  v54 = v51;
  v55 = Address;
  v39 = Address;
  ProbeForRead(Address, 0x38uLL, 4u);
  *a3 = *v39;
  a3[1] = v39[1];
  a3[2] = v39[2];
  *a7 ^= (*((_DWORD *)v39 + 12) ^ *a7) & 0x10;
  if ( ((*((_DWORD *)a3 + 2) - 258) & 0xFFFFFFFB) == 0 && a6 )
  {
    if ( *(_QWORD *)UnicodeString == *((_QWORD *)a3 + 2) )
      *((_QWORD *)a3 + 2) = v9;
    else
      RtlMBMessageWParamCharToWCS();
  }
  v40 = *((_DWORD *)a3 + 2);
  if ( v40 == 576 || ((v40 - 281) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a3 + 2) = v11;
    *((_QWORD *)a3 + 2) = v9;
    *((_QWORD *)a3 + 3) = v10;
  }
  else if ( v9 == 1 )
  {
    if ( (unsigned int)IsTouchInputMessage(v11) )
      FreeTouchInputInfo(v10, 1LL);
    LOBYTE(v8) = ((v11 - 281) & 0xFFFFFFFD) == 0;
    if ( v8 )
    {
      FreeGestureInfo(v10, 1LL);
      return v38;
    }
  }
  return v38;
}
