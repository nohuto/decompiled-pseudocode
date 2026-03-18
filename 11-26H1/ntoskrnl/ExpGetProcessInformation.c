/*
 * XREFs of ExpGetProcessInformation @ 0x14096767C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x14025167C (KeFlushProcessWriteBuffers.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PsQueryThreadStartAddress @ 0x140418630 (PsQueryThreadStartAddress.c)
 *     PsIsProcessInSilo @ 0x14043D820 (PsIsProcessInSilo.c)
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     RtlQueryPackageIdentity @ 0x140460890 (RtlQueryPackageIdentity.c)
 *     KeGetProcessPpmPolicy @ 0x14046DC90 (KeGetProcessPpmPolicy.c)
 *     PsGetProcessActiveThreadCount @ 0x1404E5A20 (PsGetProcessActiveThreadCount.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     PsQueryProcessEnergyValues @ 0x140952980 (PsQueryProcessEnergyValues.c)
 *     ObGetProcessHandleCount @ 0x1409533C0 (ObGetProcessHandleCount.c)
 *     PsQueryProcessAttributes @ 0x1409675B0 (PsQueryProcessAttributes.c)
 *     ExpGetNextProcessThread @ 0x140968C70 (ExpGetNextProcessThread.c)
 *     ExpCopyProcessInfo @ 0x140968E30 (ExpCopyProcessInfo.c)
 *     ExGetNextProcess @ 0x140969F30 (ExGetNextProcess.c)
 *     ExpSysInfoShouldSkipProcess @ 0x14096A180 (ExpSysInfoShouldSkipProcess.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409E78E0 (ExCheckFullProcessInformationAccess.c)
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 */

