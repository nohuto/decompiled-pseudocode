/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140003A5C
 * Callers:
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140003B58 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140063780 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140066320 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1400E6004 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char *PoolWithTag; // r14
  unsigned int v8; // ecx
  PVOID *v9; // rdi
  __int64 i; // r8
  int v11; // r8d
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v5 = 0;
    NumberOfBytes = 0LL;
    if ( (int)RtlULongLongMult(8uLL, a2, &NumberOfBytes) >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v8 = a1[1];
        v9 = (PVOID *)(a1 + 2);
        for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(v11 + 1) )
        {
          wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
            &PoolWithTag[8 * (unsigned int)i],
            (char *)*v9 + 8 * (unsigned int)i);
          v8 = a1[1];
        }
        if ( *v9 )
        {
          if ( v8 )
          {
            do
              wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(
                (char *)*v9 + 8 * v5++,
                v6,
                i);
            while ( v5 < a1[1] );
            v9 = (PVOID *)(a1 + 2);
          }
          ExFreePoolWithTag(*v9, 0x7272414Bu);
        }
        *a1 = v2;
        *v9 = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
