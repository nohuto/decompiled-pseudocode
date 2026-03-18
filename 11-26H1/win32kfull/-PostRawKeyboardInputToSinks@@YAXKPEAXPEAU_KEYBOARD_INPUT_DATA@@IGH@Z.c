/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401724EC
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1401721D0 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     FreeHidData @ 0x14003ABB0 (FreeHidData.c)
 *     AllocateHidData @ 0x140090364 (AllocateHidData.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        __int64 a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v9; // rbp
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
  __int64 i; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  const struct tagUIPI_INFO *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 HidData; // rax
  __int64 v34; // rbx
  struct tagWND *v35; // rdx
  unsigned int v36; // [rsp+80h] [rbp-68h]
  __int64 v37; // [rsp+88h] [rbp-60h]
  __int64 v38; // [rsp+90h] [rbp-58h] BYREF
  int v39; // [rsp+98h] [rbp-50h]
  __int64 v40; // [rsp+A0h] [rbp-48h] BYREF
  int v41; // [rsp+A8h] [rbp-40h]

  v36 = a1;
  v40 = 0LL;
  v41 = 0;
  v9 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
  {
    UserSessionState = W32GetUserSessionState(v11, v10);
    v9 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18928)) + 456);
    v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18928);
    v40 = *(_QWORD *)(v15 + 472);
    v41 = *(_DWORD *)(v15 + 480);
  }
  v16 = *(__int64 **)(W32GetUserSessionState(v11, v10) + 224);
  for ( i = W32GetUserSessionState(v18, v17) + 224; v16 != (__int64 *)i; v16 = (__int64 *)*v16 )
  {
    v21 = *((unsigned int *)v16 + 25);
    if ( (v21 & 0x40) != 0 )
    {
      v22 = v16[9];
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 40);
        if ( *(char *)(v23 + 20) >= 0 && *(char *)(v23 + 19) >= 0 )
        {
          v24 = *(_QWORD *)(W32GetUserSessionState(v21, v19) + 19176);
          v26 = v16[9];
          if ( *(_QWORD *)(v26 + 24) == v24 )
          {
            if ( !v9
              || UIPrivilegeIsolation::CheckAccess(
                   (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 456LL) + 864LL),
                   (const struct tagUIPI_INFO *)&v40,
                   v25)
              || (v27 = *(_QWORD *)(v16[9] + 16), *(int *)(*(_QWORD *)(v27 + 456) + 12LL) < 0) )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v16[9] + 16) + 456LL) != v9 && ((*((_DWORD *)v16 + 25) & 0x80u) == 0 || !a6) )
              {
                HidData = AllocateHidData(a2, 1LL, 16LL, 1LL, (__int64 *)v16[9]);
                v34 = HidData;
                if ( !HidData )
                  return;
                v35 = *(struct tagWND **)(HidData + 24);
                *(_WORD *)(HidData + 80) = a3->MakeCode;
                *(_WORD *)(HidData + 82) = a3->Flags;
                *(_WORD *)(HidData + 84) = a3->Reserved;
                *(_DWORD *)(HidData + 88) = a4;
                *(_WORD *)(HidData + 86) = a5;
                *(_DWORD *)(HidData + 92) = a3->ExtraInformation;
                if ( !(unsigned int)PostInputMessage(
                                      *(struct tagQ **)(*((_QWORD *)v35 + 2) + 464LL),
                                      v35,
                                      0xFFu,
                                      1uLL,
                                      *(_QWORD *)HidData,
                                      v36,
                                      0LL,
                                      a3->ExtraInformation,
                                      0,
                                      0LL,
                                      a2,
                                      0LL,
                                      0,
                                      0,
                                      0LL) )
                  FreeHidData(v34);
              }
            }
            else
            {
              v28 = v41;
              v37 = v40;
              v29 = W32GetUserSessionState(v27, v19);
              v30 = v16[9];
              v38 = v37;
              v31 = *(_QWORD *)(v29 + 18928);
              v32 = *(_QWORD *)(v30 + 16);
              v39 = v28;
              EtwTraceUIPIInputError(v32, 0LL, v31, &v38, 5);
            }
          }
        }
      }
    }
  }
}
