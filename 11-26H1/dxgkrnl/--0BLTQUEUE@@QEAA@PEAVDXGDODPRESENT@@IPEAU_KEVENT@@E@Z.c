/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1403ED958
 * Callers:
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x140282188 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403ED754 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x140055480 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x14006D48C (--0DXGSPINLOCK@@QEAA@XZ.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(
        BLTQUEUE *this,
        struct DXGDODPRESENT *a2,
        int a3,
        struct _KEVENT *a4,
        unsigned __int8 a5)
{
  char *v8; // rcx
  unsigned int v9; // edx
  char *v10; // rbx
  char **v11; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 65) = -1;
  *((_BYTE *)this + 352) = 0;
  *((_QWORD *)this + 49) = a4;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 76;
  *((_DWORD *)this + 112) = -1;
  DXGSPINLOCK::DXGSPINLOCK((BLTQUEUE *)((char *)this + 456));
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 206) = 0;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_DWORD *)this + 216) = 0;
  *((_DWORD *)this + 217) = -1;
  *((_DWORD *)this + 218) = 76;
  *((_DWORD *)this + 270) = 0;
  `vector constructor iterator'((char *)this + 1088, 576LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)this + 352) = 0LL;
  v8 = (char *)this + 232;
  *((_DWORD *)this + 706) = 0;
  *((_OWORD *)this + 185) = 0LL;
  *((_QWORD *)this + 354) = 0LL;
  v9 = 0;
  *((_QWORD *)this + 362) = 0LL;
  *((_QWORD *)this + 363) = 0LL;
  *((_QWORD *)this + 364) = 0LL;
  *((_QWORD *)this + 365) = 0LL;
  *((_QWORD *)this + 366) = 0LL;
  *((_DWORD *)this + 734) = 0;
  *((_QWORD *)this + 368) = 0LL;
  *((_QWORD *)this + 369) = 0LL;
  *((_DWORD *)this + 752) = -1;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_DWORD *)this + 744) = 0;
  *((_QWORD *)this + 373) = 0LL;
  v10 = (char *)this + 1096;
  *((_QWORD *)this + 374) = 0LL;
  *((_QWORD *)this + 377) = 1LL;
  *((_DWORD *)this + 750) = 0;
  *((_DWORD *)this + 751) = 76;
  *((_DWORD *)this + 756) = 0;
  *((_QWORD *)this + 379) = 0LL;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  *((_DWORD *)this + 34) = 2 - (a5 != 0);
  do
  {
    v11 = (char **)*((_QWORD *)this + 30);
    if ( *v11 != v8 )
      __fastfail(3u);
    *(_QWORD *)v10 = v8;
    ++v9;
    *((_QWORD *)v10 + 1) = v11;
    *v11 = v10;
    *((_QWORD *)this + 30) = v10;
    v10 += 576;
  }
  while ( v9 < 3 );
  if ( a2 )
    *((_QWORD *)this + 31) = *(_QWORD *)((char *)DXGDODPRESENT::GetAdapter(a2) + 412);
  *((_DWORD *)this + 64) = a3;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *(_QWORD *)((char *)this + 516) = 0LL;
  *((_QWORD *)this + 48) = 0x100000040LL;
  *((_DWORD *)this + 103) = 0;
  *((_OWORD *)this + 20) = 0LL;
  *((_OWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_OWORD *)this + 41) = 0LL;
  *((_OWORD *)this + 42) = 0LL;
  *((_OWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 736), NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 760),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 736);
  KeSetImportanceDpc((PRKDPC)((char *)this + 760), HighImportance);
  memset((char *)this + 880, 0, 0xC0uLL);
  KeInitializeEvent((PRKEVENT)this + 22, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)this + 23, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)this + 24, SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 160), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 264), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 2840), 0);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    KeInitializeMutex((PRKMUTEX)((char *)this + 600), 0);
  return this;
}
