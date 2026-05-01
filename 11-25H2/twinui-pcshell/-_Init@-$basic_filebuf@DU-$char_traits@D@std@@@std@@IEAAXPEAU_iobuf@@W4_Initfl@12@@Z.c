/*
 * XREFs of ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1805F2AF8
 * Callers:
 *     ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x1805ED1E8 (--0-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@PEBGHH@Z.c)
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1805ED8E8 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 *     ?setbuf@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAPEAV?$basic_streambuf@DU?$char_traits@D@std@@@2@PEAD_J@Z @ 0x1805F3920 (-setbuf@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAPEAV-$basic_streambuf@DU-$char_traits@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filebuf::_Init(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  *(_BYTE *)(a1 + 113) = 0;
  *(_BYTE *)(a1 + 124) = a3 == 1;
  std::streambuf::_Init(a1);
  if ( a2 )
  {
    v8 = 0LL;
    v7 = 0LL;
    v6 = 0LL;
    _o__get_stream_buffer_pointers(a2, &v8, &v7, &v6);
    std::streambuf::_Init(a1);
  }
  result = `std::filebuf::_Init'::`2'::_Stinit;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 116) = result;
  *(_QWORD *)(a1 + 128) = a2;
  return result;
}
