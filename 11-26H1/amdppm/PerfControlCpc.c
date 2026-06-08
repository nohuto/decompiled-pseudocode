/*
 * XREFs of PerfControlCpc @ 0x140006730
 * Callers:
 *     <none>
 * Callees:
 *     WriteIoMemRawEx @ 0x140001970 (WriteIoMemRawEx.c)
 *     ReadIoMemRawEx @ 0x140001C50 (ReadIoMemRawEx.c)
 */

void __fastcall PerfControlCpc(__int64 a1, __int64 a2, char a3, char a4)
{
  bool v7; // zf
  unsigned __int8 *v8; // r11
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 *v10; // r10
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // r9
  _BYTE *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int8 *v16; // r10
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int8 *v20; // r10
  unsigned __int8 v21; // cl
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int8 *v24; // r10
  unsigned __int8 v25; // cl
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int8 *v28; // r10
  __int64 v29; // r11
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // rdx

  if ( a3 || a4 )
  {
    v7 = *(_BYTE *)(a1 + 125) == 0;
    v8 = *(unsigned __int8 **)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    if ( !v7 )
    {
      IoMemRaw = ReadIoMemRawEx(v8 + 128);
      v11 = v8[129];
      v12 = IoMemRaw;
      v13 = v8 + 130;
      if ( v11 < 0x40u || *v13 )
        v14 = v12 & ~(((1LL << v11) - 1) << *v13) | (((1LL << v11) - 1) << *v13) & ((unsigned __int64)*(unsigned int *)(a2 + 48) << *v13);
      else
        v14 = *(unsigned int *)(a2 + 48);
      if ( a4 || v14 != v12 )
        WriteIoMemRawEx(v10, v14);
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      v15 = ReadIoMemRawEx(v8 + 152);
      v17 = v8[153];
      if ( v17 < 0x40u || v8[154] )
        v18 = v15 & ~(((1LL << v17) - 1) << v8[154]) | (((1LL << v17) - 1) << v8[154]) & ((unsigned __int64)*(unsigned int *)(a2 + 52) << v8[154]);
      else
        v18 = *(unsigned int *)(a2 + 52);
      if ( a4 || v18 != v15 )
        WriteIoMemRawEx(v16, v18);
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v19 = ReadIoMemRawEx(v8 + 176);
      v21 = v8[177];
      if ( v21 < 0x40u || v8[178] )
        v22 = v19 & ~(((1LL << v21) - 1) << v8[178]) | (((1LL << v21) - 1) << v8[178]) & ((unsigned __int64)*(unsigned int *)(a2 + 56) << v8[178]);
      else
        v22 = *(unsigned int *)(a2 + 56);
      if ( a4 || v22 != v19 )
        WriteIoMemRawEx(v20, v22);
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      v23 = ReadIoMemRawEx(v8 + 200);
      v25 = v8[201];
      if ( v25 < 0x40u || v8[202] )
        v26 = v23 & ~(((1LL << v25) - 1) << v8[202]) | (((1LL << v25) - 1) << v8[202]) & ((unsigned __int64)*(unsigned int *)(a2 + 60) << v8[202]);
      else
        v26 = *(unsigned int *)(a2 + 60);
      if ( a4 || v26 != v23 )
        WriteIoMemRawEx(v24, v26);
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      v27 = ReadIoMemRawEx(v8 + 416);
      v30 = *(_BYTE *)(v29 + 417);
      if ( v30 < 0x40u || *(_BYTE *)(v29 + 418) )
        v31 = v27 & ~(((1LL << v30) - 1) << *(_BYTE *)(v29 + 418)) | (((1LL << v30) - 1) << *(_BYTE *)(v29 + 418)) & ((unsigned __int64)*(unsigned int *)(a2 + 64) << *(_BYTE *)(v29 + 418));
      else
        v31 = *(unsigned int *)(a2 + 64);
      if ( a4 || v31 != v27 )
        WriteIoMemRawEx(v28, v31);
    }
  }
}
