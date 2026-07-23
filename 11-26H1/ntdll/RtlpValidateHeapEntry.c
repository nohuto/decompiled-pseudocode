/*
 * XREFs of RtlpValidateHeapEntry @ 0x1800610A0
 * Callers:
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x1800603FC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800D9654 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801083AC (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010D700 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlpCheckBusyBlockTail @ 0x18006127C (RtlpCheckBusyBlockTail.c)
 */

char __fastcall RtlpValidateHeapEntry(__int64 a1, unsigned __int64 a2, const char *a3)
{
  int v6; // eax
  int v8; // edx
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  _QWORD *i; // rax

  if ( a2 )
  {
    if ( (a2 & 0xF) == 0 )
    {
      v6 = *(unsigned __int8 *)(a2 + 15);
      if ( (v6 & 0xFFFFFF3F) != 0 )
      {
        if ( (v6 & 0x80u) == 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v8 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(a2 + 8);
            if ( HIBYTE(v8) != ((unsigned __int8)v8 ^ (unsigned __int8)(BYTE1(v8) ^ BYTE2(v8))) )
              goto LABEL_4;
          }
          if ( *(_BYTE *)(a2 + 15) == 4 )
          {
            if ( (a2 & 0xFFF) != 0x30 )
              goto LABEL_4;
          }
          else
          {
            v9 = *(unsigned __int8 *)(a2 + 14);
            if ( (_BYTE)v9 )
              v10 = (_QWORD *)((a2 & 0xFFFFFFFFFFFF0000uLL) - (v9 << 16) + 0x10000);
            else
              v10 = (_QWORD *)a1;
            if ( !v10 || v10[5] != a1 || a2 < v10[8] || a2 >= v10[9] )
              goto LABEL_4;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            v11 = *(_DWORD *)(a2 + 8);
            v12 = HIWORD(v11);
            if ( (v11 & *(_DWORD *)(a1 + 124)) != 0 )
              LOBYTE(v12) = *(_BYTE *)(a1 + 138) ^ BYTE2(v11);
          }
          else
          {
            LOBYTE(v12) = *(_BYTE *)(a2 + 10);
          }
          if ( (v12 & 4) != 0 && !(unsigned __int8)RtlpCheckBusyBlockTail(a1, a2) )
            goto LABEL_4;
          if ( *(_BYTE *)(a2 + 15) != 4 )
          {
            for ( i = *(_QWORD **)(a1 + 288); i != (_QWORD *)(a1 + 288); i = (_QWORD *)*i )
            {
              if ( a2 >= i[5] && a2 < i[6] )
                return 1;
            }
            goto LABEL_4;
          }
        }
        else if ( *(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408) )
        {
          goto LABEL_4;
        }
        return 1;
      }
    }
  }
LABEL_4:
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid address specified to %s( %p, %p )\n", a3, (const void *)a1, (const void *)(a2 + 16));
  RtlpBreakPointHeap();
  return 0;
}
