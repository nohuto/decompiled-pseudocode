/*
 * XREFs of ProcessorMsiSupported @ 0x1400D1720
 * Callers:
 *     IrqArbpFindSuitableRangeMsi @ 0x1400D15F0 (IrqArbpFindSuitableRangeMsi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorMsiSupported(__int64 *a1, _BYTE *a2)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // di
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v6; // rax
  struct _PROCESSOR_NUMBER v8; // [rsp+30h] [rbp+8h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a1;
  v4 = 0;
  v8.Group = *((_WORD *)a1 + 4);
  *a2 = 1;
  v8.Reserved = 0;
  while ( v3 )
  {
    if ( _bittest64(&v3, v4) )
    {
      v8.Number = v4;
      ProcNumber = v8;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1
        || ProcessorIndexFromNumber >= ProcessorInstanceCount
        || (_mm_lfence(), (v6 = *((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber)) == 0)
        || (*(_DWORD *)(v6 + 76) & 1) == 0 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
    v3 &= ~(1LL << v4++);
  }
  return 0LL;
}
