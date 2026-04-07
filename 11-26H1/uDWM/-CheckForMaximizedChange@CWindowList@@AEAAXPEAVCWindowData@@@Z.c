/*
 * XREFs of ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003B930
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18003B47C (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowList::CheckForMaximizedChange(CWindowList *this, struct CWindowData *a2)
{
  char v3; // bp
  bool v5; // di
  char v6; // r14
  unsigned __int8 v7; // di
  struct CWindowData **v8; // rax
  struct _LIST_ENTRY *WindowListForDesktop; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct CWindowData *Buffer; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_BYTE *)a2 + 737);
  v5 = (*((_DWORD *)a2 + 29) & 0x11000000) == 0x11000000 && *((_QWORD *)a2 + 4);
  v6 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  *((_BYTE *)a2 + 737) &= ~2u;
  *((_BYTE *)a2 + 737) |= 2 * v5;
  if ( v5 )
  {
    if ( (v3 & 2) == 0 )
    {
      Buffer = a2;
      RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 424), &Buffer, 8u, 0LL);
      goto LABEL_5;
    }
  }
  else if ( (v3 & 2) == 0 )
  {
    goto LABEL_5;
  }
  if ( !v5 )
  {
    Buffer = a2;
    v8 = (struct CWindowData **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 424), &Buffer);
    if ( v8 )
    {
      Buffer = *v8;
      if ( !RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 424), &Buffer) )
        RaiseFailFastException(0LL, 0LL, 1u);
    }
  }
LABEL_5:
  v7 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  if ( v6 != v7 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)a2 + 17));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v7;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[46].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v7, 0LL);
      }
    }
  }
}
