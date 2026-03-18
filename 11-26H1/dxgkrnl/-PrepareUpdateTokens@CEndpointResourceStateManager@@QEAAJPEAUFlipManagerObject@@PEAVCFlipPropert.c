/*
 * XREFs of ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001AB70
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14001A938 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 * Callees:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001ACD0 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareUpdateTokens(
        CEndpointResourceStateManager **this,
        struct FlipManagerObject *a2,
        struct CFlipPropertySet *a3,
        bool a4,
        struct _LIST_ENTRY *a5)
{
  CEndpointResourceStateManager *v5; // rax
  int v7; // edx
  __int64 v10; // r9
  __int64 v11; // r8
  char v12; // cl
  CEndpointResourceStateManager *v13; // rbx
  CContentResourceState *v14; // rdi
  int v15; // edi
  struct _LIST_ENTRY *i; // rax
  char v18; // al
  int UpdateTokens; // eax
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx

  v5 = *this;
  v7 = 0;
  v10 = 32LL;
  while ( v5 != (CEndpointResourceStateManager *)this )
  {
    v11 = (__int64)v5 + 24;
    if ( !v5 )
      v11 = 32LL;
    v12 = *(_BYTE *)v11;
    if ( (*(_BYTE *)v11 & 1) != 0 )
    {
      v12 |= 4u;
      *(_BYTE *)v11 = v12;
    }
    if ( (v12 & 2) != 0 )
      *(_BYTE *)v11 = v12 | 8;
    v5 = *(CEndpointResourceStateManager **)v5;
  }
  v13 = this[2];
  while ( v13 != (CEndpointResourceStateManager *)(this + 2) )
  {
    v14 = (CEndpointResourceStateManager *)((char *)v13 - 8);
    if ( !v13 )
      v14 = 0LL;
    if ( *(_QWORD *)(*((_QWORD *)v14 + 3) + 48LL) )
    {
      v18 = *((_BYTE *)v14 + 32);
      if ( (v18 & 1) != 0 )
      {
        v18 |= 4u;
        *((_BYTE *)v14 + 32) = v18;
      }
      if ( (v18 & 2) != 0 )
        *((_BYTE *)v14 + 32) = v18 | 8;
      if ( (*((_BYTE *)v14 + 64) & 1) != 0 )
      {
        UpdateTokens = CContentResourceState::CreateUpdateTokens(
                         v14,
                         (struct CEndpointResourceStateManager *)this,
                         a3,
                         a4,
                         a5);
        *((_BYTE *)v14 + 64) |= 2u;
        v7 = UpdateTokens;
      }
    }
    v13 = *(CEndpointResourceStateManager **)v13;
    v15 = v7;
    if ( v7 < 0 )
    {
      for ( i = a5->Flink; a5->Flink != a5; v7 = v15 )
      {
        Flink = i->Flink;
        if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        if ( i != (struct _LIST_ENTRY *)8 )
          ((void (__fastcall *)(struct _LIST_ENTRY **, __int64, struct _LIST_ENTRY *, __int64))i[-1].Blink->Flink)(
            &i[-1].Blink,
            1LL,
            Flink,
            v10);
        i = a5->Flink;
      }
      return (unsigned int)v7;
    }
  }
  return (unsigned int)v7;
}
