/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x18009512C (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Initialize@SipcPort@@IEAAJXZ @ 0x18009528C (-Initialize@SipcPort@@IEAAJXZ.c)
 *     ??0AlpcPort@@AEAA@G@Z @ 0x180096870 (--0AlpcPort@@AEAA@G@Z.c)
 *     ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x1800995C8 (--1-$unique_ptr@VAlpcPort@@U-$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SipcPrivateNamespace@@QEAA@XZ @ 0x18010F714 (--0SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x18010F914 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18011244C (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x1801125A8 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 */

__int64 __fastcall AlpcPort::AcceptClientConnection(
        AlpcPort *this,
        int a2,
        void *a3,
        void **a4,
        void **a5,
        struct SipcPort **a6)
{
  _WORD *v9; // rdi
  unsigned __int16 v10; // si
  int v11; // ebx
  int v12; // eax
  AlpcPort *v13; // rax
  AlpcPort *v14; // rax
  AlpcPort *v15; // rsi
  void *v16; // rax
  int v17; // eax
  int v18; // ebx
  void *v19; // rax
  AlpcPort *v21; // [rsp+50h] [rbp-B0h] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  void *v23; // [rsp+60h] [rbp-A0h] BYREF
  void *v24; // [rsp+68h] [rbp-98h]
  struct SipcPort **v25; // [rsp+70h] [rbp-90h]
  char v26[36]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v27; // [rsp+A4h] [rbp-5Ch]
  __int128 v28; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v29[68]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[76]; // [rsp+104h] [rbp+4h] BYREF
  void *v31[30]; // [rsp+150h] [rbp+50h] BYREF

  *a4 = 0LL;
  v24 = a3;
  v25 = a6;
  *a5 = 0LL;
  *a6 = 0LL;
  v28 = 0LL;
  memset_0(v29, 0, sizeof(v29));
  memset_0(v30, 0, 0x44uLL);
  v9 = (_WORD *)((char *)this + 56);
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)this + 56), 0xC8uLL, v26) == 200 && v26[0] == 2 )
  {
    v10 = v27;
    v23 = 0LL;
    v22 = 0LL;
    SipcPrivateNamespace::SipcPrivateNamespace((SipcPrivateNamespace *)v31);
    v11 = SipcPrivateNamespace::Open((SipcPrivateNamespace *)v31, (const struct SipcPrivateNamespaceAttributes *)&v28);
    if ( v11 >= 0 )
    {
      v12 = SipcSignalFactory::OpenServerEvents(v10, (const struct SipcPrivateNamespace *)v31, &v23, &v22);
      if ( v12 >= 0 )
      {
        SipcPrivateNamespace::~SipcPrivateNamespace(v31);
        v13 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v13 )
        {
          v14 = AlpcPort::AlpcPort(v13, v10);
          v21 = v14;
          v15 = v14;
          if ( v14 )
          {
            v11 = SipcPort::Initialize(v14);
            if ( v11 >= 0 )
            {
              v16 = v24;
              *((_DWORD *)this + 24) = a2;
              *v9 = 4;
              *((_WORD *)this + 29) = 44;
              v17 = NtAlpcAcceptConnectPort(
                      (char *)v15 + 48,
                      *((_QWORD *)this + 6),
                      0LL,
                      0LL,
                      &AlpcPort::c_serverEndpointAlpcAttributes,
                      v16,
                      (char *)this + 56,
                      0LL,
                      1);
              v18 = v17;
              if ( v17 >= 0 )
              {
                if ( *((_QWORD *)v15 + 6) )
                {
                  v21 = 0LL;
                  *(_OWORD *)v9 = 0LL;
                  *(_OWORD *)((char *)this + 72) = 0LL;
                  *((_QWORD *)this + 11) = 0LL;
                  *((_QWORD *)this + 53) = 0LL;
                  v19 = v23;
                  *((_WORD *)this + 29) = 40;
                  *((_DWORD *)this + 106) = 1610612736;
                  *a4 = v19;
                  *a5 = v22;
                  v23 = 0LL;
                  v22 = 0LL;
                  *v25 = v15;
                  utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v21);
                  SipcWin32Handle::Reset(&v22);
                  SipcWin32Handle::Reset(&v23);
                  return 0LL;
                }
                utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v21);
                SipcWin32Handle::Reset(&v22);
                SipcWin32Handle::Reset(&v23);
                return v18 | 0x90000000;
              }
              v11 = v17 | 0x10000000;
            }
            utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v21);
LABEL_18:
            SipcWin32Handle::Reset(&v22);
            SipcWin32Handle::Reset(&v23);
            return (unsigned int)v11;
          }
        }
        else
        {
          v21 = 0LL;
        }
        utl::unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>::~unique_ptr<AlpcPort,utl::default_delete<AlpcPort>>(&v21);
        v11 = -2147024882;
        goto LABEL_18;
      }
      v11 = v12;
    }
    SipcPrivateNamespace::~SipcPrivateNamespace(v31);
    goto LABEL_18;
  }
  return 2147549183LL;
}
