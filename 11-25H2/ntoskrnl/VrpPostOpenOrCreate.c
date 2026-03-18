/*
 * XREFs of VrpPostOpenOrCreate @ 0x1409494F0
 * Callers:
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x140420DD0 (EtwActivityIdControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpFreeExtraParameter @ 0x1409471DC (CmpFreeExtraParameter.c)
 *     VrpBuildKeyPath @ 0x1409490E8 (VrpBuildKeyPath.c)
 *     CmSetCallbackObjectContext @ 0x140949880 (CmSetCallbackObjectContext.c)
 *     VrpCountPathComponents @ 0x140949C70 (VrpCountPathComponents.c)
 *     VrpFreeCallbackContext @ 0x140949DB4 (VrpFreeCallbackContext.c)
 *     VrpAllocateKeyContext @ 0x140949E00 (VrpAllocateKeyContext.c)
 *     CmAllocateExtraParameter @ 0x140949E50 (CmAllocateExtraParameter.c)
 *     VrpFreeKeyContext @ 0x1409FB3F4 (VrpFreeKeyContext.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rsi
  UNICODE_STRING *v5; // r14
  UNICODE_STRING *v6; // r15
  int v7; // edx
  UNICODE_STRING *v8; // rdi
  __int64 v9; // r12
  const UNICODE_STRING *v10; // rsi
  const UNICODE_STRING **v11; // r8
  const UNICODE_STRING *i; // rax
  int v13; // eax
  const UNICODE_STRING *v14; // rsi
  UNICODE_STRING *KeyContext; // rax
  __int64 v16; // rdx
  NTSTATUS v17; // ebx
  __int64 v18; // r8
  int v19; // eax
  void *v20; // rcx
  int v21; // eax
  void *v22; // rcx
  UNICODE_STRING *v24; // rax
  UNICODE_STRING *ExtraParameter; // rax
  UNICODE_STRING *v26; // rcx
  _QWORD *v27; // rdx
  UNICODE_STRING *v28; // rdx
  UNICODE_STRING *j; // r9
  UNICODE_STRING **v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  UNICODE_STRING *v33; // rcx
  __int64 v34; // rdx
  wchar_t *Buffer; // rax
  __int64 *v36; // rcx
  int v37; // edx
  __int64 *v38; // rcx
  int v39; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v41; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v44; // [rsp+70h] [rbp-19h]
  __int64 v45; // [rsp+78h] [rbp-11h]
  __int64 v46; // [rsp+80h] [rbp-9h]
  int v47; // [rsp+88h] [rbp-1h] BYREF
  int v48; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  __int64 v50; // [rsp+98h] [rbp+Fh]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *a1;
  v41 = v4;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)(v4 + 8);
  v8 = *(UNICODE_STRING **)(v4 + 32);
  v9 = *(_QWORD *)(v4 + 16);
  if ( v7 < 0 )
  {
    v17 = 0;
    goto LABEL_19;
  }
  v10 = 0LL;
  OldContext = (PVOID)a1[1];
  v11 = (const UNICODE_STRING **)*((_QWORD *)OldContext + 2);
  for ( i = *v11; ; i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( i == (const UNICODE_STRING *)v11 )
    {
      v13 = -1073741772;
      goto LABEL_5;
    }
    v31 = *(_QWORD *)&i[1].Length - VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
    if ( !v31 )
      v31 = (__int64)i[1].Buffer - *((_QWORD *)&VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID + 1);
    if ( !v31 )
      break;
  }
  v10 = i;
  v13 = 0;
LABEL_5:
  v14 = v10 + 3;
  if ( v13 < 0 )
    v14 = 0LL;
  if ( v7 == 260 )
  {
    if ( v14 )
    {
      v33 = (UNICODE_STRING *)&v14[-3];
      v34 = *(_QWORD *)&v14[-3].Length;
      if ( *(const UNICODE_STRING **)(v34 + 8) != &v14[-3] )
        goto LABEL_43;
      Buffer = v33->Buffer;
      if ( *(UNICODE_STRING **)Buffer != v33 )
        goto LABEL_43;
      *(_QWORD *)Buffer = v34;
      *(_QWORD *)(v34 + 8) = Buffer;
      *(_QWORD *)&v33->Length = 0LL;
      v33->Buffer = 0LL;
      CmpFreeExtraParameter(v33);
    }
LABEL_17:
    v17 = 0;
    goto LABEL_18;
  }
  if ( v7 == 872 )
  {
    if ( !v14 )
    {
      if ( !v8 )
        return 0;
      ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter();
      v6 = ExtraParameter;
      if ( !ExtraParameter )
        goto LABEL_59;
      v17 = VrpBuildKeyPath(0LL, v8 + 3, ExtraParameter + 1);
      if ( v17 < 0 )
        goto LABEL_60;
      ObfReferenceObjectWithTag(v8->Buffer, 0x67655256u);
      v26 = v6 - 3;
      v27 = OldContext;
      *(_QWORD *)&v6->Length = v8->Buffer;
      LODWORD(v6->Buffer) = *(_DWORD *)&v8[4].Length;
      v28 = (UNICODE_STRING *)v27[2];
      for ( j = *(UNICODE_STRING **)&v28->Length; j != v28; j = *(UNICODE_STRING **)&j->Length )
      {
        v32 = *(_QWORD *)&j[1].Length - *(_QWORD *)&v26[1].Length;
        if ( !v32 )
          v32 = (char *)j[1].Buffer - (char *)v26[1].Buffer;
        if ( !v32 )
        {
          v17 = -1073741771;
          goto LABEL_60;
        }
      }
      v30 = (UNICODE_STRING **)v28->Buffer;
      if ( *v30 == v28 )
      {
        *(_QWORD *)&v26->Length = v28;
        v26->Buffer = (wchar_t *)v30;
        v17 = 0;
        *v30 = v26;
        v28->Buffer = &v26->Length;
        goto LABEL_20;
      }
LABEL_43:
      __fastfail(3u);
    }
    goto LABEL_17;
  }
  if ( !v14 )
  {
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
    v5 = KeyContext;
    if ( KeyContext )
    {
      v17 = VrpBuildKeyPath(0LL, v8 + 3, KeyContext + 1);
      if ( v17 < 0 )
        goto LABEL_60;
      v19 = *(_DWORD *)&v8[4].Length;
      goto LABEL_13;
    }
LABEL_59:
    v17 = -1073741670;
LABEL_60:
    if ( (unsigned int)dword_140E0A400 > 2 )
    {
      v36 = &EmptyUnicodeString;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
        v36 = *(__int64 **)v9;
      v37 = *(unsigned __int16 *)v36;
      v46 = v36[1];
      p_OldContext = &OldContext;
      v44 = &v47;
      v47 = v37;
      v48 = 0;
      v45 = 2LL;
      LODWORD(OldContext) = v17;
      v50 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A400,
        (unsigned __int8 *)&word_140057A3E,
        &ActivityId,
        0LL,
        5u,
        v43);
    }
    if ( v5 )
      VrpFreeKeyContext(v5);
    if ( v6 )
      CmpFreeExtraParameter(&v6[-3].Length);
    goto LABEL_18;
  }
  v24 = (UNICODE_STRING *)VrpAllocateKeyContext(*(PVOID *)&v14->Length);
  v5 = v24;
  if ( !v24 )
    goto LABEL_59;
  v17 = VrpBuildKeyPath(0LL, v14 + 1, v24 + 1);
  if ( v17 < 0 )
    goto LABEL_60;
  v19 = (int)v14->Buffer;
LABEL_13:
  *(_DWORD *)(&v5[2].MaximumLength + 1) = v19;
  v5[2].Length = VrpCountPathComponents(&v5[1], v16, v18, 0LL);
  v17 = CmSetCallbackObjectContext(**(PVOID **)(v9 + 72), &VrpCallbackCookie, v5, &OldContext);
  if ( v17 < 0 )
    goto LABEL_60;
LABEL_18:
  v4 = v41;
LABEL_19:
  if ( v8 )
  {
LABEL_20:
    v20 = *(void **)(v9 + 8);
    if ( v20 )
      ObfDereferenceObject(v20);
    v4 = v41;
    *(_QWORD *)(v9 + 8) = *(_QWORD *)&v8->Length;
    *(_QWORD *)&v8->Length = 0LL;
    v21 = *(_DWORD *)(v4 + 8);
    if ( v21 == 260 || v21 == 872 )
    {
      if ( (unsigned int)dword_140E0A400 > 5 )
      {
        v38 = &EmptyUnicodeString;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
          v38 = *(__int64 **)v9;
        v39 = *(unsigned __int16 *)v38;
        v46 = v38[1];
        p_OldContext = &OldContext;
        v44 = &v47;
        v47 = v39;
        v48 = 0;
        v45 = 2LL;
        LODWORD(OldContext) = v17;
        v50 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E0A400,
          (unsigned __int8 *)&dword_14005787C,
          &ActivityId,
          0LL,
          5u,
          v43);
      }
    }
    else
    {
      v22 = *(void **)(*(_QWORD *)v9 + 8LL);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      *(UNICODE_STRING *)*(_QWORD *)v9 = v8[1];
      *(UNICODE_STRING *)*(_QWORD *)(v9 + 112) = v8[2];
      v8[1].Buffer = 0LL;
      v8[2].Buffer = 0LL;
    }
    VrpFreeCallbackContext(v8);
  }
  if ( v17 < 0 )
  {
    *(_DWORD *)(v4 + 24) = v17;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v17;
}
