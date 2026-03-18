/*
 * XREFs of ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1401721D0
 * Callers:
 *     EditionHandleRawInput @ 0x140172120 (EditionHandleRawInput.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     HasRawInputForegroundTarget @ 0x14017238C (HasRawInputForegroundTarget.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401724EC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x140172814 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     HasHidTable @ 0x140172990 (HasHidTable.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall HandleRawInput(void *a1, struct _KEYBOARD_INPUT_DATA *a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r14d
  __int64 v10; // rsi
  int v11; // r15d
  int v12; // eax
  int v14; // edx
  __int16 v15; // ax
  unsigned __int16 v16; // ax
  _BYTE v17[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]

  v6 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v19 = 0LL;
  v20 = 0LL;
  v9 = HasRawInputForegroundTarget(&v19);
  v10 = *((_QWORD *)&v19 + 1);
  if ( !*(_DWORD *)(a3 + 20) )
    goto LABEL_2;
  if ( !v9 )
  {
LABEL_9:
    if ( v17[0] )
      --*(_DWORD *)(v18 + 28);
    return v6;
  }
  if ( (*(_DWORD *)(*((_QWORD *)&v19 + 1) + 1360LL) & 0x200000) != 0 )
  {
LABEL_2:
    v11 = 0;
    if ( v9 )
    {
      v12 = PostRawKeyboardInputToForeground(
              (struct _RAW_INPUT_FOREGROUND_TARGET *)&v19,
              *(_DWORD *)a3,
              a1,
              a2,
              *(_DWORD *)(a3 + 4),
              *(_WORD *)(a3 + 8));
      v10 = *((_QWORD *)&v19 + 1);
      v11 = v12;
    }
    if ( !*(_DWORD *)(a3 + 20) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 16840) )
        PostRawKeyboardInputToSinks(*(_DWORD *)a3, a1, a2, *(_DWORD *)(a3 + 4), *(_WORD *)(a3 + 8), v11);
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_12;
    }
    if ( !v9 )
      goto LABEL_9;
  }
  if ( !*(_DWORD *)(a3 + 16) )
  {
    if ( (unsigned int)HasHidTable(v10) )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 456) + 824LL) + 100LL);
      if ( (v14 & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(v10 + 1360) & 0x200000) != 0 || (v15 = *(_WORD *)(a3 + 8), v15 != 18) && v15 != 9 )
        {
          if ( (v14 & 0x400) == 0 || (v16 = *(_WORD *)(a3 + 8), v16 < 0xA6u) || v16 > 0xB7u )
          {
            v6 = 1;
            AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
            AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
            return v6;
          }
        }
      }
    }
    goto LABEL_9;
  }
LABEL_12:
  v6 = 1;
  if ( v17[0] )
    --*(_DWORD *)(v18 + 28);
  return v6;
}
