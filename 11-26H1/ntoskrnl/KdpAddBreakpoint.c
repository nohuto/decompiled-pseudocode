/*
 * XREFs of KdpAddBreakpoint @ 0x140C1C5CC
 * Callers:
 *     KdpWriteCustomBreakpoint @ 0x1405E68F0 (KdpWriteCustomBreakpoint.c)
 *     KdpWriteBreakPointEx @ 0x140C1B4E4 (KdpWriteBreakPointEx.c)
 *     KdpWriteBreakpoint @ 0x140C1B6B8 (KdpWriteBreakpoint.c)
 * Callees:
 *     KdpCopyCodeStream @ 0x140C1C104 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140C1C7DC (KdpInsertBreakpoint.c)
 */

__int64 __fastcall KdpAddBreakpoint(unsigned __int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // ebp
  char *v8; // rbx
  __int64 i; // rdx
  char *v10; // r8
  int v11; // eax
  int v13; // eax
  char v14; // si
  int inserted; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v16[0] = 0LL;
  if ( ((unsigned __int8)(a3 - 1) & a3) != 0 || a1 >= 0xFFFF800000000000uLL && (a2 != 204 || a3 != 1 || a4) )
    return 0LL;
  v8 = 0LL;
  ++KdpBreakpointChangeCount;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x20 )
    {
      if ( !v8 )
        return 0LL;
      v13 = KdpCopyCodeStream((unsigned int)a1 & ~a4, (int)v16, v4, 4);
      *(_QWORD *)v8 = a1;
      v8[36] = v4;
      v8[37] = a4;
      *((_QWORD *)v8 + 2) = a2;
      if ( v13 < 0 )
      {
        *((_QWORD *)v8 + 1) = KeGetCurrentThread()->ApcState.Process;
        *((_DWORD *)v8 + 8) = 3;
        return (unsigned int)((v8 - (char *)&KdpBreakpointTable) / 40) + 1;
      }
      *((_QWORD *)v8 + 3) = v16[0];
      v14 = KdpOweBreakpoint;
      *((_QWORD *)v8 + 1) = KeGetCurrentThread()->ApcState.Process;
      inserted = KdpInsertBreakpoint(v8, v16);
      if ( inserted )
      {
        *((_DWORD *)v8 + 8) = inserted;
        return (unsigned int)((v8 - (char *)&KdpBreakpointTable) / 40) + 1;
      }
      KdpOweBreakpoint = v14;
      return 0LL;
    }
    v10 = (char *)&KdpBreakpointTable + 40 * i;
    v11 = *((_DWORD *)v10 + 8);
    if ( (v11 & 1) != 0 && *(_QWORD *)v10 == a1 )
      break;
    if ( !v8 && !v11 )
      v8 = (char *)&KdpBreakpointTable + 40 * i;
  }
  if ( (v11 & 8) == 0 )
    return 0LL;
  *((_DWORD *)v10 + 8) = v11 & 0xFFFFFFF7;
  return (unsigned int)(i + 1);
}
