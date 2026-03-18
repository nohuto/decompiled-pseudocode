/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x14011DBDC
 * Callers:
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x14011EDEC (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // r9d
  int v7; // ecx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // r8
  bool v19; // zf

  v5 = 0LL;
  if ( a3 == 2 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFF40CE) != 0 )
      goto LABEL_3;
  }
  if ( !*(_WORD *)a1 )
    goto LABEL_32;
  if ( a2
    && *(_WORD *)a1 == 1
    && *(_WORD *)(a1 + 2) == 6
    && !((*(_DWORD *)(a1 + 4) & 1) != 0
       ? __CFSHR__(*(_DWORD *)(a2 + 100), 13) == v6
       : !__CFSHR__(*(_DWORD *)(a2 + 100), 13)) )
  {
    goto LABEL_32;
  }
  if ( a3 != 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 )
      v5 = ValidateHwnd(v9);
  }
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 0x200) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_3;
    if ( *(_WORD *)(a1 + 2) == 2 )
    {
      v16 = (unsigned __int8)v10 & 0xF0;
      if ( (_BYTE)v16 != 48 || !v5 )
        goto LABEL_3;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      v18 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v18 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v19 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL) == v18;
    }
    else
    {
      v19 = *(_WORD *)(a1 + 2) == 6;
    }
    if ( !v19 )
    {
LABEL_3:
      v7 = 1004;
LABEL_4:
      UserSetLastError(v7);
      return 0LL;
    }
  }
  v11 = *(unsigned int *)(a1 + 4);
  if ( (v11 & 0x400) != 0 && (*(_WORD *)a1 != 1 || *(_WORD *)(a1 + 2) != 6 || (v11 & 0xF0) != 0x30)
    || (v11 & 0x8000) != 0 && (*(_WORD *)a1 != 1 || *(_WORD *)(a1 + 2) != 2 || (v11 & 0x1100) == 0) )
  {
    goto LABEL_3;
  }
  if ( (v11 & 1) != 0 )
  {
    if ( (((*(_DWORD *)(a1 + 4) & 0xF0) - 16) & 0xFFFFFFDF) == 0 )
      goto LABEL_3;
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_32;
  }
  v12 = *(_DWORD *)(a1 + 4) & 0xF0;
  if ( (v11 & 0xF0) != 0 )
  {
    if ( v12 == 32 )
    {
      if ( *(_WORD *)(a1 + 2) )
        goto LABEL_32;
      goto LABEL_18;
    }
    if ( v12 != 16 )
    {
      if ( v12 != 48 || !(unsigned int)IsLegacyDevice(*(_WORD *)a1, *(_WORD *)(a1 + 2)) )
        goto LABEL_32;
      goto LABEL_18;
    }
    if ( (v11 & 0x1100) != 0 )
      goto LABEL_32;
  }
  if ( !*(_WORD *)(a1 + 2) )
    goto LABEL_32;
  if ( v12 == 16 )
  {
    if ( (v11 & 0x1100) == 0 && !*(_QWORD *)(a1 + 8) )
      return 1LL;
    goto LABEL_32;
  }
LABEL_18:
  if ( a3 == 1 || !*(_QWORD *)(a1 + 8) )
  {
    if ( !v5 )
      goto LABEL_24;
    goto LABEL_21;
  }
  if ( !v5 )
  {
LABEL_32:
    v7 = 87;
    goto LABEL_4;
  }
LABEL_21:
  v13 = PsGetCurrentProcessWin32Process(v11);
  v14 = v13;
  if ( v13 )
    v14 = -(__int64)(*(_QWORD *)v13 != 0LL) & v13;
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL) != v14 )
    goto LABEL_32;
LABEL_24:
  if ( (*(_DWORD *)(a1 + 4) & 0x1100) != 0 && !v5 && (a3 != 1 || !*(_QWORD *)(a1 + 8)) )
    goto LABEL_32;
  return 1LL;
}
