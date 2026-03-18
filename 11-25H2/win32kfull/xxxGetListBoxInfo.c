/*
 * XREFs of xxxGetListBoxInfo @ 0x1402E1F40
 * Callers:
 *     NtUserGetListBoxInfo @ 0x140298260 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX @ 0x140286030 (unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX.c)
 */

__int64 __fastcall xxxGetListBoxInfo(struct tagWND *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PRKPROCESS *v8; // rdi
  PRKPROCESS *v9; // rsi
  unsigned int v10; // ebx
  _DWORD *v11; // [rsp+68h] [rbp+10h]

  v3 = (_QWORD *)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(a1);
  if ( !v3 )
    return xxxSendMessage(a1, 0x1B2u);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  v8 = (PRKPROCESS *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v8 = (PRKPROCESS *)(v6 & CurrentProcessWin32Process);
  }
  v9 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v9 != v8 )
    KeAttachProcess(*v9);
  v11 = (_DWORD *)*v3;
  if ( *v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v7, v6) != 0 ? 0 : 3) & (unsigned int)v11) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (v11[23] & 0x40000) != 0 )
      v10 = v11[19];
    else
      v10 = v11[8];
  }
  else
  {
    v10 = 0;
  }
  if ( v9 != v8 )
    KeDetachProcess();
  return v10;
}
