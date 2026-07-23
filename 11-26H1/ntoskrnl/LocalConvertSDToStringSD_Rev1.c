/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1404A9950 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     LocalConvertAclToString @ 0x140A6D784 (LocalConvertAclToString.c)
 *     RtlNtStatusToDosError @ 0x140A6F610 (RtlNtStatusToDosError.c)
 *     LocalGetStringForSid @ 0x140A6F670 (LocalGetStringForSid.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     LocalGetStringForControl @ 0x140A6F7A4 (LocalGetStringForControl.c)
 *     SddlFilterSacl @ 0x140A6F8E0 (SddlFilterSacl.c)
 */

ULONG __fastcall LocalConvertSDToStringSD_Rev1(
        __int64 a1,
        __int64 a2,
        BOOLEAN a3,
        __int64 a4,
        __int16 a5,
        wchar_t **a6,
        unsigned int *a7)
{
  __int16 v7; // r14
  unsigned int v9; // edi
  void *v10; // r15
  void *v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  int DaclSecurityDescriptor; // ecx
  ULONG v16; // ebx
  BOOLEAN v18; // r14
  unsigned __int16 v19; // bx
  __int64 v20; // r9
  char v21; // cl
  __int64 v22; // r14
  BOOLEAN v23; // r13
  size_t v24; // r12
  wchar_t *v25; // rax
  __int64 v26; // rsi
  size_t v27; // rdx
  __int64 v28; // rcx
  wchar_t **v29; // r15
  __int64 v30; // rcx
  size_t v31; // r12
  size_t v32; // rdx
  wchar_t *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int16 v36; // ax
  char v37; // r8
  unsigned int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+28h] [rbp-71h]
  void *v42; // [rsp+60h] [rbp-39h]
  _WORD *v43; // [rsp+70h] [rbp-29h] BYREF
  _WORD *v44; // [rsp+78h] [rbp-21h] BYREF
  wchar_t *v45; // [rsp+80h] [rbp-19h] BYREF
  wchar_t *Src; // [rsp+88h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+90h] [rbp-9h] BYREF
  int StringForSid; // [rsp+E8h] [rbp+4Fh]
  __int64 DaclPresent; // [rsp+F0h] [rbp+57h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+F8h] [rbp+5Fh] BYREF
  size_t Size; // [rsp+100h] [rbp+67h] BYREF

  DaclDefaulted = a3;
  DaclPresent = a2;
  v7 = a5;
  StringForSid = 0;
  LODWORD(Size) = 0;
  v9 = 0;
  Dacl = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  v11 = 0LL;
  LOBYTE(DaclPresent) = 0;
  v12 = 0LL;
  v45 = 0LL;
  Src = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  if ( (a5 & 1) != 0 )
  {
    if ( *(_BYTE *)a4 != 1 )
    {
      DaclSecurityDescriptor = -1073741736;
      goto LABEL_17;
    }
    if ( *(__int16 *)(a4 + 2) >= 0 )
    {
      v10 = *(void **)(a4 + 8);
    }
    else
    {
      v13 = *(unsigned int *)(a4 + 4);
      if ( (_DWORD)v13 )
        v10 = (void *)(a4 + v13);
    }
  }
  if ( (a5 & 2) != 0 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      if ( *(__int16 *)(a4 + 2) >= 0 )
      {
        v11 = *(void **)(a4 + 16);
      }
      else
      {
        v14 = *(unsigned int *)(a4 + 8);
        if ( (_DWORD)v14 )
          v11 = (void *)(a4 + v14);
      }
      DaclSecurityDescriptor = 0;
    }
    else
    {
      DaclSecurityDescriptor = -1073741736;
    }
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_17;
  }
  if ( (a5 & 4) != 0 )
  {
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                               (PSECURITY_DESCRIPTOR)a4,
                               (PBOOLEAN)&DaclPresent,
                               &Dacl,
                               &DaclDefaulted);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_17;
  }
  if ( (v7 & 0x1F8) == 0 )
  {
    v42 = 0LL;
    v12 = 0LL;
    DaclDefaulted = 0;
    v18 = 0;
LABEL_19:
    if ( *(_BYTE *)a4 == 1 )
    {
      v19 = *(_WORD *)(a4 + 2);
      if ( v10 )
      {
        StringForSid = LocalGetStringForSid(v10, v41, 1);
        if ( StringForSid )
          goto LABEL_22;
      }
      if ( v11 )
      {
        StringForSid = LocalGetStringForSid(v11, v41, 1);
        if ( StringForSid )
          goto LABEL_22;
      }
      if ( v19 )
      {
        StringForSid = LocalGetStringForControl(v19, 1LL, &v44, 0LL);
        if ( StringForSid )
          goto LABEL_22;
        StringForSid = LocalGetStringForControl(v19, 2LL, &v43, v20);
        if ( StringForSid )
          goto LABEL_22;
      }
      if ( v18 )
      {
        StringForSid = LocalConvertAclToString(v12, v18, 0, (void **)&v45, &Size, 0LL, 0LL, 0, 1);
        if ( StringForSid )
          goto LABEL_22;
        v9 = Size;
      }
      v21 = DaclPresent;
      if ( !(_BYTE)DaclPresent )
        goto LABEL_38;
      StringForSid = LocalConvertAclToString((__int64)Dacl, DaclPresent, 1, (void **)&Src, &Size, 0LL, 0LL, 0, 1);
      if ( !StringForSid )
      {
        v9 += Size;
        v21 = DaclPresent;
LABEL_38:
        v22 = -1LL;
        if ( v21 )
        {
          v9 += 4;
          if ( v44 )
          {
            v35 = -1LL;
            do
              ++v35;
            while ( v44[v35] );
            v9 += 2 * v35;
          }
        }
        v23 = DaclDefaulted;
        if ( DaclDefaulted )
        {
          v9 += 4;
          if ( v43 )
          {
            v34 = -1LL;
            do
              ++v34;
            while ( v43[v34] );
            v9 += 2 * v34;
          }
        }
        v24 = v9 + 2LL;
        v25 = (wchar_t *)SddlpAlloc(v24);
        *a6 = v25;
        if ( v25 )
        {
          LODWORD(v26) = 0;
          if ( !(_BYTE)DaclPresent )
            goto LABEL_58;
          v27 = v24 >> 1;
          LODWORD(v41) = 58;
          if ( v44 )
            swprintf_s(v25, v27, L"%ws%wc%ws", L"D", v41, v44);
          else
            swprintf_s(v25, v27, L"%ws%wc", L"D", v41);
          v28 = -1LL;
          v25 = *a6;
          do
            ++v28;
          while ( (*a6)[v28] );
          v26 = (unsigned int)v28;
          if ( Src )
          {
            wcscpy_s(&v25[(unsigned int)v28], (v24 >> 1) - (unsigned int)v28, Src);
            v29 = a6;
            v30 = -1LL;
            v25 = *a6;
            do
              ++v30;
            while ( (*a6)[v26 + v30] );
            LODWORD(v26) = v30 + v26;
          }
          else
          {
LABEL_58:
            v29 = a6;
          }
          if ( v23 )
          {
            v31 = v24 >> 1;
            v32 = v31 - (unsigned int)v26;
            v33 = &v25[(unsigned int)v26];
            LODWORD(v41) = 58;
            if ( v43 )
              swprintf_s(v33, v32, L"%ws%wc%ws", L"S", v41, v43);
            else
              swprintf_s(v33, v32, L"%ws%wc", L"S", v41);
            do
              ++v22;
            while ( (*v29)[(unsigned int)v26 + v22] );
            if ( v45 )
              wcscpy_s(&(*v29)[(unsigned int)(v22 + v26)], v31 - (unsigned int)(v22 + v26), v45);
          }
          if ( a7 )
            *a7 = v9 >> 1;
        }
        else
        {
          StringForSid = 8;
        }
      }
LABEL_22:
      SddlpFree(0LL);
      SddlpFree(0LL);
      SddlpFree(v45);
      SddlpFree(Src);
      SddlpFree(v43);
      SddlpFree(v44);
      SddlpFree(v42);
      SddlpFree(0LL);
      return StringForSid;
    }
    DaclSecurityDescriptor = -1073741736;
LABEL_17:
    v16 = RtlNtStatusToDosError(DaclSecurityDescriptor);
    SddlpFree(v42);
    return v16;
  }
  if ( *(_BYTE *)a4 == 1 )
  {
    v36 = *(_WORD *)(a4 + 2);
    if ( (v36 & 0x10) != 0 )
    {
      v37 = 1;
      DaclDefaulted = 1;
      if ( v36 >= 0 )
      {
        v12 = *(_QWORD *)(a4 + 24);
      }
      else
      {
        v40 = *(unsigned int *)(a4 + 12);
        if ( (_DWORD)v40 )
          v12 = a4 + v40;
        else
          v12 = 0LL;
      }
    }
    else
    {
      v37 = 0;
      DaclDefaulted = 0;
    }
    v38 = v7 & 0x1F8;
    if ( v37 && v12 )
    {
      SddlFilterSacl(v12, 0LL, &Size, v38);
      v39 = SddlpAlloc((unsigned int)Size);
      v42 = (void *)v39;
      if ( !v39 )
      {
        DaclSecurityDescriptor = -1073741801;
        goto LABEL_17;
      }
      SddlFilterSacl(v12, v39, &Size, v38);
      v12 = (__int64)v42;
    }
    v18 = DaclDefaulted;
    goto LABEL_19;
  }
  return RtlNtStatusToDosError(-1073741736);
}
