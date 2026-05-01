/*
 * XREFs of ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@@Z @ 0x1800DE420
 * Callers:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V12@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V32@V32@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@0$$QEAV?$nvp@AEA_N@1@1111111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@11111@Z @ 0x1803A09AC (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V12@V-$nvp@AEA_N@2@V32@V32@_ea_1803A09AC.c)
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V32@V32@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@1111111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@11111@Z @ 0x1803A0C5C (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@_ea_1803A0C5C.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DE53C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<enum FullActivationTestSource &>>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char result; // al
  __int64 v7; // rbx
  unsigned int Source; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  LOBYTE(a3) = 18;
  *(_QWORD *)a1 = v4;
  Source = *(_DWORD *)a2[2];
  v5 = Source;
  LOBYTE(v5) = Source == 0;
  result = tson::output_archive::write_type(a1, v5, a3);
  if ( result )
  {
    v7 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v7 + 2080) - *(_QWORD *)(v7 + 2072) >= 4uLL
      || (result = tson::write_buffer::reserve((tson::write_buffer *)v7, 4uLL)) != 0 )
    {
      result = memcpy_s_3(*(void *const *)(v7 + 2072), *(_QWORD *)(v7 + 2080) - *(_QWORD *)(v7 + 2072), &Source, 4uLL);
      *(_QWORD *)(v7 + 2072) += 4LL;
    }
  }
  return result;
}
