/*
 * XREFs of ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18007B31C
 * Callers:
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801CC600 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801CD510 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x180078E6C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::ArbitrateCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  bool v2; // zf
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // esi
  __int64 **v9; // rcx
  __int64 *i; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+24h] [rbp-44h]
  char v16; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v18; // [rsp+78h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a2 + 10) == 2;
  if ( *((_DWORD *)a2 + 10) != 2 )
  {
    if ( *((_DWORD *)a2 + 10) != 1 )
      return 0LL;
    v2 = *((_DWORD *)a2 + 10) == 2;
  }
  if ( *((_BYTE *)this + 504) != v2 )
  {
    *((_BYTE *)this + 504) = v2;
    memset_0(&v14, 0, 0x40uLL);
    v5 = *(_QWORD *)a2;
    LOBYTE(v14) = 10;
    v15 = *(_QWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, char *))(v5 + 48))(a2, &v18);
    v16 = 1;
    v6 = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)&v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v6,
        v14);
      return v7;
    }
    v9 = (__int64 **)*((_QWORD *)this + 7);
    for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == (*((_DWORD *)a2 + 10) != 2) + 1 )
      {
        v11 = i[3];
        if ( v11 )
        {
          LOBYTE(v14) = 10;
          v15 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(v11, &v18);
          v16 = 0;
          v12 = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)&v14);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F7,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\"
                            "dwmcursorbroker.cpp",
              (const char *)(unsigned int)v12,
              v14);
            return v13;
          }
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
