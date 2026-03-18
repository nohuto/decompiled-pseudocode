/*
 * XREFs of CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___ @ 0x18028F2CC
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18013B7FC (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B8B0 (-NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 *     ?NotifyExpressionProcessingComplete@InteractionSourceManager@@QEAAXXZ @ 0x18013BC30 (-NotifyExpressionProcessingComplete@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x18013C4C4 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___()
{
  int i; // ebx
  unsigned int TemporaryConfigurationAxis; // eax
  _BYTE *v2; // r9
  __int64 v3; // r10
  int v4; // r8d
  __int64 result; // rax

  for ( i = 0; i < 3; ++i )
  {
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(i);
    LOBYTE(v2) = *v2;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, int))(*(_QWORD *)(v3 + 72) + 200LL))(
               v3 + 72,
               TemporaryConfigurationAxis,
               0LL,
               v2,
               v4);
  }
  return result;
}
