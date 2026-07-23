/*
 * XREFs of CmLoadKey @ 0x140ADEAD4
 * Callers:
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmpCmdHiveOpen @ 0x1408BAC48 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140ADF368 (CmpQueryHiveRedirectionFileList.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmLoadKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        struct _KEVENT *a8,
        void *a9,
        char a10,
        __int64 a11,
        ULONG_PTR *a12)
{
  __int64 v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned int v17; // ecx
  unsigned int i; // edx
  __int64 v19; // r8
  struct _PRIVILEGE_SET *Pool; // rax
  int v21; // ecx
  char v22; // bl
  void *v23; // rax
  char v24; // dl
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rsi
  __int64 v28; // r12
  int KeyCommon; // eax
  __int64 v30; // r8
  int v32; // r11d
  unsigned int v33; // r8d
  char v34; // r9
  __int64 v35; // rcx
  int v36; // r9d
  int v37; // r10d
  int v38; // edx
  int v39; // r9d
  int v40; // r10d
  unsigned __int8 *v41; // rdx
  unsigned __int8 v42; // r9
  NTSTATUS v43; // ebx
  int Conflict; // ebx
  UNICODE_STRING *p_Destination; // rax
  void *v46; // rcx
  NTSTATUS v47; // eax
  int Object; // [rsp+20h] [rbp-E0h]
  char v49[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v50[4]; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  PVOID v53; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v57; // [rsp+98h] [rbp-68h]
  struct _KEVENT *v58; // [rsp+A0h] [rbp-60h]
  void *v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING Destination; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+100h] [rbp+0h] BYREF
  PPRIVILEGE_SET *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  PVOID *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  char *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  char *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  PVOID *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  __int64 v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  __int64 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  __int64 v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  __int64 v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  __int64 v85; // [rsp+1C0h] [rbp+C0h]
  int v86; // [rsp+1C8h] [rbp+C8h]
  int v87; // [rsp+1CCh] [rbp+CCh]
  __int64 *v88; // [rsp+1D0h] [rbp+D0h]
  __int64 v89; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+1E0h] [rbp+E0h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+200h] [rbp+100h]
  __int64 v92; // [rsp+208h] [rbp+108h]
  __int64 *v93; // [rsp+210h] [rbp+110h]
  __int64 v94; // [rsp+218h] [rbp+118h]
  __int64 *v95; // [rsp+220h] [rbp+120h]
  __int64 v96; // [rsp+228h] [rbp+128h]

  v56 = a6;
  v58 = a8;
  v59 = a9;
  v15 = 0LL;
  v60 = a11;
  v57 = a12;
  v16 = *(unsigned __int16 **)(a1 + 16);
  v50[0] = 0;
  Destination = 0LL;
  v61 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v52 = 0LL;
  Handle = 0LL;
  v17 = *v16;
  LODWORD(v53) = 0;
  if ( (unsigned __int16)v17 >= 2u )
  {
    for ( i = v17 >> 1; i; *(_WORD *)v19 -= 2 )
    {
      v19 = *(_QWORD *)(a1 + 16);
      if ( *(_WORD *)(*(_QWORD *)(v19 + 8) + 2LL * --i) != 92 )
        break;
    }
  }
  if ( **(_WORD **)(a1 + 16) < 2u )
  {
    v26 = -1073741811;
    goto LABEL_69;
  }
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
  Privileges = Pool;
  if ( !Pool )
  {
    v26 = -1073741670;
    goto LABEL_69;
  }
  Destination.Buffer = (wchar_t *)Pool;
  Destination.MaximumLength = 260;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(*(PUNICODE_STRING *)(a1 + 16), &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = (UNICODE_STRING *)a2;
    a2 = p_Destination;
  }
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    v26 = -1073741431;
    goto LABEL_23;
  }
  v21 = (a3 & 0x2000) != 0 ? 3 : 0;
  v22 = v21 | 8;
  if ( (a3 & 0x4000) == 0 )
    v22 = v21;
  v23 = (void *)CmpAllocatePool(0x100uLL);
  v15 = (__int64)v23;
  if ( !v23 )
  {
    v26 = -1073741670;
    goto LABEL_22;
  }
  v49[0] = 1;
  v24 = v22 | 4;
  if ( !v56 )
    v24 = v22;
  v25 = CmpCmdHiveOpen(
          (int)a2,
          1,
          (int)v49,
          (__int64)&v52,
          ((a3 & 0xFFFFF223 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1190001,
          v24,
          (__int64)v59,
          (__int64)v50,
          v23);
  v26 = v25;
  if ( v25 < 0 )
  {
    if ( v25 != -1073741757 )
    {
      SetFailureLocation(v15, 0, 31, v25, 16);
      v27 = v52;
      goto LABEL_20;
    }
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, (int *)&v53, 8u, v59, 0LL, 0LL, 0LL, v15) < 0 )
    {
      Object = 32;
    }
    else
    {
      v53 = 0LL;
      v43 = ObReferenceObjectByHandle(
              Handle,
              0,
              (POBJECT_TYPE)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink,
              0,
              &v53,
              0LL);
      ZwClose(Handle);
      if ( v43 < 0 )
      {
        Object = 48;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)v53, a3, a5, (__int64)v58, v15, a10, v60, (__int64)v57);
        ObfDereferenceObject(v53);
        if ( Conflict >= 0 )
        {
          v27 = v52;
          goto LABEL_19;
        }
        Object = 64;
      }
    }
    v26 = -1073741757;
    SetFailureLocation(v15, 0, 31, -1073741757, Object);
    v27 = v52;
    goto LABEL_20;
  }
  v27 = v52;
  if ( (a3 & 0x2000) != 0 )
  {
    v46 = *(void **)(v52 + 1544);
    Handle = 0LL;
    v47 = ObReferenceObjectByHandle(
            v46,
            0,
            (POBJECT_TYPE)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink,
            0,
            &Handle,
            0LL);
    v26 = v47;
    if ( v47 < 0 )
    {
      SetFailureLocation(v15, 0, 31, v47, 80);
      goto LABEL_20;
    }
    v28 = v61;
    v26 = CmpResolveHiveLoadConflict(a1, (_DWORD)Handle, a3, v61, (__int64)v58, v15, a10, v60, (__int64)v57);
    ObfDereferenceObject(Handle);
    if ( v26 < 0 )
    {
      if ( v26 == -1073741275 )
        goto LABEL_16;
      SetFailureLocation(v15, 0, 31, v26, 96);
LABEL_20:
      if ( v27 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        CmpDestroyHive((_QWORD *)v27);
        CmpDetachFromRegistryProcess(&ApcState);
      }
      goto LABEL_22;
    }
LABEL_19:
    v26 = 0;
    goto LABEL_20;
  }
  v28 = v61;
LABEL_16:
  if ( a7 )
    *(_DWORD *)(v27 + 4120) |= 0x2000u;
  KeyCommon = CmpLoadKeyCommon(v27, (_QWORD *)a1, a3, v28, v56, v58, a10, v57, v49[0], v50[0], v15);
  v26 = KeyCommon;
  v27 = 0LL;
  if ( KeyCommon >= 0 )
    goto LABEL_19;
  SetFailureLocation(v15, 0, 31, KeyCommon, 112);
LABEL_22:
  CmpReleaseHiveLoadUnloadRundown();
LABEL_23:
  CmSiFreeMemory(Privileges);
  if ( v26 >= 0 )
  {
    if ( (unsigned int)dword_140E09EE8 > 5
      && (*(_QWORD *)&qword_140E09EF8 & 0x400000000008LL) != 0
      && (qword_140E09F00 & 0x400000000008LL) == qword_140E09F00 )
    {
      v56 = 0x1000000LL;
      p_Privileges = &Privileges;
      v41 = (unsigned __int8 *)&byte_140057131;
      v96 = 8LL;
      v93 = &v52;
      v42 = 5;
      v95 = &v56;
LABEL_44:
      Privileges = (PPRIVILEGE_SET)1;
      v92 = 8LL;
      LODWORD(v52) = v26;
      v94 = 4LL;
      tlgWriteAgg((__int64)&dword_140E09EE8, v41, v30, v42, &v90);
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  if ( v15 )
  {
    v32 = *(unsigned __int16 *)(v15 + 8);
    if ( *(_DWORD *)(v15 + 8) || *(_BYTE *)(v15 + 394) )
    {
      v33 = dword_140E09EE8;
      if ( (unsigned int)dword_140E09EE8 > 5 )
      {
        v34 = qword_140E09EF8;
        v35 = qword_140E09F00;
        if ( (*(_QWORD *)&qword_140E09EF8 & 0x400000000008LL) != 0
          && (qword_140E09F00 & 0x400000000008LL) == qword_140E09F00 )
        {
          Privileges = (PPRIVILEGE_SET)1;
          v36 = *(unsigned __int16 *)(v15 + 10);
          v37 = *(unsigned __int8 *)(v15 + 394);
          v65 = &Privileges;
          v67 = (PVOID *)&v52;
          v69 = v49;
          v71 = (char *)&v51;
          v73 = &v53;
          v77 = v15 + 12;
          v81 = v15 + 108;
          v82 = (unsigned int)(12 * v36);
          v85 = v15 + 396;
          v88 = &v56;
          LOWORD(v53) = v37;
          v51 = v36;
          v78 = (unsigned int)(12 * v32);
          v79 = v15 + 10;
          v66 = 8LL;
          LODWORD(v52) = v26;
          v68 = 4LL;
          *(_WORD *)v49 = v32;
          v70 = 2LL;
          v72 = 2LL;
          v74 = 2LL;
          v75 = v15 + 8;
          v76 = 2LL;
          v80 = 2LL;
          v83 = v15 + 394;
          v84 = 2LL;
          v86 = 8 * v37;
          v87 = 0;
          v56 = 0x1000000LL;
          v89 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&byte_140056F8B, v15 + 394, 0xEu, &v64);
          v35 = qword_140E09F00;
          v34 = qword_140E09EF8;
          v33 = dword_140E09EE8;
        }
        if ( v33 > 5 && (v34 & 8) != 0 && (v35 & 8) == v35 )
        {
          v38 = *(unsigned __int16 *)(v15 + 8);
          v39 = *(unsigned __int16 *)(v15 + 10);
          v40 = *(unsigned __int8 *)(v15 + 394);
          v65 = (PPRIVILEGE_SET *)&v52;
          v67 = &v53;
          v69 = (char *)&v51;
          v71 = v49;
          v75 = v15 + 12;
          v76 = (unsigned int)(12 * v38);
          v79 = v15 + 108;
          v80 = (unsigned int)(12 * v39);
          v83 = v15 + 396;
          *(_WORD *)v49 = v40;
          LOWORD(v53) = v38;
          v51 = v39;
          v77 = v15 + 10;
          v81 = v15 + 394;
          LODWORD(v52) = v26;
          v66 = 4LL;
          v68 = 2LL;
          v70 = 2LL;
          v72 = 2LL;
          v73 = (PVOID *)(v15 + 8);
          v74 = 2LL;
          v78 = 2LL;
          v82 = 2LL;
          v84 = (unsigned int)(8 * v40);
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)&dword_140057184,
            0LL,
            0LL,
            0xCu,
            &v64);
        }
      }
      goto LABEL_26;
    }
  }
LABEL_69:
  if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
  {
    v42 = 4;
    p_Privileges = &Privileges;
    v41 = (unsigned __int8 *)byte_1400570EB;
    v93 = &v52;
    goto LABEL_44;
  }
LABEL_25:
  if ( v15 )
LABEL_26:
    CmSiFreeMemory((PPRIVILEGE_SET)v15);
  return (unsigned int)v26;
}
