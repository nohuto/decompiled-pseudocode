/*
 * XREFs of ReadIoMemRawEx @ 0x140001C50
 * Callers:
 *     WriteGenAddrEx @ 0x140001830 (WriteGenAddrEx.c)
 *     PerfControlCppcRequestMsr @ 0x140001A80 (PerfControlCppcRequestMsr.c)
 *     ReadGenAddrEx @ 0x140002148 (ReadGenAddrEx.c)
 *     PerfControlCpc @ 0x140006730 (PerfControlCpc.c)
 *     PerfControlCpcSingleRegister @ 0x140006AE0 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRawEx(unsigned __int8 *a1)
{
  int v1; // eax
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int64 v5; // r9
  unsigned __int8 v6; // r8
  unsigned __int8 *v7; // rcx
  unsigned __int8 v8; // al

  v1 = *a1;
  if ( !(_BYTE)v1 )
  {
    v8 = a1[3];
    v7 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
    switch ( v8 )
    {
      case 8u:
        return *v7;
      case 0x10u:
        return *(unsigned __int16 *)v7;
      case 0x20u:
        return *(unsigned int *)v7;
      case 0x40u:
        return *(_QWORD *)v7;
    }
    return 0LL;
  }
  if ( (_BYTE)v1 != 10 )
  {
    v5 = *(_QWORD *)(a1 + 4);
    v6 = a1[3];
    if ( v1 == 1 )
    {
      switch ( v6 )
      {
        case 8u:
          LOBYTE(result) = __inbyte(v5);
          return (unsigned __int8)result;
        case 0x10u:
          LOWORD(result) = __inword(v5);
          return (unsigned __int16)result;
        case 0x20u:
          LODWORD(result) = __indword(v5);
          return (unsigned int)result;
      }
    }
    else if ( v1 == 127 && v6 == 64 )
    {
      return __readmsr(v5);
    }
    return 0LL;
  }
  v2 = a1[1] + a1[2];
  v3 = *((_QWORD *)a1 + 2);
  if ( v2 <= 8 )
    return *(unsigned __int8 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v3 + 88));
  if ( v2 > 0x10 )
  {
    if ( v2 <= 0x20 )
      return *(unsigned int *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v3 + 88));
    v7 = (unsigned __int8 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v3 + 88));
    return *(_QWORD *)v7;
  }
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v3 + 88));
}
