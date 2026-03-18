/*
 * XREFs of ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1400DDEFC
 * Callers:
 *     ?ApplyDeBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z @ 0x1400DDEC0 (-ApplyDeBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z.c)
 *     ?ApplyBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z @ 0x1400DDEE0 (-ApplyBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x1400DDFB4 (-doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1400DE084 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE160 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall GroupedFGBoostProp::applyBoostIfNeeded(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  char v12; // [rsp+48h] [rbp-20h]
  char v13; // [rsp+50h] [rbp-18h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    v10,
    *(_QWORD *)(a1 + 144),
    a3,
    a4);
  v9 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<GroupedFGBoostProp>(a1, &v9) )
  {
    v7 = v9;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 24); i = (unsigned int)(i + 1) )
      GroupedFGBoostProp::doBoost(v6, *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * i), a2);
  }
  if ( v12 && v13 )
  {
    if ( v11 )
      RIMUnlockExclusive(v11);
  }
}
