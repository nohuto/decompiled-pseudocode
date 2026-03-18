/*
 * XREFs of ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x14007F858
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140390A78 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z @ 0x1401EC9B8 (--0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z.c)
 */

OUTPUTDUPL_MGR_INDIRECT *__fastcall OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(
        OUTPUTDUPL_MGR_INDIRECT *this,
        struct _LUID a2,
        struct _LUID a3,
        unsigned int a4)
{
  OUTPUTDUPL_MGR_INDIRECT *result; // rax

  *((_QWORD *)this + 2) = DXGGLOBAL::GetGlobal();
  *(_OWORD *)this = 0LL;
  OUTPUTDUPL_MGR::OUTPUTDUPL_MGR((OUTPUTDUPL_MGR_INDIRECT *)((char *)this + 24), 0LL, a4);
  result = this;
  *((struct _LUID *)this + 15) = a2;
  *((struct _LUID *)this + 16) = a3;
  *((_BYTE *)this + 112) = 1;
  return result;
}
