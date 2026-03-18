/*
 * XREFs of ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140020650
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011470 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x140011960 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001E180 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x14001FD84 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140020078 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?RegionCore_bMerge@Win32kRS@@YAHPEAVREGION_CORE@@PEBV2@1E@Z @ 0x1400D8474 (-RegionCore_bMerge@Win32kRS@@YAHPEAVREGION_CORE@@PEBV2@1E@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AddRect(CRegion *this, const struct tagRECT *a2)
{
  int v4; // ecx
  unsigned int v5; // edi
  int v7; // ecx
  struct REGION_CORE *v8; // rbx
  struct REGION_CORE *v9; // rdx
  struct REGION_CORE *v10; // rdx
  const struct REGION_CORE *v11; // r9
  char v12; // al
  unsigned __int8 v13; // [rsp+20h] [rbp-40h]
  Win32kRS *v14; // [rsp+30h] [rbp-30h] BYREF
  struct REGION_CORE *v15; // [rsp+38h] [rbp-28h] BYREF
  int v16[2]; // [rsp+40h] [rbp-20h] BYREF
  _RECTL v17; // [rsp+48h] [rbp-18h] BYREF

  if ( a2->left > a2->right || a2->top > a2->bottom )
    return (unsigned int)-1073741811;
  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)CRegion::InitializeFromRect(this, a2);
  v7 = v4 - 1;
  if ( !v7 )
    return v5;
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  v8 = (struct REGION_CORE *)*((_QWORD *)this + 2);
  *(_QWORD *)v16 = v8;
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v15);
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v14);
  if ( v15 && v14 )
  {
    v17 = (_RECTL)*a2;
    RGNCOREOBJ::vSet(&v15, &v17);
    LOBYTE(v11) = 14;
    if ( qword_1402A10B0 )
      v12 = (unsigned int)Win32kRS::RegionCore_bMerge(v14, v8, v15, v11, v13) != 0;
    else
      v12 = RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
              &v14,
              (Win32kRS **)v16,
              &v15,
              0xEu,
              (RGNCOREOBJ *)&v14);
    if ( v12 )
    {
      *((_QWORD *)this + 2) = v14;
      v14 = v8;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  RGNCOREOBJ::vDeleteRGNCOREOBJ(&v14, v9);
  RGNCOREOBJ::vDeleteRGNCOREOBJ(&v15, v10);
  return v5;
}
