/*
 * XREFs of ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180063CFC
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18001D6A4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800992F4 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18005354C (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::StopAnimations(CAnimationEngine *this)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // rbx
  unsigned int i; // ebp
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax

  v2 = 0;
  v3 = *((_DWORD *)this + 16);
  while ( (--v3 & 0x80000000) == 0 )
  {
    _mm_lfence();
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v3);
    if ( v4 )
      CBaseObject::AddRef((CBaseObject *)v4);
    if ( *(_BYTE *)(v4 + 49) )
    {
      for ( i = 0; i < *(_DWORD *)(v4 + 20); ++i )
      {
        v6 = *(_QWORD *)(v4 + 32);
        if ( v6 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
          v2 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x111u, 0LL);
            goto LABEL_15;
          }
        }
      }
      v8 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, v3);
      v2 = v8;
      if ( v8 >= 0 )
        goto LABEL_6;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x115u, 0LL);
LABEL_15:
      CBaseObject::Release((CBaseObject *)v4);
      return v2;
    }
LABEL_6:
    CBaseObject::Release((CBaseObject *)v4);
  }
  return v2;
}
