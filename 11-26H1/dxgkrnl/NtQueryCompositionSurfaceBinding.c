/*
 * XREFs of NtQueryCompositionSurfaceBinding @ 0x140027BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceBinding(HANDLE Handle, void *Src, void *a3)
{
  PVOID v5; // r14
  char *v6; // r15
  NTSTATUS v7; // edi
  char *v8; // rsi
  char *v9; // rsi
  char *v10; // rcx
  char *i; // rax
  PVOID Object; // [rsp+30h] [rbp-588h] BYREF
  int v14; // [rsp+38h] [rbp-580h]
  PVOID v15; // [rsp+40h] [rbp-578h]
  HANDLE v16; // [rsp+50h] [rbp-568h]
  void *v17; // [rsp+58h] [rbp-560h]
  _QWORD Srca[164]; // [rsp+60h] [rbp-558h] BYREF

  v16 = Handle;
  v17 = a3;
  v5 = 0LL;
  v15 = 0LL;
  memset(Srca, 0, sizeof(Srca));
  if ( Src )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, Src, 8uLL);
    v5 = Object;
    v15 = Object;
  }
  KeEnterCriticalRegion();
  v6 = 0LL;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = (char *)Object;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
    {
      v6 = v8;
    }
    else
    {
      ObfDereferenceObject(v8);
      v7 = -1073741788;
    }
  }
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    v7 = ObReferenceObjectByPointer(v6, 3u, g_pDxgkCompositionObjectType, 0);
    if ( v7 >= 0 )
    {
      KeEnterCriticalRegion();
      v9 = v6 + 40;
      ExAcquirePushLockSharedEx(v6 + 48, 0LL);
      v7 = 0;
    }
    if ( v7 >= 0 )
    {
      Srca[1] = 0LL;
      if ( !v5 )
        v5 = (PVOID)*((_QWORD *)v9 + 5);
      v7 = -1073741275;
      v10 = 0LL;
      if ( *((_DWORD *)v9 + 30) )
      {
        for ( i = (char *)*((_QWORD *)v9 + 13); i != v9 + 104; i = *(char **)i )
        {
          if ( *((PVOID *)i - 1) == v5 )
          {
            v10 = i - 24;
            v7 = 0;
            break;
          }
        }
      }
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(char *, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, Srca);
      CCompositionSurface::UnlockAndRelease((CCompositionSurface *)v9);
    }
    ObfDereferenceObject(v6);
  }
  if ( a3 )
  {
    RtlCopyToUser(a3, Srca, 0x520uLL);
  }
  else
  {
    v7 = -1073741811;
    v14 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
