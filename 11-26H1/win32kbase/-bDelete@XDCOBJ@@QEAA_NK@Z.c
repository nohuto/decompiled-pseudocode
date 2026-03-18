/*
 * XREFs of ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4
 * Callers:
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YA_NAEAVXDCOBJ@@KPEA_N@Z @ 0x14013B80C (-GrepDeleteDCOBJ@@YA_NAEAVXDCOBJ@@KPEA_N@Z.c)
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x14000E59C (HmgFreeDcAttr.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001A90C (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x14003453C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x140035A40 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035F30 (-vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400C33B0 (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400FE8B0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140179DF8 (-vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

char __fastcall XDCOBJ::bDelete(DC **this, int a2)
{
  void *v2; // r12
  struct Gre::Base::SESSION_GLOBALS **v3; // rbx
  struct _ENTRY *v6; // rax
  struct _ERESOURCE *v7; // rsi
  DC *v8; // rax
  struct Gre::Base::SESSION_GLOBALS *v9; // rcx
  __int64 v10; // rdx
  struct Gre::Base::SESSION_GLOBALS **v11; // r15
  struct Gre::Base::SESSION_GLOBALS **v12; // r15
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  __int64 v15; // rdx
  int v16; // r8d
  DC *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rdx
  __int64 v19; // rbx
  __int64 v21; // rdx
  int v22; // r8d
  struct _GRETHREAD *v23; // rax
  __int64 *v24[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0LL;
  v3 = this + 2;
  if ( (a2 & 0x800000) == 0 )
  {
    v6 = DC::PentryFromPobj(*this, *v3);
    v2 = GreDecodeUserModePointer(*((void **)v6 + 2));
  }
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)v24,
    (*(_DWORD *)(*((_QWORD *)*this + 6) + 40LL) & 0x80) == 0);
  v7 = (struct _ERESOURCE *)(*(_QWORD *)*v3 + 312LL);
  GreAcquireSemaphoreInternal(v7);
  GrepAcquireLockValidate<13>();
  v8 = *this;
  v9 = *v3;
  LODWORD(v26) = 0;
  v10 = *(_QWORD *)v8;
  if ( (a2 & 0x4000000) != 0 )
  {
    if ( HmgRemoveObjectImpl((unsigned int *)v9, v10, 1u, 0, 5, 1, &v26) )
    {
      v11 = this + 2;
      goto LABEL_5;
    }
  }
  else
  {
    v11 = v3;
    if ( HmgRemoveObject(v9, v10, 1, 0, 0, 1, &v26) )
    {
LABEL_5:
      if ( *((_QWORD *)*this + 11) != *((_QWORD *)*v3 + 484) )
      {
        GrepSelectPalette((struct XDCOBJ *)this, *((HPALETTE *)*v3 + 84), 1);
        v3 = v11;
      }
      v12 = v3;
      if ( v7 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Palette", v7);
        v13 = GreGetCurrentThreadCrossSessionCheck();
        if ( v13 )
        {
          v14 = (*((_BYTE *)v13 + 21))-- == 1;
          if ( v14 )
          {
            *(_QWORD *)v13 &= ~0x2000uLL;
            v12 = this + 2;
          }
        }
        GreReleaseSemaphoreSharedInternal(v7);
      }
      XDCOBJ::bCleanDC(this, HIBYTE(a2) & 1);
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v24, v15, v16);
      if ( v2 )
      {
        HmgFreeDcAttr(*v3, (__int64)v2);
        v3 = v12;
      }
      DEC_SHARE_REF_CNT_LAZY0(*v3, *((struct HOBJ__ ***)*this + 17));
      DEC_SHARE_REF_CNT_LAZY0(*v3, *((struct HOBJ__ ***)*this + 18));
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*v3, *((struct HOBJ__ ***)*this + 19));
      HmgDecrementShareReferenceCount((__int64)*v3, *((unsigned int **)*this + 12));
      v17 = *this;
      v18 = *v3;
      v27 = *((_QWORD *)*this + 6);
      DC::vReleaseVis(v17, v18);
      DC::vReleaseRao(*this, *v3);
      if ( *((_QWORD *)*this + 143) )
      {
        v25 = *((_QWORD *)*this + 143);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
        *((_QWORD *)*this + 143) = 0LL;
      }
      if ( *((_QWORD *)*this + 145) )
      {
        v25 = *((_QWORD *)*this + 145);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
        *((_QWORD *)*this + 145) = 0LL;
      }
      if ( *((_QWORD *)*this + 144) )
      {
        v25 = *((_QWORD *)*this + 144);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
        *((_QWORD *)*this + 144) = 0LL;
      }
      if ( *((_QWORD *)*this + 146) )
      {
        v25 = *((_QWORD *)*this + 146);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
        *((_QWORD *)*this + 146) = 0LL;
      }
      if ( *((_QWORD *)*this + 147) )
      {
        v25 = *((_QWORD *)*this + 147);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
        *((_QWORD *)*this + 147) = 0LL;
      }
      if ( *((_QWORD *)*this + 148) )
      {
        v25 = *((_QWORD *)*this + 148);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
        *((_QWORD *)*this + 148) = 0LL;
      }
      v25 = *((_QWORD *)*this + 7);
      v19 = v25;
      XDCOBJ::vDeleteCore(this);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v27, this[2]);
      if ( v19 )
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v25, this[2]);
      return 1;
    }
    if ( (_DWORD)v26 )
      *((_WORD *)*this + 7) |= 0x40u;
    EngSetLastError(0xAAu);
  }
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Palette", v7);
    v23 = GreGetCurrentThreadCrossSessionCheck();
    if ( v23 )
    {
      v14 = (*((_BYTE *)v23 + 21))-- == 1;
      if ( v14 )
        *(_QWORD *)v23 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v7);
  }
  NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v24, v21, v22);
  return 0;
}
