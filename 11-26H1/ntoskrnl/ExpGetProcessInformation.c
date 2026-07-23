/*
 * XREFs of ExpGetProcessInformation @ 0x1409DC1B8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeQueryValuesThread @ 0x140305730 (KeQueryValuesThread.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsQueryThreadStartAddress @ 0x14040CC40 (PsQueryThreadStartAddress.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlQueryPackageIdentity @ 0x140459DD0 (RtlQueryPackageIdentity.c)
 *     KeGetProcessPpmPolicy @ 0x140467410 (KeGetProcessPpmPolicy.c)
 *     PsGetProcessActiveThreadCount @ 0x1404DEFC0 (PsGetProcessActiveThreadCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ExGetNextProcess @ 0x14091E590 (ExGetNextProcess.c)
 *     ExpSysInfoShouldSkipProcess @ 0x14091E7E0 (ExpSysInfoShouldSkipProcess.c)
 *     ExpCopyProcessInfo @ 0x14091E820 (ExpCopyProcessInfo.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 *     ObGetProcessHandleCount @ 0x1409CED00 (ObGetProcessHandleCount.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     ExpGetNextProcessThread @ 0x1409DD7B0 (ExpGetNextProcessThread.c)
 *     PsQueryProcessAttributes @ 0x1409DD970 (PsQueryProcessAttributes.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 */

