/*
 * XREFs of ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x14011CC7C
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x14011C678 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     FreeHidData @ 0x1400C7E10 (FreeHidData.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     AllocateHidData @ 0x140120CE4 (AllocateHidData.c)
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline @ 0x1402750BC (Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PostRawKeyboardInputToForeground(
        struct _RAW_INPUT_FOREGROUND_TARGET *a1,
        unsigned int a2,
        void *a3,
        struct _KEYBOARD_INPUT_DATA *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  struct _RAW_INPUT_FOREGROUND_TARGET *v9; // rdi
  __int64 result; // rax
  __int64 *v11; // rbx
  InputTransform *v12; // rdx
  unsigned int v13; // edi

  v9 = a1;
  result = AllocateHidData(a3, *((_QWORD *)a1 + 2));
  v11 = (__int64 *)result;
  if ( result )
  {
    *(_WORD *)(result + 80) = a4->MakeCode;
    *(_WORD *)(result + 82) = a4->Flags;
    *(_WORD *)(result + 84) = a4->Reserved;
    *(_DWORD *)(result + 88) = a5;
    *(_WORD *)(result + 86) = a6;
    *(_DWORD *)(result + 92) = a4->ExtraInformation;
    if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = (InputTransform *)v11[3];
      v9 = (struct _RAW_INPUT_FOREGROUND_TARGET *)(*((_QWORD *)v12 + 2) + 472LL);
    }
    else
    {
      v12 = (InputTransform *)*((_QWORD *)v9 + 2);
    }
    v13 = PostInputMessage(
            *(struct tagQ **)v9,
            v12,
            0xFFu,
            *v11,
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
    if ( !v13 )
      FreeHidData((__int64)v11);
    return v13;
  }
  return result;
}
