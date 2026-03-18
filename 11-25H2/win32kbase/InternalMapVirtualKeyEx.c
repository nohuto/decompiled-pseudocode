/*
 * XREFs of InternalMapVirtualKeyEx @ 0x14009F2F0
 * Callers:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140066C20 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     _GetKeyNameText @ 0x14009ED10 (_GetKeyNameText.c)
 *     NtUserMapVirtualKeyEx @ 0x14009F250 (NtUserMapVirtualKeyEx.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D23B8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x14015D174 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x140217A28 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 */

unsigned int __fastcall InternalMapVirtualKeyEx(unsigned int a1, int a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r11d
  unsigned int v6; // r10d
  unsigned __int16 i; // dx
  unsigned int result; // eax
  unsigned __int8 *v9; // rcx
  unsigned __int8 *k; // rcx
  int v11; // eax
  unsigned __int8 *j; // rcx
  unsigned __int8 **v13; // rcx
  unsigned __int8 *v14; // rdx
  int v15; // eax
  _BYTE *v16; // rax

  v3 = 0;
  v4 = a1;
  v6 = 0;
  if ( !a2 )
  {
LABEL_6:
    if ( a1 - 16 <= 2 )
      v4 = 2 * a1 + 128;
    for ( i = 0; i < *(unsigned __int8 *)(a3 + 56); ++i )
    {
      if ( *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * i) == v4 )
        return (unsigned __int8)i;
    }
    v9 = *(unsigned __int8 **)(a3 + 64);
    if ( v9 )
    {
      while ( *((_WORD *)v9 + 1) )
      {
        if ( v9[2] == v4 )
        {
          result = *v9;
          if ( a2 == 4 )
            result |= 0xE000u;
          return result;
        }
        v9 += 4;
      }
    }
    if ( a2 == 4 )
    {
      for ( j = *(unsigned __int8 **)(a3 + 72); j && *((_WORD *)j + 1); j += 4 )
      {
        if ( j[2] == v4 )
          return *j | 0xE100;
      }
    }
    for ( k = (unsigned __int8 *)&aVkNumpad; ; ++k )
    {
      v11 = *k;
      if ( !(_BYTE)v11 )
        break;
      if ( v11 == v4 )
        return (_DWORD)k - (unsigned int)&aVkNumpad + 71;
    }
    return 0;
  }
  if ( a2 == 1 )
    goto LABEL_13;
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
    {
      if ( a2 == 4 )
        goto LABEL_6;
      goto LABEL_32;
    }
LABEL_13:
    if ( a1 < *(unsigned __int8 *)(a3 + 56) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * a1);
      goto LABEL_15;
    }
    if ( (a1 & 0xFFFFFF00) == 0xE000 )
    {
      v16 = *(_BYTE **)(a3 + 64);
    }
    else
    {
      if ( (a1 & 0xFFFFFF00) != 0xE100 )
      {
LABEL_15:
        if ( a2 == 1 && v6 - 160 <= 5 )
          v6 = ((v6 - 160) >> 1) + 16;
        if ( v6 != 255 )
          return v6;
        return v3;
      }
      v16 = *(_BYTE **)(a3 + 72);
    }
    if ( v16 )
    {
      while ( *((_WORD *)v16 + 1) )
      {
        if ( *v16 == (_BYTE)a1 )
        {
          v6 = (unsigned __int8)v16[2];
          goto LABEL_15;
        }
        v16 += 4;
      }
    }
    goto LABEL_15;
  }
  if ( a1 - 65 <= 0x19 )
    return a1;
  v13 = *(unsigned __int8 ***)(a3 + 8);
  if ( !v13 )
  {
LABEL_32:
    UserSetLastError(87);
    return 0;
  }
LABEL_43:
  v14 = *v13;
  if ( !*v13 )
    goto LABEL_32;
  while ( 1 )
  {
    v15 = *v14;
    if ( !(_BYTE)v15 )
    {
      v13 += 2;
      goto LABEL_43;
    }
    if ( v15 == v4 )
      break;
    v14 += *((unsigned __int8 *)v13 + 9);
  }
  result = *((unsigned __int16 *)v14 + 1);
  if ( (_WORD)result == 0xF001 )
    return *(unsigned __int16 *)&v14[*((unsigned __int8 *)v13 + 9) + 2] | 0x80000000;
  if ( (_WORD)result == 0xF000 )
    return 0;
  return result;
}