NTSTATUS __fastcall ExpGetProcessInformation(char *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  unsigned int v7; // esi
  __int64 v8; // rcx
  char *v9; // r12
  bool v10; // cf
  unsigned int v11; // r14d
  char PreviousMode; // r13
  NTSTATUS result; // eax
  LIST_ENTRY *NextProcess; // r15
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
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v29; // eax
  char *v30; // rax
  _OWORD *v31; // rcx
  __int64 v32; // rdx
  int v33; // r11d
  __int64 *Flink; // r8
  unsigned __int64 v35; // rcx
  _WORD *v36; // r10
  _WORD *v37; // rdx
  int v38; // eax
  unsigned int v39; // r9d
  size_t v40; // r13
  char *v41; // r14
  char v42; // cl
  int SessionId; // r14d
  unsigned int v44; // ecx
  char *v45; // r12
  char *v46; // r14
  _DWORD *v47; // rcx
  _DWORD *v48; // rax
  int v49; // eax
  int ProcessActiveThreadCount; // eax
  int ProcessHandleCount; // eax
  char *v52; // r14
  unsigned int *v53; // rcx
  __int64 v54; // r14
  ULONG_PTR v55; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 *v57; // rdx
  unsigned int v58; // r13d
  unsigned int v59; // r14d
  int v60; // edx
  unsigned int *v61; // r13
  unsigned int v62; // edx
  char v63; // dl
  int v64; // r8d
  char v65; // cl
  int v66; // eax
  bool IsUserAddress; // al
  int v68; // eax
  int *v69; // rcx
  int v70; // eax
  int *v71; // rcx
  _DWORD *v72; // rcx
  int v73; // eax
  char v74; // [rsp+30h] [rbp-908h]
  int v75; // [rsp+34h] [rbp-904h]
  int v76; // [rsp+3Ch] [rbp-8FCh]
  char v77; // [rsp+44h] [rbp-8F4h]
  unsigned int *Object; // [rsp+48h] [rbp-8F0h]
  char v79[8]; // [rsp+50h] [rbp-8E8h] BYREF
  unsigned int *v80; // [rsp+58h] [rbp-8E0h]
  unsigned int Size; // [rsp+60h] [rbp-8D8h]
  char Size_4; // [rsp+64h] [rbp-8D4h]
  LIST_ENTRY *v83; // [rsp+68h] [rbp-8D0h]
  char *v84; // [rsp+70h] [rbp-8C8h]
  unsigned int v85; // [rsp+78h] [rbp-8C0h]
  int v86; // [rsp+7Ch] [rbp-8BCh]
  unsigned int *v87; // [rsp+80h] [rbp-8B8h]
  void *v88; // [rsp+88h] [rbp-8B0h]
  char *v89; // [rsp+90h] [rbp-8A8h]
  int v90; // [rsp+98h] [rbp-8A0h] BYREF
  unsigned int v91; // [rsp+9Ch] [rbp-89Ch]
  int IsRestrictedCaller; // [rsp+A0h] [rbp-898h]
  ULONG_PTR AppIdSize; // [rsp+A8h] [rbp-890h] BYREF
  ULONG_PTR PackageSize; // [rsp+B0h] [rbp-888h] BYREF
  int v95; // [rsp+B8h] [rbp-880h]
  void *v96; // [rsp+C0h] [rbp-878h]
  char *v97; // [rsp+C8h] [rbp-870h]
  char *v98; // [rsp+D0h] [rbp-868h]
  unsigned int v99; // [rsp+D8h] [rbp-860h]
  char *v100; // [rsp+110h] [rbp-828h]
  _WORD *v101; // [rsp+118h] [rbp-820h]
  __m128i v102; // [rsp+120h] [rbp-818h]
  __int128 v103; // [rsp+130h] [rbp-808h] BYREF
  char *v104; // [rsp+150h] [rbp-7E8h]
  unsigned __int64 CurrentServerSilo; // [rsp+158h] [rbp-7E0h]
  __int128 v106; // [rsp+160h] [rbp-7D8h] BYREF
  __int128 v107; // [rsp+170h] [rbp-7C8h]
  __int128 v108; // [rsp+180h] [rbp-7B8h]
  _QWORD Src[3]; // [rsp+190h] [rbp-7A8h] BYREF
  int v110; // [rsp+1A8h] [rbp-790h]
  unsigned __int64 v111; // [rsp+1B0h] [rbp-788h]
  __int128 v112; // [rsp+1B8h] [rbp-780h]
  int v113; // [rsp+1C8h] [rbp-770h]
  int v114; // [rsp+1CCh] [rbp-76Ch]
  unsigned int v115; // [rsp+1D0h] [rbp-768h]
  int v116; // [rsp+1D4h] [rbp-764h]
  int v117; // [rsp+1D8h] [rbp-760h]
  __int128 v118; // [rsp+1E0h] [rbp-758h]
  __int64 v119; // [rsp+1F0h] [rbp-748h]
  __int64 v120; // [rsp+1F8h] [rbp-740h]
  __int64 v121; // [rsp+200h] [rbp-738h]
  __int64 v122; // [rsp+208h] [rbp-730h]
  __int64 v123; // [rsp+210h] [rbp-728h]
  __m128i v124; // [rsp+220h] [rbp-718h]
  __m128i v125; // [rsp+230h] [rbp-708h]
  __m128i v126; // [rsp+240h] [rbp-6F8h]
  __m128i v127; // [rsp+250h] [rbp-6E8h]
  _QWORD v128[7]; // [rsp+260h] [rbp-6D8h] BYREF
  int v129; // [rsp+298h] [rbp-6A0h]
  __int64 v130; // [rsp+2A0h] [rbp-698h]
  __int64 v131; // [rsp+2C0h] [rbp-678h]
  __int64 v132; // [rsp+2F0h] [rbp-648h]
  _BYTE v133[32]; // [rsp+360h] [rbp-5D8h] BYREF
  __int64 v134; // [rsp+380h] [rbp-5B8h]
  __int64 v135; // [rsp+3D0h] [rbp-568h] BYREF
  int v136; // [rsp+3D8h] [rbp-560h]
  struct _LIST_ENTRY v137; // [rsp+3E0h] [rbp-558h] BYREF
  struct _LIST_ENTRY v138; // [rsp+3F0h] [rbp-548h]
  struct _LIST_ENTRY *v139; // [rsp+400h] [rbp-538h]
  __int64 v140; // [rsp+408h] [rbp-530h]
  _BYTE v141[12]; // [rsp+410h] [rbp-528h]
  char v142; // [rsp+420h] [rbp-518h] BYREF
  int v143; // [rsp+530h] [rbp-408h]
  __int64 v144; // [rsp+538h] [rbp-400h]
  int Blink_high; // [rsp+540h] [rbp-3F8h]
  struct _LIST_ENTRY *v146; // [rsp+548h] [rbp-3F0h]
  _BYTE v147[80]; // [rsp+550h] [rbp-3E8h] BYREF
  _OWORD v148[28]; // [rsp+5A0h] [rbp-398h] BYREF
  WCHAR AppId[72]; // [rsp+760h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+7F0h] [rbp-148h] BYREF

  v80 = a3;
  v97 = a1;
  v104 = a1;
  v87 = a3;
  memset_0(v148, 0, 0x1B8uLL);
  v135 = 0LL;
  v136 = 0;
  v76 = 0;
  v83 = 0LL;
  memset_0(v133, 0, 0x68uLL);
  v79[0] = 0;
  Object = 0LL;
  v103 = 0LL;
  v7 = 0;
  memset_0(v147, 0, 0x44uLL);
  v9 = 0LL;
  v84 = 0LL;
  v90 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 == 252 )
  {
    v77 = 0;
    v85 = 48;
    Size = 0;
    v88 = v97;
    v89 = 0LL;
LABEL_5:
    v96 = 0LL;
    goto LABEL_6;
  }
  v88 = 0LL;
  if ( a5 != 253 )
  {
    v85 = 624;
    v89 = v97;
    v73 = 136;
    v8 = 80LL;
    if ( a5 == 5 )
      v73 = 80;
    Size = v73;
    v77 = a5 != 5;
    goto LABEL_5;
  }
  v77 = 0;
  v85 = 12;
  v7 = 12;
  Size = 0;
  v96 = v97;
  v89 = 0LL;
