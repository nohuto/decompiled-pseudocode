/*
 * XREFs of ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x14011C678
 * Callers:
 *     EditionHandleRawInput @ 0x14011C5B0 (EditionHandleRawInput.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HasRawInputForegroundTarget @ 0x14011C80C (HasRawInputForegroundTarget.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x14011C948 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x14011CC7C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     HasHidTable @ 0x14011CE00 (HasHidTable.c)
 */

__int64 __fastcall HandleRawInput(void *a1, struct _KEYBOARD_INPUT_DATA *a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  int v11; // r14d
  int v12; // eax
  int v14; // edx
  __int16 v15; // ax
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v6 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  v17 = 0LL;
  v18 = 0LL;
  v9 = HasRawInputForegroundTarget(&v17);
  v10 = *((_QWORD *)&v17 + 1);
  if ( *(_DWORD *)(a3 + 20) )
  {
    if ( !v9 )
      goto LABEL_9;
    if ( (*(_DWORD *)(*((_QWORD *)&v17 + 1) + 1360LL) & 0x200000) == 0 )
      goto LABEL_20;
  }
  v11 = 0;
  if ( v9 )
  {
    v12 = PostRawKeyboardInputToForeground(
            (struct _RAW_INPUT_FOREGROUND_TARGET *)&v17,
            *(_DWORD *)a3,
            a1,
            a2,
            *(_DWORD *)(a3 + 4),
            *(_WORD *)(a3 + 8));
    v10 = *((_QWORD *)&v17 + 1);
    v11 = v12;
  }
  if ( !*(_DWORD *)(a3 + 20) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 16848) )
      PostRawKeyboardInputToSinks(*(_DWORD *)a3, a1, a2, *(_DWORD *)(a3 + 4), *(_WORD *)(a3 + 8), v11);
    if ( *(_DWORD *)(a3 + 12) )
      goto LABEL_10;
  }
  if ( v9 )
  {
LABEL_20:
    if ( *(_DWORD *)(a3 + 16)
      || (unsigned int)HasHidTable(v10)
      && (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 464) + 824LL) + 100LL), (v14 & 0x20) != 0)
      && ((*(_DWORD *)(v10 + 1360) & 0x200000) != 0 || (v15 = *(_WORD *)(a3 + 8), v15 != 18) && v15 != 9)
      && ((v14 & 0x400) == 0 || (unsigned __int16)(*(_WORD *)(a3 + 8) - 166) > 0x11u) )
    {
LABEL_10:
      v6 = 1;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
    }
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  return v6;
}
