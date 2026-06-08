/*
 * XREFs of WriteGenAddrEx @ 0x140001830
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x140001800 (WriteGenAddrMaybeHiddenEx.c)
 *     WriteGenAddrHiddenEx @ 0x140003990 (WriteGenAddrHiddenEx.c)
 * Callees:
 *     WriteIoMemRawEx @ 0x140001970 (WriteIoMemRawEx.c)
 *     ReadIoMemRawEx @ 0x140001C50 (ReadIoMemRawEx.c)
 *     ReadIoMemRaw @ 0x140002200 (ReadIoMemRaw.c)
 */

char __fastcall WriteGenAddrEx(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  _BYTE *v4; // r10
  __int64 IoMemRaw; // rax
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  _BYTE *v8; // r9
  unsigned __int8 v9; // cl
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // r8

  v3 = a2;
  v4 = a1;
  if ( *a1 == 1 || *a1 == 127 )
  {
    v8 = a1 + 3;
    if ( a1[2] || (LOBYTE(IoMemRaw) = *v8, a1[1] != *v8) )
    {
      IoMemRaw = ReadIoMemRaw(a1, a2, a3, v8);
      v9 = v4[1];
      v10 = IoMemRaw;
      if ( v9 < 0x40u || v4[2] )
      {
        LOBYTE(IoMemRaw) = v4[2];
        v3 = v10 & ~(((1LL << v9) - 1) << IoMemRaw) | (((1LL << v9) - 1) << IoMemRaw) & (v3 << IoMemRaw);
      }
    }
    v11 = *(_QWORD *)(v4 + 4);
    v12 = *v8;
    if ( *v4 == 1 )
    {
      switch ( v12 )
      {
        case 8:
          LOBYTE(IoMemRaw) = v3;
          __outbyte(v11, v3);
          break;
        case 16:
          LOBYTE(IoMemRaw) = v3;
          __outword(v11, v3);
          break;
        case 32:
          LOBYTE(IoMemRaw) = v3;
          __outdword(v11, v3);
          break;
      }
    }
    else if ( *v4 == 127 && v12 == 64 )
    {
      LOBYTE(IoMemRaw) = v3;
      __writemsr(v11, v3);
    }
  }
  else
  {
    if ( a1[2] || a1[1] != 64 )
    {
      v6 = ReadIoMemRawEx();
      v7 = v4[1];
      if ( v7 < 0x40u || v4[2] )
        v3 = v6 & ~(((1LL << v7) - 1) << v4[2]) | (((1LL << v7) - 1) << v4[2]) & (v3 << v4[2]);
    }
    LOBYTE(IoMemRaw) = WriteIoMemRawEx(v4, v3);
  }
  return IoMemRaw;
}
