/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x14001DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x140020C18 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        void *a1,
        unsigned int a2,
        int a3,
        void *a4,
        void *a5,
        void *a6)
{
  unsigned __int64 v7; // r13
  NTSTATUS LocallyUniqueId; // edi
  void *Pool2; // rsi
  size_t v10; // r14
  unsigned __int64 v11; // rcx
  PVOID v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  PVOID v18; // rcx
  __int64 v19; // rax
  __int64 Win32kImportTable; // rax
  size_t Size; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  void *v24; // [rsp+68h] [rbp-A0h]
  size_t v25; // [rsp+70h] [rbp-98h]
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  PVOID v27; // [rsp+80h] [rbp-88h]
  void *v28; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+94h] [rbp-74h]
  size_t v31; // [rsp+98h] [rbp-70h]
  _QWORD v32[13]; // [rsp+A0h] [rbp-68h] BYREF
  PVOID Object; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+118h] [rbp+10h]
  int v35; // [rsp+120h] [rbp+18h]
  void *Src; // [rsp+128h] [rbp+20h]

  Src = a4;
  v35 = a3;
  v34 = a2;
  Object = a1;
  v7 = a2;
  LocallyUniqueId = 0;
  Handle = (HANDLE)-1LL;
  Pool2 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  KeEnterCriticalRegion();
  v12 = Object;
  if ( !Object || !(_DWORD)v7 || !a3 || !Src || !a5 )
    LocallyUniqueId = -1073741811;
  if ( LocallyUniqueId < 0 )
    goto LABEL_20;
  v11 = v7;
  Size = 24 * v7;
  if ( is_mul_ok(v7, 0x18uLL) )
  {
    LocallyUniqueId = 0;
  }
  else
  {
    Size = -1LL;
    LocallyUniqueId = -1073741675;
  }
  if ( LocallyUniqueId >= 0 )
  {
    v13 = 24 * v7;
    if ( !is_mul_ok(v7, 0x18uLL) )
      v13 = -1LL;
    if ( !v13 )
      v13 = 1LL;
    if ( v13 <= 0x7FFFFFFF )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v13, 1650675028LL);
      v12 = Object;
    }
    v24 = Pool2;
    if ( !Pool2 )
      LocallyUniqueId = -1073741801;
    if ( LocallyUniqueId >= 0 )
    {
      RtlCopyFromUser(Pool2, v12, Size);
      Object = 0LL;
      RtlCopyFromUser(&Object, Src, 8uLL);
      v27 = Object;
      Size = 0LL;
      RtlCopyFromUser(&Size, a5, 8uLL);
      v10 = Size;
      v25 = Size;
      LocallyUniqueId = 0;
LABEL_20:
      if ( LocallyUniqueId >= 0 )
      {
        v14 = ((__int64 (*)(void))DxgkGetWin32kImportTable)();
        LocallyUniqueId = (*(__int64 (__fastcall **)(__int64, __int64 *))(v14 + 504))(0x80000000LL, &v23);
        if ( LocallyUniqueId >= 0 )
        {
          v32[0] = 48LL;
          memset(&v32[1], 0, 24);
          v32[4] = v23;
          v32[5] = 0LL;
          v28 = Pool2;
          v29 = v7;
          v30 = v35;
          v31 = v10;
          Object = 0LL;
          LOBYTE(v15) = 1;
          LocallyUniqueId = ObCreateObject(0LL, g_pDxgkCompositionObjectType, v32, v15, 0LL, 136, 0, 0, &Object);
          if ( LocallyUniqueId >= 0 )
          {
            CurrentProcess = PsGetCurrentProcess();
            ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
            *((_DWORD *)Object + 2) = ProcessSessionId;
            LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 3);
            v18 = Object;
            if ( LocallyUniqueId < 0
              || (LocallyUniqueId = CompositionTokenObject::ObjectInit(
                                      (struct DxgkCompositionObject *)Object,
                                      &v28,
                                      (struct IDxgkCompositionObject **)Object + 2),
                  v18 = Object,
                  LocallyUniqueId < 0) )
            {
              ObfDereferenceObject(v18);
            }
            else
            {
              LocallyUniqueId = ObInsertObject(Object, 0LL, 3u, 0, 0LL, &Handle);
            }
          }
          if ( LocallyUniqueId >= 0 )
          {
            v11 = (unsigned __int64)a6;
            if ( a6 )
              RtlCopyToUser(a6, &Handle, 8uLL);
            else
              LocallyUniqueId = -1073741811;
            if ( LocallyUniqueId >= 0 && v10 )
            {
              v19 = ((__int64 (*)(void))DxgkGetWin32kImportTable)();
              (*(void (__fastcall **)(size_t, PVOID))(v19 + 56))(v10, v27);
            }
          }
        }
      }
    }
  }
  if ( v23 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable(v11);
    (*(void (__fastcall **)(__int64))(Win32kImportTable + 624))(v23);
  }
  if ( LocallyUniqueId < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( Pool2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Pool2);
  KeLeaveCriticalRegion();
  return (unsigned int)LocallyUniqueId;
}
