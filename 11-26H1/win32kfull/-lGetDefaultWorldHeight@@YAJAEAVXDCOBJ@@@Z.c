/*
 * XREFs of ?lGetDefaultWorldHeight@@YAJAEAVXDCOBJ@@@Z @ 0x14010CA0C
 * Callers:
 *     ?vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@@Z @ 0x1400C1D08 (-vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z @ 0x1400C3444 (-bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x14010C0C0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall lGetDefaultWorldHeight(struct XDCOBJ *a1)
{
  __int64 v2; // rdx
  Gre::Base *v3; // rcx
  struct LFONT *v4; // rbx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // ebx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  struct LFONT *v11; // [rsp+28h] [rbp-10h]
  float v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !v2 )
    return 24LL;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v10, *(struct HLFONT__ **)(v2 + 1432), 0LL);
  if ( !v10 )
  {
    v4 = v11;
    if ( v11 )
    {
      v5 = Gre::Base::Globals(v3);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v5, v4);
    }
    return 24LL;
  }
  v8 = *(_DWORD *)(v10 + 252);
  if ( v11 )
  {
    v9 = Gre::Base::Globals(v3);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v9, v11);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) & 0x802) != 0x802 )
  {
    v12 = (float)(*(float *)(*(_QWORD *)a1 + 332LL) * *(float *)(*(_QWORD *)a1 + 332LL))
        + (float)(*(float *)(*(_QWORD *)a1 + 328LL) * *(float *)(*(_QWORD *)a1 + 328LL));
    EFLOAT::vSqrt((EFLOAT *)&v12);
    v13 = 0;
    bFToL(v7, &v13, 0LL);
    v8 = v13;
  }
  result = (unsigned int)-v8;
  if ( !v8 )
    return 24LL;
  return result;
}
