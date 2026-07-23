/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1408F50B0
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     ObpDereferenceNamedObject @ 0x1403E1A1C (ObpDereferenceNamedObject.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14044DBF0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x14045C290 (SeAssignSecurityEx2.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReferenceNamedObject @ 0x140480438 (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpGetObjectSecurity @ 0x1408F5810 (ObpGetObjectSecurity.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     ObReleaseObjectSecurityEx @ 0x1409184C0 (ObReleaseObjectSecurityEx.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObpUnlockDirectory @ 0x1409DF250 (ObpUnlockDirectory.c)
 *     ObpDeleteDirectoryName @ 0x1409DF2E8 (ObpDeleteDirectoryName.c)
 *     SeReleaseSecurityDescriptor @ 0x140A60CA0 (SeReleaseSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        struct _KPROCESS *a1,
        char *a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int8 a5,
        _DWORD *a6,
        PVOID *a7)
{
  char *v9; // r14
  _OWORD *v10; // r13
  char *v11; // r15
  char v12; // al
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int ObjectSecurity; // esi
  __int64 v19; // rax
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  POBJECT_TYPE v22; // r13
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // eax
  PVOID v27; // rcx
  __int64 v28; // rcx
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  _QWORD *v32; // r8
  _QWORD *v33; // rdi
  char *v34; // r14
  PVOID v35; // rbx
  PRKPROCESS v36; // r15
  PVOID v37; // rdx
  int v38; // edi
  _OWORD *v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  _OWORD *v49; // rax
  int Index; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v51; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  int v53; // [rsp+74h] [rbp-8Ch]
  int v54; // [rsp+78h] [rbp-88h] BYREF
  PVOID v55; // [rsp+80h] [rbp-80h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+88h] [rbp-78h] BYREF
  int v57; // [rsp+8Ch] [rbp-74h]
  PACL Dacl; // [rsp+90h] [rbp-70h] BYREF
  PVOID v59; // [rsp+98h] [rbp-68h] BYREF
  _OWORD *v60; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD *v62; // [rsp+B0h] [rbp-50h]
  PRKPROCESS PROCESS; // [rsp+B8h] [rbp-48h]
  PVOID Object[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h]
  PVOID *v66; // [rsp+D8h] [rbp-28h]
  _OWORD v67[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v68; // [rsp+120h] [rbp+20h]
  __int128 v69; // [rsp+130h] [rbp+30h]
  __int128 v70; // [rsp+140h] [rbp+40h]
  __int128 v71; // [rsp+150h] [rbp+50h]
  __int128 v72; // [rsp+160h] [rbp+60h]
  __int128 v73; // [rsp+170h] [rbp+70h]

  PROCESS = a1;
  v66 = a7;
  v9 = 0LL;
  v65 = 0LL;
  v55 = 0LL;
  v62 = a4;
  DaclPresent[0] = 0;
  *(_OWORD *)Object = 0LL;
  v10 = a4;
  memset_0(v67, 0, 0xA0uLL);
  v11 = a2 - 48;
  *a7 = 0LL;
  v12 = *(a2 - 22);
  Dacl = 0LL;
  if ( (v12 & 2) != 0 )
    v9 = &v11[-ObpInfoMaskToOffset[v12 & 3]];
  v13 = (v11[27] & 2) == 0;
  CurrentSilo = PsGetCurrentSilo();
  v15 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          v13,
          0LL,
          *((_QWORD *)a6 + 5),
          a2,
          (__int64)CurrentSilo,
          (__int64)v10,
          (__int64)Object,
          0LL,
          (__int64)&v55);
  if ( v15 < 0 )
  {
    ObpDecrementHandleCount2(PROCESS);
    return (unsigned int)v15;
  }
  else
  {
    v16 = 0LL;
    if ( v55 == a2 )
    {
      v17 = *(_QWORD *)v9;
      v59 = 0LL;
      v51 = 0;
      v57 = 0;
      if ( v17 )
      {
        if ( (*(_DWORD *)(v17 + 336) & 8) != 0 || *(_DWORD *)&stru_140E66D40.WaitBlockFill11[16] )
          v57 = 3;
        ObjectSecurity = ObpGetObjectSecurity(v17, &v59, &v51, a5);
        if ( ObjectSecurity < 0 )
          goto LABEL_36;
        v16 = (__int64)v59;
      }
      v19 = *(_QWORD *)v9;
      LOBYTE(v17) = 0;
      v53 = v17;
      v60 = v10;
      if ( v19
        && ((*(_DWORD *)(v19 + 336) & 8) != 0 || *(_DWORD *)&stru_140E66D40.WaitBlockFill11[16])
        && *((_QWORD *)v10 + 8) )
      {
        ObjectSecurity = RtlGetDaclSecurityDescriptor(
                           *((PSECURITY_DESCRIPTOR *)v10 + 8),
                           DaclPresent,
                           &Dacl,
                           DaclDefaulted);
        if ( ObjectSecurity >= 0 )
        {
          v39 = v10;
          v40 = *((_QWORD *)v10 + 8);
          if ( *(_BYTE *)v40 == 1 )
          {
            if ( Dacl )
            {
              LOBYTE(v17) = v53;
            }
            else
            {
              if ( (*(_WORD *)(v40 + 2) & 0x1000) == 0 )
              {
                v41 = v10[1];
                v10 = v67;
                v67[0] = *v39;
                v60 = v67;
                v42 = v39[2];
                v67[1] = v41;
                v43 = v39[3];
                v67[2] = v42;
                v44 = v39[4];
                v67[3] = v43;
                v45 = v39[5];
                v68 = v44;
                v46 = v39[6];
                v69 = v45;
                v47 = v39[8];
                v70 = v46;
                v71 = v39[7];
                v48 = v39[9];
                v72 = v47;
                v73 = v48;
                *(_QWORD *)&v68 = 0LL;
              }
              LOBYTE(v17) = v53;
            }
            goto LABEL_13;
          }
          ObjectSecurity = -1073741736;
        }
        if ( !v16 )
          goto LABEL_36;
        ObReleaseObjectSecurityEx(v16, v51, *(_QWORD *)v9);
        goto LABEL_30;
      }
LABEL_13:
      v20 = *((_QWORD *)v10 + 8);
      if ( !v20 )
      {
        LODWORD(v17) = (unsigned __int8)v17;
        if ( v57 )
          LODWORD(v17) = 1;
        v53 = v17;
      }
      Dacl = 0LL;
      v21 = (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
      v54 = 0;
      v59 = 0LL;
      P = 0LL;
      LODWORD(Dacl) = 8;
      v22 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v21];
      ObjectSecurity = SeComputeAutoInheritByObjectTypeEx((__int64)v22, v20, v16, &v54, &Dacl);
      if ( ObjectSecurity < 0 )
        goto LABEL_25;
      v24 = v57 | v54;
      v54 |= v57;
      if ( (_BYTE)v53 )
      {
        ObjectSecurity = SeAssignSecurityEx2(
                           0,
                           *((_QWORD *)v60 + 8),
                           (int)&P,
                           0LL,
                           v22 == ObpDirectoryObjectType,
                           0,
                           0LL,
                           (__int64)(v60 + 2),
                           (__int64)&v22->TypeInfo.GenericMapping);
        if ( ObjectSecurity < 0 )
          goto LABEL_25;
        v24 = v54;
      }
      LODWORD(v25) = (_DWORD)P;
      if ( !P )
        v25 = *((_QWORD *)v60 + 8);
      v26 = SeAssignSecurityEx2(
              v16,
              v25,
              (int)&v59,
              0LL,
              v22 == ObpDirectoryObjectType,
              v24,
              &Dacl,
              (__int64)(v60 + 2),
              (__int64)&v22->TypeInfo.GenericMapping);
      v27 = P;
      ObjectSecurity = v26;
      if ( v26 >= 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        ObjectSecurity = guard_dispatch_icall_no_overrides((__int64)a2, 3LL);
        if ( ObjectSecurity >= 0 )
          goto LABEL_25;
        v27 = v59;
      }
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
LABEL_25:
      if ( !v16 )
      {
        if ( ObjectSecurity >= 0 )
        {
          LOBYTE(v23) = 1;
          SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), *((unsigned __int8 *)a6 + 16), v23);
          v49 = v62;
          *((_QWORD *)a6 + 4) = 0LL;
          *((_QWORD *)v49 + 8) = 0LL;
          goto LABEL_31;
        }
LABEL_36:
        v32 = Object[1];
        v33 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v32 = *v33;
        *v33 = 0LL;
        v34 = (char *)v33[1];
        v35 = Object[0];
        ObpUnlockDirectory(Object);
        ExFreePoolWithTag(v33, 0);
        ObfDereferenceObjectWithTag(v35, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v34 - 24) ^ ((unsigned __int16)((_WORD)v34 - 48) >> 8))) == ObpDirectoryObjectType->Index )
          ObpDeleteDirectoryName(v34);
        else
          ObfDereferenceObjectWithTag(v34, 0x6944624Fu);
        ObpReleaseLookupContext((__int64)Object);
        ObpDecrementHandleCount2(PROCESS);
        return (unsigned int)ObjectSecurity;
      }
      v28 = *(_QWORD *)v9;
      if ( v51 )
      {
        ExFreePoolWithTag((PVOID)v16, 0);
      }
      else
      {
        _m_prefetchw((const void *)(v28 - 8));
        v29 = *(_QWORD *)(v28 - 8);
        while ( (v16 ^ (unsigned __int64)v29) < 0xF )
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 - 8), v29 + 1, v29);
          if ( v30 == v29 )
            goto LABEL_30;
        }
        ObDereferenceSecurityDescriptor(v16, 1LL);
      }