__int64 __fastcall ExpGetProcessInformation(char *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  unsigned int v7; // esi
  __int64 v8; // rcx
  char *v9; // r12
  bool v10; // cf
  unsigned int v11; // r14d
  char PreviousMode; // r13
  __int64 result; // rax
  PEPROCESS NextProcess; // r15
  int v15; // edi
  char *v16; // r12
  int v17; // r13d
  PVOID *i; // rdx
  __int64 NextProcessThread; // rax
  PVOID *v20; // r14
  int v21; // edi
  unsigned int v22; // r14d
  unsigned __int64 ThreadStartAddress; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  char *v27; // r14
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  char *v30; // rax
  _OWORD *v31; // rcx
  __int64 v32; // rdx
  int v33; // r11d
  __int64 *LastRebalanceQpc; // r8
  unsigned __int64 v35; // rcx
  _WORD *v36; // r10
  _WORD *v37; // rdx
  int v38; // eax
  unsigned int v39; // r9d
  unsigned __int64 v40; // r13
  unsigned int v41; // r8d
  char *v42; // r14
  char v43; // cl
  int SessionId; // r14d
  unsigned int v45; // ecx
  char *v46; // r12
  char *v47; // r14
  _DWORD *v48; // rcx
  _DWORD *v49; // rax
  __int64 v50; // r8
  int v51; // eax
  int ProcessActiveThreadCount; // eax
  int ProcessHandleCount; // eax
  char *v54; // r14
  unsigned int *v55; // rcx
  __int64 v56; // r14
  ULONG_PTR v57; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 *v59; // rdx
  unsigned int v60; // r13d
  unsigned int v61; // r14d
  int v62; // edx
  unsigned int *v63; // r13
  unsigned int v64; // edx
  char v65; // dl
  int v66; // r8d
  char v67; // cl
  int v68; // eax
  bool IsUserAddress; // al
  int v70; // eax
  int *v71; // rcx
  int v72; // eax
  int *v73; // rcx
  _DWORD *v74; // rcx
  int v75; // eax
  char v76; // [rsp+30h] [rbp-908h]
  int v77; // [rsp+34h] [rbp-904h]
  int v78; // [rsp+3Ch] [rbp-8FCh]
  bool v79; // [rsp+44h] [rbp-8F4h]
  unsigned int *Object; // [rsp+48h] [rbp-8F0h]
  char v81[8]; // [rsp+50h] [rbp-8E8h] BYREF
  unsigned int *v82; // [rsp+58h] [rbp-8E0h]
  unsigned int Size; // [rsp+60h] [rbp-8D8h]
  bool Size_4; // [rsp+64h] [rbp-8D4h]
  PEPROCESS v85; // [rsp+68h] [rbp-8D0h]
  char *v86; // [rsp+70h] [rbp-8C8h]
  unsigned int v87; // [rsp+78h] [rbp-8C0h]
  int v88; // [rsp+7Ch] [rbp-8BCh]
  unsigned int *v89; // [rsp+80h] [rbp-8B8h]
  void *v90; // [rsp+88h] [rbp-8B0h]
  char *v91; // [rsp+90h] [rbp-8A8h]
  int v92; // [rsp+98h] [rbp-8A0h] BYREF
  unsigned int v93; // [rsp+9Ch] [rbp-89Ch]
  int IsRestrictedCaller; // [rsp+A0h] [rbp-898h]
  size_t v95; // [rsp+A8h] [rbp-890h] BYREF
  size_t v96; // [rsp+B0h] [rbp-888h] BYREF
  int v97; // [rsp+B8h] [rbp-880h]
  void *v98; // [rsp+C0h] [rbp-878h]
  char *v99; // [rsp+C8h] [rbp-870h]
  char *v100; // [rsp+D0h] [rbp-868h]
  unsigned int v101; // [rsp+D8h] [rbp-860h]
  char *v102; // [rsp+110h] [rbp-828h]
  _WORD *v103; // [rsp+118h] [rbp-820h]
  __m128i v104; // [rsp+120h] [rbp-818h]
  __int128 v105; // [rsp+130h] [rbp-808h] BYREF
  char *v106; // [rsp+150h] [rbp-7E8h]
  unsigned __int64 CurrentServerSilo; // [rsp+158h] [rbp-7E0h]
  __int128 v108; // [rsp+160h] [rbp-7D8h] BYREF
  __int128 v109; // [rsp+170h] [rbp-7C8h]
  __int128 v110; // [rsp+180h] [rbp-7B8h]
  _QWORD Src[3]; // [rsp+190h] [rbp-7A8h] BYREF
  int v112; // [rsp+1A8h] [rbp-790h]
  unsigned __int64 v113; // [rsp+1B0h] [rbp-788h]
  __int128 v114; // [rsp+1B8h] [rbp-780h]
  int v115; // [rsp+1C8h] [rbp-770h]
  int v116; // [rsp+1CCh] [rbp-76Ch]
  unsigned int v117; // [rsp+1D0h] [rbp-768h]
  int v118; // [rsp+1D4h] [rbp-764h]
  int v119; // [rsp+1D8h] [rbp-760h]
  __int128 v120; // [rsp+1E0h] [rbp-758h]
  __int64 v121; // [rsp+1F0h] [rbp-748h]
  __int64 v122; // [rsp+1F8h] [rbp-740h]
  __int64 v123; // [rsp+200h] [rbp-738h]
  __int64 v124; // [rsp+208h] [rbp-730h]
  __int64 v125; // [rsp+210h] [rbp-728h]
  __m128i v126; // [rsp+220h] [rbp-718h]
  __m128i v127; // [rsp+230h] [rbp-708h]
  __m128i v128; // [rsp+240h] [rbp-6F8h]
  __m128i v129; // [rsp+250h] [rbp-6E8h]
  _QWORD v130[7]; // [rsp+260h] [rbp-6D8h] BYREF
  int v131; // [rsp+298h] [rbp-6A0h]
  __int64 v132; // [rsp+2A0h] [rbp-698h]
  __int64 v133; // [rsp+2C0h] [rbp-678h]
  __int64 v134; // [rsp+2F0h] [rbp-648h]
  _BYTE v135[32]; // [rsp+360h] [rbp-5D8h] BYREF
  __int64 v136; // [rsp+380h] [rbp-5B8h]
  __int64 v137; // [rsp+3D0h] [rbp-568h] BYREF
  int v138; // [rsp+3D8h] [rbp-560h]
  __int128 v139; // [rsp+3E0h] [rbp-558h] BYREF
  __int128 v140; // [rsp+3F0h] [rbp-548h]
  __int64 v141; // [rsp+400h] [rbp-538h]
  __int64 v142; // [rsp+408h] [rbp-530h]
  _BYTE v143[12]; // [rsp+410h] [rbp-528h]
  char v144; // [rsp+420h] [rbp-518h] BYREF
  int v145; // [rsp+530h] [rbp-408h]
  __int64 v146; // [rsp+538h] [rbp-400h]
  int v147; // [rsp+540h] [rbp-3F8h]
  unsigned __int64 CycleTime; // [rsp+548h] [rbp-3F0h]
  _BYTE v149[80]; // [rsp+550h] [rbp-3E8h] BYREF
  _OWORD v150[28]; // [rsp+5A0h] [rbp-398h] BYREF
  wchar_t v151[72]; // [rsp+760h] [rbp-1D8h] BYREF
  wchar_t v152[128]; // [rsp+7F0h] [rbp-148h] BYREF

  v82 = a3;
  v99 = a1;
  v106 = a1;
  v89 = a3;
  memset_0(v150, 0, 0x1B8uLL);
  v137 = 0LL;
  v138 = 0;
  v78 = 0;
  v85 = 0LL;
  memset_0(v135, 0, 0x68uLL);
  v81[0] = 0;
  Object = 0LL;
  v105 = 0LL;
  v7 = 0;
  memset_0(v149, 0, 0x44uLL);
  v9 = 0LL;
  v86 = 0LL;
  v92 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 == 252 )
  {
    v79 = 0;
    v87 = 48;
    Size = 0;
    v90 = v99;
    v91 = 0LL;
LABEL_5:
    v98 = 0LL;
    goto LABEL_6;
  }
  v90 = 0LL;
  if ( a5 != 253 )
  {
    v87 = 624;
    v91 = v99;
    v75 = 136;
    v8 = 80LL;
    if ( a5 == 5 )
      v75 = 80;
    Size = v75;
    v79 = a5 != 5;
    goto LABEL_5;
  }
  v79 = 0;
  v87 = 12;
  v7 = 12;
  Size = 0;
  v98 = v99;
  v91 = 0LL;
