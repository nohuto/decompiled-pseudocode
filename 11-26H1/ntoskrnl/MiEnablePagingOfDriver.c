/*
 * XREFs of MiEnablePagingOfDriver @ 0x140CF24D0
 * Callers:
 *     <none>
 * Callees:
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x140864360 (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x140AC95AC (MiSnapDriverRange.c)
 *     MiLockPagableSections @ 0x140D00C50 (MiLockPagableSections.c)
 */

__int64 __fastcall MiEnablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v3; // edi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v6; // [rsp+50h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 104) |= 0x400000u;
  v6 = 0LL;
  v5 = 0LL;
  if ( MiImagePagable(a1, v1) )
  {
    v3 = 0;
    do
    {
      v3 = MiSnapDriverRange(a1, v3, 1, 0LL, (unsigned __int64 *)&v5, (unsigned __int64 *)&v6);
      if ( v5 )
        MiSetPagingOfDriver(a1, v5, v6);
    }
    while ( v3 );
    MiLockPagableSections(a1, 1LL);
  }
  return 0LL;
}
