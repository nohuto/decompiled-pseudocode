/*
 * XREFs of IcRemapInputs @ 0x1400C46B0
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbBootAllocation @ 0x1400C35D0 (IrqArbBootAllocation.c)
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 IcRemapInputs()
{
  unsigned __int8 i; // si
  __int64 j; // rbx
  int v2; // eax
  unsigned int v3; // ebp
  unsigned int k; // edi
  __int64 v5; // rcx
  int v6; // r9d
  bool v7; // r8
  int v8; // edx
  int v9; // r9d
  __int64 result; // rax

  for ( i = 0; i < 2u; ++i )
  {
    for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
    {
      v2 = *(_DWORD *)(j + 28);
      if ( v2 >= 0 && (v2 & 4) == 0 )
      {
        v3 = *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1;
        for ( k = 0; k < v3; ++k )
        {
          v5 = 200LL * k;
          v6 = *(_DWORD *)(v5 + j + 36);
          if ( (v6 || *(_DWORD *)(v5 + j + 32)) && !*(_BYTE *)(v5 + j + 225) )
          {
            v7 = *(_DWORD *)(v5 + j + 52) != *(_DWORD *)(v5 + j + 140)
              || *(_DWORD *)(v5 + j + 60) != *(_DWORD *)(v5 + j + 148)
              || *(_DWORD *)(v5 + j + 64) != *(_DWORD *)(v5 + j + 152)
              || *(_WORD *)(v5 + j + 80) != *(_WORD *)(v5 + j + 168)
              || *(_QWORD *)(v5 + j + 72) != *(_QWORD *)(v5 + j + 160);
            v8 = *(_DWORD *)(v5 + j + 32) - *(_DWORD *)(j + v5 + 40);
            v9 = v6 - *(_DWORD *)(200LL * k + j + 44);
            if ( i )
            {
              if ( v9 && (!v8 || v7) )
              {
                result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[64])(
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           j + 200LL * k + 136,
                           1);
                if ( (int)result < 0 )
                  return result;
              }
            }
            else
            {
              if ( !v9 )
              {
                if ( !v8 )
                  continue;
LABEL_25:
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))HalPrivateDispatchTable[65])(
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  j + 200LL * k + 48,
                  1);
                continue;
              }
              if ( v8 && v7 )
                goto LABEL_25;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
