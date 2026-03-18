/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1400B6700
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400BDC4C (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E4978 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x140197EF0 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(struct HDCOMPOSITIONCONNECTION__ *a1, void *Src)
{
  _BYTE *v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rax
  int v8; // ebx
  volatile signed __int32 *v9; // rbx
  char *v10; // rbx
  int v11; // [rsp+20h] [rbp-298h]
  PVOID Buffer; // [rsp+30h] [rbp-288h] BYREF
  __int128 v13; // [rsp+40h] [rbp-278h] BYREF
  __int128 v14; // [rsp+50h] [rbp-268h]
  __int128 v15; // [rsp+60h] [rbp-258h]
  void *v16; // [rsp+70h] [rbp-248h]
  __int128 v17; // [rsp+78h] [rbp-240h] BYREF
  __int128 v18; // [rsp+88h] [rbp-230h]
  __int128 v19; // [rsp+98h] [rbp-220h]
  void *Srca; // [rsp+A8h] [rbp-210h]
  _BYTE v21[480]; // [rsp+B0h] [rbp-208h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Srca = 0LL;
  v4 = 0LL;
  Buffer = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, Src) + 70552);
  if ( PsGetCurrentProcess() != v5 )
    return 3221225506LL;
  if ( Src )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    RtlCopyFromUser(&v13, Src, 0x38uLL);
    v17 = v13;
    v18 = v14;
    v19 = v15;
    Srca = v16;
    if ( (_QWORD)v13 )
    {
      if ( DWORD2(v15) <= 0x100 )
      {
        if ( DWORD2(v15) <= 4 )
        {
          v4 = v21;
LABEL_11:
          v8 = 0;
          RtlCopyFromUser(v4, Srca, 120LL * DWORD2(v19));
          Srca = v4;
          goto LABEL_14;
        }
        v7 = DWORD2(v19);
      }
      else
      {
        v7 = 256LL;
        DWORD2(v19) = 256;
      }
      v4 = (_BYTE *)Win32AllocPoolImpl(256LL, 120 * v7, 0x61644344u);
      if ( v4 )
        goto LABEL_11;
      v8 = -1073741801;
    }
    else
    {
      v8 = -1073741811;
    }
LABEL_14:
    if ( v8 >= 0 )
    {
      KeEnterCriticalRegion();
      v8 = DirectComposition::CConnection::ReferenceHandle(a1, (struct DirectComposition::CConnection **)&Buffer);
      if ( v8 >= 0 )
      {
        v9 = (volatile signed __int32 *)Buffer;
        v11 = DirectComposition::CConnection::ConfirmFrame(
                (DirectComposition::CConnection *)Buffer,
                (struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)&v17);
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          v10 = (char *)Buffer;
          if ( Buffer )
          {
            DirectComposition::CConnection::~CConnection((DirectComposition::CConnection *)Buffer);
            GreDeleteFastMutex(v10);
          }
        }
        v4 = 0LL;
        v8 = v11;
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_22;
  }
  v8 = -1073741811;
LABEL_22:
  if ( v4 )
  {
    if ( v4 != v21 )
      GreDeleteFastMutex(v4);
  }
  return (unsigned int)v8;
}