LABEL_6:
  v99 = v85;
  v10 = a2 < v85;
  if ( a2 < v85 )
  {
    if ( !a3 )
      return -1073741820;
    v10 = a2 < v85;
  }
  v11 = v10 ? 0xC0000004 : 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v74 = PreviousMode;
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(PreviousMode), result >= 0) )
  {
    LOBYTE(v8) = PreviousMode;
    IsRestrictedCaller = ExIsRestrictedCaller(v8, &v90);
    Size_4 = IsRestrictedCaller != 0;
    if ( (unsigned int)(a5 - 252) > 1 && a2 )
      KeFlushProcessWriteBuffers(1LL);
    CurrentServerSilo = PsGetCurrentServerSilo();
    NextProcess = (LIST_ENTRY *)PsIdleProcess;
    v83 = (LIST_ENTRY *)PsIdleProcess;
    v75 = v11;
    while ( 1 )
    {
      if ( !NextProcess )
      {
        v66 = a5;
        if ( v75 < 0 )
          goto LABEL_183;
        if ( a5 == 252 )
        {
          if ( !v88 )
          {
LABEL_183:
            if ( v80 )
              *v80 = v7;
            if ( v66 == 253 )
            {
              if ( PreviousMode )
                RtlCopyToUser(v96, &v135, 0xCuLL);
              else
                RtlCopyVolatileMemory(v96, &v135, 0xCuLL);
              v49 = v75;
LABEL_251:
              v75 = v49;
            }
LABEL_111:
            v20 = (PVOID *)Object;
LABEL_252:
            if ( NextProcess && NextProcess != PsIdleProcess )
              ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
            if ( v20 && v20[68] != PsIdleProcess )
              ObfDereferenceObjectWithTag(v20, 0x6E457350u);
            return v75;
          }
          v72 = v89;
        }
        else
        {
          v72 = v89;
          if ( !v89 )
            goto LABEL_183;
        }
        if ( a5 == 252 )
        {
          if ( PreviousMode )
          {
            v72 = v88;
            goto LABEL_244;
          }
          *(_DWORD *)v88 = 0;
        }
        else if ( PreviousMode )
        {
LABEL_244:
          RtlWriteULongToUser(v72, 0);
        }
        else
        {
          *v72 = 0;
        }
        v66 = a5;
        goto LABEL_183;
      }
      if ( !ExpSysInfoShouldSkipProcess((__int64)NextProcess) && (!a4 || NextProcess != PsIdleProcess) )
      {
        SessionId = PsGetSessionId((__int64)NextProcess);
        if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo((struct _KPROCESS *)NextProcess, CurrentServerSilo) )
          break;
      }
LABEL_74:
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = ExGetNextProcess(NextProcess, Size_4, v25, v26);
      v83 = NextProcess;
    }
    if ( a5 == 253 )
    {
      LODWORD(v135) = v135 + 1;
      ProcessActiveThreadCount = PsGetProcessActiveThreadCount((__int64)NextProcess);
      HIDWORD(v135) += ProcessActiveThreadCount;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)NextProcess, 0LL);
      v136 += ProcessHandleCount;
