/*
 * XREFs of ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14017A228
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x14017A04C (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14017A9B4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(const struct tagWND *a1, __int64 a2)
{
  const struct tagWND *v2; // rbx
  int IsComponent; // eax
  char v4; // cl
  char v5; // dl
  char v6; // cl
  unsigned int v7; // ecx
  __int64 result; // rax
  bool v9; // zf
  struct tagWND *Host; // rax
  unsigned __int8 v11; // cl
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int8 v14; // dl

  v2 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1, a2);
  v4 = *(_BYTE *)(*((_QWORD *)v2 + 5) + 233LL);
  v5 = v4 & 0x40;
  v6 = v4 & 0x20;
  if ( IsComponent )
  {
    if ( v5 )
    {
      return 1LL;
    }
    else
    {
      while ( 1 )
      {
        Host = CoreWindowProp::GetHost(v2);
        v2 = Host;
        if ( !Host )
          return 2LL;
        v11 = *(_BYTE *)(*((_QWORD *)Host + 5) + 233LL);
        v12 = (v11 >> 4) & 2;
        v13 = v12 | 1;
        if ( (v11 & 0x40) == 0 )
          v13 = v12;
        if ( (v13 & 1) != 0 )
          return (unsigned int)v13;
        if ( !(unsigned int)CoreWindowProp::IsComponent(v2, v13) )
        {
          v14 = *(_BYTE *)(*(_QWORD *)(GetTopLevelWindow((__int64)v2) + 40) + 233LL);
          v7 = (v14 >> 4) & 2;
          result = v7 | 1;
          v9 = (v14 & 0x40) == 0;
          goto LABEL_3;
        }
      }
    }
  }
  else
  {
    v7 = v6 != 0 ? 2 : 0;
    result = v7 | 1;
    v9 = v5 == 0;
LABEL_3:
    if ( v9 )
      return v7;
  }
  return result;
}
