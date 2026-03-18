/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x14011C948
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x14011C678 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     FreeHidData @ 0x1400C7E10 (FreeHidData.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     AllocateHidData @ 0x140120CE4 (AllocateHidData.c)
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline @ 0x1402750BC (Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        __int64 a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  unsigned int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 i; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  const struct tagUIPI_INFO *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 HidData; // rax
  __int64 *v33; // rbx
  InputTransform *v34; // rdx
  __int64 v36; // [rsp+88h] [rbp-60h]
  __int64 v37; // [rsp+90h] [rbp-58h] BYREF
  int v38; // [rsp+98h] [rbp-50h]
  __int64 v39; // [rsp+A0h] [rbp-48h] BYREF
  int v40; // [rsp+A8h] [rbp-40h]

  v39 = 0LL;
  v40 = 0;
  v8 = a1;
  v9 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
  {
    UserSessionState = W32GetUserSessionState(v11, v10);
    v9 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18888)) + 464);
    v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18888);
    v39 = *(_QWORD *)(v15 + 448);
    v40 = *(_DWORD *)(v15 + 456);
  }
  v16 = *(__int64 **)(W32GetUserSessionState(v11, v10) + 224);
  for ( i = W32GetUserSessionState(v18, v17) + 224; v16 != (__int64 *)i; v16 = (__int64 *)*v16 )
  {
    if ( (*((_DWORD *)v16 + 25) & 0x40) != 0 )
    {
      v22 = v16[9];
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 40);
        if ( *(char *)(v23 + 20) >= 0 && *(char *)(v23 + 19) >= 0 )
        {
          v20 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19144);
          v25 = v16[9];
          if ( *(_QWORD *)(v25 + 24) == v20 )
          {
            if ( !v9
              || UIPrivilegeIsolation::CheckAccess(
                   (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 464LL) + 864LL),
                   (const struct tagUIPI_INFO *)&v39,
                   v24)
              || (v26 = *(_QWORD *)(v16[9] + 16), *(int *)(*(_QWORD *)(v26 + 464) + 12LL) < 0) )
            {
              v20 = v16[9];
              if ( *(_QWORD *)(*(_QWORD *)(v20 + 16) + 464LL) != v9 && ((*((_DWORD *)v16 + 25) & 0x80u) == 0 || !a6) )
              {
                HidData = AllocateHidData(a2, v16[9]);
                v33 = (__int64 *)HidData;
                if ( !HidData )
                  return;
                *(_WORD *)(HidData + 80) = a3->MakeCode;
                *(_WORD *)(HidData + 82) = a3->Flags;
                *(_WORD *)(HidData + 84) = a3->Reserved;
                *(_DWORD *)(HidData + 88) = a4;
                *(_WORD *)(HidData + 86) = a5;
                *(_DWORD *)(HidData + 92) = a3->ExtraInformation;
                if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() )
                  v34 = (InputTransform *)v33[3];
                else
                  v34 = (InputTransform *)v16[9];
                if ( !(unsigned int)PostInputMessage(
                                      *(struct tagQ **)(*((_QWORD *)v34 + 2) + 472LL),
                                      v34,
                                      0xFFu,
                                      *v33,
                                      v8,
                                      0LL,
                                      a3->ExtraInformation,
                                      0,
                                      0LL,
                                      a2,
                                      0LL,
                                      0,
                                      0,
                                      0LL) )
                  FreeHidData((__int64)v33);
              }
            }
            else
            {
              v27 = v40;
              v36 = v39;
              v28 = W32GetUserSessionState(v26, v19);
              v29 = v16[9];
              v37 = v36;
              v30 = *(_QWORD *)(v28 + 18888);
              v31 = *(_QWORD *)(v29 + 16);
              v38 = v27;
              EtwTraceUIPIInputError(v31, 0LL, v30, &v37, 5);
            }
          }
        }
      }
    }
  }
}
