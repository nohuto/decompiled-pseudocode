/*
 * XREFs of PspQueryQuotaLimits @ 0x140A7CBE0
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MmQueryWorkingSetInformation @ 0x1404706D0 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryQuotaLimits(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  size_t v6; // rdi
  __int64 result; // rax
  PVOID v10; // r14
  _QWORD *v11; // rcx
  int v12; // esi
  int v13; // r8d
  int v14; // r8d
  int v15; // [rsp+40h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD Src[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v21[7]; // [rsp+78h] [rbp-B0h] BYREF
  int v22; // [rsp+B0h] [rbp-78h]
  _OWORD v23[3]; // [rsp+C0h] [rbp-68h] BYREF

  v6 = a4;
  memset_0(Src, 0, 0x58uLL);
  Object = 0LL;
  v15 = 0;
  memset(v23, 0, sizeof(v23));
  if ( (_DWORD)v6 != 48 && (_DWORD)v6 != 88 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096,
             (__int64)PsProcessType,
             a6,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = Object;
    v11 = (_QWORD *)*((_QWORD *)Object + 95);
    Src[0] = v11[24];
    Src[1] = v11[8];
    v21[1] = v11[40];
    v21[3] = v11[56];
    v21[2] = -1LL;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v23);
    v12 = MmQueryWorkingSetInformation(&v18, &v17, &Object, &v20, v21, &v15);
    KiUnstackDetachProcess((__int64)v23, 0);
    v13 = 2 - ((v15 & 4) != 0);
    if ( (v15 & 1) != 0 )
      v14 = v13 | 4;
    else
      v14 = v13 | 8;
    v22 = v14;
    ObfDereferenceObjectWithTag(v10, 0x79517350u);
    if ( v12 >= 0 )
    {
      if ( a6 )
        RtlCopyToUser(a3, Src, v6);
      else
        RtlCopyVolatileMemory(a3, Src, v6);
      if ( a5 )
      {
        if ( a6 )
          RtlWriteULongToUser(a5, v6);
        else
          *a5 = v6;
      }
    }
    return (unsigned int)v12;
  }
  return result;
}
