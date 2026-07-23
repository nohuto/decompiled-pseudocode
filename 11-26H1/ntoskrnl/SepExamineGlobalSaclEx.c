/*
 * XREFs of SepExamineGlobalSaclEx @ 0x14031070C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x1403107C4 (SepRmAcquireGlobalSaclReadLock.c)
 *     SepExamineSaclEx @ 0x140A60770 (SepExamineSaclEx.c)
 *     SepRmGlobalSaclFind @ 0x140A95210 (SepRmGlobalSaclFind.c)
 */

void __fastcall SepExamineGlobalSaclEx(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        __int64 a12,
        char *a13)
{
  char *v13; // rsi
  char v14; // bl
  char *v15; // rdi
  __int64 v20; // rcx
  char v21; // al
  char v22[16]; // [rsp+70h] [rbp-28h] BYREF

  v13 = (char *)a12;
  v14 = 0;
  v15 = a13;
  if ( a12 && !*(_BYTE *)a12 || a13 && !*a13 )
  {
    a12 = 0LL;
    SepRmAcquireGlobalSaclReadLock();
    if ( (int)SepRmGlobalSaclFind(&a12, 0LL, a1, 0LL) >= 0 )
    {
      v20 = *(_QWORD *)(a12 + 24);
      if ( v20 )
      {
        LOBYTE(a12) = 0;
        v22[0] = 0;
        SepExamineSaclEx(v20, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, (__int64)&a12, (__int64)v22);
        if ( v13 )
        {
          if ( *v13 || (v21 = 0, (_BYTE)a12) )
            v21 = 1;
          *v13 = v21;
        }
        if ( v15 )
        {
          if ( *v15 || v22[0] )
            v14 = 1;
          *v15 = v14;
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.KernelWaitTime);
    KeLeaveCriticalRegion();
  }
}
