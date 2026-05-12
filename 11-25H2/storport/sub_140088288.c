/*
 * XREFs of sub_140088288 @ 0x140088288
 * Callers:
 *     sub_140010960 @ 0x140010960 (sub_140010960.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140088288(__int64 a1, struct _PROCESSOR_NUMBER *a2, unsigned int *a3)
{
  __int64 v3; // rax
  __int64 v7; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // r9

  v3 = *(_QWORD *)(a1 + 584);
  if ( !v3 )
    return 3238002689LL;
  v7 = *(_QWORD *)(v3 + 120);
  if ( !v7 || !*(_QWORD *)(v3 + 128) )
    return 3238002689LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = 1;
  if ( v9 <= 1 )
  {
LABEL_9:
    v10 = ProcessorIndexFromNumber % (v9 - 1) + 1;
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 584) + 128LL);
    while ( a2->Group != *(_WORD *)(v11 + 16LL * v10 + 8) || (a2->Number & *(_BYTE *)(v11 + 16LL * v10)) == 0 )
    {
      if ( ++v10 >= v9 )
        goto LABEL_9;
    }
  }
  *a3 = v10;
  return 0LL;
}
