/*
 * XREFs of ReadIoMemRawEx @ 0x140001574
 * Callers:
 *     WriteGenAddrEx @ 0x1400013F8 (WriteGenAddrEx.c)
 *     GetCpcDifferentialFeedback @ 0x140001870 (GetCpcDifferentialFeedback.c)
 *     ReadGenAddrEx @ 0x140001C90 (ReadGenAddrEx.c)
 *     PerfControlCpc @ 0x140008CE0 (PerfControlCpc.c)
 *     PerfControlCpcSingleRegister @ 0x1400090A0 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     ReadIoMemRaw @ 0x140001660 (ReadIoMemRaw.c)
 */

__int64 __fastcall ReadIoMemRawEx(__int64 a1)
{
  unsigned int v3; // r10d
  int v4; // ecx
  unsigned __int8 *v5; // rax
  unsigned __int8 *v7; // rax
  char v8; // cl

  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 10 )
    {
      v3 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
      if ( v3 <= 8 )
      {
        v4 = 8;
      }
      else if ( v3 <= 0x10 )
      {
        v4 = 16;
      }
      else
      {
        v4 = 64;
        if ( v3 <= 0x20 )
          v4 = 32;
      }
      v5 = (unsigned __int8 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL));
      switch ( v4 )
      {
        case 8:
          return *v5;
        case 16:
          return *(unsigned __int16 *)v5;
        case 32:
          return *(unsigned int *)v5;
      }
      return *(_QWORD *)v5;
    }
    else
    {
      return ReadIoMemRaw(a1, 0LL, a1);
    }
  }
  else
  {
    v7 = *(unsigned __int8 **)(a1 + 16);
    v8 = *(_BYTE *)(a1 + 3);
    switch ( v8 )
    {
      case 8:
        return *v7;
      case 16:
        return *(unsigned __int16 *)v7;
      case 32:
        return *(unsigned int *)v7;
      case 64:
        return *(_QWORD *)v7;
      default:
        return 0LL;
    }
  }
}
