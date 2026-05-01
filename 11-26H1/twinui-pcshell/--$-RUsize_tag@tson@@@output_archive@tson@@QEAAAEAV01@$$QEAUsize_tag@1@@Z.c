/*
 * XREFs of ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x180180E94
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C6BD0 (--$process@V-$nvp@AEAV-$vector@HV-$allocator@H@std@@@std@@@tson@@V-$nvp@AEAV-$basic_string@GU-$c.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x180600048 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@2@V-$_ea_180600048.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::output_archive::operator()<tson::size_tag>(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = *a2;
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
    v3 = v3 + 4 * v4 - 4;
  else
    *(_BYTE *)v3 = 1;
  *(_DWORD *)(v3 + 4) = 2;
  if ( v2 > 0xFFFF && *(int *)(a1 + 136) >= 0 )
    *(_DWORD *)(a1 + 136) = -2147483637;
  *(_WORD *)(a1 + 10) = v2;
  return a1;
}
