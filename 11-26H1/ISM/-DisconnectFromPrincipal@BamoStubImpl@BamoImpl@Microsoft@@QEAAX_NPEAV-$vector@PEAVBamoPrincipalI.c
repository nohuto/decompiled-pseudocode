/*
 * XREFs of ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18003745C
 * Callers:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x180037094 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x180037160 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037280 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z @ 0x1800A9658 (--$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 *v6; // rsi
  const char *v7; // r9
  __int64 *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v5) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = 0;
  if ( (_BYTE)v5 && !a2 )
    LOBYTE(v5) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( a3 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v6 = (__int64 *)(a1 + 24);
      if ( *(int *)(*(_QWORD *)(a1 + 24) + 8LL) <= 0 )
      {
        v5 = std::_Find_vectorized<InputSite * const,InputSite *>(*a3, a3[1]);
        if ( v5 == a3[1] )
        {
          (**(void (__fastcall ***)(__int64))*v6)(*v6);
          try
          {
            v8 = (__int64 *)a3[1];
            if ( v8 == (__int64 *)a3[2] )
            {
              LOBYTE(v5) = (unsigned __int8)std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(
                                              a3,
                                              (__int64)v8,
                                              (__int64 *)(a1 + 24));
            }
            else
            {
              v5 = *v6;
              *v8 = *v6;
              a3[1] += 8LL;
            }
          }
          catch ( ... )
          {
            wil::details::in1diag3::FailFast_CaughtException(
              retaddr,
              (void *)0x15C,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
              v7);
          }
        }
      }
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return v5;
}
