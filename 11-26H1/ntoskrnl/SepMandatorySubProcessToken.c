/*
 * XREFs of SepMandatorySubProcessToken @ 0x14050EF38
 * Callers:
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlSidDominates @ 0x14040CB40 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x140441DE0 (SepLocateTokenIntegrity.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14050BACC (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeTokenIsAdmin @ 0x1409238F0 (SeTokenIsAdmin.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ObQuerySecurityObject @ 0x140AA74AC (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x140AA7550 (PsReferenceProcessFilePointer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  NTSTATUS SecurityObject; // ebx
  PVOID v10; // r12
  _BYTE *v11; // rsi
  _BYTE *Pool2; // rax
  __int16 v13; // ax
  ACL *v14; // rcx
  __int64 v15; // rax
  char *AceByType; // rax
  unsigned __int8 *v17; // r14
  PSID *TokenIntegrity; // rax
  PSID *v19; // r15
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int8 *v21; // rcx
  int v22; // eax
  unsigned int v23; // r8d
  int v24; // eax
  int v25; // eax
  int v26; // edx
  PSID v27; // rax
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  __int64 *v37; // rdx
  __int64 v38; // r11
  __int64 v39; // r9
  int v40; // ecx
  __int64 v41; // r10
  int v42; // r8d
  __int64 v43; // rcx
  unsigned int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // eax
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-99h] BYREF
  int v52; // [rsp+34h] [rbp-95h] BYREF
  PVOID Object; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v54; // [rsp+40h] [rbp-89h]
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0;
  v54 = a4;
  *a4 = 0LL;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 1532);
  Object = 0LL;
  Dominates[0] = 0;
  SecurityObject = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_42;
  SecurityObject = PsReferenceProcessFilePointer(a3, &Object);
  if ( SecurityObject < 0
    || (v52 = 128,
        v11 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v10 = Object;
    goto LABEL_66;
  }
  v10 = Object;
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 16, (unsigned int)SecurityDescriptor, 128, (__int64)&v52);
  if ( SecurityObject != -1073741789 )
  {
LABEL_10:
    if ( SecurityObject >= 0 && v11 )
    {
      v13 = *((_WORD *)v11 + 1);
      if ( (v13 & 0x10) == 0 )
      {
LABEL_13:
        v14 = 0LL;
        goto LABEL_18;
      }
      if ( v13 >= 0 )
      {
        v14 = (ACL *)*((_QWORD *)v11 + 3);
      }
      else
      {
        v15 = *((unsigned int *)v11 + 3);
        if ( !(_DWORD)v15 )
          goto LABEL_13;
        v14 = (ACL *)&v11[v15];
      }
LABEL_18:
      AceByType = (char *)RtlFindAceByType(v14, 0x11u, 0LL);
      if ( AceByType )
      {
        v17 = (unsigned __int8 *)(AceByType + 8);
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity(a2);
        v19 = TokenIntegrity;
        if ( !TokenIntegrity )
          goto LABEL_41;
        SecurityObject = RtlSidDominates(*TokenIntegrity, v17, Dominates);
        if ( SecurityObject < 0 )
          goto LABEL_66;
        if ( Dominates[0] )
        {
          IsEnabledDeviceUsageNoInline = Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline();
          v21 = v17 + 1;
          if ( IsEnabledDeviceUsageNoInline )
          {
            v22 = *v21;
            v23 = (_BYTE)v22 ? *(_DWORD *)&v17[4 * (v22 - 1) + 8] : 0;
            v24 = *((unsigned __int8 *)*v19 + 1);
            if ( (_BYTE)v24 )
            {
              if ( v23 < *((_DWORD *)*v19 + (unsigned int)(v24 - 1) + 2) )
                *(_DWORD *)(a2 + 200) &= ~0x1000u;
            }
          }
          v25 = *v21;
          if ( (_BYTE)v25 )
            v26 = *(_DWORD *)&v17[4 * (v25 - 1) + 8];
          else
            v26 = 0;
          *((_DWORD *)*v19 + 2) = v26;
          v27 = *v19;
          v5 = v54;
          *v54 = v27;
          v28 = *v21;
          if ( (_BYTE)v28 )
          {
            v29 = *(_DWORD *)&v17[4 * (v28 - 1) + 8];
            v4 = 0;
          }
          else
          {
            v4 = 0;
            v29 = 0;
          }
          v30 = *(_DWORD *)(a2 + 200);
          if ( v29 >= 0x2000 )
            v31 = v30 | 0x2000;
          else
            v31 = v30 & 0xFFFFDFFF;
          *(_DWORD *)(a2 + 200) = v31;
        }
        else
        {
LABEL_41:
          v5 = v54;
          v4 = 0;
        }
      }
      goto LABEL_42;
    }
    SecurityObject = 0;
LABEL_42:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v32 = SepLocateTokenIntegrity(a2);
        v33 = (_QWORD *)v32;
        if ( v32 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 56LL);
          if ( v34 )
          {
            v38 = SepLocateTokenIntegrity(v34);
            if ( v38 )
            {
              v39 = *v37;
              v40 = *(unsigned __int8 *)(*v37 + 1);
              if ( (_BYTE)v40 )
                v4 = *(_DWORD *)(v39 + 4LL * (unsigned int)(v40 - 1) + 8);
              v41 = *(_QWORD *)v38;
              v42 = *(unsigned __int8 *)(*(_QWORD *)v38 + 1LL);
              v43 = (unsigned int)(v42 - 1);
              if ( (_BYTE)v42 )
                v44 = *(_DWORD *)(v41 + 4 * v43 + 8);
              else
                v44 = 0;
              if ( v4 > v44 )
              {
                v45 = 0;
                if ( (_BYTE)v42 )
                  v45 = *(_DWORD *)(v41 + 4 * v43 + 8);
                *(_DWORD *)(v39 + 8) = v45;
                *v5 = *v37;
                v46 = *(unsigned __int8 *)(*(_QWORD *)v38 + 1LL);
                if ( (_BYTE)v46 )
                  v47 = *(_DWORD *)(*(_QWORD *)v38 + 4LL * (unsigned int)(v46 - 1) + 8);
                else
                  v47 = 0;
                v48 = *(_DWORD *)(a2 + 200);
                if ( v47 >= 0x2000 )
                  v49 = v48 | 0x2000;
                else
                  v49 = v48 & 0xFFFFDFFF;
                *(_DWORD *)(a2 + 200) = v49;
              }
            }
          }
          else
          {
            v35 = *(_QWORD *)v32;
            v36 = *(unsigned __int8 *)(*(_QWORD *)v32 + 1LL);
            if ( (_BYTE)v36 && *(_DWORD *)(v35 + 4LL * (unsigned int)(v36 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v35 + 8) = 0x2000;
              *v5 = *v33;
            }
          }
        }
      }
    }
    goto LABEL_66;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    SecurityObject = -1073741801;
    goto LABEL_66;
  }
  SecurityObject = RtlCreateSecurityDescriptor(Pool2, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v10, 16, (_DWORD)v11, v52, (__int64)&v52);
    goto LABEL_10;
  }
LABEL_66:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 && v11 != SecurityDescriptor )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecurityObject;
}
