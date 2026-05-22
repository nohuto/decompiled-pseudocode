/*
 * XREFs of ??$emplace@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@AEBUDisplayOcclusionRect@@@Z @ 0x18013C990
 * Callers:
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D180 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUDisplayOcclusionRect@@@Z @ 0x180140328 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_Auto.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x18013C768 (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

char **__fastcall std::vector<DisplayOcclusionRect>::emplace<DisplayOcclusionRect const &>(
        _QWORD *a1,
        char **a2,
        __int128 *a3,
        __int128 *a4)
{
  __int128 *v6; // rcx
  _OWORD *v8; // rcx
  __int128 v10; // [rsp+28h] [rbp-C0h]
  __int128 v11; // [rsp+38h] [rbp-B0h]
  __int128 v12; // [rsp+48h] [rbp-A0h]
  __int128 v13; // [rsp+58h] [rbp-90h]
  __int128 v14; // [rsp+68h] [rbp-80h]
  __int128 v15; // [rsp+78h] [rbp-70h]
  __int128 v16; // [rsp+88h] [rbp-60h]
  __int128 v17; // [rsp+98h] [rbp-50h]
  __int128 v18; // [rsp+A8h] [rbp-40h]
  __int128 v19; // [rsp+B8h] [rbp-30h]
  __int128 v20; // [rsp+C8h] [rbp-20h]

  v6 = (__int128 *)a1[1];
  if ( v6 == (__int128 *)a1[2] )
  {
    *a2 = std::vector<DisplayOcclusionRect>::_Emplace_reallocate<DisplayOcclusionRect &>(a1, (__int64)a3, a4);
  }
  else
  {
    if ( a3 == v6 )
    {
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      v6[3] = a4[3];
      v6[4] = a4[4];
      v6[5] = a4[5];
      v6[6] = a4[6];
      v8 = v6 + 8;
      *(v8 - 1) = a4[7];
      *v8 = a4[8];
      v8[1] = a4[9];
      v8[2] = a4[10];
      a1[1] += 176LL;
    }
    else
    {
      v10 = *a4;
      v11 = a4[1];
      v12 = a4[2];
      v13 = a4[3];
      v14 = a4[4];
      v15 = a4[5];
      v16 = a4[6];
      v17 = a4[7];
      v18 = a4[8];
      v19 = a4[9];
      v20 = a4[10];
      *v6 = *(v6 - 11);
      v6[1] = *(v6 - 10);
      v6[2] = *(v6 - 9);
      v6[3] = *(v6 - 8);
      v6[4] = *(v6 - 7);
      v6[5] = *(v6 - 6);
      v6[6] = *(v6 - 5);
      v6[7] = *(v6 - 4);
      v6[8] = *(v6 - 3);
      v6[9] = *(v6 - 2);
      v6[10] = *(v6 - 1);
      a1[1] += 176LL;
      memmove_0(a3 + 11, a3, (char *)v6 - (char *)a3 - 176);
      *a3 = v10;
      a3[1] = v11;
      a3[2] = v12;
      a3[3] = v13;
      a3[4] = v14;
      a3[5] = v15;
      a3[6] = v16;
      a3[7] = v17;
      a3[8] = v18;
      a3[9] = v19;
      a3[10] = v20;
    }
    *a2 = (char *)a3;
  }
  return a2;
}