LABEL_57:
      v33 = v76;
      goto LABEL_58;
    }
    v44 = v99 + v7;
    if ( a5 == 252 )
    {
      v88 = &v104[v7];
      v33 = v99;
      v76 = v99;
      if ( v44 < v7 )
      {
        v7 = -1;
        v15 = -1073741675;
      }
      else
      {
        v7 += v99;
        v15 = 0;
      }
      if ( v15 < 0 )
        goto LABEL_110;
      if ( v7 > a2 )
      {
        v75 = -1073741820;
        if ( !v80 )
          goto LABEL_111;
      }
      if ( v75 < 0 )
      {
LABEL_58:
        if ( a5 == 253 )
          goto LABEL_73;
        if ( NextProcess != PsIdleProcess )
        {
          if ( NextProcess == (LIST_ENTRY *)PsInitialSystemProcess )
          {
            Flink = (__int64 *)ExpSystemProcessName;
          }
          else if ( NextProcess == (LIST_ENTRY *)PsSecureSystemProcess )
          {
            Flink = &ExpSecureSystemProcessName;
          }
          else
          {
            Flink = (__int64 *)L"$&";
            if ( (HIDWORD(NextProcess[95].Blink) & 0x40000000) == 0 )
              Flink = (__int64 *)NextProcess[53].Flink;
          }
          v35 = *(unsigned __int16 *)Flink;
          v86 = v35;
          v91 = v35;
          v36 = (_WORD *)Flink[1];
          v37 = v36;
          v101 = v36;
          v38 = v35;
          v39 = v35;
          if ( a5 != 148 && (_DWORD)v35 )
          {
            v37 = &v36[v35 >> 1];
            v101 = v37;
            while ( v37 != v36 )
            {
              v101 = --v37;
              if ( *v37 == 92 )
              {
                v101 = ++v37;
                break;
              }
            }
            LODWORD(v35) = v35 - 2 * (v37 - v36);
            v91 = v35;
            v38 = v35;
            v39 = v35;
          }
          v40 = v39;
          v25 = (v38 + 9) & 0xFFFFFFF8;
          v91 = v25;
          v86 = (v38 + 9) & 0xFFFFFFF8;
          v26 = (struct _KLOCK_ENTRIES *)(v7 + (unsigned int)v25);
          if ( (unsigned int)v25 + v7 < v7 )
          {
            v7 = -1;
            v15 = -1073741675;
          }
          else
          {
            v7 += v25;
            v15 = 0;
          }
          if ( v15 < 0 )
            goto LABEL_110;
          v76 = v25 + v33;
          if ( v7 <= a2 )
          {
            v52 = v9;
            v98 = v9;
            if ( (_DWORD)v35 )
            {
              if ( v74 )
                RtlCopyToUser(v9, v37, v40);
              else
                RtlCopyVolatileMemory(v9, v37, v40);
              v52 = &v9[2 * (v40 >> 1)];
              v98 = v52;
            }
            v42 = v74;
            if ( v74 )
            {
              RtlWriteUShortToUser(v52, 0);
              v42 = v74;
            }
            else
            {
              *(_WORD *)v52 = 0;
            }
            v41 = v52 + 2;
            v98 = v41;
            v25 = v91;
          }
          else
          {
            v75 = -1073741820;
            if ( !v80 )
              goto LABEL_111;
            LOWORD(v41) = 0;
            v98 = 0LL;
            v42 = v74;
          }
          if ( v75 < 0 )
            goto LABEL_73;
          v102.m128i_i32[1] = 0;
          v102.m128i_i16[0] = (_WORD)v41 - (_WORD)v9 - 2;
          v102.m128i_i16[1] = v25;
          v102.m128i_i64[1] = (__int64)v9;
          if ( a5 == 252 )
          {
            v124 = v102;
            v46 = (char *)v88 + 32;
            if ( !v42 )
              goto LABEL_95;
            v125 = v102;
          }
          else
          {
            v126 = v102;
            v46 = v89 + 56;
            if ( !v42 )
            {
LABEL_95:
              *(_DWORD *)v46 = v102.m128i_i32[0];
              *((_QWORD *)v46 + 1) = v9;
              goto LABEL_100;
            }
            v127 = v102;
          }
          RtlWriteULongToUser(v46, _mm_cvtsi128_si32(v102));
          RtlWriteULong64ToUser((_QWORD *)v46 + 1, (__int64)v9);
        }
LABEL_100:
        if ( v75 >= 0 )
        {
          if ( a5 == 252 )
          {
            if ( v74 )
            {
              v47 = v88;
              goto LABEL_104;
            }
            v48 = v88;
          }
          else
          {
            if ( v74 )
            {
              v47 = v89;
LABEL_104:
              RtlWriteULongToUser(v47, v76);
              goto LABEL_73;
            }
            v48 = v89;
          }
          *v48 = v76;
        }
LABEL_73:
        PreviousMode = v74;
        goto LABEL_74;
      }
      v106 = 0LL;
      v107 = 0LL;
      v108 = 0LL;
      *((_QWORD *)&v106 + 1) = NextProcess[29].Flink;
      *(_QWORD *)&v107 = NextProcess[45].Flink;
      *((_QWORD *)&v107 + 1) = NextProcess[103].Blink;
      *((_QWORD *)&v108 + 1) = 0LL;
      LODWORD(v108) = 0;
      if ( PreviousMode )
        RtlCopyToUser(v88, &v106, 0x30uLL);
      else
        RtlCopyVolatileMemory(v88, &v106, 0x30uLL);
      v9 = &v97[v7];
      goto LABEL_179;
    }
    v45 = &v104[v7];
    v89 = v45;
    v76 = v99;
    if ( v44 >= v7 )
    {
      v7 += v99;
      v15 = 0;
    }
    else
    {
      v7 = -1;
      v15 = -1073741675;
    }
    if ( v15 < 0 )
      goto LABEL_110;
    memset_0(v133, 0, 0x68uLL);
    if ( v7 <= a2 )
    {
      memset_0(v128, 0, 0x100uLL);
      v49 = ExpCopyProcessInfo((__int64)v128, (__int64)NextProcess, v77, (__int64)v133);
      v15 = v49;
      if ( v49 < 0 )
        goto LABEL_251;
      v128[0] = 0LL;
      HIDWORD(v131) = SessionId;
      v130 = 0LL;
      v129 = 0;
      if ( NextProcess == PsIdleProcess )
        v131 = 0LL;
      if ( NextProcess == (LIST_ENTRY *)PsSecureSystemProcess )
      {
        v132 = qword_140E2D928 << 12;
        v128[1] = qword_140E2D928 << 12;
      }
      if ( PreviousMode )
        RtlCopyToUser(v45, v128, 0x100uLL);
      else
        RtlCopyVolatileMemory(v45, v128, 0x100uLL);
      if ( v15 < 0 )
      {
LABEL_110:
        v75 = v15;
        goto LABEL_111;
      }
    }
    else
    {
      v75 = -1073741820;
      if ( !v80 )
        goto LABEL_111;
    }
    v16 = v45 + 256;
    v84 = v16;
    v17 = 0;
    v95 = 0;
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
          v75 = v21;
          goto LABEL_252;
        }
        v22 = Size + v76;
        v76 += Size;
        if ( v7 > a2 )
        {
          v75 = -1073741820;
          if ( !v80 )
            goto LABEL_111;
        }
        else
        {
          KeQueryValuesThread(NextProcessThread, (__int64)&v103);
          if ( BYTE8(v103) == 4 )
          {
            v76 = v22 - Size;
            v7 -= Size;
          }
          else
          {
            memset_0(Src, 0, 0x88uLL);
            v110 = v103;
            v116 = BYTE8(v103);
            v117 = BYTE9(v103);
            v113 = SBYTE10(v103);
            v114 = SBYTE11(v103);
            Src[0] = KeMaximumIncrement * (unsigned __int64)Object[163];
            Src[1] = KeMaximumIncrement * (unsigned __int64)Object[183];
            Src[2] = *((_QWORD *)Object + 152);
            v115 = Object[85];
            v112 = *(_OWORD *)(Object + 322);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)Object, 1);
            v24 = ThreadStartAddress;
            if ( v90 || IsRestrictedCaller && !MmIsUserAddress(ThreadStartAddress) )
              v111 = 0LL;
            else
              v111 = v24;
            if ( v77 )
            {
              if ( v90 || IsRestrictedCaller )
              {
                v118 = 0LL;
                v53 = Object;
              }
              else
              {
                v53 = Object;
                *(_QWORD *)&v118 = *((_QWORD *)Object + 7);
                *((_QWORD *)&v118 + 1) = *((_QWORD *)Object + 6);
              }
              v54 = *((_QWORD *)v53 + 172);
              if ( v90
                || IsRestrictedCaller
                && (IsUserAddress = MmIsUserAddress(*((_QWORD *)v53 + 172)), v53 = Object, !IsUserAddress) )
              {
                v119 = 0LL;
              }
              else
              {
                v119 = v54;
              }
              v120 = *((_QWORD *)v53 + 30);
              v121 = 0LL;
              v122 = 0LL;
              v123 = 0LL;
            }
            v95 = ++v17;
            if ( v74 )
              RtlCopyToUser(v16, Src, Size);
            else
              RtlCopyVolatileMemory(v16, Src, Size);
            if ( v74 )
              RtlWriteULongToUser((_DWORD *)v89 + 1, v17);
            else
              *((_DWORD *)v89 + 1) = v17;
            v16 += Size;
            v84 = v16;
          }
        }
        v20 = (PVOID *)Object;
      }
    }
    memset_0(&v137, 0, 0x170uLL);
    v27 = v16;
    v100 = v16;
    v9 = v16 + 368;
    v84 = v9;
    if ( v75 < 0 )
    {
LABEL_56:
      if ( a5 != 148 )
        goto LABEL_57;
      v55 = PsReferencePrimaryTokenWithTag((__int64)NextProcess, 0x746C6644u, v25, v26);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v55 + 48), 1u);
      v57 = **(unsigned __int8 ***)(v55 + 152);
      v58 = 4 * v57[1] + 8;
      if ( v58 <= 0x44 )
        memmove(v147, v57, v58);
      ExReleaseResourceLite(*(PERESOURCE *)(v55 + 48));
      KeLeaveCriticalRegion();
      v91 = v58;
      PackageSize = 254LL;
      AppIdSize = 130LL;
      if ( RtlQueryPackageIdentity((HANDLE)v55, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL) < 0 )
      {
        PackageSize = 0LL;
        AppIdSize = 0LL;
      }
      ObFastDereferenceObject((signed __int64 *)&NextProcess[36].Blink, v55, 0x746C6644u);
      v59 = (v58 + 7) & 0xFFFFFFF8;
      v86 = v59;
      if ( v59 + v7 < v7 )
      {
        v7 = -1;
        v15 = -1073741675;
      }
      else
      {
        v7 += v59;
        v15 = 0;
      }
      if ( v15 < 0 )
        goto LABEL_110;
      v60 = v59 + v76;
      v76 += v59;
      if ( v7 <= a2 )
      {
        if ( v74 )
          RtlWriteULongToUser((_DWORD *)v100 + 13, 368);
        else
          *((_DWORD *)v100 + 13) = 368;
        if ( v74 )
          RtlCopyToUser(v9, v147, v58);
        else
          RtlCopyVolatileMemory(v9, v147, v58);
        v61 = v80;
        v9 += v59;
        v84 = v9;
        v60 = v76;
      }
      else
      {
        v75 = -1073741820;
        v61 = v80;
        if ( !v80 )
          goto LABEL_111;
      }
      v25 = 4294967294LL;
      if ( PackageSize - 1 <= 0xFFFFFFFE )
      {
        v86 = PackageSize;
        if ( (unsigned int)PackageSize + v7 < v7 )
        {
          v7 = -1;
          v15 = -1073741675;
        }
        else
        {
          v7 += PackageSize;
          v15 = 0;
        }
        if ( v15 < 0 )
          goto LABEL_110;
        v76 = PackageSize + v60;
        v62 = a2;
        if ( v7 > a2 )
        {
          v75 = -1073741820;
          if ( !v61 )
            goto LABEL_111;
          goto LABEL_160;
        }
        v68 = (_DWORD)v9 - (_DWORD)v100;
        v69 = (int *)(v100 + 56);
        if ( v74 )
          RtlWriteULongToUser(v69, v68);
        else
          *v69 = v68;
        if ( v74 )
          RtlCopyToUser(v9, PackageFullName, (unsigned int)PackageSize);
        else
          RtlCopyVolatileMemory(v9, PackageFullName, (unsigned int)PackageSize);
        v25 = 4294967294LL;
        v9 += (unsigned int)PackageSize;
        v84 = v9;
      }
      v62 = a2;