LABEL_30:
      if ( ObjectSecurity >= 0 )
      {
LABEL_31:
        ObpReleaseLookupContext((__int64)Object);
        goto LABEL_32;
      }
      goto LABEL_36;
    }
    if ( Object[0] )
    {
      v16 = (__int64)v55 - 48;
      ObpReferenceNamedObject((__int64)v55 - 48);
    }
    ObpReleaseLookupContext((__int64)Object);
    v36 = PROCESS;
    ObpDecrementHandleCount2(PROCESS);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v16 )
        ObpDereferenceNamedObject(v16);
      ObfDereferenceObject(v55);
      return 3221225525LL;
    }
    else
    {
      v37 = v55;
      *((_DWORD *)v10 + 4) = *((_DWORD *)v10 + 6);
      *((_DWORD *)v10 + 5) = 0;
      v38 = ObpGrantAccess(1LL, v37, v10, a5, *a6, a3);
      if ( v38 >= 0 )
      {
        LOBYTE(Index) = a5;
        ObjectSecurity = ObpIncrementHandleCountEx(1LL, a3, v36, v55, Index, *a6, 0LL);
        if ( v16 )
          ObpDereferenceNamedObject(v16);
        if ( ObjectSecurity < 0 )
        {
          ObfDereferenceObject(v55);
          return (unsigned int)ObjectSecurity;
        }
LABEL_32:
        *v66 = v55;
        return (unsigned int)ObjectSecurity;
      }
      if ( v16 )
        ObpDereferenceNamedObject(v16);
      ObfDereferenceObject(v55);
      return (unsigned int)v38;
    }
  }
}
