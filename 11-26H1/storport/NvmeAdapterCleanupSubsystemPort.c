/*
 * XREFs of NvmeAdapterCleanupSubsystemPort @ 0x1400D36DC
 * Callers:
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeAdapterRemoveHostGateway @ 0x1400DBF3C (NvmeAdapterRemoveHostGateway.c)
 *     NvmeAdapterRemoveSubsystemPortMiniport @ 0x1400DC2B4 (NvmeAdapterRemoveSubsystemPortMiniport.c)
 *     NvmeAdapterRemoveSubsystemPort @ 0x14019E8F8 (NvmeAdapterRemoveSubsystemPort.c)
 * Callees:
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400D4F2C (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterSendControlRemoveSubsystemPort @ 0x1400DCAB8 (NvmeAdapterSendControlRemoveSubsystemPort.c)
 */

void __fastcall NvmeAdapterCleanupSubsystemPort(__int64 a1, char a2, PVOID *a3)
{
  char *v3; // rbx
  __int64 v7; // r9
  char *v8; // rcx
  _QWORD **v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rax

  v3 = (char *)*a3;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 632), 1u);
  while ( 1 )
  {
    v8 = (char *)*a3;
    v9 = (_QWORD **)((char *)*a3 + 608);
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v9 = v11;
    v11[1] = v9;
    v12 = v10 - 8;
    --*((_DWORD *)v8 + 156);
    v13 = v10[9];
    if ( (v13 & 8) == 0 )
    {
      *((_DWORD *)v12 + 142) = 3;
      v12[17] = v13 | 8;
      LOBYTE(v7) = 1;
      NvmeAdapterDisconnectControllerInternal(a1, v12, v8 + 60, v7);
    }
  }
  ExReleaseResourceLite((PERESOURCE)(v8 + 632));
  KeLeaveCriticalRegion();
  if ( a2 )
    NvmeAdapterSendControlRemoveSubsystemPort(a1, *a3);
  ExDeleteResourceLite((PERESOURCE)((char *)*a3 + 632));
  ExFreeCacheAwareRundownProtection(*((PEX_RUNDOWN_REF_CACHE_AWARE *)*a3 + 5));
  ExFreePoolWithTag(*a3, 0x464E6152u);
  *a3 = 0LL;
}
