/*
 * XREFs of NtHWCursorUpdatePointer @ 0x140168170
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(void *Src, void *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // r15
  char *v15; // rsi
  char *v16; // r14
  int i; // edi
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int128 v24; // [rsp+30h] [rbp-C8h] BYREF
  void *Srca[2]; // [rsp+40h] [rbp-B8h]
  int v26; // [rsp+50h] [rbp-A8h]
  int v27; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v29; // [rsp+64h] [rbp-94h]
  int v30; // [rsp+68h] [rbp-90h]
  int v31; // [rsp+6Ch] [rbp-8Ch]
  char *v32; // [rsp+70h] [rbp-88h]
  void *v33; // [rsp+78h] [rbp-80h]
  void *v34; // [rsp+80h] [rbp-78h]
  char *v35; // [rsp+88h] [rbp-70h]
  PVOID Buffer; // [rsp+90h] [rbp-68h]
  __int128 v37; // [rsp+98h] [rbp-60h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-50h]
  __int64 v39; // [rsp+B0h] [rbp-48h] BYREF
  int v40; // [rsp+B8h] [rbp-40h]
  int v41; // [rsp+BCh] [rbp-3Ch]

  if ( !Src )
    return 3221225485LL;
  v37 = 0LL;
  v38 = 0LL;
  RtlCopyFromUser(&v37, Src, 0x18uLL);
  v39 = *((_QWORD *)&v37 + 1);
  v40 = v38;
  v41 = BYTE4(v38) & 1;
  if ( !a2 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4, v3);
    result = (*(__int64 (__fastcall **)(__int128 *, __int64 *, _QWORD))(DxgkWin32kInterface + 640))(&v37, &v39, 0LL);
    if ( (int)result < 0 )
      return 3221225473LL;
    return result;
  }
  v24 = 0LL;
  *(_OWORD *)Srca = 0LL;
  RtlCopyFromUser(&v24, a2, 0x20uLL);
  if ( (unsigned int)(v24 - 1) > 1
    || !Srca[1]
    || HIDWORD(v24) > 0x1000
    || DWORD1(v24) > HIDWORD(v24) >> 2
    || DWORD2(v24) > 0x400 )
  {
    return 3221225485LL;
  }
  v9 = 4 * DWORD1(v24);
  v10 = DWORD2(v24) * 4 * DWORD1(v24);
  v11 = (char *)PALLOCMEM(v10, 1886221383LL, v7, v8);
  v14 = v11;
  Buffer = v11;
  if ( !v11 )
    return 3221225473LL;
  if ( v9 == HIDWORD(v24) )
  {
    RtlCopyFromUser(v11, Srca[1], v10);
  }
  else
  {
    v15 = (char *)Srca[1];
    v34 = Srca[1];
    v16 = v11;
    v35 = v11;
    for ( i = DWORD2(v24); ; --i )
    {
      v26 = i;
      if ( !i )
        break;
      RtlCopyFromUser(v16, v15, v9);
      v15 += HIDWORD(v24);
      v34 = v15;
      v16 += v9;
      v35 = v16;
    }
  }
  v31 = 0;
  if ( (_DWORD)v24 == 1 )
  {
    v27 = 2;
  }
  else
  {
    v23 = 0;
    v13 = 4LL;
    if ( (_DWORD)v24 == 2 )
      v23 = 4;
    v27 = v23;
  }
  v28 = *(_QWORD *)((char *)&v24 + 4);
  v29 = v9;
  v30 = DWORD2(v37);
  v32 = v14;
  v33 = Srca[0];
  v18 = DxDdGetDxgkWin32kInterface(v13, v12);
  v19 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, int *, _QWORD))(v18 + 648))(&v37, &v39, &v27, 0LL);
  GreDeleteFastMutex(v14, v20, v21, v22);
  if ( v19 < 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v19;
}
