/*
 * XREFs of NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140025570
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x140024424 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1400254D4 (-ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x14002584C (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectReturnTokenHandle(void *a1, void *Src, void *a3)
{
  int ConsumerTokenOperation; // edi
  unsigned __int64 v7; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  PVOID v12; // rcx
  __int64 v13; // rax
  HANDLE Srca; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-98h]
  __int128 v18; // [rsp+68h] [rbp-90h] BYREF
  __int128 v19; // [rsp+78h] [rbp-80h]
  __int128 v20; // [rsp+88h] [rbp-70h]
  __int128 v21; // [rsp+98h] [rbp-60h] BYREF
  char v22; // [rsp+A8h] [rbp-50h]
  __int64 v23; // [rsp+B0h] [rbp-48h]
  __int64 v24; // [rsp+B8h] [rbp-40h]
  __int64 v25; // [rsp+C0h] [rbp-38h]
  __int64 v26; // [rsp+C8h] [rbp-30h]
  PVOID Object; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int64 v28; // [rsp+118h] [rbp+20h] BYREF

  Object = a3;
  ConsumerTokenOperation = 0;
  Srca = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v28 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  KeEnterCriticalRegion();
  if ( a3 && Src )
  {
    v16 = 0LL;
    RtlCopyFromUser(&v16, Src, 8uLL);
    v7 = v16;
    v17 = v16;
  }
  else
  {
    ConsumerTokenOperation = -1073741811;
  }
  if ( ConsumerTokenOperation >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    ConsumerTokenOperation = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(Win32kImportTable + 504))(
                               0x80000000LL,
                               &v28);
    if ( ConsumerTokenOperation >= 0 )
    {
      ConsumerTokenOperation = FlipManagerCreateConsumerTokenOperation(a1, v7, (struct FlipManagerTokenInitInfo *)&v21);
      if ( ConsumerTokenOperation >= 0 )
      {
        LODWORD(v18) = 48;
        *((_QWORD *)&v18 + 1) = 0LL;
        DWORD2(v19) = 0;
        *(_QWORD *)&v19 = 0LL;
        v20 = v28;
        Object = 0LL;
        LOBYTE(v9) = 1;
        ConsumerTokenOperation = ObCreateObject(0LL, g_pDxgkCompositionObjectType, &v18, v9, 0LL, 160, 0, 0, &Object);
        if ( ConsumerTokenOperation >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess();
          ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
          *((_DWORD *)Object + 2) = ProcessSessionId;
          ConsumerTokenOperation = ZwAllocateLocallyUniqueId((PLUID)Object + 3);
          v12 = Object;
          if ( ConsumerTokenOperation < 0
            || (ConsumerTokenOperation = FlipManagerTokenObject::ObjectInit(
                                           (struct DxgkCompositionObject *)Object,
                                           &v21,
                                           (struct IDxgkCompositionObject **)Object + 2),
                v12 = Object,
                ConsumerTokenOperation < 0) )
          {
            ObfDereferenceObject(v12);
          }
          else
          {
            ConsumerTokenOperation = ObInsertObject(Object, 0LL, 3u, 0, 0LL, &Srca);
          }
        }
        if ( ConsumerTokenOperation >= 0 )
        {
          RtlCopyToUser(a3, &Srca, 8uLL);
          Srca = 0LL;
        }
      }
    }
  }
  if ( v28 )
  {
    v13 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(unsigned __int64))(v13 + 624))(v28);
  }
  if ( Srca )
    NtClose(Srca);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v21);
  return (unsigned int)ConsumerTokenOperation;
}
