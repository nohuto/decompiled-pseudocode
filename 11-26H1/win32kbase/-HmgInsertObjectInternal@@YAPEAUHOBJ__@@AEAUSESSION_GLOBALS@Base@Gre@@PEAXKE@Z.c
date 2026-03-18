/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1400C2A7C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z @ 0x1400C2BB4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140164BA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8 (--0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z.c)
 *     GreCreateRectRgn @ 0x140194400 (GreCreateRectRgn.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EtwTraceGdiCreateHandle @ 0x140020094 (EtwTraceGdiCreateHandle.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1400580D0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1400C5508 (HmgIncProcessHandleCountEx.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x1400C5B10 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1400C5C18 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x140116F8C (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140182EFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct OBJECT *a2,
        unsigned __int16 a3,
        unsigned __int8 a4)
{
  int v4; // r13d
  struct HOBJ__ *v8; // r12
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // r8d
  int EtwGdiHandleType; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  HSEMAPHORE v23; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h] BYREF

  v4 = a4;
  v8 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  v10 = CurrentThread;
  if ( CurrentThread && *((_QWORD *)CurrentThread + 8) )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v13 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
      goto LABEL_4;
    }
    v11 = (unsigned int)UMPDGetThreadClientPID((__int64)CurrentThread);
  }
  else
  {
    v11 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  LODWORD(v13) = v11;
LABEL_4:
  v23 = (HSEMAPHORE)(*(_QWORD *)a1 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v12, v23);
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx(a1, (unsigned int)v13, 0LL) )
    goto LABEL_6;
  v24 = 0;
  if ( HmgpAcquireHandleIndex(a1, v10, &v24) )
  {
    v8 = ENTRYOBJ::hSetup(a1, a2, v4, a3, v24);
    switch ( v4 )
    {
      case 4:
        v18 = *((_QWORD *)a2 + 14);
        v19 = 2LL;
        break;
      case 5:
        v18 = *((_QWORD *)a2 + 85);
        v19 = 3LL;
        break;
      case 16:
        v18 = *((_QWORD *)a2 + 17);
        v19 = 0LL;
        break;
      default:
LABEL_11:
        if ( (a3 & 8) != 0 )
          LODWORD(v13) = 0;
        EtwGdiHandleType = GetEtwGdiHandleType(v4);
        EtwTraceGdiCreateHandle((__int64)v8, EtwGdiHandleType, v13);
        goto LABEL_6;
    }
    TrackObjectReferenceInitialization(v19, v18, *((unsigned int *)a2 + 2));
    goto LABEL_11;
  }
  if ( (a3 & 8) == 0 )
    HmgDecProcessHandleCount(a1, v13);
  if ( !*((_BYTE *)a1 + 5776) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 112LL))(*((_QWORD *)a1 + 1)) )
    {
      *((_BYTE *)a1 + 5776) = 1;
      if ( (unsigned int)dword_1402A9F58 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x400000000000LL) )
        {
          v21 = *((_DWORD *)a1 + 460);
          v22 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1402A9F58,
            (unsigned int)&unk_140283BCB,
            v15,
            v20,
            (__int64)&v21,
            (__int64)&v22);
        }
      }
    }
  }
LABEL_6:
  SEMOBJ<20>::vUnlock(&v23, v14, v15);
  return v8;
}
