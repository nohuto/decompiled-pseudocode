/*
 * XREFs of VrpPreOpenOrCreate @ 0x1409475FC
 * Callers:
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x140420DD0 (EtwActivityIdControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     CmpFreeExtraParameter @ 0x1409471DC (CmpFreeExtraParameter.c)
 *     VrpTranslatePath @ 0x140947B60 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1409490E8 (VrpBuildKeyPath.c)
 *     CmAllocateExtraParameter @ 0x140949E50 (CmAllocateExtraParameter.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(UNICODE_STRING ***a1, void *a2)
{
  UNICODE_STRING **v2; // r15
  PCUNICODE_STRING v4; // rbx
  UNICODE_STRING *v5; // r13
  __int64 ExtraParameter; // r14
  const UNICODE_STRING *v7; // rcx
  int v8; // ebx
  wchar_t *Buffer; // rdi
  unsigned __int16 v10; // dx
  __int64 v11; // rbx
  unsigned __int64 Length; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  UNICODE_STRING *v17; // rsi
  int v18; // eax
  int v19; // ebx
  __int64 Pool2; // rax
  __int64 v21; // rsi
  UNICODE_STRING v22; // xmm1
  __int128 v23; // xmm0
  int v24; // eax
  UNICODE_STRING v25; // xmm0
  UNICODE_STRING *v26; // rax
  UNICODE_STRING *v27; // rax
  PCUNICODE_STRING v29; // rdx
  int v30; // ecx
  wchar_t *v31; // rax
  unsigned __int8 *v32; // rdx
  UNICODE_STRING v33; // xmm0
  UNICODE_STRING ***v34; // rbx
  UNICODE_STRING ***v35; // r8
  UNICODE_STRING **v36; // rdx
  UNICODE_STRING **i; // r9
  UNICODE_STRING ***v38; // rax
  wchar_t *v39; // rcx
  PCUNICODE_STRING v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v47; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING ***v48; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50[2]; // [rsp+A8h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  wchar_t *v55; // [rsp+100h] [rbp+0h]
  _DWORD v56[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]

  v2 = *a1;
  v48 = a1;
  LODWORD(v44) = 0;
  Object = 0LL;
  v4 = *v2;
  v5 = v2[11];
  ExtraParameter = 0LL;
  v49 = v2[1];
  DestinationString = 0LL;
  v47 = 0LL;
  *(_OWORD *)v50 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( v4->Length && *v4->Buffer == 92 )
  {
    v7 = 0LL;
  }
  else
  {
    if ( !v5 )
      goto LABEL_28;
    v7 = (const UNICODE_STRING *)((unsigned __int64)&v5[1] & -(__int64)(v5 != 0LL));
  }
  v8 = VrpBuildKeyPath(v7, *v2, &DestinationString);
  if ( v8 < 0 )
  {
    Buffer = DestinationString.Buffer;
  }
  else
  {
    Buffer = DestinationString.Buffer;
    v10 = 0;
    v11 = 0LL;
    Length = DestinationString.Length;
    v13 = 0LL;
    *(_QWORD *)&String1.Length = 0LL;
    if ( DestinationString.Length )
    {
      do
      {
        if ( DestinationString.Buffer[v13] != 92 )
          break;
        v13 = ++v11;
      }
      while ( 2 * v11 < (unsigned __int64)DestinationString.Length );
    }
    v14 = v11;
    String1.Buffer = &DestinationString.Buffer[v11];
    if ( 2 * v11 < (unsigned __int64)DestinationString.Length )
    {
      do
      {
        if ( DestinationString.Buffer[v14] == 92 )
          break;
        ++v11;
        v10 += 2;
        v14 = v11;
      }
      while ( 2 * v11 < (unsigned __int64)DestinationString.Length );
      String1.Length = v10;
    }
    while ( 2 * v11 < (unsigned __int64)DestinationString.Length && DestinationString.Buffer[v11] == 92 )
      ++v11;
    if ( RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    {
      v15 = 0;
      String1.Length = 0;
      while ( 2 * v11 < Length && Buffer[v11] == 92 )
        ++v11;
      v16 = v11;
      String1.Buffer = &Buffer[v11];
      if ( 2 * v11 < Length )
      {
        do
        {
          if ( Buffer[v16] == 92 )
            break;
          ++v11;
          v15 += 2;
          v16 = v11;
        }
        while ( 2 * v11 < Length );
        String1.Length = v15;
      }
      if ( RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
      {
        v8 = -1073741790;
        goto LABEL_46;
      }
    }
    LODWORD(v42) = 0;
    v17 = v49;
    v18 = VrpTranslatePath(a2, (__int64)&v47, (__int64)&Object, (__int64)v50, (__int64)&v44, (__int64)&v42);
    v8 = v18;
    if ( v18 == -1073741772 )
    {
      v8 = 0;
      goto LABEL_29;
    }
    if ( v18 >= 0 )
    {
      v19 = v44;
      if ( (v44 & 4) == 0 )
      {
        *((_WORD *)Object + 25) = v17[3].MaximumLength;
        Pool2 = ExAllocatePool2(0x100uLL);
        v21 = Pool2;
        if ( Pool2 )
        {
          v22 = DestinationString;
          *(_QWORD *)Pool2 = v2[1];
          *(UNICODE_STRING *)(Pool2 + 16) = **v2;
          v23 = (__int128)*v2[14];
          *(UNICODE_STRING *)(Pool2 + 48) = v22;
          *(_OWORD *)(Pool2 + 32) = v23;
          RtlInitUnicodeString(&DestinationString, 0LL);
          v24 = v42;
          v25 = v47;
          *(_DWORD *)(v21 + 64) = v19;
          *((_DWORD *)v48 + 2) = v24;
          v26 = (UNICODE_STRING *)Object;
          *(_QWORD *)(v21 + 8) = a2;
          v2[1] = v26;
          v27 = *v2;
          v2[10] = (UNICODE_STRING *)v21;
          Object = 0LL;
          *v27 = v25;
          RtlInitUnicodeString(&v47, 0LL);
          *v2[14] = *(UNICODE_STRING *)v50;
LABEL_28:
          Buffer = DestinationString.Buffer;
          v8 = 0;
          goto LABEL_29;
        }
        v8 = -1073741670;
        goto LABEL_46;
      }
      ExtraParameter = CmAllocateExtraParameter();
      if ( ExtraParameter )
      {
        ObfReferenceObjectWithTag(a2, 0x67655256u);
        v33 = DestinationString;
        *(_QWORD *)ExtraParameter = a2;
        *(_DWORD *)(ExtraParameter + 8) = v19 & 0xFFFFFFFB;
        *(UNICODE_STRING *)(ExtraParameter + 16) = v33;
        RtlInitUnicodeString(&DestinationString, 0LL);
        v34 = v48;
        v35 = (UNICODE_STRING ***)(ExtraParameter - 48);
        v36 = v48[2];
        for ( i = (UNICODE_STRING **)*v36; i != v36; i = (UNICODE_STRING **)*i )
        {
          v41 = (char *)i[2] - (char *)v35[2];
          if ( !v41 )
            v41 = (char *)i[3] - (char *)v35[3];
          if ( !v41 )
          {
            Buffer = DestinationString.Buffer;
            v8 = -1073741771;
            goto LABEL_46;
          }
        }
        v38 = (UNICODE_STRING ***)v36[1];
        if ( *v38 != v36 )
          __fastfail(3u);
        *v35 = v36;
        ExtraParameter = 0LL;
        v35[1] = (UNICODE_STRING **)v38;
        *v38 = (UNICODE_STRING **)v35;
        v36[1] = (UNICODE_STRING *)v35;
        v39 = (*v2)->Buffer;
        if ( v39 )
          ExFreePoolWithTag(v39, 0x67655256u);
        **v2 = v47;
        RtlInitUnicodeString(&v47, 0LL);
        Buffer = DestinationString.Buffer;
        *((_DWORD *)v34 + 3) = 872;
        v8 = -1073740541;
        goto LABEL_58;
      }
      v8 = -1073741670;
      goto LABEL_46;
    }
  }
  if ( v8 == -1073740541 )
  {
LABEL_58:
    if ( (unsigned int)dword_140E0A400 <= 5 )
      goto LABEL_29;
    v40 = (PCUNICODE_STRING)&EmptyUnicodeString;
    if ( (*v2)->Buffer )
      v40 = *v2;
    v30 = v40->Length;
    v31 = v40->Buffer;
    v53 = v56;
    v32 = (unsigned __int8 *)&dword_140057AAC;
    v54 = 2LL;
    LODWORD(v42) = -1073740541;
    goto LABEL_72;
  }
LABEL_46:
  if ( (unsigned int)dword_140E0A400 <= 2 )
    goto LABEL_29;
  v29 = (PCUNICODE_STRING)&EmptyUnicodeString;
  if ( (*v2)->Buffer )
    v29 = *v2;
  v30 = v29->Length;
  v31 = v29->Buffer;
  v53 = v56;
  v32 = (unsigned __int8 *)&unk_140057A78;
  v54 = 2LL;
  LODWORD(v42) = v8;
LABEL_72:
  v55 = v31;
  v56[0] = v30;
  v57 = &v42;
  v56[1] = 0;
  v58 = 4LL;
  tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A400, v32, &ActivityId, 0LL, 5u, &v52);
LABEL_29:
  if ( v47.Buffer )
    ExFreePoolWithTag(v47.Buffer, 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter((_QWORD *)(ExtraParameter - 48));
  return (unsigned int)v8;
}
