/*
 * XREFs of LdrpSendPostSnapNotifications @ 0x18011AFD0
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x1801195E0 (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800845B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     AVrfDllLoadNotification @ 0x1800C2990 (AVrfDllLoadNotification.c)
 *     CompatCachepLookupCdb @ 0x1800D8F50 (CompatCachepLookupCdb.c)
 *     LdrpSendDllNotifications @ 0x1800DBA90 (LdrpSendDllNotifications.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpSendPostSnapNotifications(__int64 a1)
{
  int Notification; // r13d
  __int64 v2; // rbp
  void (__fastcall *v3)(__int64); // r12
  BOOL v4; // ebx
  unsigned int NtGlobalFlag; // esi
  __int64 v6; // rdx
  __int64 v7; // r15
  int v8; // esi
  __int64 v9; // rdi
  _WORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  char *Heap_0; // rax
  char *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r8
  BOOL v20; // [rsp+78h] [rbp+10h]
  int v21; // [rsp+80h] [rbp+18h]

  Notification = 0;
  v2 = a1;
  v3 = 0LL;
  v4 = g_pShimmedModuleList != 0LL;
  v20 = v4;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
    v3 = (void (__fastcall *)(__int64))(__ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
  v7 = *(_QWORD *)(v2 + 8);
  if ( v7 != v2 )
  {
    v8 = NtGlobalFlag & 0x100;
    v21 = v8;
    do
    {
      v9 = v7 - 160;
      if ( v8 )
      {
        Notification = AVrfDllLoadNotification(v7 - 160);
        if ( Notification < 0 )
          break;
      }
      SbUpdateSwitchContextBasedOnDll(v7 - 160, v6);
      if ( v3 && !g_ShimsLoading )
      {
        v3(v7 - 160);
        *(_BYTE *)(v9 + 105) |= 8u;
      }
      if ( !v4 )
      {
        v10 = *(_WORD **)(v9 + 80);
        if ( (unsigned int)CompatCachepLookupCdb(v10, 16) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v10[v11] );
          if ( g_pShimmedModuleList )
            v12 = v11 + g_pShimmedModuleListLength + 1;
          else
            v12 = v11 + 2;
          Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 2 * v12);
          v14 = Heap_0;
          if ( Heap_0 )
          {
            if ( g_pShimmedModuleList )
            {
              v15 = 2 * g_pShimmedModuleListLength;
              memmove(Heap_0, g_pShimmedModuleList, 2 * g_pShimmedModuleListLength);
              v16 = -1LL;
              do
                ++v16;
              while ( v10[v16] );
              memmove(&v14[v15 + 2], v10, 2 * v16);
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
              v2 = a1;
            }
            else
            {
              v17 = -1LL;
              do
                ++v17;
              while ( v10[v17] );
              memmove(Heap_0, v10, 2 * v17);
            }
            g_pShimmedModuleList = v14;
            g_pShimmedModuleListLength = v12;
          }
          else
          {
            LdrpLogInternal(
              "minkernel\\ldr\\ldrinit.c",
              3901,
              (__int64)"LdrpCheckModule",
              0,
              "Failed to allocated memory for shimmed module list\n");
          }
          v8 = v21;
        }
        v4 = v20;
      }
      LdrpSendDllNotifications(v7 - 160, 1u);
      *(_DWORD *)(v9 + 104) |= 8u;
      LdrpLogDllState(*(_QWORD *)(v9 + 48), v9 + 72, 0x14ADu);
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v7 != v2 );
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  return (unsigned int)Notification;
}