LABEL_6:
  v101 = v87;
  v10 = a2 < v87;
  if ( a2 < v87 )
  {
    if ( !a3 )
      return 3221225476LL;
    v10 = a2 < v87;
  }
  v11 = v10 ? 0xC0000004 : 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v76 = PreviousMode;
  if ( a5 != 148 || (LOBYTE(v8) = PreviousMode, result = ExCheckFullProcessInformationAccess(v8), (int)result >= 0) )
  {
    LOBYTE(v8) = PreviousMode;
    IsRestrictedCaller = ExIsRestrictedCaller(v8, &v92);
    Size_4 = IsRestrictedCaller != 0;
    if ( (unsigned int)(a5 - 252) > 1 && a2 )
      KeFlushProcessWriteBuffers(1LL);
    CurrentServerSilo = PsGetCurrentServerSilo();
    NextProcess = (PEPROCESS)PsIdleProcess;
    v85 = (PEPROCESS)PsIdleProcess;
    v77 = v11;
    while ( 1 )
    {
      if ( !NextProcess )
      {
        v68 = a5;
        if ( v77 < 0 )
          goto LABEL_183;
        if ( a5 == 252 )
        {
          if ( !v90 )
          {
LABEL_183:
            if ( v82 )
              *v82 = v7;
            if ( v68 == 253 )
            {
              if ( PreviousMode )
                RtlCopyToUser(v98, &v137, 0xCuLL);
              else
                RtlCopyVolatileMemory(v98, &v137, 0xCuLL);
              v51 = v77;
LABEL_251:
              v77 = v51;
            }
LABEL_111:
            v20 = (PVOID *)Object;
LABEL_252:
            if ( NextProcess && NextProcess != PsIdleProcess )
              ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
            if ( v20 && v20[68] != PsIdleProcess )
              ObfDereferenceObjectWithTag(v20, 0x6E457350u);
            return (unsigned int)v77;
          }
          v74 = v91;
        }
        else
        {
          v74 = v91;
          if ( !v91 )
            goto LABEL_183;
        }
        if ( a5 == 252 )
        {
          if ( PreviousMode )
          {
            v74 = v90;
            goto LABEL_244;
          }
          *(_DWORD *)v90 = 0;
        }
        else if ( PreviousMode )
        {
LABEL_244:
          RtlWriteULongToUser(v74, 0);
        }
        else
        {
          *v74 = 0;
        }
        v68 = a5;
        goto LABEL_183;
      }
      if ( !(unsigned __int8)ExpSysInfoShouldSkipProcess(NextProcess) && (!a4 || NextProcess != PsIdleProcess) )
      {
        SessionId = PsGetSessionId((__int64)NextProcess);
        if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(NextProcess, CurrentServerSilo) )
          break;
      }
LABEL_74:
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = (PEPROCESS)ExGetNextProcess(NextProcess);
      v85 = NextProcess;
    }
    if ( a5 == 253 )
    {
      LODWORD(v137) = v137 + 1;
      ProcessActiveThreadCount = PsGetProcessActiveThreadCount((__int64)NextProcess);
      HIDWORD(v137) += ProcessActiveThreadCount;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)NextProcess, 0LL);
      v138 += ProcessHandleCount;
