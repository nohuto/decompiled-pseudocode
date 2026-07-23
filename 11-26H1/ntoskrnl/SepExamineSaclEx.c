/*
 * XREFs of SepExamineSaclEx @ 0x140A60770
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14031070C (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepObjectInTypeList @ 0x140491038 (AuthzBasepObjectInTypeList.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     SepSetAuditInfoForObjectType @ 0x140819DF0 (SepSetAuditInfoForObjectType.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        unsigned __int8 *a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r12
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  int *v20; // r15
  char v21; // r13
  _WORD *v22; // rcx
  unsigned int v23; // edx
  char *v24; // r14
  char v25; // bp
  unsigned __int8 v26; // al
  int v27; // edi
  int v28; // eax
  bool v29; // zf
  int v30; // r15d
  _WORD *v31; // rbx
  unsigned int v32; // edi
  unsigned int v33; // ecx
  _QWORD *v34; // rax
  void *v35; // r9
  void *v36; // rdx
  void *v37; // r8
  void *v38; // r10
  int *v39; // rdi
  unsigned int i; // ebx
  int v41; // eax
  _DWORD *v42; // rdi
  unsigned int j; // ebx
  unsigned __int8 *v44; // rbx
  bool v45; // al
  unsigned int v46; // ebx
  char v47; // al
  unsigned int v48; // eax
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v51; // [rsp+68h] [rbp-70h] BYREF
  int v52; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v53; // [rsp+70h] [rbp-68h]
  _DWORD *v54; // [rsp+78h] [rbp-60h] BYREF
  char *v55; // [rsp+80h] [rbp-58h]
  unsigned int v56; // [rsp+E0h] [rbp+8h]

  v13 = 0LL;
  v52 = -1;
  v14 = a3;
  v54 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v53 = *(unsigned __int16 *)(a1 + 4);
    if ( v53 )
    {
      v20 = a8;
      v21 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        Size_4 = v21;
      }
      v22 = **(_WORD ***)(v14 + 152);
      if ( *v22 == *(_WORD *)SeAnonymousLogonSid )
      {
        v28 = memcmp(v22, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v28 )
          Size = 4 * *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL) + 8;
      }
      v23 = 0;
      v24 = (char *)(a1 + 8);
      v56 = 0;
      v55 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_18:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v25 = v24[1];
        if ( (v25 & 8) == 0 )
          break;
LABEL_17:
        ++v23;
        v20 = a8;
        v24 += *((unsigned __int16 *)v24 + 1);
        v14 = a3;
        v17 = a2;
        v56 = v23;
        v55 = v24;
        if ( v23 >= v53 )
          goto LABEL_18;
      }
      v26 = *v24;
      v51 = -1;
      switch ( v26 )
      {
        case 2u:
          if ( !SepSidInToken(v14, a10, (unsigned __int8 *)v24 + 8, 1, 0, a11)
            && (!Size
             || **(_WORD **)&RtlpBootStatHandleLock.WaitRegister.Flags != *((_WORD *)v24 + 4)
             || memcmp(*(const void **)&RtlpBootStatHandleLock.WaitRegister.Flags, v24 + 8, Size)) )
          {
            goto LABEL_14;
          }
          v27 = *((_DWORD *)v24 + 1);
          if ( !a6 )
          {
            if ( *v20 >= 0 )
            {
              if ( (v25 & 0x40) != 0 && ((v27 & *a9) != 0 || v21 == 64) )
              {
LABEL_28:
                v19 = a12;
                *a12 = 1;
                goto LABEL_15;
              }
LABEL_14:
              v19 = a12;
LABEL_15:
              v23 = v56;
LABEL_16:
              v16 = a13;
              goto LABEL_17;
            }
            if ( v25 >= 0 )
              goto LABEL_14;
            v29 = (v27 & a4) == 0;
            goto LABEL_45;
          }
          for ( i = 0; i < a6; ++i )
            SepSetAuditInfoForObjectType(v25, v27, a4, a5, a6, a7, i, (__int64)v20, (__int64)a9, a12, a13);
LABEL_69:
          v24 = v55;
          v13 = v54;
          v21 = Size_4;
          goto LABEL_14;
        case 7u:
          v41 = *((_DWORD *)v24 + 2);
          v30 = *((_DWORD *)v24 + 1);
          if ( (v41 & 1) != 0 )
            v42 = v24 + 12;
          else
            v42 = 0LL;
          v44 = (unsigned __int8 *)&v24[16 * (v41 & 1) + ((8LL * (v41 & 2)) | 0xC)];
          v45 = SepSidInToken(v14, a10, v44, 1, 0, a11);
          if ( !v42 )
          {
            if ( !v45
              && (!Size
               || **(_WORD **)&RtlpBootStatHandleLock.WaitRegister.Flags != *(_WORD *)v44
               || memcmp(*(const void **)&RtlpBootStatHandleLock.WaitRegister.Flags, v44, Size)) )
            {
              goto LABEL_14;
            }
            v46 = 0;
            if ( !a6 )
              goto LABEL_14;
            do
              SepSetAuditInfoForObjectType(v25, v30, a4, a5, a6, a7, v46++, (__int64)a8, (__int64)a9, a12, a13);
            while ( v46 < a6 );
            goto LABEL_69;
          }
          if ( !v45
            && (!Size
             || **(_WORD **)&RtlpBootStatHandleLock.WaitRegister.Flags != *(_WORD *)v44
             || memcmp(*(const void **)&RtlpBootStatHandleLock.WaitRegister.Flags, v44, Size)) )
          {
            goto LABEL_14;
          }
          v47 = AuthzBasepObjectInTypeList(v42, a5, a6, &v51);
          v39 = a8;
          if ( v47 )
          {
            v48 = v51;
            goto LABEL_88;
          }
          break;
        case 0xDu:
          v30 = *((_DWORD *)v24 + 1);
          v31 = v24 + 8;
          v32 = 4 * (unsigned __int8)v24[9] + 8;
          if ( v17 && !v13 )
          {
            AuthzBasepInitializeResourceClaimsFromSacl(v17, &v54);
            v19 = a12;
            v23 = v56;
            v13 = v54;
          }
          v33 = *((unsigned __int16 *)v24 + 1) - v32;
          if ( (int)(v33 - 8) <= 0 )
            goto LABEL_16;
          v34 = *(_QWORD **)(a3 + 1096);
          if ( v34 )
          {
            v35 = (void *)v34[72];
            v36 = (void *)v34[74];
            v37 = (void *)v34[73];
            v38 = (void *)v34[75];
          }
          else
          {
            v35 = 0LL;
            v36 = 0LL;
            v37 = 0LL;
            v38 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)a3,
            *(void **)(a3 + 776),
            v13,
            v35,
            v36,
            v37,
            v38,
            (_WORD *)((char *)v31 + v32),
            v33 - 8,
            1u,
            0,
            &v52);
          if ( v52 != 1
            || !SepSidInToken(a3, a10, (unsigned __int8 *)v24 + 8, 1, 0, a11)
            && (!Size
             || **(_WORD **)&RtlpBootStatHandleLock.WaitRegister.Flags != *v31
             || memcmp(*(const void **)&RtlpBootStatHandleLock.WaitRegister.Flags, v24 + 8, Size)) )
          {
            goto LABEL_14;
          }
          v39 = a8;
          if ( !a6 )
          {
            if ( *a8 >= 0 )
            {
              if ( (v25 & 0x40) != 0 && ((v30 & *a9) != 0 || v21 == 64) )
                goto LABEL_28;
              goto LABEL_14;
            }
            if ( v25 >= 0 )
              goto LABEL_14;
            v29 = (v30 & a4) == 0;
LABEL_45:
            if ( !v29 || v21 == (char)0x80 )
            {
              v16 = a13;
              v19 = a12;
              v23 = v56;
              *a13 = 1;
              goto LABEL_17;
            }
            goto LABEL_14;
          }
          for ( j = 0; j < a6; ++j )
            SepSetAuditInfoForObjectType(v25, v30, a4, a5, a6, a7, j, (__int64)a8, (__int64)a9, a12, a13);
          v24 = v55;
          v13 = v54;
          v21 = Size_4;
          break;
        default:
          goto LABEL_17;
      }
      v48 = -1;
LABEL_88:
      if ( v48 != -1 )
        SepSetAuditInfoForObjectType(v25, v30, a4, a5, a6, a7, v48, (__int64)v39, (__int64)a9, a12, a13);
      goto LABEL_14;
    }
  }
}
