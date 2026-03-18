/*
 * XREFs of ?DetachFromChannel@CVisual@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18010BD40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180024E5C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?ClearSharedChildChannelNoRef@CVisual@@QEAAXXZ @ 0x18010BCF0 (-ClearSharedChildChannelNoRef@CVisual@@QEAAXXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::DetachFromChannel(CVisual *this, struct CChannelContext *a2)
{
  _DWORD *v2; // r8
  struct CChannelContext *v5; // rax
  struct CChannelContext *v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  struct CChannelContext **v10; // rax

  v2 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v2 & 0x10000) == 0 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v7 = (unsigned int)v2[1];
  v8 = v2 + 2;
  v9 = 0LL;
  if ( (_DWORD)v7 )
  {
    while ( *v8 != 16 )
    {
      v9 = (unsigned int)(v9 + 1);
      ++v8;
      if ( (unsigned int)v9 >= (unsigned int)v7 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    if ( (unsigned int)v9 >= (unsigned int)v7 )
    {
      v10 = 0LL;
      goto LABEL_16;
    }
  }
  v10 = (struct CChannelContext **)((char *)&v2[2 * v9] + ((v7 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_16:
  v5 = *v10;
LABEL_3:
  if ( a2 == v5 )
  {
    CVisual::ClearSharedChildChannelNoRef(this);
    CVisual::RemoveAllChildren(this);
  }
  if ( *((struct CChannelContext **)this + 7) == a2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      if ( v6 )
        v6 = (struct CChannelContext *)*((unsigned int *)v6 + 29);
      (*(void (__fastcall **)(_QWORD, struct CChannelContext *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL)
                                                                       + 88LL))(
        *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
        v6,
        *((unsigned int *)this + 18));
      v6 = (struct CChannelContext *)*((_QWORD *)this + 7);
    }
    *((_DWORD *)this + 18) = 0;
    if ( a2 == v6 )
      *((_QWORD *)this + 7) = 0LL;
  }
}
