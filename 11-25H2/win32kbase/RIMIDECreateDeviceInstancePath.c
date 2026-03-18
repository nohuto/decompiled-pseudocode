/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x14014FF4C
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E90CC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E9474 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x14015024C (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // esi
  unsigned int v6; // r14d
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // di
  bool v12; // si
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  __int64 UserSessionState; // rax
  const unsigned __int16 *v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // di
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rax
  __int16 v32; // [rsp+30h] [rbp-28h]
  char v33; // [rsp+40h] [rbp-18h]

  v5 = a3;
  v6 = (unsigned __int16)a2;
  v7 = a1;
  v8 = -1073741823;
  if ( isChildPartition(a1, a2) )
  {
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        if ( v7 != 2 )
        {
          v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v33 = v7;
            v15 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v9) + 19336);
            v32 = 16;
LABEL_13:
            LOBYTE(v14) = v12;
            LOBYTE(v13) = v11;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v14,
              v15,
              2,
              1,
              v32,
              (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
              v33);
            return v8;
          }
          return v8;
        }
        UserSessionState = W32GetUserSessionState(v10, v9);
        v17 = L"\\??\\Microsoft HID RID\\c\\%04X_%04X\\%u";
        goto LABEL_15;
      }
      v21 = W32GetUserSessionState(v10, v9);
      v18 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\c\\%u", *(unsigned int *)(v21 + 240));
    }
    else
    {
      v22 = W32GetUserSessionState(v10, v9);
      v18 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\c\\%u", *(unsigned int *)(v22 + 240));
    }
LABEL_32:
    v8 = v18;
    if ( v18 >= 0 )
    {
      v30 = W32GetUserSessionState(v20, v19);
      ++*(_DWORD *)(v30 + 240);
    }
    else
    {
      v25 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 19336),
          2,
          1,
          18,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v8);
      }
    }
    return v8;
  }
  switch ( v7 )
  {
    case 0:
      v24 = W32GetUserSessionState(v10, v9);
      v18 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\%u", *(unsigned int *)(v24 + 240));
      goto LABEL_32;
    case 1:
      v23 = W32GetUserSessionState(v10, v9);
      v18 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\%u", *(unsigned int *)(v23 + 240));
      goto LABEL_32;
    case 2:
      UserSessionState = W32GetUserSessionState(v10, v9);
      v17 = L"\\??\\Microsoft HID RID\\%04X_%04X\\%u";
LABEL_15:
      v18 = RtlUnicodeStringPrintf(a4, v17, v6, v5, *(_DWORD *)(UserSessionState + 240));
      goto LABEL_32;
  }
  v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = v7;
    v15 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v9) + 19336);
    v32 = 17;
    goto LABEL_13;
  }
  return v8;
}
