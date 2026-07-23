/*
 * XREFs of MiCreateVsmEnclave @ 0x14087C860
 * Callers:
 *     MiCreateEnclave @ 0x14087C3B8 (MiCreateEnclave.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     PsCreateVsmEnclave @ 0x1407754E8 (PsCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateVsmEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 ProcessPartition; // rax
  int v9; // r8d
  _BYTE *v10; // r9
  __int64 v11; // rdx
  char v12; // r14
  BOOL v13; // ebx
  __int64 v14; // r8
  __int64 result; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  if ( (ULONG *)ProcessPartition == &MiSystemPartition )
    LODWORD(v11) = 0;
  else
    v11 = *(_QWORD *)(ProcessPartition + 256);
  v12 = v9 == 17;
  v13 = 0;
  if ( a5 >= 4 )
    v13 = (*v10 & 1) != 0;
  v14 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  result = PsCreateVsmEnclave(
             a1,
             v11,
             v14,
             (struct _KLOCK_ENTRIES *)((((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF)
                                     - v14
                                     + 1),
             v12,
             a4,
             a5,
             (_QWORD *)(a2 + 80));
  if ( (int)result >= 0 )
  {
    if ( v13 )
      *(_DWORD *)(a2 + 72) |= 4u;
    return 0LL;
  }
  return result;
}
