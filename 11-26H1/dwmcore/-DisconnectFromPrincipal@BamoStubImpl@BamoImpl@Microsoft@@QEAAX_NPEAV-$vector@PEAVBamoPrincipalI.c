/*
 * XREFs of ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18023F4BC
 * Callers:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x180240150 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(__int64 a1, char a2, __int64 a3)
{
  const __m128i *trivial_8; // rax
  const __m128i **v6; // rsi
  unsigned __int64 v7; // r8
  const __m128i **v8; // rdx

  LOBYTE(trivial_8) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = 0;
  if ( (_BYTE)trivial_8 && !a2 )
    LOBYTE(trivial_8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( a3 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v6 = (const __m128i **)(a1 + 24);
      v7 = *(_QWORD *)(a1 + 24);
      if ( *(int *)(v7 + 8) <= 0 )
      {
        trivial_8 = _std_find_trivial_8(*(const __m128i **)a3, *(const __m128i **)(a3 + 8), v7);
        if ( trivial_8 == *(const __m128i **)(a3 + 8) )
        {
          (*(void (__fastcall **)(const __m128i *))(*v6)->m128i_i64[0])(*v6);
          v8 = *(const __m128i ***)(a3 + 8);
          if ( v8 == *(const __m128i ***)(a3 + 16) )
          {
            LOBYTE(trivial_8) = (unsigned __int8)std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
                                                   (_QWORD *)a3,
                                                   (__int64)v8,
                                                   (__int64 *)(a1 + 24));
          }
          else
          {
            trivial_8 = *v6;
            *v8 = *v6;
            *(_QWORD *)(a3 + 8) += 8LL;
          }
        }
      }
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return (char)trivial_8;
}
