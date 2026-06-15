/*
 * XREFs of ?ProcessOnPropertyChanged@CAudioSrv@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x1800550EC
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180054A60 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180012004 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSrv::ProcessOnPropertyChanged(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  DWORD pid; // eax
  struct _tagpropertykey v6; // [rsp+20h] [rbp-28h] BYREF

  pid = a3->pid;
  v6.fmtid = a3->fmtid;
  v6.pid = pid;
  CPolicyConfig::ProcessPropertyChange(a2, &v6);
  (*(void (__fastcall **)(struct IMulticastSessionManager *, const unsigned __int16 *, struct _tagpropertykey *))(*(_QWORD *)g_MulticastSessionManager + 32LL))(
    g_MulticastSessionManager,
    a2,
    a3);
}
