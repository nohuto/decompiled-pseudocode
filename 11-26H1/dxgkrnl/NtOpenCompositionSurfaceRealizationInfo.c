/*
 * XREFs of NtOpenCompositionSurfaceRealizationInfo @ 0x140027E60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceRealizationInfo(HANDLE Handle, void *a2, void *a3, void *a4)
{
  NTSTATUS v7; // edi
  _BYTE *v8; // rsi
  __int64 Pool2; // r13
  size_t v10; // rax
  __int64 Win32kImportTable; // rax
  char *v12; // r15
  char *v13; // r14
  char *v14; // r14
  char *v15; // r12
  char *i; // rax
  unsigned int v18; // esi
  _BYTE *v19; // r14
  bool v20; // [rsp+30h] [rbp-588h]
  unsigned int Src; // [rsp+34h] [rbp-584h] BYREF
  size_t Size; // [rsp+38h] [rbp-580h] BYREF
  PVOID Object; // [rsp+40h] [rbp-578h] BYREF
  _BYTE *v24; // [rsp+48h] [rbp-570h]
  _BYTE *v25; // [rsp+50h] [rbp-568h]
  __int64 v26; // [rsp+58h] [rbp-560h]
  PVOID v27; // [rsp+60h] [rbp-558h]
  void *v28; // [rsp+68h] [rbp-550h]
  void *v29; // [rsp+70h] [rbp-548h]
  HANDLE v30; // [rsp+78h] [rbp-540h]
  void *v31; // [rsp+80h] [rbp-538h]
  _BYTE v32[1248]; // [rsp+90h] [rbp-528h] BYREF

  v29 = a4;
  v28 = a3;
  v30 = Handle;
  v31 = a3;
  v25 = a4;
  v7 = 0;
  v27 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  Pool2 = 0LL;
  v26 = 0LL;
  Src = 0;
  v20 = 0;
  if ( a2 && a3 )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, a2, 8uLL);
    v27 = Object;
    LODWORD(Size) = 0;
    RtlCopyFromUser(&Size, a3, 4uLL);
    Src = Size;
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  Size = 0LL;
  if ( v7 >= 0 && a4 && Src )
  {
    v25 = 0LL;
    v10 = 40LL * Src;
    Size = v10;
    if ( is_mul_ok(Src, 0x28uLL) )
    {
      v7 = 0;
    }
    else
    {
      v10 = -1LL;
      Size = -1LL;
      v7 = -1073741675;
    }
    if ( v7 >= 0 )
    {
      if ( v10 > 0x4D8 )
      {
        Pool2 = ExAllocatePool2(257LL, v10, 1766675267LL);
        v26 = Pool2;
        v8 = (_BYTE *)Pool2;
        v24 = (_BYTE *)Pool2;
        if ( !Pool2 )
          v7 = -1073741801;
      }
      else
      {
        v8 = v32;
        v24 = v32;
      }
    }
  }
  v25 = v8;
  if ( v7 < 0 )
    goto LABEL_46;
  Win32kImportTable = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
  {
    v12 = 0LL;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v13 = (char *)Object;
      if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
      {
        v12 = v13;
      }
      else
      {
        ObfDereferenceObject(v13);
        v7 = -1073741788;
      }
    }
    if ( v7 < 0 )
      goto LABEL_46;
    v14 = 0LL;
    v7 = ObReferenceObjectByPointer(v12, 3u, g_pDxgkCompositionObjectType, 0);
    if ( v7 >= 0 )
    {
      KeEnterCriticalRegion();
      v14 = v12 + 40;
      ExAcquirePushLockSharedEx(v12 + 48, 0LL);
      v7 = 0;
    }
    if ( v7 >= 0 )
    {
      v7 = -1073741275;
      v15 = 0LL;
      if ( *((_DWORD *)v14 + 30) )
      {
        for ( i = (char *)*((_QWORD *)v14 + 13); i != v14 + 104; i = *(char **)i )
        {
          if ( *((PVOID *)i - 1) == v27 )
          {
            v15 = i - 24;
            v7 = 0;
            break;
          }
        }
      }
      if ( v7 >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v15 + 88LL))(v15) )
          v7 = (*(__int64 (__fastcall **)(char *, _QWORD, unsigned int *, _BYTE *))(*(_QWORD *)v15 + 80LL))(
                 v15,
                 0LL,
                 &Src,
                 v8);
        else
          v7 = -1073741811;
      }
      CCompositionSurface::UnlockAndRelease((CCompositionSurface *)v14);
      v20 = v7 >= 0;
    }
    ObfDereferenceObject(v12);
  }
  else
  {
    v7 = -1073741790;
  }
  if ( v7 >= 0 )
  {
    RtlCopyToUser(v28, &Src, 4uLL);
    if ( v8 )
      RtlCopyToUser(v29, v8, Size);
    goto LABEL_34;
  }
LABEL_46:
  if ( v20 )
  {
    if ( v8 )
    {
      v18 = 0;
      if ( Src )
      {
        v19 = v25;
        do
          ObCloseHandle(*(HANDLE *)&v19[40 * v18++ + 8], 1);
        while ( v18 < Src );
      }
    }
  }
LABEL_34:
  if ( Pool2 )
    ExFreePool2(Pool2, 1766675267LL, 0LL, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
