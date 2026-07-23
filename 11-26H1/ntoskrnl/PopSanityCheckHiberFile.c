/*
 * XREFs of PopSanityCheckHiberFile @ 0x140B035D0
 * Callers:
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140B0316C (PopResizeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ZwFsControlFile @ 0x1407286E0 (ZwFsControlFile.c)
 */

__int64 __fastcall PopSanityCheckHiberFile(void *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _DWORD *a5)
{
  NTSTATUS Status; // edx
  __int64 v9; // r10
  __int64 i; // r8
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK v14; // [rsp+58h] [rbp-20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  Status = ZwFsControlFile(a1, 0LL, 0LL, 0LL, &v14, 0x9003Bu, a3, 8u, &v13, 8u);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(a2 + 152), Executive, 0, 0, 0LL);
    Status = v14.Status;
  }
  if ( Status >= 0 )
  {
    v9 = 0LL;
    for ( i = 0LL; ; i = (unsigned int)(i + 2) )
    {
      v11 = *(_QWORD *)(v13 + 8 * i);
      if ( !v11 )
        break;
      v9 += v11;
      if ( *(int *)(v13 + 8LL * (unsigned int)(i + 1) + 4) < 0 )
        return (unsigned int)-1073741823;
    }
    if ( v9 >= *a3 )
    {
      *a4 = v13;
      *a5 = 8 * i + 16;
      return (unsigned int)Status;
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)Status;
}
