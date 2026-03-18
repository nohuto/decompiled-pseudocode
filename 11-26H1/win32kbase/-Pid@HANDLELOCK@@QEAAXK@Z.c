/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x14001EE60 (GreSetRegionOwner.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14001E448 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, int a2)
{
  __int64 v4; // rsi
  unsigned int *v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int ProcessSessionId; // [rsp+28h] [rbp-20h]

  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 & 0xFFFFFFFE;
  v4 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 8LL) + 96LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 8LL),
                    **(unsigned int **)this);
  v5 = *(unsigned int **)this;
  v6 = 15;
  v7 = *((unsigned __int8 *)v5 + 14);
  if ( (unsigned int)v7 <= 0xF )
  {
    if ( (_DWORD)v7 == 15 )
      goto LABEL_11;
    v6 = 7;
    if ( (unsigned int)v7 > 7 )
    {
      v6 = 8;
      v7 = (unsigned int)(v7 - 8);
      if ( !(_DWORD)v7 )
        goto LABEL_11;
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 9;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 10;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 11;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 12;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 13;
        goto LABEL_11;
      }
      if ( (_DWORD)v7 == 1 )
      {
        v6 = 14;
        goto LABEL_11;
      }
    }
    else
    {
      if ( (_DWORD)v7 == 7 )
        goto LABEL_11;
      v6 = 0;
      if ( !*((_BYTE *)v5 + 14) )
        goto LABEL_11;
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 1;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 2;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 3;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 4;
        goto LABEL_11;
      }
      v7 = (unsigned int)(v7 - 1);
      if ( !(_DWORD)v7 )
      {
        v6 = 5;
        goto LABEL_11;
      }
      if ( (_DWORD)v7 == 1 )
      {
        v6 = 6;
        goto LABEL_11;
      }
    }
    goto LABEL_57;
  }
  v6 = 23;
  if ( (unsigned int)v7 <= 0x17 )
  {
    if ( (_DWORD)v7 == 23 )
      goto LABEL_11;
    v6 = 16;
    v7 = (unsigned int)(v7 - 16);
    if ( !(_DWORD)v7 )
      goto LABEL_11;
    v7 = (unsigned int)(v7 - 1);
    if ( !(_DWORD)v7 )
    {
      v6 = 17;
      goto LABEL_11;
    }
    v7 = (unsigned int)(v7 - 1);
    if ( !(_DWORD)v7 )
    {
      v6 = 18;
      goto LABEL_11;
    }
    v7 = (unsigned int)(v7 - 1);
    if ( !(_DWORD)v7 )
    {
      v6 = 19;
      goto LABEL_11;
    }
    v7 = (unsigned int)(v7 - 1);
    if ( !(_DWORD)v7 )
    {
      v6 = 20;
      goto LABEL_11;
    }
    v7 = (unsigned int)(v7 - 1);
    if ( !(_DWORD)v7 )
    {
      v6 = 21;
      goto LABEL_11;
    }
    if ( (_DWORD)v7 == 1 )
    {
      v6 = 22;
      goto LABEL_11;
    }
    goto LABEL_57;
  }
  v6 = 24;
  v7 = (unsigned int)(v7 - 24);
  if ( !(_DWORD)v7 )
    goto LABEL_11;
  v7 = (unsigned int)(v7 - 1);
  if ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v7 )
    {
      v7 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v7 )
      {
        v7 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v7 )
        {
          v7 = (unsigned int)(v7 - 1);
          if ( (_DWORD)v7 )
          {
            if ( (_DWORD)v7 == 1 )
            {
              v6 = 30;
              goto LABEL_11;
            }
LABEL_57:
            v6 = -1;
            goto LABEL_11;
          }
          v6 = 29;
        }
        else
        {
          v6 = 28;
        }
      }
      else
      {
        v6 = 27;
      }
    }
    else
    {
      v6 = 26;
    }
  }
  else
  {
    v6 = 25;
  }
LABEL_11:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(v9, (__int64)&GdiUpdateHandleOwner, v10, v4, v6, ProcessSessionId, a2);
  }
}
