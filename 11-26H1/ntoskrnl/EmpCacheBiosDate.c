/*
 * XREFs of EmpCacheBiosDate @ 0x140D0E39C
 * Callers:
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     strtoul @ 0x140537CD8 (strtoul.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x140728500 (ZwUnmapViewOfSection.c)
 *     EmpMapPhysicalAddress @ 0x140CBDB60 (EmpMapPhysicalAddress.c)
 */

char __fastcall EmpCacheBiosDate(SIZE_T a1, __int64 a2)
{
  char v2; // di
  char *v3; // rax
  _WORD *v4; // rbx
  unsigned int v5; // eax
  HANDLE v6; // rbx
  char Str[2]; // [rsp+30h] [rbp-58h] BYREF
  char v9; // [rsp+32h] [rbp-56h]
  char v10; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = 0;
  BaseAddress = 0LL;
  Handle = 0LL;
  EmpCachedBiosDate = 0;
  v9 = 0;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 1 )
  {
    v3 = EmpMapPhysicalAddress(a1, a2, &Handle, &BaseAddress, (__int64)v13);
    v4 = v3;
    if ( v3 )
    {
      *(_WORD *)Str = *((_WORD *)v3 + 3);
      v5 = strtoul(Str, 0LL, 16);
      EmpCachedBiosDate = (v5 << 16) + (v5 < 0x80 ? 0x20000000 : 419430400);
      *(_WORD *)Str = *v4;
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16) << 8;
      *(_WORD *)Str = *(_WORD *)((char *)v4 + 3);
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16);
      v2 = 1;
      v10 = 1;
      v6 = Handle;
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      KiUnstackDetachProcess((__int64)v13, 0);
      ZwClose(v6);
    }
  }
  return v2;
}
