/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311C88
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z @ 0x14016DD1C (-fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x14022DF70 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x14032910C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall iWndObjSetupExtEscape(
        struct XDCOBJ *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        void *a6)
{
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v11; // rdx
  __int64 v12; // rdx
  HDEV v13; // rsi
  __int64 v14; // rax
  struct _SURFOBJ *v15; // rdi
  HDEV v16; // rcx
  HDEV DeviceHdev; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rcx
  struct _RECTL v22; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v23[160]; // [rsp+50h] [rbp-B8h] BYREF
  HDEV v24; // [rsp+110h] [rbp+8h] BYREF

  v7 = a3;
  v8 = a2;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  UserEnterUserCritSec(a1, a2, a3);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, a1, 0) )
  {
    EngSetLastError(0xEu);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
    UserLeaveUserCritSec();
    return 0LL;
  }
  if ( (unsigned int)fBlockExtEscape(a1, v11) )
    goto LABEL_15;
  v12 = *(_QWORD *)a1;
  v13 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  v24 = v13;
  v15 = (struct _SURFOBJ *)((v14 + 24) & -(__int64)(v14 != 0));
  v16 = v13;
  if ( ((_DWORD)v13[10] & 0x20000) != 0 )
  {
    v22 = *(struct _RECTL *)(v12 + 1032);
    DeviceHdev = hdevFindDeviceHdev(v13, &v22, 0LL);
    v16 = v13;
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v13 + 318) )
        v15 = (struct _SURFOBJ *)((*((_QWORD *)DeviceHdev + 318) + 24LL) & -(__int64)(*((_QWORD *)DeviceHdev + 318) != 0LL));
      v24 = DeviceHdev;
      v16 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v16 + 359) )
  {
LABEL_15:
    v18 = 0;
  }
  else
  {
    v18 = PDEVOBJ::Escape((PDEVOBJ *)&v24, v15, v8, v7, a4, a5, a6);
    v21 = *(_QWORD *)(W32GetSessionState(v20, v19) + 96);
    if ( *(_DWORD *)(v21 + 4808) )
    {
      *(_DWORD *)(v21 + 4808) = 0;
      vForceClientRgnUpdate();
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
  UserLeaveUserCritSec();
  return v18;
}
