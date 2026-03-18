/*
 * XREFs of ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x140172814
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1401721D0 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     FreeHidData @ 0x14003ABB0 (FreeHidData.c)
 *     AllocateHidData @ 0x140090364 (AllocateHidData.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 */

__int64 __fastcall PostRawKeyboardInputToForeground(
        __int64 **a1,
        unsigned int a2,
        void *a3,
        struct _KEYBOARD_INPUT_DATA *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  __int64 result; // rax
  __int64 v10; // rbx
  struct tagWND *v11; // rdx
  unsigned int v12; // edi

  result = AllocateHidData(a3, 1LL, 16LL, 0LL, a1[2]);
  v10 = result;
  if ( result )
  {
    v11 = *(struct tagWND **)(result + 24);
    *(_WORD *)(result + 80) = a4->MakeCode;
    *(_WORD *)(result + 82) = a4->Flags;
    *(_WORD *)(result + 84) = a4->Reserved;
    *(_DWORD *)(result + 88) = a5;
    *(_WORD *)(result + 86) = a6;
    *(_DWORD *)(result + 92) = a4->ExtraInformation;
    v12 = PostInputMessage(
            *(struct tagQ **)(*((_QWORD *)v11 + 2) + 464LL),
            v11,
            0xFFu,
            0LL,
            *(_QWORD *)result,
            a2,
            0LL,
            a4->ExtraInformation,
            0,
            0LL,
            a3,
            0LL,
            0,
            0,
            0LL);
    if ( !v12 )
      FreeHidData(v10);
    return v12;
  }
  return result;
}
