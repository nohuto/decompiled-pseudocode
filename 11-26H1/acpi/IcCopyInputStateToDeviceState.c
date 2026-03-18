/*
 * XREFs of IcCopyInputStateToDeviceState @ 0x1400C4888
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     IrqArbGsivFromIrq @ 0x1400C4EA4 (IrqArbGsivFromIrq.c)
 */

NTSTATUS __fastcall IcCopyInputStateToDeviceState(__int64 a1, int a2)
{
  __int64 v3; // rcx
  NTSTATUS result; // eax
  PRTL_RANGE i; // rcx
  _DWORD *UserData; // r8
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 j; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+68h] [rbp+20h] BYREF

  Range = 0LL;
  v3 = 48LL;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( a2 != 1 )
    v3 = 40LL;
  result = RtlGetFirstRange(*(PRTL_RANGE_LIST *)(v3 + a1), &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    if ( i->Owner )
    {
      if ( (i->Attributes & 1) == 0 )
      {
        UserData = i->UserData;
        if ( UserData )
        {
          v7 = UserData[2];
          if ( v7 == 1 || v7 == 2 )
          {
            v8 = IrqArbGsivFromIrq(i->Start);
            for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
            {
              if ( *(int *)(j + 28) >= 0 )
              {
                v11 = *(_DWORD *)(j + 16);
                if ( v11 <= v8 && *(_DWORD *)(j + 20) >= v8 )
                {
                  v12 = 200LL * (v8 - v11);
                  *(_OWORD *)(v9 + 32) = *(_OWORD *)(v12 + j + 136);
                  *(_OWORD *)(v9 + 48) = *(_OWORD *)(v12 + j + 152);
                  *(_OWORD *)(v9 + 64) = *(_OWORD *)(v12 + j + 168);
                  *(_OWORD *)(v9 + 80) = *(_OWORD *)(v12 + j + 184);
                  *(_OWORD *)(v9 + 96) = *(_OWORD *)(v12 + j + 200);
                  *(_QWORD *)(v9 + 112) = *(_QWORD *)(v12 + j + 216);
                }
              }
            }
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
