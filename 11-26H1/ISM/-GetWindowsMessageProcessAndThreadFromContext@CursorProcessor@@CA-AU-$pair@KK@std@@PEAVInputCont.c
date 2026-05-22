/*
 * XREFs of ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x18014AEC0
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x18014A98C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x18004E148 (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_DWORD *__fastcall CursorProcessor::GetWindowsMessageProcessAndThreadFromContext(_DWORD *a1, __int64 a2)
{
  int ProcessId; // ebp
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // r15
  char *Attached; // rax
  __int64 v10; // rcx
  char v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  ProcessId = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 176) + 104LL);
  v7 = *(__int64 **)(v6 - 24);
  v8 = *(__int64 **)(v6 - 16);
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      Attached = (char *)InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>(
                           *v7,
                           &v13);
      v5 = 0LL;
      if ( &v12 != Attached )
      {
        v5 = *(_QWORD *)Attached;
        *(_QWORD *)Attached = 0LL;
      }
      v14 = v5;
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 16) + 8LL))(v10 + 16);
      }
      if ( v5 )
        break;
      if ( ++v7 == v8 )
        goto LABEL_10;
    }
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(v5 + 32)
                                                                                              + 16LL));
    v4 = *(_DWORD *)(v5 + 64);
  }
LABEL_10:
  *a1 = ProcessId;
  a1[1] = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 8LL))(v5 + 16);
  return a1;
}
