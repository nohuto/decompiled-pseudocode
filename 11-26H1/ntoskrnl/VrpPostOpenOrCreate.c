/*
 * XREFs of VrpPostOpenOrCreate @ 0x1408ABF08
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpFreeExtraParameter @ 0x140937FE0 (CmpFreeExtraParameter.c)
 *     VrpBuildKeyPath @ 0x1409396A0 (VrpBuildKeyPath.c)
 *     CmAllocateExtraParameter @ 0x140939AB4 (CmAllocateExtraParameter.c)
 *     VrpCountPathComponents @ 0x14093ABC0 (VrpCountPathComponents.c)
 *     VrpAllocateKeyContext @ 0x140A4B8E4 (VrpAllocateKeyContext.c)
 *     CmSetCallbackObjectContext @ 0x140A4C490 (CmSetCallbackObjectContext.c)
 *     CmpFindExtraParameterInBlock @ 0x140A6AA70 (CmpFindExtraParameterInBlock.c)
 *     CmRetrieveExtraParameter @ 0x140A7D1CC (CmRetrieveExtraParameter.c)
 *     VrpFreeKeyContext @ 0x140A853F8 (VrpFreeKeyContext.c)
 *     VrpFreeCallbackContext @ 0x140A88AB8 (VrpFreeCallbackContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  UNICODE_STRING *v5; // rdi
  __int64 v6; // r14
  UNICODE_STRING *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r15
  NTSTATUS v10; // ebx
  int v11; // r9d
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v17; // rcx
  _QWORD *v18; // r11
  _QWORD *v19; // rax
  const UNICODE_STRING *v20; // r14
  UNICODE_STRING *KeyContext; // rax
  int Buffer; // eax
  UNICODE_STRING *v23; // rax
  __int64 *v24; // rcx
  int v25; // edx
  void *v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  void *v29; // rcx
  __int64 *v30; // rcx
  int v31; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v37; // [rsp+70h] [rbp-19h]
  __int64 v38; // [rsp+78h] [rbp-11h]
  __int64 v39; // [rsp+80h] [rbp-9h]
  int v40; // [rsp+88h] [rbp-1h] BYREF
  int v41; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  __int64 v43; // [rsp+98h] [rbp+Fh]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = 0LL;
  v6 = a1[1];
  v7 = 0LL;
  v34 = *a1;
  OldContext = 0LL;
  v8 = *(_QWORD *)(v34 + 32);
  v9 = *(_QWORD *)(v34 + 16);
  if ( *(int *)(v34 + 8) < 0 )
    goto LABEL_2;
  CmRetrieveExtraParameter(*(_QWORD *)(v6 + 16), v4, &OldContext);
  if ( v11 == 260 )
  {
    if ( !OldContext )
    {
LABEL_2:
      v10 = 0;
      goto LABEL_37;
    }
    v12 = (char *)OldContext - 48;
    v13 = *((_QWORD *)OldContext - 6);
    if ( *(_QWORD **)(*v12 + 8LL) == v12 )
    {
      v14 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v14 == v12 )
      {
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *v12 = 0LL;
        v12[1] = 0LL;
        CmpFreeExtraParameter(v12);
        goto LABEL_2;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( v11 == 872 )
  {
    if ( OldContext )
      goto LABEL_2;
    if ( !v8 )
      return 0;
    ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter();
    v7 = ExtraParameter;
    if ( ExtraParameter )
    {
      v10 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v8 + 48), ExtraParameter + 1);
      if ( v10 >= 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v8 + 8), 0x67655256u);
        *(_QWORD *)&v7->Length = *(_QWORD *)(v8 + 8);
        LODWORD(v7->Buffer) = *(_DWORD *)(v8 + 64);
        ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD *)(v6 + 16), &v7[-2], &OldContext);
        v10 = ExtraParameterInBlock;
        if ( ExtraParameterInBlock < 0 )
        {
          if ( ExtraParameterInBlock == -1073741772 )
          {
            v19 = *(_QWORD **)(v17 + 8);
            if ( *v19 == v17 )
            {
              *v18 = v17;
              v10 = 0;
              v18[1] = v19;
              *v19 = v18;
              *(_QWORD *)(v17 + 8) = v18;
LABEL_38:
              v26 = *(void **)(v9 + 8);
              if ( v26 )
                ObfDereferenceObject(v26);
              v27 = v34;
              *(_QWORD *)(v9 + 8) = *(_QWORD *)v8;
              *(_QWORD *)v8 = 0LL;
              v28 = *(_DWORD *)(v27 + 8);
              if ( v28 == 260 || v28 == 872 )
              {
                if ( (unsigned int)dword_140E0A5C0 > 5 )
                {
                  v30 = &EmptyUnicodeString;
                  if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
                    v30 = *(__int64 **)v9;
                  v31 = *(unsigned __int16 *)v30;
                  v39 = v30[1];
                  p_OldContext = &OldContext;
                  v37 = &v40;
                  v40 = v31;
                  v38 = 2LL;
                  v41 = 0;
                  LODWORD(OldContext) = v10;
                  v43 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E0A5C0,
                    (unsigned __int8 *)&dword_14005BA3C,
                    &ActivityId,
                    0LL,
                    5u,
                    v36);
                }
              }
              else
              {
                v29 = *(void **)(*(_QWORD *)v9 + 8LL);
                if ( v29 )
                  ExFreePoolWithTag(v29, 0);
                *(_OWORD *)*(_QWORD *)v9 = *(_OWORD *)(v8 + 16);
                *(_OWORD *)*(_QWORD *)(v9 + 112) = *(_OWORD *)(v8 + 32);
                *(_QWORD *)(v8 + 24) = 0LL;
                *(_QWORD *)(v8 + 40) = 0LL;
              }
              VrpFreeCallbackContext((PVOID)v8);
              goto LABEL_51;
            }
            goto LABEL_19;
          }
        }
        else
        {
          v10 = -1073741771;
        }
      }
      goto LABEL_29;
    }
    goto LABEL_13;
  }
  v20 = (const UNICODE_STRING *)OldContext;
  if ( OldContext )
  {
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(*(PVOID *)OldContext);
    v5 = KeyContext;
    if ( KeyContext )
    {
      v10 = VrpBuildKeyPath(0LL, v20 + 1, KeyContext + 1);
      if ( v10 < 0 )
        goto LABEL_29;
      Buffer = (int)v20->Buffer;
LABEL_28:
      *(_DWORD *)(&v5[2].MaximumLength + 1) = Buffer;
      v5[2].Length = VrpCountPathComponents(&v5[1]);
      v10 = CmSetCallbackObjectContext(
              **(PVOID **)(v9 + 72),
              (PLARGE_INTEGER)&gLoadedDiffHivesLock.InitialStack,
              v5,
              &OldContext);
      if ( v10 >= 0 )
        goto LABEL_37;
      goto LABEL_29;
    }
  }
  else
  {
    v23 = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
    v5 = v23;
    if ( v23 )
    {
      v10 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v8 + 48), v23 + 1);
      if ( v10 < 0 )
        goto LABEL_29;
      Buffer = *(_DWORD *)(v8 + 64);
      goto LABEL_28;
    }
  }
LABEL_13:
  v10 = -1073741670;
LABEL_29:
  if ( (unsigned int)dword_140E0A5C0 > 2 )
  {
    v24 = &EmptyUnicodeString;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
      v24 = *(__int64 **)v9;
    v25 = *(unsigned __int16 *)v24;
    v39 = v24[1];
    p_OldContext = &OldContext;
    v37 = &v40;
    v40 = v25;
    v38 = 2LL;
    v41 = 0;
    LODWORD(OldContext) = v10;
    v43 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5C0,
      (unsigned __int8 *)word_14005BA02,
      &ActivityId,
      0LL,
      5u,
      v36);
  }
  if ( v5 )
    VrpFreeKeyContext(v5);
  if ( v7 )
    CmpFreeExtraParameter(&v7[-3]);
LABEL_37:
  if ( v8 )
    goto LABEL_38;
  v27 = v34;
LABEL_51:
  if ( v10 < 0 )
  {
    *(_DWORD *)(v27 + 24) = v10;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v10;
}
