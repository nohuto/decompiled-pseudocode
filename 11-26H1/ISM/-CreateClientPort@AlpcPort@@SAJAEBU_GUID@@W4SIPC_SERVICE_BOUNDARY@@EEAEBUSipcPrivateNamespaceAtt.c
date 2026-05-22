/*
 * XREFs of ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x180110D1C
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x180112AE0 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x180075308 (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x18009512C (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Initialize@SipcPort@@IEAAJXZ @ 0x18009528C (-Initialize@SipcPort@@IEAAJXZ.c)
 *     ??0AlpcPort@@AEAA@G@Z @ 0x180096870 (--0AlpcPort@@AEAA@G@Z.c)
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x180098FA4 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x1800995C8 (--1-$unique_ptr@VAlpcPort@@U-$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AlpcPort::CreateClientPort(
        int *a1,
        int a2,
        char a3,
        char a4,
        __int128 *a5,
        unsigned __int64 a6,
        __int16 a7,
        LARGE_INTEGER a8,
        DWORD *a9,
        AlpcPort **a10)
{
  AlpcPort *v11; // rax
  AlpcPort *v12; // rax
  AlpcPort *v13; // rdi
  int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  HANDLE FileW; // rax
  int v25; // r8d
  int *v26; // rdx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rax
  __int64 v39; // rax
  LARGE_INTEGER v40; // r13
  signed int LastError; // eax
  LARGE_INTEGER v43; // rax
  int v44; // ebx
  DWORD BytesReturned; // [rsp+64h] [rbp-9Ch] BYREF
  AlpcPort *v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER Interval; // [rsp+88h] [rbp-78h] BYREF
  __int64 OutBuffer; // [rsp+90h] [rbp-70h] BYREF
  int *v53; // [rsp+98h] [rbp-68h]
  _OWORD v54[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v55; // [rsp+D0h] [rbp-30h]
  __int128 v56; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v57; // [rsp+F0h] [rbp-10h]
  __int128 v58; // [rsp+100h] [rbp+0h]
  __int128 v59; // [rsp+110h] [rbp+10h]
  __int128 v60; // [rsp+120h] [rbp+20h] BYREF
  __int128 v61; // [rsp+130h] [rbp+30h]
  __int128 v62; // [rsp+140h] [rbp+40h]
  __int128 v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+60h]
  int InBuffer; // [rsp+170h] [rbp+70h] BYREF
  __int64 v66; // [rsp+174h] [rbp+74h]
  _BYTE v67[192]; // [rsp+180h] [rbp+80h] BYREF

  v49 = a2;
  v53 = a1;
  *a9 = 0;
  *a10 = 0LL;
  Interval = a8;
  v11 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v11 )
  {
    v47 = 0LL;
    goto LABEL_32;
  }
  v12 = AlpcPort::AlpcPort(v11, a7);
  v47 = v12;
  v13 = v12;
  if ( !v12 )
  {
LABEL_32:
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return 2147942414LL;
  }
  v14 = SipcPort::Initialize(v12);
  if ( v14 < 0 )
  {
LABEL_17:
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return (unsigned int)v14;
  }
  memset(v54, 0, sizeof(v54));
  v55 = 0LL;
  memset_0(&v56, 0, 0x44uLL);
  memset_0((char *)&v60 + 4, 0, 0x44uLL);
  v15 = *a5;
  v16 = a5[1];
  BYTE2(v54[0]) = a3;
  BYTE3(v54[0]) = a4;
  LOBYTE(v54[0]) = 2;
  WORD2(v54[2]) = a7;
  v17 = *((_QWORD *)a5 + 18);
  v55 = v15;
  v18 = a5[2];
  v56 = v16;
  v19 = a5[3];
  v57 = v18;
  v20 = a5[4];
  v58 = v19;
  v21 = a5[5];
  v59 = v20;
  v22 = a5[6];
  v60 = v21;
  v23 = a5[8];
  v61 = v22;
  v62 = a5[7];
  v63 = v23;
  v64 = v17;
  if ( !a7 )
    goto LABEL_8;
  FileW = CreateFileW(L"\\\\.\\XVmCtrl", 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
  v48 = (__int64)FileW;
  if ( FileW == (HANDLE)-1LL
    || (InBuffer = 0,
        v66 = 19LL,
        OutBuffer = 0LL,
        BytesReturned = 0,
        !DeviceIoControl(FileW, 0x1501E8u, &InBuffer, 0xCu, &OutBuffer, 8u, &BytesReturned, 0LL)) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v14 = -2147418113;
    if ( LastError < 0 )
      v14 = LastError;
    SipcFileHandle::Reset((HANDLE *)&v48);
    goto LABEL_17;
  }
  *((_QWORD *)&v54[2] + 1) = OutBuffer;
  SipcFileHandle::Reset((HANDLE *)&v48);
LABEL_8:
  v25 = v49;
  v26 = v53;
  v27 = v54[1];
  *((_OWORD *)v13 + 6) = v54[0];
  v28 = v54[2];
  *((_OWORD *)v13 + 7) = v27;
  v29 = v55;
  *((_OWORD *)v13 + 8) = v28;
  v30 = v56;
  *((_OWORD *)v13 + 9) = v29;
  v31 = v57;
  *((_OWORD *)v13 + 10) = v30;
  v32 = v58;
  *((_OWORD *)v13 + 11) = v31;
  v33 = v59;
  *((_OWORD *)v13 + 12) = v32;
  v34 = v60;
  *((_OWORD *)v13 + 13) = v33;
  v35 = v61;
  *((_OWORD *)v13 + 14) = v34;
  v36 = v62;
  *((_OWORD *)v13 + 15) = v35;
  v37 = v63;
  v38 = v64;
  *((_OWORD *)v13 + 16) = v36;
  *((_OWORD *)v13 + 17) = v37;
  *((_QWORD *)v13 + 36) = v38;
  *((_DWORD *)v13 + 14) = 15728840;
  AlpcPortString::AlpcPortString((__int64)v67, v26, v25);
  if ( a6 > 0xCCCCCCCCCCCCCCCLL || (v39 = MEMORY[0x7FFE0014] + 10 * a6, v39 <= 0) )
    v39 = 0x7FFFFFFFFFFFFFFFLL;
  v50 = v39;
  v40 = Interval;
  while ( 1 )
  {
    v48 = 368LL;
    v44 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))NtAlpcConnectPort)(
            (char *)v13 + 48,
            v67,
            0LL,
            &AlpcPort::c_clientEndpointAlpcAttributes,
            0x20000,
            (LARGE_INTEGER)v40.QuadPart,
            (char *)v13 + 56,
            &v48,
            0LL,
            0LL,
            &v50);
    if ( v44 >= 0 )
      break;
    if ( v44 != -1073741772 || MEMORY[0x7FFE0014] >= v50 )
    {
      utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
      return (unsigned int)(v44 | 0x10000000);
    }
    v43.QuadPart = MEMORY[0x7FFE0014] + 1000000LL;
    if ( v50 < MEMORY[0x7FFE0014] + 1000000LL )
      v43.QuadPart = v50;
    Interval = v43;
    NtDelayExecution(1u, &Interval);
  }
  if ( !*((_QWORD *)v13 + 6) )
  {
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return v44 | 0x90000000;
  }
  BytesReturned = 0;
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)v13 + 56), 4uLL, (char *)&BytesReturned) == 4 )
  {
    *a9 = BytesReturned;
    *a10 = v13;
    v47 = 0LL;
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return 0LL;
  }
  else
  {
    utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v47);
    return 2147549183LL;
  }
}
