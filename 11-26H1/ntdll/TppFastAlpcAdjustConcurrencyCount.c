/*
 * XREFs of TppFastAlpcAdjustConcurrencyCount @ 0x18003F4EC
 * Callers:
 *     TpCallbackMayRunLong @ 0x18003F020 (TpCallbackMayRunLong.c)
 *     TpAlpcRegisterCompletionList @ 0x180088030 (TpAlpcRegisterCompletionList.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x180160010 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppFastAlpcAdjustConcurrencyCount(__int64 a1)
{
  __int64 result; // rax
  signed __int32 v3; // r8d
  __int64 v4; // rax
  signed __int32 v5; // ecx
  signed __int32 v6; // edx
  void *v7; // rcx
  signed __int32 PortInformation; // [rsp+30h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 288) & 3;
  if ( (*(_BYTE *)(a1 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 284);
      v4 = *(_QWORD *)(a1 + 216);
      if ( !v4 || (result = *(unsigned int *)(v4 + 440), !(_DWORD)result) )
        result = MEMORY[0x7FFE03C0];
      v5 = result + *(_DWORD *)(*(_QWORD *)(a1 + 216) + 420LL);
      v6 = v5 + result;
      if ( v3 >= v5 && v3 <= (int)result + v6 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 284), v6, v3) )
      {
        v7 = *(void **)(a1 + 272);
        PortInformation = v6;
        NtAlpcSetInformation(v7, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  return result;
}
