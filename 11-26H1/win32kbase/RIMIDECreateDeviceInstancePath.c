/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x14018F42C
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1402083FC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1402087A4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x14018F72C (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(int a1, int a2, int a3, struct _UNICODE_STRING *a4)
{
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  bool v12; // di
  bool v13; // si
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  __int64 UserSessionState; // rax
  const unsigned __int16 *v18; // rdx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // di
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rax
  __int16 v34; // [rsp+30h] [rbp-28h]
  char v35; // [rsp+40h] [rbp-18h]

  v5 = (unsigned __int16)a3;
  v6 = (unsigned __int16)a2;
  v8 = -1073741823;
  if ( isChildPartition(a1, a2, a3) )
  {
    if ( a1 )
    {
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v35 = a1;
            v16 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11) + 19368);
            v34 = 16;
LABEL_13:
            LOBYTE(v15) = v13;
            LOBYTE(v14) = v12;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v14,
              v15,
              v16,
              2,
              1,
              v34,
              (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
              v35);
            return v8;
          }
          return v8;
        }
        UserSessionState = W32GetUserSessionState(v10, v9, v11);
        v18 = L"\\??\\Microsoft HID RID\\c\\%04X_%04X\\%u";
        goto LABEL_15;
      }
      v23 = W32GetUserSessionState(v10, v9, v11);
      v19 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\c\\%u", *(unsigned int *)(v23 + 240));
    }
    else
    {
      v24 = W32GetUserSessionState(v10, v9, v11);
      v19 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\c\\%u", *(unsigned int *)(v24 + 240));
    }
LABEL_32:
    v8 = v19;
    if ( v19 >= 0 )
    {
      v32 = W32GetUserSessionState(v21, v20, v22);
      ++*(_DWORD *)(v32 + 240);
    }
    else
    {
      v27 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v22);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 19368),
          2,
          1,
          18,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
          v8);
      }
    }
    return v8;
  }
  switch ( a1 )
  {
    case 0:
      v26 = W32GetUserSessionState(v10, v9, v11);
      v19 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\%u", *(unsigned int *)(v26 + 240));
      goto LABEL_32;
    case 1:
      v25 = W32GetUserSessionState(v10, v9, v11);
      v19 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\%u", *(unsigned int *)(v25 + 240));
      goto LABEL_32;
    case 2:
      UserSessionState = W32GetUserSessionState(v10, v9, v11);
      v18 = L"\\??\\Microsoft HID RID\\%04X_%04X\\%u";
LABEL_15:
      v19 = RtlUnicodeStringPrintf(a4, v18, v6, v5, *(_DWORD *)(UserSessionState + 240));
      goto LABEL_32;
  }
  v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = a1;
    v16 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11) + 19368);
    v34 = 17;
    goto LABEL_13;
  }
  return v8;
}
