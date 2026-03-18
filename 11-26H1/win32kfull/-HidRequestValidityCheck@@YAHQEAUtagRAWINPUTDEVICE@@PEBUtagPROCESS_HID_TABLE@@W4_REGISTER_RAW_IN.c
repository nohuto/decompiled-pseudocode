/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x14016FFBC
 * Callers:
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1401715A8 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(unsigned __int16 *a1, __int64 a2, int a3)
{
  int *v3; // rdi
  __int64 v6; // rsi
  int v7; // r9d
  unsigned __int16 v8; // ax
  int *v9; // rcx
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v15; // edx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v20; // zf

  v3 = (int *)(a1 + 2);
  v6 = 0LL;
  if ( a3 == 2 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( (*v3 & 0xFFFF40CE) != 0 )
      goto LABEL_39;
  }
  v8 = *a1;
  if ( !*a1 )
    goto LABEL_44;
  v9 = (int *)(a1 + 2);
  if ( a2 && v8 == 1 && a1[1] == 6 )
  {
    v9 = (int *)(a1 + 2);
    v15 = -__CFSHR__(*(_DWORD *)(a2 + 100), 13);
    if ( !((*((_DWORD *)a1 + 1) & 1) != 0 ? (v15 != 0) == v7 : v15 == 0) )
      goto LABEL_44;
  }
  if ( a3 != 1 )
  {
    v9 = v3;
    if ( *((_QWORD *)a1 + 1) )
    {
      v6 = ValidateHwnd(*((_QWORD *)a1 + 1));
      v9 = v3;
    }
  }
  v10 = *v9;
  if ( (*v9 & 0x200) == 0 )
    goto LABEL_9;
  v18 = *a1;
  if ( (_WORD)v18 == 1 )
  {
    if ( a1[1] == 2 )
    {
      if ( (v10 & 0xF0) != 0x30 || !v6 )
        goto LABEL_39;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v20 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 456LL) == CurrentProcessWin32Process;
    }
    else
    {
      v20 = a1[1] == 6;
    }
    if ( v20 )
    {
LABEL_9:
      v11 = *((_DWORD *)a1 + 1);
      if ( ((v11 & 0x400) == 0 || *a1 == 1 && a1[1] == 6 && (v11 & 0xF0) == 0x30)
        && ((v11 & 0x8000) == 0 || *a1 == 1 && a1[1] == 2 && (v11 & 0x1100) != 0) )
      {
        v12 = (unsigned __int8)v11 & 0xF0;
        if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
          goto LABEL_12;
        if ( (((_DWORD)v12 - 16) & 0xFFFFFFDF) != 0 )
        {
          if ( *((_QWORD *)a1 + 1) )
            goto LABEL_44;
LABEL_12:
          if ( (_DWORD)v12 )
          {
            if ( (_DWORD)v12 == 32 )
            {
              if ( a1[1] )
                goto LABEL_44;
              goto LABEL_15;
            }
            if ( (_DWORD)v12 != 16 )
            {
              if ( (_DWORD)v12 != 48 || !(unsigned int)IsLegacyDevice(*a1, a1[1]) )
                goto LABEL_44;
              goto LABEL_15;
            }
            if ( (*((_DWORD *)a1 + 1) & 0x1100) != 0 )
              goto LABEL_44;
          }
          if ( !a1[1] )
            goto LABEL_44;
          if ( (_DWORD)v12 == 16 )
          {
            if ( (*((_DWORD *)a1 + 1) & 0x1100) == 0 && !*((_QWORD *)a1 + 1) )
              return 1LL;
            goto LABEL_44;
          }
LABEL_15:
          if ( a3 == 1 || !*((_QWORD *)a1 + 1) )
          {
            if ( !v6 )
              goto LABEL_21;
          }
          else if ( !v6 )
          {
            goto LABEL_44;
          }
          v13 = PsGetCurrentProcessWin32Process(v12);
          if ( v13 )
            v13 &= -(__int64)(*(_QWORD *)v13 != 0LL);
          if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 456LL) != v13 )
            goto LABEL_44;
LABEL_21:
          if ( (*((_DWORD *)a1 + 1) & 0x1100) == 0 || v6 || a3 == 1 && *((_QWORD *)a1 + 1) )
            return 1LL;
LABEL_44:
          v17 = 87;
          goto LABEL_40;
        }
      }
    }
  }
LABEL_39:
  v17 = 1004;
LABEL_40:
  UserSetLastError(v17);
  return 0LL;
}