LABEL_57:
      v33 = v78;
      goto LABEL_58;
    }
    v45 = v101 + v7;
    if ( a5 == 252 )
    {
      v90 = &v106[v7];
      v33 = v101;
      v78 = v101;
      if ( v45 < v7 )
      {
        v7 = -1;
        v15 = -1073741675;
      }
      else
      {
        v7 += v101;
        v15 = 0;
      }
      if ( v15 < 0 )
        goto LABEL_110;
      if ( v7 > a2 )
      {
        v77 = -1073741820;
        if ( !v82 )
          goto LABEL_111;
      }
      if ( v77 < 0 )
      {
LABEL_58:
        if ( a5 == 253 )
          goto LABEL_73;
        if ( NextProcess != PsIdleProcess )
        {
          if ( NextProcess == PsInitialSystemProcess )
          {
            LastRebalanceQpc = &ExpSystemProcessName;
          }
          else if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
          {
            LastRebalanceQpc = &ExpSecureSystemProcessName;
          }
          else
          {
            LastRebalanceQpc = (__int64 *)L"$&";
            if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x4000000000000000LL) == 0 )
              LastRebalanceQpc = (__int64 *)NextProcess[1].LastRebalanceQpc;
          }
          v35 = *(unsigned __int16 *)LastRebalanceQpc;
          v88 = v35;
          v93 = v35;
          v36 = (_WORD *)LastRebalanceQpc[1];
          v37 = v36;
          v103 = v36;
          v38 = v35;
          v39 = v35;
          if ( a5 != 148 && (_DWORD)v35 )
          {
            v37 = &v36[v35 >> 1];
            v103 = v37;
            while ( v37 != v36 )
            {
              v103 = --v37;
              if ( *v37 == 92 )
              {
                v103 = ++v37;
                break;
              }
            }
            LODWORD(v35) = v35 - 2 * (v37 - v36);
            v93 = v35;
            v38 = v35;
            v39 = v35;
          }
          v40 = v39;
          v41 = (v38 + 9) & 0xFFFFFFF8;
          v93 = v41;
          v88 = v41;
          if ( v41 + v7 < v7 )
          {
            v7 = -1;
            v15 = -1073741675;
          }
          else
          {
            v7 += v41;
            v15 = 0;
          }
          if ( v15 < 0 )
            goto LABEL_110;
          v78 = v41 + v33;
          if ( v7 <= a2 )
          {
            v54 = v9;
            v100 = v9;
            if ( (_DWORD)v35 )
            {
              if ( v76 )
                RtlCopyToUser(v9, v37, v39);
              else
                RtlCopyVolatileMemory(v9, v37, v39);
              v54 = &v9[2 * (v40 >> 1)];
              v100 = v54;
            }
            v43 = v76;
            if ( v76 )
            {
              RtlWriteUShortToUser(v54, 0);
              v43 = v76;
            }
            else
            {
              *(_WORD *)v54 = 0;
            }
            v42 = v54 + 2;
            v100 = v42;
            LOWORD(v41) = v93;
          }
          else
          {
            v77 = -1073741820;
            if ( !v82 )
              goto LABEL_111;
            LOWORD(v42) = 0;
            v100 = 0LL;
            v43 = v76;
          }
          if ( v77 < 0 )
            goto LABEL_73;
          v104.m128i_i32[1] = 0;
          v104.m128i_i16[0] = (_WORD)v42 - (_WORD)v9 - 2;
          v104.m128i_i16[1] = v41;
          v104.m128i_i64[1] = (__int64)v9;
          if ( a5 == 252 )
          {
            v126 = v104;
            v47 = (char *)v90 + 32;
            if ( !v43 )
              goto LABEL_95;
            v127 = v104;
          }
          else
          {
            v128 = v104;
            v47 = v91 + 56;
            if ( !v43 )
            {
LABEL_95:
              *(_DWORD *)v47 = v104.m128i_i32[0];
              *((_QWORD *)v47 + 1) = v9;
              goto LABEL_100;
            }
            v129 = v104;
          }
          RtlWriteULongToUser(v47, _mm_cvtsi128_si32(v104));
          RtlWriteULong64ToUser((_QWORD *)v47 + 1, (__int64)v9);
        }
