/*
 * XREFs of ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18013B7FC
 * Callers:
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTrackerBase@@PEBVCManipulation@@@Z @ 0x180139A8C (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTrackerBase@@PEBVCManipulation@@@Z.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x18013C910 (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___ @ 0x18013BD90 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_13_--_lambda_4___.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_10_::_lambda_3___ @ 0x18013BE08 (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_10_--_lambda_3___.c)
 *     CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___ @ 0x18028F2CC (CChainingHelper--RunForAllAxes__CChainingHelper--UpdateConfigurationIfDirty_--_8_--_lambda_2___.c)
 */

void __fastcall CChainingHelper::UpdateConfigurationIfDirty(CChainingHelper *this)
{
  char v1; // al
  CChainingHelper *v2; // rbx
  int v3; // eax
  char v4; // r8
  CChainingHelper *v5; // rdx
  __int64 v6; // r9
  _QWORD v7[4]; // [rsp+20h] [rbp-20h] BYREF
  CChainingHelper *v8; // [rsp+50h] [rbp+10h] BYREF
  int v9; // [rsp+58h] [rbp+18h] BYREF
  CChainingHelper *v10; // [rsp+60h] [rbp+20h] BYREF

  v1 = *((_BYTE *)this + 36);
  v2 = this;
  if ( (v1 & 1) != 0 )
  {
    v3 = 0;
    v4 = 0;
    v9 = 0;
    LOBYTE(this) = 0;
    LOBYTE(v8) = 0;
    v5 = v2;
    v6 = 3LL;
    do
    {
      if ( (*(_BYTE *)v5 & 1) != 0 )
      {
        v3 |= *((_DWORD *)v5 + 1);
        v9 = v3;
        v4 |= (*(_BYTE *)v5 & 2) != 0;
        LOBYTE(this) = 1;
        LOBYTE(v8) = v4;
      }
      v5 = (CChainingHelper *)((char *)v5 + 12);
      --v6;
    }
    while ( v6 );
    if ( (_BYTE)this )
    {
      v7[0] = v2;
      v7[1] = &v8;
      v7[2] = &v9;
      CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_8_::_lambda_2___(this, v7);
    }
    else
    {
      v10 = v2;
      CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_10_::_lambda_3___(this, &v10);
    }
    *((_BYTE *)v2 + 36) &= ~1u;
    v1 = *((_BYTE *)v2 + 36);
  }
  if ( (v1 & 2) != 0 )
  {
    v8 = v2;
    CChainingHelper::RunForAllAxes__CChainingHelper::UpdateConfigurationIfDirty_::_13_::_lambda_4___(this, &v8);
    *((_BYTE *)v2 + 36) &= ~2u;
  }
}
