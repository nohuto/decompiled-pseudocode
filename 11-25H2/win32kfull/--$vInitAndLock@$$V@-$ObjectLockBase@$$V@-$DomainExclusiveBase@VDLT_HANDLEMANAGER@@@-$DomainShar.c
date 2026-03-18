/*
 * XREFs of ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400C9768
 * Callers:
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C9740 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400C97E0 (-FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     DestroyEventHook @ 0x1400C9C20 (DestroyEventHook.c)
 *     _SetWinEventHook @ 0x1400C9E4C (_SetWinEventHook.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1400CA730 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400CA9C4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     _FreeTouchInputInfo @ 0x1400CABF0 (_FreeTouchInputInfo.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     _FreeGestureInfo @ 0x1402694A0 (_FreeGestureInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(
        __int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  tagDomLock *v4; // rcx

  v1 = (_BYTE *)(a1 + 40);
  v2 = a1;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v3 = 0;
    do
    {
      v4 = *(tagDomLock **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *(_BYTE *)(v2 + 8) )
          tagDomLock::LockExclusive(v4);
        else
          tagDomLock::LockShared(v4);
      }
      ++v3;
      v2 += 16LL;
    }
    while ( !v3 );
    *v1 = 1;
  }
}
