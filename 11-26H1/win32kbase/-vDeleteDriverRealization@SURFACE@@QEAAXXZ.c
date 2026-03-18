/*
 * XREFs of ?vDeleteDriverRealization@SURFACE@@QEAAXXZ @ 0x1401224F0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?assertDhpdev@SURFACE@@QEAA_NXZ @ 0x14012262C (-assertDhpdev@SURFACE@@QEAA_NXZ.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x14017F310 (-bAllowDDICall@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall SURFACE::vDeleteDriverRealization(SURFACE *this)
{
  bool v1; // zf
  _QWORD *v2; // r15
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  void (__fastcall *v7)(__int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int (*v10)(void); // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, __int64); // rax
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = (*((_DWORD *)this + 28) & 0x400000) == 0;
  v2 = (_QWORD *)((char *)this + 48);
  v3 = (_QWORD *)*((_QWORD *)this + 6);
  v4 = (unsigned __int64)this + 24;
  v5 = *((_QWORD *)this + 3);
  v14 = v3;
  if ( !v1 && v5 && v3 && SURFACE::assertDhpdev(this) )
  {
    if ( (*((_DWORD *)this + 29) & 9) != 0 )
    {
      v7 = (void (__fastcall *)(__int64))v3[332];
      if ( v7 )
      {
        v8 = v4 & -(__int64)(this != 0LL);
        goto LABEL_10;
      }
      v7 = (void (__fastcall *)(__int64))v3[430];
      if ( v7 )
      {
LABEL_9:
        v8 = v5;
LABEL_10:
        v7(v8);
      }
    }
    else
    {
      if ( !v3[346] )
        goto LABEL_2;
      if ( (*((_DWORD *)this + 28) & 0x40000) == 0 )
      {
        v7 = (void (__fastcall *)(__int64))v3[346];
        goto LABEL_9;
      }
      if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v14) )
      {
        v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 24) + 2064LL);
        if ( v10 )
        {
          if ( v10() >= 0 )
          {
            v12 = v3[223];
            v13 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 24) + 2072LL);
            if ( v13 )
              v13(v12, v5);
          }
        }
      }
    }
  }
LABEL_2:
  *v2 = 0LL;
  *(_QWORD *)v4 = 0LL;
}
