/*
 * XREFs of ProcessorIdtEntryToGsiv @ 0x1400BCA7C
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1400544C0 (IrqLibpGetVectorInput.c)
 *     IrqLibFreeMessageTarget @ 0x1400BC020 (IrqLibFreeMessageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorIdtEntryToGsiv(int a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v7; // bl
  __int64 v8; // rcx
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v10; // rcx
  __int64 result; // rax
  PRTL_RANGE Range; // [rsp+20h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-40h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+10h] BYREF
  struct _PROCESSOR_NUMBER v15; // [rsp+80h] [rbp+18h]

  v15 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  Range = 0LL;
  v15.Group = *((_WORD *)a2 + 4);
  v7 = 0;
  while ( *a2 )
  {
    v8 = *a2;
    if ( _bittest64(&v8, v7) )
    {
      v15.Number = v7;
      ProcNumber = v15;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 && ProcessorIndexFromNumber < ProcessorInstanceCount )
      {
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
        if ( v10 )
        {
          RtlGetFirstRange(v10, &Iterator, &Range);
          while ( Range )
          {
            if ( LODWORD(Range->Start) == a1 )
            {
              result = 0LL;
              *a4 = *((_DWORD *)Range->UserData + 4);
              return result;
            }
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
      }
    }
    *a2 &= ~(1LL << v7++);
  }
  return 3221226021LL;
}
