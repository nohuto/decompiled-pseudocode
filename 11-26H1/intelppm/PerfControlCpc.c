/*
 * XREFs of PerfControlCpc @ 0x140008CE0
 * Callers:
 *     <none>
 * Callees:
 *     WriteIoMemRawEx @ 0x140001480 (WriteIoMemRawEx.c)
 *     ReadIoMemRawEx @ 0x140001574 (ReadIoMemRawEx.c)
 */

char __fastcall PerfControlCpc(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rax
  bool v8; // zf
  unsigned __int8 *v9; // r11
  unsigned __int8 *v10; // rbp
  __int64 IoMemRaw; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int8 *v15; // rbp
  unsigned __int8 v16; // cl
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int8 *v19; // rbp
  unsigned __int8 v20; // cl
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int8 *v23; // rbp
  unsigned __int8 v24; // cl
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int8 *v27; // rdi
  __int64 v28; // r11
  unsigned __int8 v29; // cl
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = (__int64)&retaddr;
  if ( a3 || a4 )
  {
    v8 = *(_BYTE *)(a1 + 125) == 0;
    v4 = *(_QWORD *)a2;
    v9 = *(unsigned __int8 **)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    if ( !v8 )
    {
      v10 = v9 + 128;
      IoMemRaw = ReadIoMemRawEx((__int64)(v9 + 128));
      v12 = v9[129];
      v13 = IoMemRaw;
      v4 = (__int64)(v9 + 130);
      if ( v12 < 0x40u || *(_BYTE *)v4 )
      {
        LOBYTE(v4) = *(_BYTE *)v4;
        v14 = v13 & ~(((1LL << v12) - 1) << v4) | (((1LL << v12) - 1) << v4) & ((unsigned __int64)*(unsigned int *)(a2 + 48) << v4);
      }
      else
      {
        v14 = *(unsigned int *)(a2 + 48);
      }
      if ( a4 || v14 != v13 )
        LOBYTE(v4) = WriteIoMemRawEx(v10, v14);
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      v15 = v9 + 152;
      v4 = ReadIoMemRawEx((__int64)(v9 + 152));
      v16 = v9[153];
      v17 = v4;
      if ( v16 < 0x40u || v9[154] )
      {
        LOBYTE(v4) = v9[154];
        v18 = v17 & ~(((1LL << v16) - 1) << v4) | (((1LL << v16) - 1) << v4) & ((unsigned __int64)*(unsigned int *)(a2 + 52) << v4);
      }
      else
      {
        v18 = *(unsigned int *)(a2 + 52);
      }
      if ( a4 || v18 != v17 )
        LOBYTE(v4) = WriteIoMemRawEx(v15, v18);
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v19 = v9 + 176;
      v4 = ReadIoMemRawEx((__int64)(v9 + 176));
      v20 = v9[177];
      v21 = v4;
      if ( v20 < 0x40u || v9[178] )
      {
        LOBYTE(v4) = v9[178];
        v22 = v21 & ~(((1LL << v20) - 1) << v4) | (((1LL << v20) - 1) << v4) & ((unsigned __int64)*(unsigned int *)(a2 + 56) << v4);
      }
      else
      {
        v22 = *(unsigned int *)(a2 + 56);
      }
      if ( a4 || v22 != v21 )
        LOBYTE(v4) = WriteIoMemRawEx(v19, v22);
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      v23 = v9 + 200;
      v4 = ReadIoMemRawEx((__int64)(v9 + 200));
      v24 = v9[201];
      v25 = v4;
      if ( v24 < 0x40u || v9[202] )
      {
        LOBYTE(v4) = v9[202];
        v26 = v25 & ~(((1LL << v24) - 1) << v4) | (((1LL << v24) - 1) << v4) & ((unsigned __int64)*(unsigned int *)(a2 + 60) << v4);
      }
      else
      {
        v26 = *(unsigned int *)(a2 + 60);
      }
      if ( a4 || v26 != v25 )
        LOBYTE(v4) = WriteIoMemRawEx(v23, v26);
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      v27 = v9 + 416;
      v4 = ReadIoMemRawEx((__int64)(v9 + 416));
      v29 = *(_BYTE *)(v28 + 417);
      v30 = v4;
      if ( v29 < 0x40u || *(_BYTE *)(v28 + 418) )
      {
        LOBYTE(v4) = *(_BYTE *)(v28 + 418);
        v31 = v30 & ~(((1LL << v29) - 1) << v4) | (((1LL << v29) - 1) << v4) & ((unsigned __int64)*(unsigned int *)(a2 + 64) << v4);
      }
      else
      {
        v31 = *(unsigned int *)(a2 + 64);
      }
      if ( a4 || v31 != v30 )
        LOBYTE(v4) = WriteIoMemRawEx(v27, v31);
    }
  }
  return v4;
}
