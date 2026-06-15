/*
 * XREFs of sub_140044A2C @ 0x140044A2C
 * Callers:
 *     sub_140044930 @ 0x140044930 (sub_140044930.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140039A68 @ 0x140039A68 (sub_140039A68.c)
 *     sub_140039B20 @ 0x140039B20 (sub_140039B20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140044A2C(__int64 a1, const WCHAR *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  IRtwqAsyncCallback *v6; // rbx
  HRESULT v7; // eax
  HRESULT v8; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  IRtwqAsyncCallback *doneCallback; // [rsp+50h] [rbp+18h] BYREF

  doneCallback = 0LL;
  v4 = sub_140039A68((__int64 *)&doneCallback);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_14000C2A8((int)retaddr, 274, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v4);
LABEL_10:
    sub_140003238((__int64 *)&doneCallback);
    return v5;
  }
  v6 = doneCallback;
  v7 = RtwqBeginRegisterWorkQueueWithMMCSS(*(_DWORD *)(a1 + 16), a2, 0, 0, doneCallback, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8((int)retaddr, 276, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v7);
    v5 = v8;
    goto LABEL_10;
  }
  if ( sub_140039B20((volatile __int32 *)&v6->GetParameters + 1) )
  {
    *(_DWORD *)(a1 + 20) = v6->GetParameters;
    *(_BYTE *)(a1 + 24) = 1;
    v5 = 0;
    goto LABEL_10;
  }
  sub_14000C2A8((int)retaddr, 240, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", -2147467259);
  sub_14000C2A8((int)retaddr, 277, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", -2147467259);
  if ( v6 )
    sub_1400B6010(v6);
  return 2147500037LL;
}
