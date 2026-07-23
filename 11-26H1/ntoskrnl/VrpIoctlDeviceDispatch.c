/*
 * XREFs of VrpIoctlDeviceDispatch @ 0x140939F20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408AB974 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408ABBC4 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408ABCD4 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VRegEnabledInJob @ 0x14093A35C (VRegEnabledInJob.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14093A3C8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14093AE58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140B01274 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 */

__int64 __fastcall VrpIoctlDeviceDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int DifferencingHive; // eax
  unsigned int v17; // esi
  int v19; // ebx
  void *v20; // [rsp+28h] [rbp-29h]
  void *v21; // [rsp+30h] [rbp-21h]
  unsigned int v22; // [rsp+38h] [rbp-19h] BYREF
  GUID v23; // [rsp+40h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25[2]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int *v26; // [rsp+80h] [rbp+2Fh]
  __int64 v27; // [rsp+88h] [rbp+37h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = a2 + 56;
  *(_QWORD *)(a2 + 56) = 0LL;
  v23 = 0LL;
  ActivityId = 0LL;
  v5 = *(_DWORD *)(v2 + 24);
  if ( (unsigned int)VRegEnabledInJob(&v22) && !VrpAllowContainerNesting )
  {
    v17 = -1073741808;
    if ( (unsigned int)dword_140E0A5C0 > 2 )
    {
      v22 = v5;
      v26 = &v22;
      v27 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A5C0,
        (unsigned __int8 *)&dword_14005B6DC,
        &v23,
        0LL,
        3u,
        v25);
    }
    goto LABEL_13;
  }
  EtwActivityIdControl(1u, &ActivityId);
  v8 = dword_140E0A5C0;
  if ( (unsigned int)dword_140E0A5C0 > 4 )
  {
    v22 = v5;
    v26 = &v22;
    v27 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5C0,
      (unsigned __int8 *)&word_14005B71E,
      &v23,
      &ActivityId,
      3u,
      v25);
    v8 = dword_140E0A5C0;
  }
  v9 = v5 - 2228228;
  if ( !v9 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlInitializeJobForVreg(*(_QWORD *)(a2 + 24), *(_DWORD *)(v2 + 16), v6, v7, v20, v21);
    goto LABEL_12;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlLoadDifferencingHive(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v6);
    goto LABEL_12;
  }
  v11 = v10 - 4;
  if ( !v11 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateNamespaceNode(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v20,
                         (__int64)v21);
    goto LABEL_12;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlModifyFlags(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v20,
                         (__int64)v21);
    goto LABEL_12;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateMultipleNamespaceNodes(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v20,
                         (__int64)v21);
    goto LABEL_12;
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDynamicallyLoadedHives(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v20,
                         (__int64)v21);
    goto LABEL_12;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlGetVirtualRootKey(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         *(_QWORD *)(a2 + 24),
                         v3);
LABEL_12:
    v17 = DifferencingHive;
    goto LABEL_13;
  }
  v19 = v15 - 4;
  if ( !v19 )
  {
    DifferencingHive = VrpHandleIoctlLoadDifferencingHiveForHost(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         *(_BYTE *)(a2 + 64));
    goto LABEL_12;
  }
  if ( v19 == 4 )
  {
    DifferencingHive = VrpHandleIoctlUnloadDifferencingHiveForHost(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         *(_BYTE *)(a2 + 64));
    goto LABEL_12;
  }
  if ( v8 > 2 )
  {
    v22 = *(_DWORD *)(v2 + 24);
    v27 = 4LL;
    v26 = &v22;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A5C0, (unsigned __int8 *)byte_14005B689, &v23, 0LL, 3u, v25);
  }
  v17 = -1073741808;
LABEL_13:
  *(_DWORD *)(a2 + 48) = v17;
  IofCompleteRequest((PIRP)a2, 0);
  if ( (unsigned int)dword_140E0A5C0 > 4 )
  {
    v22 = v17;
    v26 = &v22;
    v27 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A5C0, (unsigned __int8 *)byte_14005B6B5, &v23, 0LL, 3u, v25);
  }
  return v17;
}
