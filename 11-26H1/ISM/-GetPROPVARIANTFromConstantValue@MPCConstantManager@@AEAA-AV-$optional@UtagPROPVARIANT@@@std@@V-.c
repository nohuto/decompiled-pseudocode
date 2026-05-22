/*
 * XREFs of ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x1800B429C
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B372C (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1800B41F0 (-GetPROPVARIANT@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@W4InputType@@V-$bas.c)
 *     ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x1800B4370 (-OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCConstantManager::GetPROPVARIANTFromConstantValue(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // [rsp+0h] [rbp-20h]

  v4 = 0LL;
  if ( !BYTE4(a3) )
  {
    LOWORD(v4) = 21;
    *((_QWORD *)&v4 + 1) = (unsigned int)a3;
    goto LABEL_10;
  }
  if ( SBYTE4(a3) == 1LL )
  {
    LOWORD(v4) = 11;
    if ( (_BYTE)a3 )
      WORD4(v4) = -1;
    else
      WORD4(v4) = 0;
    goto LABEL_10;
  }
  if ( SBYTE4(a3) == 2LL )
  {
    LOWORD(v4) = 5;
    *((double *)&v4 + 1) = *(float *)&a3;
LABEL_10:
    *(_BYTE *)(a2 + 24) = 1;
    *(_OWORD *)a2 = v4;
    *(_QWORD *)(a2 + 16) = 0LL;
    return a2;
  }
  *(_BYTE *)(a2 + 24) = 0;
  return a2;
}
