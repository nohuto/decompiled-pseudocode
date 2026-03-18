/*
 * XREFs of xxxGetComboBoxInfo @ 0x1401CE000
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1401CDE10 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     unsafe_cast_fnid_or_class_to_PCOMBOWND @ 0x140285DCC (unsafe_cast_fnid_or_class_to_PCOMBOWND.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x140285F64 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(struct tagWND *a1, __int64 a2)
{
  unsigned int v4; // ebx
  ULONG64 *v5; // r12
  __int64 v6; // rcx
  ULONG64 *v7; // r14
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v10; // rdx
  ULONG64 v11; // rcx
  PRKPROCESS *v12; // rdi
  PRKPROCESS *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG64 v16; // rdx
  __int64 v17; // rax
  ULONG64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  ULONG64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  ULONG64 v25; // [rsp+20h] [rbp-B8h]
  _BYTE v26[48]; // [rsp+30h] [rbp-A8h]
  __int128 v27; // [rsp+60h] [rbp-78h]
  ULONG64 v28; // [rsp+F8h] [rbp+20h]
  _QWORD *v29; // [rsp+F8h] [rbp+20h]
  __int64 *v30; // [rsp+F8h] [rbp+20h]
  __int64 *v31; // [rsp+F8h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  *(_DWORD *)v26 = 64;
  v7 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PCOMBOWND();
  if ( !v7 )
  {
    v5 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
    if ( !v5 )
      return xxxSendMessage(a1, 0x164u);
  }
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v12 = (PRKPROCESS *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v11 = -*(_QWORD *)CurrentProcessWin32Process;
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v12 = (PRKPROCESS *)(v10 & CurrentProcessWin32Process);
  }
  v13 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v13 != v12 )
    KeAttachProcess(*v13);
  if ( v7 )
  {
    v25 = *v7;
  }
  else
  {
    v28 = *v5;
    if ( !*v5 )
      goto LABEL_45;
    v14 = -PsGetCurrentProcessWow64Process(v11, v10);
    v10 = v28;
    if ( ((v14 != 0 ? 0 : 3) & (unsigned int)v28) != 0 )
      goto LABEL_44;
    if ( v28 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    v11 = *(_QWORD *)(v28 + 144);
    v25 = v11;
  }
  if ( v25 )
  {
    v15 = -PsGetCurrentProcessWow64Process(v11, v10);
    v16 = v25;
    if ( ((v15 != 0 ? 0 : 3) & (unsigned int)v25) == 0 )
    {
      if ( v25 >= MmUserProbeAddress )
        v16 = MmUserProbeAddress;
      v29 = *(_QWORD **)v25;
      v17 = -PsGetCurrentProcessWow64Process(*(_QWORD *)v25, v16);
      v18 = (ULONG64)v29;
      if ( ((v17 != 0 ? 0 : 3) & (unsigned int)v29) == 0 )
      {
        if ( (unsigned __int64)v29 >= MmUserProbeAddress )
          v18 = MmUserProbeAddress;
        v19 = v29 ? *v29 : 0LL;
        *(_QWORD *)&v26[40] = v19;
        v30 = *(__int64 **)(v25 + 64);
        v20 = -PsGetCurrentProcessWow64Process(v30, v18);
        v21 = (ULONG64)v30;
        if ( ((v20 != 0 ? 0 : 3) & (unsigned int)v30) == 0 )
        {
          if ( (unsigned __int64)v30 >= MmUserProbeAddress )
            v21 = MmUserProbeAddress;
          if ( v30 )
            v22 = *v30;
          else
            v22 = 0LL;
          if ( v22 == *(_QWORD *)a1 )
            v22 = 0LL;
          *(_QWORD *)&v27 = v22;
          v31 = *(__int64 **)(v25 + 72);
          if ( ((PsGetCurrentProcessWow64Process(v31, v21) != 0 ? 0 : 3) & (unsigned int)v31) == 0 )
          {
            if ( v31 )
              v23 = *v31;
            else
              v23 = 0LL;
            *((_QWORD *)&v27 + 1) = v23;
            *(_OWORD *)&v26[4] = *(_OWORD *)(v25 + 16);
            *(_OWORD *)&v26[20] = *(_OWORD *)(v25 + 32);
            v24 = 0;
            v4 = 1;
            if ( (*(_BYTE *)(v25 + 80) & 3) == 1 )
              v24 = 0x8000;
            *(_DWORD *)&v26[36] = v24;
            if ( (*(_DWORD *)(v25 + 80) & 0x20) != 0 )
              *(_DWORD *)&v26[36] = v24 | 8;
            *(_OWORD *)a2 = *(_OWORD *)v26;
            *(_OWORD *)(a2 + 16) = *(_OWORD *)&v26[16];
            *(_OWORD *)(a2 + 32) = *(_OWORD *)&v26[32];
            *(_OWORD *)(a2 + 48) = v27;
            goto LABEL_45;
          }
        }
      }
    }
LABEL_44:
    ExRaiseDatatypeMisalignment();
  }
LABEL_45:
  if ( v13 != v12 )
    KeDetachProcess();
  return v4;
}
