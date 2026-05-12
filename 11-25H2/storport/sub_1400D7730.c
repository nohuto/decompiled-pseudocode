/*
 * XREFs of sub_1400D7730 @ 0x1400D7730
 * Callers:
 *     <none>
 * Callees:
 *     sub_14008BAE8 @ 0x14008BAE8 (sub_14008BAE8.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     sub_1400F2F70 @ 0x1400F2F70 (sub_1400F2F70.c)
 */

void __fastcall sub_1400D7730(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  bool v4; // zf
  __int64 v5; // rdi
  char **v6; // r8
  PVOID *v7; // rdx
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  int *v9; // [rsp+20h] [rbp-28h]
  char *v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER v12; // [rsp+68h] [rbp+20h] BYREF

  v12.QuadPart = 0LL;
  v4 = *((_DWORD *)Context + 164) == 0;
  v5 = *((_QWORD *)Context + 16);
  v10 = Context;
  if ( v4 || (v12.QuadPart = -100000000LL, KeWaitForSingleObject(Context + 256, Executive, 0, 0, &v12) != 258) )
  {
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1176), 1u);
    v6 = (char **)*((_QWORD *)Context + 14);
    if ( v6[1] != Context + 112 || (v7 = (PVOID *)*((_QWORD *)Context + 15), *v7 != Context + 112) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (char *)v7;
    --*(_DWORD *)(v5 + 1304);
    ExReleaseResourceLite((PERESOURCE)(v5 + 1176));
    KeLeaveCriticalRegion();
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
    sub_1400F2F70(Context);
    sub_1400F1278(Context);
    v11 = 2;
    v9 = &v11;
    sub_1400F24C8(Context, 2147483657LL, 4LL);
    _InterlockedOr(v8, 0);
    *((_DWORD *)Context + 244) = 4;
    sub_1400DEFC4(&v10);
  }
  else
  {
    v11 = 3;
    v9 = &v11;
    sub_1400F24C8(Context, 2147483657LL, 4LL);
    if ( (dword_140168408 & 2) != 0 )
      sub_14008BAE8(2, (__int64)Context, 0LL);
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
  }
}
