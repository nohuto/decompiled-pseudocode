/*
 * XREFs of ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180021D50
 * Callers:
 *     ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x1800CD150 (-OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180021FB0 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z @ 0x18002211C (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DropInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180098D04 (-DropInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputStateManager::OnInputReport(InputStateManager *this, struct InputInfo *a2)
{
  DWORD TickCount; // r12d
  unsigned __int16 v5; // r15
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  int v8; // esi
  __int64 i; // rbx
  const void *v10; // rbx
  int v11; // ebx
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  InputETW::InputStateManager::OnInputReport(a2);
  TickCount = GetTickCount();
  v5 = 0;
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    v6 = 4;
  }
  else
  {
    if ( (*(_BYTE *)a2 & 4) == 0 )
    {
      if ( (*(_BYTE *)a2 & 2) == 0 )
      {
        if ( (*(_BYTE *)a2 & 8) != 0 )
        {
          v6 = 11;
        }
        else if ( (*(_BYTE *)a2 & 0x10) != 0 )
        {
          v6 = 13;
        }
        else if ( (*(_DWORD *)a2 & 0x100) != 0 )
        {
          v6 = 4;
        }
        else
        {
          v6 = 17;
          if ( (*(_BYTE *)a2 & 0x20) == 0 )
            v6 = 0;
        }
        v7 = -1;
        goto LABEL_4;
      }
      v6 = 3;
      v7 = -1;
LABEL_26:
      v5 = *((_WORD *)a2 + 150);
      goto LABEL_6;
    }
    v6 = 1;
  }
  v7 = -1;
  if ( (*(_BYTE *)a2 & 2) != 0 )
    goto LABEL_26;
LABEL_4:
  if ( (*(_DWORD *)a2 & 0x1000) != 0 )
    v5 = *((_WORD *)a2 + 46);
LABEL_6:
  v8 = ((*(_DWORD *)a2 & *((_DWORD *)this + 48)) != 0 ? 3 : 1) | 4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 49)) == 0 )
    v8 = (*(_DWORD *)a2 & *((_DWORD *)this + 48)) != 0 ? 3 : 1;
  if ( *((_BYTE *)a2 + 49) )
  {
    v8 &= ~1u;
  }
  else if ( (*(_BYTE *)a2 & 0x84) != 0 || (v7 = 0, (*(_DWORD *)a2 & 0x40) != 0) )
  {
    v7 = *((_DWORD *)this + 51);
  }
  if ( *(_DWORD *)a2 == 2048 )
    goto LABEL_15;
  if ( *(_DWORD *)a2 != 64 )
  {
    if ( (*(_DWORD *)a2 & 0x662600) != 0 )
    {
      v13 = *((_DWORD *)a2 + 16);
      if ( v13 == 8 || (unsigned int)(v13 - 4) <= 2 || v13 == 12 )
        goto LABEL_15;
    }
    else if ( *(_DWORD *)a2 == 4 && IsEdition(0x224AuLL) )
    {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( *((float *)a2 + 10) >= 0.03125 )
  {
LABEL_14:
    v15 = v8;
    NtMITUpdateInputGlobals(TickCount, v6, v5, v7);
  }
LABEL_15:
  for ( i = *((_QWORD *)this + 10); ; i += 16LL )
  {
    if ( i == *((_QWORD *)this + 11) )
    {
      InputTraceLogging::ISM::DropInput(a2);
      v14 = 469LL;
      v11 = -2147467259;
      goto LABEL_44;
    }
    if ( *(_DWORD *)i == *((_DWORD *)a2 + 1) )
      break;
  }
  v10 = *(const void **)(i + 8);
  InputTraceLogging::ISM::ReceiveInput(a2, v10);
  v11 = (*(__int64 (__fastcall **)(const void *, struct InputInfo *))(*(_QWORD *)v10 + 48LL))(v10, a2);
  if ( v11 >= 0 )
    return 0LL;
  v14 = 461LL;
LABEL_44:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v11,
    v15);
  return (unsigned int)v11;
}
