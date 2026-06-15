/*
 * XREFs of sub_140039950 @ 0x140039950
 * Callers:
 *     sub_1400398CC @ 0x1400398CC (sub_1400398CC.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140039A68 @ 0x140039A68 (sub_140039A68.c)
 *     sub_140039ADC @ 0x140039ADC (sub_140039ADC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140039950(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  IRtwqAsyncCallback *v5; // rbx
  HRESULT v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  IRtwqAsyncCallback *doneCallback; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 24) )
    return 0LL;
  doneCallback = 0LL;
  v2 = sub_140039A68(&doneCallback);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = doneCallback;
    v6 = RtwqBeginUnregisterWorkQueueWithMMCSS(*(_DWORD *)(a1 + 16), doneCallback, 0LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      sub_14000C2A8((int)retaddr, 290, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v6);
      if ( v5 )
        sub_1400B6010(v5);
      return v7;
    }
    v8 = sub_140039ADC(v5);
    v7 = v8;
    if ( v8 < 0 )
    {
      sub_14000C2A8((int)retaddr, 291, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v8);
      if ( v5 )
        sub_1400B6010(v5);
      return v7;
    }
    sub_140003238((__int64 *)&doneCallback);
    return 0LL;
  }
  sub_14000C2A8((int)retaddr, 288, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v2);
  if ( doneCallback )
    sub_1400B6010(doneCallback);
  return v3;
}
