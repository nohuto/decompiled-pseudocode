/*
 * XREFs of CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___ @ 0x18013BD90
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18013B7FC (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B8B0 (-NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 *     ?NotifyExpressionProcessingComplete@InteractionSourceManager@@QEAAXXZ @ 0x18013BC30 (-NotifyExpressionProcessingComplete@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x18013C4C4 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___(
        __int64 a1,
        __int64 *a2)
{
  int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v7; // r10
  __int64 result; // rax

  v2 = 0;
  v4 = 0LL;
  do
  {
    v5 = *a2;
    LOBYTE(v5) = (*(_BYTE *)(v4 + *a2) & 4) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)v2,
                                   a2,
                                   *(unsigned int *)(v4 + *a2 + 8),
                                   v5);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v7 + 72) + 200LL))(
               v7 + 72,
               TemporaryConfigurationAxis,
               1LL);
    ++v2;
    v4 += 12LL;
  }
  while ( v2 < 3 );
  return result;
}
