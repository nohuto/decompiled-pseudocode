/*
 * XREFs of ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140025F28
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x140020FFC (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14006AB78 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NotifySurfaceOfSkippedToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1, __int64 a2, char a3)
{
  int v4; // edi
  UINT64 CompositionBindingId; // rcx
  struct CToken *v6; // rbx
  CompositionSurfaceObject *v7; // rcx
  struct CToken *v9; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(
         (void *)a1->Token.Flip.hLogicalSurface,
         2u,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    CompositionBindingId = a1->CompositionBindingId;
    v9 = 0LL;
    v4 = CToken::CreateFlipToken(CompositionBindingId, (struct CompositionSurfaceObject *)Object, &a1->Token.Flip, &v9);
    if ( v4 >= 0 )
    {
      v6 = v9;
      if ( (a1->Token.Flip.Flags.Value & 0x2000000) != 0 )
        *((_BYTE *)v9 + 65) = 1;
      else
        *((_BYTE *)v9 + 64) = 1;
      v7 = (CompositionSurfaceObject *)Object;
      *((_DWORD *)v6 + 6) = 3;
      LOBYTE(v9) = 0;
      v4 = CompositionSurfaceObject::NotifyTokenInFrame(v7, v6, (bool *)&v9, 0LL);
      if ( v6 )
        (**(void (__fastcall ***)(struct CToken *, __int64))v6)(v6, 1LL);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
