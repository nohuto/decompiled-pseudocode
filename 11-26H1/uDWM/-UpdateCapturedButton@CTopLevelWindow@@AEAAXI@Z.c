/*
 * XREFs of ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180014AE0
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180014AB0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180014F5C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x18008D194 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 */

void __fastcall CTopLevelWindow::UpdateCapturedButton(CTopLevelWindow *this, int a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  CButton *v7; // rcx
  CBaseObject *v8; // rcx
  CButton *v9; // rcx
  CBaseObject *v10; // rcx

  v3 = 4;
  v4 = a2 - 8;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 11;
      if ( v6 )
      {
        if ( v6 == 1 )
          v3 = 0;
      }
      else
      {
        v3 = 3;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  v7 = (CButton *)*((_QWORD *)this + 90);
  if ( v7 )
  {
    CButton::SetMouseCapture(v7, 0);
    v10 = (CBaseObject *)*((_QWORD *)this + 90);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *((_QWORD *)this + 90) = 0LL;
    }
  }
  if ( v3 != 4 )
  {
    v8 = (CBaseObject *)*((_QWORD *)this + v3 + 59);
    if ( v8 )
    {
      *((_QWORD *)this + 90) = v8;
      CBaseObject::AddRef(v8);
      CButton::SetMouseCapture(v9, 1);
    }
  }
}
