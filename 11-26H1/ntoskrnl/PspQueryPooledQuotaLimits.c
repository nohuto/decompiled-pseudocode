/*
 * XREFs of PspQueryPooledQuotaLimits @ 0x140B713DC
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryPooledQuotaLimits(ULONG_PTR BugCheckParameter1, void *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r8
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  _QWORD Src[2]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-78h]
  unsigned __int64 v23; // [rsp+68h] [rbp-70h]
  unsigned __int64 v24; // [rsp+70h] [rbp-68h]
  unsigned __int64 v25; // [rsp+78h] [rbp-60h]
  unsigned __int64 v26; // [rsp+80h] [rbp-58h]
  unsigned __int64 v27; // [rsp+88h] [rbp-50h]
  unsigned __int64 v28; // [rsp+90h] [rbp-48h]

  Object = 0LL;
  memset_0(Src, 0, 0x48uLL);
  if ( a3 != 72 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096,
             (__int64)PsProcessType,
             a5,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)Object + 95);
    v11 = v10[24];
    v22 = v11;
    v12 = v10[16];
    Src[1] = v12;
    v13 = v10[17];
    Src[0] = v13;
    v14 = v10[8];
    v25 = v14;
    v15 = *v10;
    v24 = *v10;
    v16 = v10[1];
    v23 = v16;
    v17 = v10[40];
    v28 = v17;
    v18 = v10[32];
    v27 = v18;
    v19 = v10[33];
    if ( v11 <= v12 )
      v11 = v12;
    v22 = v11;
    if ( v14 <= v15 )
      v14 = v15;
    v25 = v14;
    if ( v17 <= v18 )
      v17 = v18;
    v28 = v17;
    if ( v13 <= v12 )
      v13 = v12;
    Src[0] = v13;
    if ( v16 <= v15 )
      v16 = v15;
    v23 = v16;
    if ( v19 <= v18 )
      v19 = v18;
    v26 = v19;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( a5 )
      RtlCopyToUser(a2, Src, 0x48uLL);
    else
      RtlCopyVolatileMemory(a2, Src, 0x48uLL);
    if ( a4 )
    {
      if ( a5 )
        RtlWriteULongToUser(a4, 72);
      else
        *a4 = 72;
    }
    return 0LL;
  }
  return result;
}
