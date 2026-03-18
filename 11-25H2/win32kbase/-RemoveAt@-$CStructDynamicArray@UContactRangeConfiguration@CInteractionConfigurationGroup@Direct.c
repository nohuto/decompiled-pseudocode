/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1400688EC
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1400682F0 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = a2;
  GreDeleteFastMutex(*(char **)(*(_QWORD *)a1 + 8LL * a2));
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  for ( *(_DWORD *)(a1 + 8) = result; v3 < *(_DWORD *)(a1 + 8); *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = result )
  {
    v5 = v3++;
    result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
  }
  return result;
}