LABEL_100:
        if ( v77 >= 0 )
        {
          if ( a5 == 252 )
          {
            if ( v76 )
            {
              v48 = v90;
              goto LABEL_104;
            }
            v49 = v90;
          }
          else
          {
            if ( v76 )
            {
              v48 = v91;
LABEL_104:
              RtlWriteULongToUser(v48, v78);
              goto LABEL_73;
            }
            v49 = v91;
          }
          *v49 = v78;
        }
LABEL_73:
        PreviousMode = v76;
        goto LABEL_74;
      }
      v108 = 0LL;
      v109 = 0LL;
      v110 = 0LL;
      *((_QWORD *)&v108 + 1) = NextProcess[1].Header.WaitListHead.Flink;
      *(_QWORD *)&v109 = *(_QWORD *)&NextProcess[1].StackCount.Value;
      *((_QWORD *)&v109 + 1) = NextProcess[3].CycleTime;
      *((_QWORD *)&v110 + 1) = 0LL;
      LODWORD(v110) = 0;
      if ( PreviousMode )
        RtlCopyToUser(v90, &v108, 0x30uLL);
      else
        RtlCopyVolatileMemory(v90, &v108, 0x30uLL);
      v9 = &v99[v7];
      goto LABEL_179;
    }
    v46 = &v106[v7];
    v91 = v46;
    v78 = v101;
    if ( v45 >= v7 )
    {
      v7 += v101;
      v15 = 0;
    }
    else
    {
      v7 = -1;
      v15 = -1073741675;
    }
    if ( v15 < 0 )
      goto LABEL_110;
    memset_0(v135, 0, 0x68uLL);
    if ( v7 <= a2 )
    {
      memset_0(v130, 0, 0x100uLL);
      LOBYTE(v50) = v79;
      v51 = ExpCopyProcessInfo(v130, NextProcess, v50, v135);
      v15 = v51;
      if ( v51 < 0 )
        goto LABEL_251;
      v130[0] = 0LL;
      HIDWORD(v133) = SessionId;
      v132 = 0LL;
      v131 = 0;
      if ( NextProcess == PsIdleProcess )
        v133 = 0LL;
      if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
      {
        v134 = qword_140E2D7A8 << 12;
        v130[1] = qword_140E2D7A8 << 12;
      }
      if ( PreviousMode )
        RtlCopyToUser(v46, v130, 0x100uLL);
      else
        RtlCopyVolatileMemory(v46, v130, 0x100uLL);
      if ( v15 < 0 )
      {
LABEL_110:
        v77 = v15;
        goto LABEL_111;
      }
    }
    else
    {
      v77 = -1073741820;
      if ( !v82 )
        goto LABEL_111;
    }
    v16 = v46 + 256;
    v86 = v16;
    v17 = 0;
    v97 = 0;
    for ( i = 0LL; ; i = v20 )
    {
      NextProcessThread = ExpGetNextProcessThread(NextProcess, i);
      Object = (unsigned int *)NextProcessThread;
      v20 = (PVOID *)NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( !(unsigned __int8)*(_DWORD *)(NextProcessThread + 4) )
      {
        if ( v7 + Size < v7 )
        {
          v7 = -1;
          v21 = -1073741675;
        }
        else
        {
          v7 += Size;
          v21 = 0;
        }
        if ( v21 < 0 )
        {
          v77 = v21;
          goto LABEL_252;
        }
        v22 = Size + v78;
        v78 += Size;
        if ( v7 > a2 )
        {
          v77 = -1073741820;
          if ( !v82 )
            goto LABEL_111;
        }
        else
        {
          KeQueryValuesThread(NextProcessThread, (__int64)&v105);
          if ( BYTE8(v105) == 4 )
          {
            v78 = v22 - Size;
            v7 -= Size;
          }
          else
          {
            memset_0(Src, 0, 0x88uLL);
            v112 = v105;
            v118 = BYTE8(v105);
            v119 = BYTE9(v105);
            v115 = SBYTE10(v105);
            v116 = SBYTE11(v105);
            Src[0] = (unsigned int)KeMaximumIncrement * (unsigned __int64)Object[163];
            Src[1] = (unsigned int)KeMaximumIncrement * (unsigned __int64)Object[183];
            Src[2] = *((_QWORD *)Object + 152);
            v117 = Object[85];
            v114 = *(_OWORD *)(Object + 322);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)Object, 1);
            v24 = ThreadStartAddress;
            if ( v92 || IsRestrictedCaller && !MmIsUserAddress(ThreadStartAddress) )
              v113 = 0LL;
            else
              v113 = v24;
            if ( v79 )
            {
              if ( v92 || IsRestrictedCaller )
              {
                v120 = 0LL;
                v55 = Object;
              }
              else
              {
                v55 = Object;
                *(_QWORD *)&v120 = *((_QWORD *)Object + 7);
                *((_QWORD *)&v120 + 1) = *((_QWORD *)Object + 6);
              }
              v56 = *((_QWORD *)v55 + 172);
              if ( v92
                || IsRestrictedCaller
                && (IsUserAddress = MmIsUserAddress(*((_QWORD *)v55 + 172)), v55 = Object, !IsUserAddress) )
              {
                v121 = 0LL;
              }
              else
              {
                v121 = v56;
              }
              v122 = *((_QWORD *)v55 + 30);
              v123 = 0LL;
              v124 = 0LL;
              v125 = 0LL;
            }
            v97 = ++v17;
            if ( v76 )
              RtlCopyToUser(v16, Src, Size);
            else
              RtlCopyVolatileMemory(v16, Src, Size);
            if ( v76 )
              RtlWriteULongToUser((_DWORD *)v91 + 1, v17);
            else
              *((_DWORD *)v91 + 1) = v17;
            v16 += Size;
            v86 = v16;
          }
        }
        v20 = (PVOID *)Object;
      }
    }
    memset_0(&v139, 0, 0x170uLL);
    v27 = v16;
    v102 = v16;
    v9 = v16 + 368;
    v86 = v9;
    if ( v77 < 0 )
    {
LABEL_56:
      if ( a5 != 148 )
        goto LABEL_57;
      v57 = PsReferencePrimaryTokenWithTag((__int64)NextProcess, 0x746C6644u, v25, v26);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v57 + 48), 1u);
      v59 = **(unsigned __int8 ***)(v57 + 152);
      v60 = 4 * v59[1] + 8;
      if ( v60 <= 0x44 )
        memmove(v149, v59, v60);
      ExReleaseResourceLite(*(PERESOURCE *)(v57 + 48));
      KeLeaveCriticalRegion();
      v93 = v60;
      v96 = 254LL;
      v95 = 130LL;
      if ( (int)RtlQueryPackageIdentity(v57, v152, &v96, v151, &v95, 0LL) < 0 )
      {
        v96 = 0LL;
        v95 = 0LL;
      }
      ObFastDereferenceObject((signed __int64 *)&NextProcess[1].ActiveProcessors, v57, 0x746C6644u);
      v61 = (v60 + 7) & 0xFFFFFFF8;
      v88 = v61;
      if ( v61 + v7 < v7 )
      {
        v7 = -1;
        v15 = -1073741675;
      }
      else
      {
        v7 += v61;
        v15 = 0;
      }
      if ( v15 < 0 )
        goto LABEL_110;
      v62 = v61 + v78;
      v78 += v61;
      if ( v7 <= a2 )
      {
        if ( v76 )
          RtlWriteULongToUser((_DWORD *)v102 + 13, 368);
        else
          *((_DWORD *)v102 + 13) = 368;
        if ( v76 )
          RtlCopyToUser(v9, v149, v60);
        else
          RtlCopyVolatileMemory(v9, v149, v60);
        v63 = v82;
        v9 += v61;
        v86 = v9;
        v62 = v78;
      }
      else
      {
        v77 = -1073741820;
        v63 = v82;
        if ( !v82 )
          goto LABEL_111;
      }
      if ( v96 - 1 <= 0xFFFFFFFE )
      {
        v88 = v96;
        if ( (unsigned int)v96 + v7 < v7 )
        {
          v7 = -1;
          v15 = -1073741675;
        }
        else
        {
          v7 += v96;
          v15 = 0;
        }
        if ( v15 < 0 )
          goto LABEL_110;
        v78 = v96 + v62;
        v64 = a2;
        if ( v7 > a2 )
        {
          v77 = -1073741820;
          if ( !v63 )
            goto LABEL_111;
          goto LABEL_160;
        }
        v70 = (_DWORD)v9 - (_DWORD)v102;
        v71 = (int *)(v102 + 56);
        if ( v76 )
          RtlWriteULongToUser(v71, v70);
        else
          *v71 = v70;
        if ( v76 )
          RtlCopyToUser(v9, v152, (unsigned int)v96);
        else
          RtlCopyVolatileMemory(v9, v152, (unsigned int)v96);
        v9 += (unsigned int)v96;
        v86 = v9;
      }
      v64 = a2;
