/*
 * XREFs of ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40
 * Callers:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1400D9C88 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x14001C840 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400465D0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1400D8050 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x140178728 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140178E6C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x14017929C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C8BDC (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 */

void __fastcall XDCOBJ::vDelete(DC **this, unsigned int a2)
{
  DC *v4; // rcx
  ULONG_PTR v5; // rbx
  __int64 *v6[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v7; // [rsp+50h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF

  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)v6,
    (*(_DWORD *)(*((_QWORD *)*this + 6) + 40LL) & 0x80) == 0);
  if ( HmgLockObjectForRemoval(*(struct HOBJ__ **)*this) )
  {
    XDCOBJ::bCleanDC(this, HIBYTE(a2) & 1);
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v6);
    if ( (a2 & 0x800000) == 0 )
    {
      if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
        FreeDCAttributesFastOpt(this[2], *this);
      else
        FreeDCAttributes(*this);
    }
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 17));
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 19));
    HmgDecrementShareReferenceCountEx(*((struct _BASEOBJECT **)*this + 12), 0LL);
    v4 = *this;
    v8 = *((_QWORD *)*this + 6);
    DC::vReleaseVis(v4);
    DC::vReleaseRao(*this);
    if ( *((_QWORD *)*this + 143) )
    {
      v7 = *((_QWORD *)*this + 143);
      RGNOBJ::vDeleteRGNOBJ(&v7);
      *((_QWORD *)*this + 143) = 0LL;
    }
    if ( *((_QWORD *)*this + 145) )
    {
      v7 = *((_QWORD *)*this + 145);
      RGNOBJ::vDeleteRGNOBJ(&v7);
      *((_QWORD *)*this + 145) = 0LL;
    }
    if ( *((_QWORD *)*this + 144) )
    {
      v7 = *((_QWORD *)*this + 144);
      RGNOBJ::vDeleteRGNOBJ(&v7);
      *((_QWORD *)*this + 144) = 0LL;
    }
    if ( *((_QWORD *)*this + 146) )
    {
      v7 = *((_QWORD *)*this + 146);
      RGNOBJ::vDeleteRGNOBJ(&v7);
      *((_QWORD *)*this + 146) = 0LL;
    }
    if ( *((_QWORD *)*this + 147) )
    {
      v7 = *((_QWORD *)*this + 147);
      RGNOBJ::vDeleteRGNOBJ(&v7);
      *((_QWORD *)*this + 147) = 0LL;
    }
    if ( *((_QWORD *)*this + 148) )
    {
      v7 = *((_QWORD *)*this + 148);
      RGNOBJ::vDeleteRGNOBJ(&v7);
      *((_QWORD *)*this + 148) = 0LL;
    }
    v7 = *((_QWORD *)*this + 7);
    v5 = v7;
    XDCOBJ::vDeleteCore((XDCOBJ *)this);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v8);
    if ( v5 )
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v7);
  }
  else
  {
    EngSetLastError(0xAAu);
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v6);
  }
}
