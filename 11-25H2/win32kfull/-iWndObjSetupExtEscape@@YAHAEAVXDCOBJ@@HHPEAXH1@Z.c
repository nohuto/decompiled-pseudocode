/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x1403287C8
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z @ 0x1401D3E34 (-fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1401FB7A4 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x140301A98 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140333DFC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
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
  __int64 v11; // r8
  HDEV v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  HDEV v15; // rcx
  struct _SURFOBJ *v16; // rdx
  HDEV DeviceHdev; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  int v20; // ecx
  Gre::Base *v21; // rcx
  struct _RECTL v22; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v23[144]; // [rsp+50h] [rbp-A8h] BYREF
  HDEV v24; // [rsp+100h] [rbp+8h] BYREF

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
  if ( (unsigned int)fBlockExtEscape(a1) )
    goto LABEL_16;
  v11 = *(_QWORD *)a1;
  v12 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  v24 = v12;
  v14 = (v13 + 24) & -(__int64)(v13 != 0);
  v15 = v12;
  v16 = (struct _SURFOBJ *)v14;
  if ( ((_DWORD)v12[10] & 0x20000) != 0 )
  {
    v22 = *(struct _RECTL *)(v11 + 1032);
    DeviceHdev = hdevFindDeviceHdev(v12, &v22, 0LL);
    v16 = (struct _SURFOBJ *)v14;
    v15 = v12;
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v12 + 318) )
        v16 = (struct _SURFOBJ *)((*((_QWORD *)DeviceHdev + 318) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)DeviceHdev + 318) >> 64));
      else
        v16 = (struct _SURFOBJ *)v14;
      v24 = DeviceHdev;
      v15 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v15 + 359) )
  {
LABEL_16:
    v18 = 0;
  }
  else
  {
    v18 = PDEVOBJ::Escape((PDEVOBJ *)&v24, v16, v8, v7, a4, a5, a6);
    v21 = *(Gre::Base **)(W32GetSessionState(v20, v19) + 96);
    if ( *((_DWORD *)v21 + 1204) )
    {
      *((_DWORD *)v21 + 1204) = 0;
      vForceClientRgnUpdate(v21);
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
  UserLeaveUserCritSec();
  return v18;
}