LABEL_160:
      if ( AppIdSize - 1 > 0xFFFFFFFE )
        goto LABEL_57;
      v86 = AppIdSize;
      if ( (unsigned int)AppIdSize + v7 < v7 )
      {
        v7 = -1;
        v15 = -1073741675;
      }
      else
      {
        v7 += AppIdSize;
        v15 = 0;
      }
      if ( v15 < 0 )
        goto LABEL_110;
      v33 = AppIdSize + v76;
      v76 += AppIdSize;
      if ( v7 > v62 )
      {
        v75 = -1073741820;
        if ( !v61 )
          goto LABEL_111;
        goto LABEL_58;
      }
      v70 = (_DWORD)v9 - (_DWORD)v100;
      v71 = (int *)(v100 + 336);
      if ( v74 )
        RtlWriteULongToUser(v71, v70);
      else
        *v71 = v70;
      if ( v74 )
        RtlCopyToUser(v9, AppId, (unsigned int)AppIdSize);
      else
        RtlCopyVolatileMemory(v9, AppId, (unsigned int)AppIdSize);
      v9 += (unsigned int)AppIdSize;
LABEL_179:
      v84 = v9;
      goto LABEL_57;
    }
    PsQueryProcessAttributes(NextProcess, v79, 0LL);
    *(_QWORD *)&v141[4] = 0LL;
    v143 = 0;
    v144 = (__int64)NextProcess[106].Blink << 12;
    v140 = v134;
    *(_QWORD *)v141 = v79[0] != 0;
    Blink = NextProcess[99].Blink;
    if ( Blink )
    {
      v137 = *Blink;
      v138 = Blink[1];
      v139 = Blink[2].Flink;
    }
    else
    {
      v137 = 0LL;
      v138 = 0LL;
      v139 = 0LL;
    }
    if ( (HIDWORD(NextProcess[95].Blink) & 0x1000) != 0 )
    {
      v29 = *(_DWORD *)v141 & 0xFFFFFFE1 | 2;
    }
    else if ( NextProcess == (LIST_ENTRY *)PsSecureSystemProcess )
    {
      v29 = *(_DWORD *)v141 & 0xFFFFFFE1 | 4;
    }
    else if ( (HIDWORD(NextProcess[95].Blink) & 0x40000000) != 0 )
    {
      v29 = *(_DWORD *)v141 & 0xFFFFFFE1 | 6;
    }
    else
    {
      if ( !CmpFreezeListLock.CycleTime || NextProcess != (LIST_ENTRY *)CmpFreezeListLock.CycleTime )
      {
LABEL_47:
        v146 = NextProcess[103].Blink;
        PsQueryProcessEnergyValues(NextProcess, v148);
        v30 = &v142;
        v31 = v148;
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
        if ( NextProcess[42].Flink )
          Blink_high = HIDWORD(NextProcess[42].Flink[91].Blink);
        else
          Blink_high = 0;
        if ( HIDWORD(NextProcess[4].Flink) )
          goto LABEL_169;
        if ( KeHeteroSystem )
        {
          v64 = KiProcessPolicyToQosMappingTable[(int)KeGetProcessPpmPolicy((__int64)NextProcess)];
          if ( v64 != 7 || (v65 = 1, v63 != 1) )
            v65 = 0;
          if ( PpmPerfQosEnabled && (((v64 - 1) & 0xFFFFFFFA) == 0 || v65) )
LABEL_169:
            *(_DWORD *)v141 |= 0x20u;
        }
        if ( v74 )
          RtlCopyToUser(v27, &v137, 0x170uLL);
        else
          RtlCopyVolatileMemory(v27, &v137, 0x170uLL);
        goto LABEL_56;
      }
      v29 = *(_DWORD *)v141 & 0xFFFFFFE1 | 8;
    }
    *(_DWORD *)v141 = v29;
    goto LABEL_47;
  }
  return result;
}
