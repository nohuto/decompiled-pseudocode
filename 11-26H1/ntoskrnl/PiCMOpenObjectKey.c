/*
 * XREFs of PiCMOpenObjectKey @ 0x14091C7BC
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpCreateObject @ 0x14089E594 (_PnpCreateObject.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     PiCMCaptureRegistryInputData @ 0x14091CC68 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14091CF38 (PiCMReturnHandleResultData.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMOpenObjectKey(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  HANDLE v6; // r12
  KPROCESSOR_MODE PreviousMode; // di
  int v8; // ebx
  __int64 v9; // r13
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // ebx
  int v15; // eax
  ACCESS_MASK v16; // esi
  NTSTATUS v17; // eax
  PVOID v18; // rdi
  NTSTATUS v19; // eax
  __int64 v21; // rcx
  int v22; // eax
  KPROCESSOR_MODE AccessMode; // [rsp+48h] [rbp-C0h]
  int DesiredAccess; // [rsp+50h] [rbp-B8h]
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE v27; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v28[2]; // [rsp+70h] [rbp-98h]
  PVOID P_8[2]; // [rsp+80h] [rbp-88h]
  __int128 v30; // [rsp+90h] [rbp-78h]
  int v31[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v32; // [rsp+B8h] [rbp-50h]
  char v33; // [rsp+BCh] [rbp-4Ch]
  HANDLE *p_Handle; // [rsp+C0h] [rbp-48h]
  int v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+CCh] [rbp-3Ch]
  int v37; // [rsp+F8h] [rbp-10h] BYREF
  char v38; // [rsp+FCh] [rbp-Ch]
  HANDLE *v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+108h] [rbp+0h]
  int v41; // [rsp+10Ch] [rbp+4h]

  *(_OWORD *)v28 = 0LL;
  *a6 = 0;
  v6 = 0LL;
  *(_OWORD *)P_8 = 0LL;
  Handle = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  v8 = PiCMCaptureRegistryInputData(a1);
  if ( v8 < 0 )
    goto LABEL_33;
  v9 = (__int64)P_8[0];
  DesiredAccess = HIDWORD(P_8[1]);
  LODWORD(Object) = v30;
  if ( !P_8[0] || a4 < 0x10 || HIDWORD(v28[0]) || DWORD1(v30) || !a3 )
  {
    v11 = -1073741811;
    goto LABEL_30;
  }
  v10 = 6;
  if ( SLODWORD(v28[1]) > 6 )
  {
    switch ( LODWORD(v28[1]) )
    {
      case 0x10001:
        v10 = 7;
        break;
      case 0x10002:
        v10 = 8;
        break;
      case 0x10003:
        v10 = 9;
        break;
      case 0x10004:
        v10 = 10;
        break;
      case 0x10005:
        v10 = 11;
        break;
      default:
        goto LABEL_44;
    }
    if ( PiDrvDbCtx )
    {
      if ( v10 - 5 > 1 )
        goto LABEL_12;
      goto LABEL_42;
    }
LABEL_44:
    v11 = -1073741811;
    goto LABEL_29;
  }
  if ( LODWORD(v28[1]) == 6 )
    goto LABEL_42;
  if ( LODWORD(v28[1]) != 1 )
  {
    switch ( LODWORD(v28[1]) )
    {
      case 2:
        v10 = 2;
        goto LABEL_12;
      case 3:
        v10 = 4;
        goto LABEL_12;
      case 4:
        v10 = 3;
        goto LABEL_42;
      case 5:
        v10 = 5;
LABEL_42:
        if ( (_DWORD)v30 == 1 )
          goto LABEL_10;
LABEL_12:
        v12 = *(_QWORD *)&PiPnpRtlCtx;
        memset_0(v31, 0, 0x50uLL);
        v13 = *(_QWORD *)(v12 + 488);
        v32 = HIDWORD(P_8[1]);
        v14 = 0;
        v33 = 0;
        p_Handle = &Handle;
        v36 = 0;
        if ( v13 )
        {
          v15 = guard_dispatch_icall_no_overrides(v12, (__int64)P_8[0]);
          if ( v15 == -1073741822 )
          {
            v13 = 0LL;
          }
          else
          {
            if ( v15 == -1073741536 )
              goto LABEL_57;
            if ( v15 )
              goto LABEL_64;
          }
          v14 = v36;
        }
        memset_0(&v37, 0, 0x40uLL);
        if ( (_WORD)v14 || v10 - 1 > 0xA )
        {
          v11 = -1073741811;
        }
        else if ( *(_QWORD *)(v12 + 8LL * v10 + 296) )
        {
          v37 = v32;
          v38 = v33;
          v39 = p_Handle;
          v41 = v14;
          v11 = guard_dispatch_icall_no_overrides(v12, v9);
          if ( v11 >= 0 )
            v35 = v40;
        }
        else
        {
          v11 = -1073741822;
        }
        if ( !v13 || (v31[0] = v11, v22 = guard_dispatch_icall_no_overrides(v12, v9), v22 == -1073741822) )
        {
LABEL_22:
          if ( v11 == -1073741772 )
          {
            if ( (_DWORD)Object != 1 )
              goto LABEL_29;
            if ( !(unsigned __int8)PiAuDoesClientHaveAccess(2u) )
            {
              v11 = -1073741790;
              goto LABEL_29;
            }
            v16 = DesiredAccess;
            v11 = PnpCreateObject(v21, v9, v10, DesiredAccess, &Handle);
          }
          else
          {
            v16 = DesiredAccess;
          }
          if ( v11 >= 0 )
          {
            Object = 0LL;
            v17 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
            v18 = Object;
            v11 = v17;
            if ( v17 >= 0 )
            {
              v19 = ObOpenObjectByPointer(Object, 0x440u, 0LL, v16, (POBJECT_TYPE)CmKeyObjectType, AccessMode, &v27);
              v6 = v27;
              v11 = v19;
            }
            if ( v18 )
              ObfDereferenceObject(v18);
          }
          goto LABEL_29;
        }
        if ( v22 != -1073741536 )
        {
          if ( !v22 )
            goto LABEL_22;
LABEL_64:
          v11 = -1073741595;
          goto LABEL_29;
        }
LABEL_57:
        v11 = v31[0];
        goto LABEL_22;
    }
    goto LABEL_44;
  }
LABEL_10:
  v11 = -1073741637;
LABEL_29:
  PreviousMode = AccessMode;
LABEL_30:
  v8 = PiCMReturnHandleResultData((unsigned int)v11, v6, DWORD2(v30), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 < 0 && v6 )
    ObCloseHandle(v6, PreviousMode);
LABEL_33:
  if ( P_8[0] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(P_8[0], 0);
  return (unsigned int)v8;
}