LABEL_160:
      if ( v95 - 1 > 0xFFFFFFFE )
        goto LABEL_57;
      v88 = v95;
      if ( (unsigned int)v95 + v7 < v7 )
      {
        v7 = -1;
        v15 = -1073741675;
      }
      else
      {
        v7 += v95;
        v15 = 0;
      }
      if ( v15 < 0 )
        goto LABEL_110;
      v33 = v95 + v78;
      v78 += v95;
      if ( v7 > v64 )
      {
        v77 = -1073741820;
        if ( !v63 )
          goto LABEL_111;
        goto LABEL_58;
      }
      v72 = (_DWORD)v9 - (_DWORD)v102;
      v73 = (int *)(v102 + 336);
      if ( v76 )
        RtlWriteULongToUser(v73, v72);
      else
        *v73 = v72;
      if ( v76 )
        RtlCopyToUser(v9, v151, (unsigned int)v95);
      else
        RtlCopyVolatileMemory(v9, v151, (unsigned int)v95);
      v9 += (unsigned int)v95;
LABEL_179:
      v86 = v9;
      goto LABEL_57;
    }
    PsQueryProcessAttributes((__int64)NextProcess, v81, 0LL, v26);
    *(_QWORD *)&v143[4] = 0LL;
    v145 = 0;
    v146 = *(_QWORD *)&NextProcess[3].FreezeCount << 12;
    v142 = v136;
    *(_QWORD *)v143 = v81[0] != 0;
    v28 = NextProcess[3].Padding[4];
    if ( v28 )
    {
      v139 = *(_OWORD *)v28;
      v140 = *(_OWORD *)(v28 + 16);
      v141 = *(_QWORD *)(v28 + 32);
    }
    else
    {
      v139 = 0LL;
      v140 = 0LL;
      v141 = 0LL;
    }
    if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    {
      v29 = *(_DWORD *)v143 & 0xFFFFFFE1 | 2;
    }
    else if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
    {
      v29 = *(_DWORD *)v143 & 0xFFFFFFE1 | 4;
    }
    else if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x4000000000000000LL) != 0 )
    {
      v29 = *(_DWORD *)v143 & 0xFFFFFFE1 | 6;
    }
    else
    {
      if ( !CmpFreezeListLock.RelativeTimerBias || NextProcess != (PEPROCESS)CmpFreezeListLock.RelativeTimerBias )
      {
LABEL_47:
        CycleTime = NextProcess[3].CycleTime;
        PsQueryProcessEnergyValues(NextProcess, v150);
        v30 = &v144;
        v31 = v150;
        v32 = 2LL;
        do
        {
          *(_OWORD *)v30 = *v31;
          *((_OWORD *)v30 + 1) = v31[1];
          *((_OWORD *)v30 + 2) = v31[2];
          *((_OWORD *)v30 + 3) = v31[3];
          *((_OWORD *)v30 + 4) = v31[4];
          *((_OWORD *)v30 + 5) = v31[5];
          *((_OWORD *)v30 + 6) = v31[6];
          v30 += 128;
          *((_OWORD *)v30 - 1) = v31[7];
          v31 += 8;
          --v32;
        }
        while ( v32 );
        *(_OWORD *)v30 = *v31;
        if ( NextProcess[1].Padding[3] )
          v147 = *(_DWORD *)(NextProcess[1].Padding[3] + 1468);
        else
          v147 = 0;
        if ( NextProcess->ProcessTimerDelay )
          goto LABEL_169;
        if ( KeHeteroSystem )
        {
          v66 = KiProcessPolicyToQosMappingTable[(int)KeGetProcessPpmPolicy((__int64)NextProcess)];
          if ( v66 != 7 || (v67 = 1, v65 != 1) )
            v67 = 0;
          if ( PpmPerfQosEnabled && (((v66 - 1) & 0xFFFFFFFA) == 0 || v67) )
LABEL_169:
            *(_DWORD *)v143 |= 0x20u;
        }
        if ( v76 )
          RtlCopyToUser(v27, &v139, 0x170uLL);
        else
          RtlCopyVolatileMemory(v27, &v139, 0x170uLL);
        goto LABEL_56;
      }
      v29 = *(_DWORD *)v143 & 0xFFFFFFE1 | 8;
    }
    *(_DWORD *)v143 = v29;
    goto LABEL_47;
  }
  return result;
}
