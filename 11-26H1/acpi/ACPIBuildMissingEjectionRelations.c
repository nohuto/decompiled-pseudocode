/*
 * XREFs of ACPIBuildMissingEjectionRelations @ 0x140039C58
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIInternalMoveList @ 0x140039EE8 (ACPIInternalMoveList.c)
 */

__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rdx
  ULONG_PTR v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  __int64 *v5; // r14
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-30h] BYREF
  void *Src; // [rsp+60h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF

  Src = 0LL;
  v14[1] = v14;
  v14[0] = v14;
  memset(v15, 0, sizeof(v15));
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, v14);
    while ( (_QWORD *)v14[0] != v14 )
    {
      v1 = *(_QWORD *)v14[0];
      v2 = v14[0] - 848LL;
      v3 = 0LL;
      v17 = 0LL;
      if ( *(_QWORD *)(v1 + 8) != v14[0] || (v4 = *(_QWORD **)(v14[0] + 8LL), *v4 != v14[0]) )
LABEL_22:
        __fastfail(3u);
      *v4 = v1;
      *(_QWORD *)(v1 + 8) = v4;
      v5 = AMLIGetNamedChild(*(__int64 **)(v2 + 760), 1145718111);
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 732));
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
        v6 = AMLIEvalNameSpaceObject(v5, (__int64)v15, 0, 0LL);
        if ( ACPIInitDereferenceDeviceExtensionUnlocked(v2) )
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        }
        else
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          if ( v6 < 0 )
            goto LABEL_17;
          if ( WORD1(v15[0]) != 2 )
            KeBugCheckEx(0xA5u, 0xAuLL, v2, (ULONG_PTR)v5, WORD1(v15[0]));
          v7 = AMLIGetNameSpaceObject(Src, 0LL, &v17, 0);
          v3 = v17;
          if ( v7 >= 0
            && (dword_14008ED38 = 0, pszDest = 0, FreeDataBuffs((__int64)v15, 1u), v3)
            && (v8 = *(_QWORD *)(*(_QWORD *)v3 + 104LL)) != 0 )
          {
            v9 = (_QWORD *)(v2 + 848);
            v10 = *(_QWORD **)(v8 + 840);
            if ( *v10 != v8 + 832 )
              goto LABEL_22;
            *v9 = v8 + 832;
            v9[1] = v10;
            *v10 = v9;
            *(_QWORD *)(v8 + 840) = v9;
            if ( (*(_DWORD *)(v8 + 8) & 0x208) == 0x200LL )
              IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 784), EjectionRelations);
          }
          else
          {
LABEL_17:
            v11 = (_QWORD *)qword_140090EE8;
            v12 = (_QWORD *)(v2 + 848);
            if ( *(__int64 **)qword_140090EE8 != &AcpiUnresolvedEjectList )
              goto LABEL_22;
            *v12 = &AcpiUnresolvedEjectList;
            v12[1] = v11;
            *v11 = v12;
            qword_140090EE8 = (__int64)v12;
          }
        }
        AMLIDereferenceHandleEx((__int64)v5);
        if ( v3 )
          AMLIDereferenceHandleEx(v3);
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
