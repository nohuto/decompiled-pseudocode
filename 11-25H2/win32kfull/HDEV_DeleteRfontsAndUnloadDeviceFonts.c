/*
 * XREFs of HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x1402620D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400B8CB0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140107078 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016C588 (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019CA3C (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140207440 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

_BOOL8 __fastcall HDEV_DeleteRfontsAndUnloadDeviceFonts(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 SessionState; // rax
  __int64 v11; // rdx
  struct PFF *v12; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  struct PFF **v16; // [rsp+60h] [rbp+10h] BYREF
  _DWORD *v17; // [rsp+68h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v17 = a1;
  memset(v15, 0, sizeof(v15));
  PushThreadGuardedObject(v15, a2, vUnreferencePdevWorker, a4);
  while ( 1 )
  {
    v6 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v17);
    Flink = v6->Flink;
    if ( v6->Flink == v6 )
      break;
    v16 = (struct PFF **)&Flink[-42];
    v14[0] = Flink[-34].Flink;
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v16, a1, (struct PFFOBJ *)v14, v4);
    v16 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
  }
  PopThreadGuardedObject(v15);
  if ( !a1[887] )
    return 1LL;
  SessionState = W32GetSessionState(v9, v8);
  GreAcquireSemaphore<17,>(*(_QWORD *)(SessionState + 96) + 4872LL);
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v14, v11);
  v16 = 0LL;
  v12 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v14, (unsigned __int64)a1, &v16);
  return PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v14, v12, v16, 0);
}
