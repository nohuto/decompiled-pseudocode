/*
 * XREFs of ?CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z @ 0x1400832E8
 * Callers:
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1400626A0 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DXGVALIDATION::CreateValidationProcessInCallerSession(DXGVALIDATION *this, PVOID *a2)
{
  __int64 v3; // rax
  void *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  NTSTATUS v7; // eax
  PVOID Ptr; // rcx
  _EX_RUNDOWN_REF RunRef; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h]
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-88h] BYREF
  int v14; // [rsp+90h] [rbp-78h]
  int v15; // [rsp+94h] [rbp-74h]
  __int64 v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A8h] [rbp-60h]
  int v19; // [rsp+ACh] [rbp-5Ch]
  __int128 v20; // [rsp+B0h] [rbp-58h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  _BYTE v22[80]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+128h] [rbp+20h]
  __int64 v24; // [rsp+130h] [rbp+28h]
  __int64 v25; // [rsp+138h] [rbp+30h]
  const wchar_t *v26; // [rsp+140h] [rbp+38h]
  __int64 v27; // [rsp+148h] [rbp+40h]

  v27 = 0LL;
  v15 = 0;
  v19 = 0;
  RunRef.Count = 0LL;
  Handle = 0LL;
  *(_QWORD *)&SourceString.Length = 2883626LL;
  SourceString.Buffer = L"\\SystemRoot\\System32\\";
  v3 = operator new[](0x474uLL, 0x4B677844u, 256LL);
  v4 = (void *)v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = 1140;
    *(_DWORD *)v3 = 1140;
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)(v3 + 64) = v3 + 1096;
    *(_WORD *)(v3 + 58) = SourceString.MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 56), &SourceString);
    memset(v22, 0, sizeof(v22));
    v21 = 88LL;
    v26 = L"\\SystemRoot\\System32\\csrss.exe";
    v27 = 0LL;
    v23 = 40LL;
    v24 = 131077LL;
    v25 = 60LL;
    v14 = 48;
    v16 = 0LL;
    v18 = 576;
    v17 = 0LL;
    v20 = 0LL;
    LOBYTE(v6) = ZwCreateUserProcess(&RunRef);
    v5 = v6;
    if ( v6 >= 0 )
    {
      Object = 0LL;
      v7 = ObReferenceObjectByHandle(RunRef.Ptr, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      Ptr = RunRef.Ptr;
      v5 = v7;
      *a2 = Object;
      ZwTerminateProcess(Ptr, -1);
      ZwClose(RunRef.Ptr);
      ZwClose(Handle);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
