/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x140035A40
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     bDeleteFont @ 0x1400C5ABC (bDeleteFont.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct Gre::Base::SESSION_GLOBALS *a1, struct HOBJ__ **a2)
{
  struct HOBJ__ *v2; // rdi
  char v4; // bl
  unsigned int *v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int16 v7; // [rsp+2Ch] [rbp-1Ch]
  struct Gre::Base::SESSION_GLOBALS *v8; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v2 = *a2;
    if ( (unsigned __int16)HmgDecrementShareReferenceCount((__int64)a1, (unsigned int *)a2) == 1 )
    {
      v5 = 0LL;
      v6 = 0;
      v7 = 0;
      v8 = a1;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v5, v2, 0xAu);
      if ( v6 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v8 + 1) + 96LL))(*((_QWORD *)v8 + 1), *v5);
        v4 = *(_BYTE *)(HmgPentryFromPobj((__int64)a1) + 15);
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
        if ( (v4 & 2) != 0 )
          bDeleteFont(v2, 0LL);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
    }
  }
}
