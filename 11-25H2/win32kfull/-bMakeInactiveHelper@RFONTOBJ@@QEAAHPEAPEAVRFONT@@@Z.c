/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1402611D4
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1400174EC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x14030DF34 (vMakeInactiveHelper.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082830 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140082918 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016C588 (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x1401A9190 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140207440 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct _LIST_ENTRY **this, struct RFONT **a2)
{
  struct RFONT **v2; // rsi
  unsigned int v4; // r15d
  struct _LIST_ENTRY *v5; // r14
  __int64 SessionState; // rax
  __int64 v7; // rdi
  int Blink_high; // eax
  struct RFONT *Blink; // rax
  struct RFONT *Flink; // rcx
  struct RFONT *v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  unsigned int i; // edx
  struct RFONT *v15; // rcx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // r8
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // r8d
  struct _LIST_ENTRY *v24; // rax
  struct _LIST_ENTRY *v25; // r8
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *v27; // rax
  struct _LIST_ENTRY *v28; // r8
  int v29; // edx
  struct _LIST_ENTRY *v30; // rax
  struct _LIST_ENTRY *v31; // r8
  struct _LIST_ENTRY *v32; // rcx
  struct _LIST_ENTRY *v33; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v34[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v35; // [rsp+90h] [rbp+40h] BYREF
  struct _LIST_ENTRY *v36; // [rsp+A0h] [rbp+50h] BYREF
  HSEMAPHORE v37; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this )
    return 0LL;
  v5 = 0LL;
  SessionState = W32GetSessionState((_DWORD)this, a2);
  v7 = *(_QWORD *)(SessionState + 96) + 4872LL;
  if ( v2 )
  {
    GreAcquirePushLockShared2<16,0>(*(_QWORD *)(SessionState + 96) + 4872LL);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
  }
  SEMOBJ<18>::SEMOBJ<18>(&v37, v7);
  Blink_high = HIDWORD((*this)[41].Blink);
  if ( Blink_high <= 0 )
  {
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
    SEMOBJ<18>::vUnlock(&v37);
    return 0LL;
  }
  HIDWORD((*this)[41].Blink) = Blink_high - 1;
  if ( SHIDWORD((*this)[41].Blink) <= 0 )
  {
    if ( v2 )
    {
      Blink = (struct RFONT *)(*this)[45].Blink;
      if ( Blink )
      {
        *v2++ = Blink;
        (*this)[45].Blink = 0LL;
      }
      v4 = 1;
      Flink = (struct RFONT *)(*this)[46].Flink;
      if ( Flink )
      {
        *v2++ = Flink;
        (*this)[46].Flink = 0LL;
      }
      v12 = (struct RFONT *)(*this)[46].Blink;
      if ( v12 )
      {
        *v2++ = v12;
        (*this)[46].Blink = 0LL;
      }
      v13 = *this;
      for ( i = 0; i < LODWORD((*this)[53].Flink); ++i )
      {
        v15 = (struct RFONT *)*((_QWORD *)&v13[47].Flink->Flink + i);
        if ( v15 )
        {
          *v2++ = v15;
          *((_QWORD *)&(*this)[47].Flink->Flink + i) = 0LL;
        }
        v13 = *this;
      }
      v16 = v13[47].Flink;
      if ( v16 && v16 != (struct _LIST_ENTRY *)&v13[47].Blink )
        Win32FreePool(v16);
      (*this)[47].Flink = 0LL;
      LODWORD((*this)[53].Flink) = 0;
      LODWORD((*this)[52].Blink) = 0;
    }
    v17 = (*this)[6].Blink;
    v18 = *this + 42;
    v35 = v17;
    v19 = v18->Flink;
    if ( v18->Flink->Blink == v18 )
    {
      v20 = v18->Blink;
      if ( v20->Flink == v18 )
      {
        v20->Flink = v19;
        v19->Blink = v20;
        v21 = (*this)[8].Flink;
        if ( !LODWORD(v21[3].Blink) && !HIDWORD(v21[3].Blink) && !v21[9].Blink )
        {
          v5 = *this;
          goto LABEL_29;
        }
        if ( ((__int64)v17[2].Blink & 0x800000) != 0 )
          v23 = (unsigned int)v17[219].Blink[97].Flink;
        else
          v23 = (unsigned int)v17[97].Flink;
        if ( v23 < 0x80 )
        {
          if ( ((__int64)v17[2].Blink & 0x800000) != 0 )
            v29 = (int)v17[219].Blink[97].Flink;
          else
            v29 = (int)v17[97].Flink;
          PDEVOBJ::cInactive((PDEVOBJ *)&v35, v29 + 1);
        }
        else
        {
          v24 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v35);
          v25 = v24->Blink;
          if ( v25->Flink != v24 )
            goto LABEL_50;
          v26 = v25->Blink;
          if ( v26->Flink != v25 )
            goto LABEL_50;
          v24->Blink = v26;
          v26->Flink = v24;
          v27 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v35);
          v5 = v28 - 42;
          if ( v28 == v27 )
            v5 = 0LL;
        }
        v30 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v35);
        v32 = v30->Flink;
        if ( v30->Flink->Blink == v30 )
        {
          v31->Flink = v32;
          v31->Blink = v30;
          v32->Blink = v31;
          v30->Flink = v31;
          goto LABEL_29;
        }
      }
    }
LABEL_50:
    __fastfail(3u);
  }
LABEL_29:
  SEMOBJ<18>::vUnlock(&v37);
  if ( v2 && !v4 )
  {
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
  }
  if ( v5 )
  {
    v33 = v5[8].Flink;
    v36 = v5;
    memset(v34, 0, sizeof(v34));
    PushThreadGuardedObject(v34, v5, RestartInactiveHelper, v22);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v36, 0LL, (struct PFFOBJ *)&v33, 1);
    PopThreadGuardedObject(v34);
    v36 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
  }
  *this = 0LL;
  return v4;
}
