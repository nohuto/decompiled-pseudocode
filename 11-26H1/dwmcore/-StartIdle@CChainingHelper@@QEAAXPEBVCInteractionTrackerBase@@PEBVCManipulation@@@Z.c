/*
 * XREFs of ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTrackerBase@@PEBVCManipulation@@@Z @ 0x180139A8C
 * Callers:
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180139A40 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     _CChainingHelper::StartIdle_::_2_::_lambda_1_::operator() @ 0x180139CB8 (_CChainingHelper--StartIdle_--_2_--_lambda_1_--operator().c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18013B7FC (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall CChainingHelper::StartIdle(
        CChainingHelper *this,
        const struct CInteractionTrackerBase *a2,
        const struct CManipulation *a3)
{
  int v4; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  const struct CInteractionTrackerBase *v6; // [rsp+58h] [rbp+10h] BYREF
  const struct CManipulation *v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v5[1] = this;
  v5[0] = &v6;
  v4 = 0;
  v5[2] = &v7;
  do
    CChainingHelper::StartIdle_::_2_::_lambda_1_::operator()(v5, (unsigned int)v4++);
  while ( v4 < 3 );
  CChainingHelper::UpdateConfigurationIfDirty(this);
}
