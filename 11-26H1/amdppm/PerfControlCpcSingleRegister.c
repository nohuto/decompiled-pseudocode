/*
 * XREFs of PerfControlCpcSingleRegister @ 0x140006AE0
 * Callers:
 *     <none>
 * Callees:
 *     WriteIoMemRawEx @ 0x140001970 (WriteIoMemRawEx.c)
 *     ReadIoMemRawEx @ 0x140001C50 (ReadIoMemRawEx.c)
 *     PerformanceFromPercentage @ 0x140001F30 (PerformanceFromPercentage.c)
 */

_UNKNOWN **__fastcall PerfControlCpcSingleRegister(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  _BYTE *v9; // rbx
  unsigned __int64 IoMemRaw; // r11
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // rax
  char v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  char v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  char v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  unsigned __int8 v24; // cl
  unsigned int v25; // r8d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a3 || a4 )
  {
    v7 = *(_DWORD *)(a2 + 28);
    v8 = *(_DWORD *)(a2 + 24);
    v9 = *(_BYTE **)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    IoMemRaw = ReadIoMemRawEx((unsigned __int8 *)(a1 + 152));
    if ( *(_BYTE *)(a1 + 125) )
    {
      v11 = v9[129];
      if ( *(_BYTE *)(a2 + 72) )
      {
        if ( v11 < 0x40u || v9[130] )
          IoMemRaw &= ~(((1LL << v11) - 1) << v9[130]);
        else
          IoMemRaw = 0LL;
      }
      else if ( v11 < 0x40u || v9[130] )
      {
        IoMemRaw = IoMemRaw & ~(((1LL << v11) - 1) << v9[130]) | (((1LL << v11) - 1) << v9[130]) & (*(_QWORD *)a2 << v9[130]);
      }
      else
      {
        IoMemRaw = *(_QWORD *)a2;
      }
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      if ( v9[153] < 0x40u || v9[154] )
      {
        v12 = PerformanceFromPercentage(a1, v8);
        IoMemRaw = v15 & ~v14 | v14 & (v12 << v13);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v8);
      }
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      if ( v9[177] < 0x40u || v9[178] )
      {
        v16 = PerformanceFromPercentage(a1, v7);
        IoMemRaw = v19 & ~v18 | v18 & (v16 << v17);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v7);
      }
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      if ( v9[201] < 0x40u || v9[202] )
      {
        v20 = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 32));
        IoMemRaw = v23 & ~v22 | v22 & (v20 << v21);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 32));
      }
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      v24 = v9[417];
      v25 = 255 * *(_DWORD *)(a2 + 36) / 0x64u;
      if ( v24 < 0x40u || v9[418] )
        IoMemRaw = IoMemRaw & ~(((1LL << v24) - 1) << v9[418]) | (((1LL << v24) - 1) << v9[418]) & ((unsigned __int64)v25 << v9[418]);
      else
        IoMemRaw = v25;
    }
    return (_UNKNOWN **)WriteIoMemRawEx((unsigned __int8 *)(a1 + 152), IoMemRaw);
  }
  return result;
}
