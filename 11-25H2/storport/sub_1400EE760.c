/*
 * XREFs of sub_1400EE760 @ 0x1400EE760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400C9458 @ 0x1400C9458 (sub_1400C9458.c)
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 */

char __fastcall sub_1400EE760(__int64 a1, __int64 a2)
{
  ULONG CurrentProcessorNumber; // eax
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r14
  struct _KDPC *v7; // rcx
  _DWORD *v8; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD **)(v4 + 88);
  v6 = v5[108] + ((unsigned __int64)*(unsigned __int16 *)(v4 + 138) << 7);
  _InterlockedExchange((volatile __int32 *)a2, 0);
  if ( (*(_WORD *)(*(_QWORD *)(v6 - 128) + 16LL * *(unsigned __int16 *)(v6 - 94) + 14) & 1) != *(_WORD *)(v6 - 92) )
  {
    v7 = *(struct _KDPC **)(a2 + 24);
    if ( *(_DWORD *)(a2 + 4) != CurrentProcessorNumber )
    {
LABEL_8:
      LOBYTE(v8) = KeInsertQueueDpc(v7, (PVOID)a2, v5);
      return (char)v8;
    }
    sub_140115650(v7, (PVOID)1, (PVOID)(v6 - 128), v5);
  }
  LOBYTE(v8) = sub_1400C9458((__int64)v5, v4);
  if ( (_BYTE)v8 )
  {
    v8 = (_DWORD *)v5[159];
    if ( !*v8 )
    {
      if ( (*(_DWORD *)(v5[131] + 76LL) & 0x200) != 0 )
      {
        v7 = *(struct _KDPC **)(a2 + 24);
        goto LABEL_8;
      }
      LODWORD(v8) = _InterlockedCompareExchange((volatile signed __int32 *)a2, 1, 0);
      if ( !(_DWORD)v8 )
        LOBYTE(v8) = ExSetTimer(*(_QWORD *)(a2 + 16), *(int *)(v6 - 44), 0LL, 0LL);
    }
  }
  return (char)v8;
}
