/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x140293FB4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1402A4470 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GreAccNotifyWindow @ 0x1400A4A2C (GreAccNotifyWindow.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v6; // ebx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *Prop; // rdi
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rdi

  v6 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = (_QWORD *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
  if ( !Prop && !a3 )
  {
    Prop = (_QWORD *)Win32AllocPoolZInit(48LL, 1919185493LL);
    if ( Prop )
    {
      v13 = W32GetUserSessionState(v9, v8);
      if ( !(unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(v13 + 41398), (__int64)Prop, 1u) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v6;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    if ( (HBITMAP)*Prop != a2 )
    {
      GreAccNotifyWindow(*Prop, 0LL);
      GreAccNotifyWindow(a2, *(_QWORD *)a1);
      *Prop = a2;
    }
  }
  else if ( a3 )
  {
    v14 = W32GetUserSessionState(v9, v8);
    v15 = (__int64 *)InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v14 + 41398), 1u);
    v16 = v15;
    if ( v15 )
    {
      v11 = *v15;
      DeleteMaybeSpecialRgn(v15[5]);
      Win32FreePool(v16);
LABEL_6:
      if ( v11 )
        GreAccNotifyWindow(v11, 0LL);
    }
  }
  else if ( Prop )
  {
    v11 = *Prop;
    *Prop = 0LL;
    *((_OWORD *)Prop + 1) = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
