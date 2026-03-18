/*
 * XREFs of ??1Info@FxIrpPreprocessInfo@@QEAA@XZ @ 0x1400788F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxIrpPreprocessInfo::Info::~Info(FxIrpPreprocessInfo::Info *this)
{
  unsigned __int8 *MinorFunctions; // rcx

  MinorFunctions = this->MinorFunctions;
  if ( MinorFunctions )
    FxPoolFree(MinorFunctions);
}
