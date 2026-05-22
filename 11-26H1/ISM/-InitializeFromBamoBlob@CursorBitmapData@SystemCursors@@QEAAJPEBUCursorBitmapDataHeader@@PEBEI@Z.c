/*
 * XREFs of ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x1801637C4
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800FB480 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ??$copy@PEAUINPUT_SPACE_REGION@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@std@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@0@PEAUINPUT_SPACE_REGION@@0V10@@Z @ 0x18006E2EC (--$copy@PEAUINPUT_SPACE_REGION@@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UINPUT_SPACE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801636DC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 */

__int64 __fastcall SystemCursors::CursorBitmapData::InitializeFromBamoBlob(
        SystemCursors::CursorBitmapData *this,
        const struct CursorBitmapDataHeader *a2,
        const unsigned __int8 *a3,
        const char *a4)
{
  __int64 v6; // r11
  unsigned int v7; // r10d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  int v10; // ecx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  const unsigned __int8 *v15; // rbp
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  size_t v19; // rbx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  *(_BYTE *)this = *(_BYTE *)a2;
  *((_DWORD *)this + 1) = *(_DWORD *)((char *)a2 + 1);
  v6 = *(unsigned int *)((char *)a2 + 5);
  *((_DWORD *)this + 2) = v6;
  v7 = *(_DWORD *)((char *)a2 + 9);
  *((_DWORD *)this + 3) = v7;
  *((_DWORD *)this + 4) = *(_DWORD *)((char *)a2 + 13);
  v8 = v6 * v7;
  *((_DWORD *)this + 5) = *(_DWORD *)((char *)a2 + 17);
  if ( v8 > 0xFFFFFFFF )
  {
    v20 = 52LL;
  }
  else
  {
    v9 = 4LL * (unsigned int)v8;
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = *(_DWORD *)((char *)a2 + 25);
      if ( (_DWORD)v9 != v10 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
      v12 = *(unsigned int *)((char *)a2 + 21);
      if ( (unsigned int)v12 >= (unsigned int)a4 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          a4);
      v13 = v12 + v10;
      if ( v13 < (unsigned int)v12 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          (const char *)0x80070216LL,
          v21);
      if ( v13 > (unsigned int)a4 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          a4);
      v14 = *((_QWORD *)this + 3);
      v15 = &a3[v12];
      v16 = *((_QWORD *)this + 4);
      v17 = (v16 - v14) >> 2;
      if ( (unsigned int)v8 < v17 )
      {
        v18 = v14 + v9;
LABEL_16:
        *((_QWORD *)this + 4) = v18;
        goto LABEL_17;
      }
      if ( (unsigned int)v8 > v17 )
      {
        if ( (unsigned int)v8 <= (unsigned __int64)((*((_QWORD *)this + 5) - v14) >> 2) )
        {
          v19 = 4 * ((unsigned int)v8 - v17);
          memset_0(*((void **)this + 4), 0, v19);
          v18 = v19 + v16;
          goto LABEL_16;
        }
        std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>((__int64 *)this + 3, (unsigned int)v8);
      }
LABEL_17:
      std::copy<INPUT_SPACE_REGION *,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<INPUT_SPACE_REGION>>>>(
        &v23,
        v15,
        (__int64)&v15[v9],
        *((char **)this + 3));
      return 0LL;
    }
    v20 = 54LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
    (const char *)0x80070216LL);
  return 2147942934LL;
}
