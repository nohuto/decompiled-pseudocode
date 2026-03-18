/*
 * XREFs of NVMeGetNVMSetAttributeList @ 0x1400269E0
 * Callers:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall NVMeGetNVMSetAttributeList(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  _QWORD *v4; // rbp
  unsigned __int16 i; // r14
  int j; // edx
  __int64 v7; // rcx
  unsigned __int8 *v8; // rbx
  int v9; // eax

  v1 = *(_QWORD *)(a1 + 1560);
  result = *(unsigned int *)(v1 + 96);
  if ( (result & 4) != 0 && (result = *(unsigned __int16 *)(v1 + 338), (_WORD)result) )
  {
    v4 = (_QWORD *)(a1 + 3992);
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)((_DWORD)result << 7), 1701672526LL);
    if ( !(_DWORD)result )
    {
      if ( *v4 )
      {
        for ( i = 0; i < *(_WORD *)(v1 + 338); i += result )
        {
          LocalCommandReuse(a1, a1 + 1008);
          for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= j )
            ++j;
          *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
          v7 = *(_QWORD *)(a1 + 1104);
          *(_QWORD *)(v7 + 4120) = *(_QWORD *)(a1 + 1664);
          *(_WORD *)(v7 + 4140) = i + 1;
          *(_BYTE *)(v7 + 4096) = 6;
          *(_DWORD *)(v7 + 4100) = 0;
          *(_BYTE *)(v7 + 4136) = 4;
          ProcessCommand(a1, a1 + 1016);
          result = WaitForCommandComplete(a1, a1 + 1016, 1);
          if ( *(_BYTE *)(a1 + 1019) != 1 )
            break;
          v8 = *(unsigned __int8 **)(a1 + 1656);
          v9 = *v8;
          if ( v9 >= *(unsigned __int16 *)(v1 + 338) - i )
            v9 = *(unsigned __int16 *)(v1 + 338) - i;
          memmove((void *)(*v4 + ((unsigned __int64)i << 7)), v8 + 128, (__int64)v9 << 7);
          result = *v8;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 3992) = 0LL;
  }
  return result;
}
