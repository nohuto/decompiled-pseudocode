/*
 * XREFs of PepQueryVetoList @ 0x140038D2C
 * Callers:
 *     QueryPepCapabilites @ 0x14003CE50 (QueryPepCapabilites.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     PepQueryName @ 0x140038BF4 (PepQueryName.c)
 */

__int64 __fastcall PepQueryVetoList(__int64 a1)
{
  unsigned int Name; // edi
  unsigned int *Pool2; // rax
  unsigned int *v4; // rbx
  unsigned int i; // eax
  unsigned int v6; // ebp
  unsigned int j; // esi
  void *v8; // rcx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  if ( (int)PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 24LL, &v10) >= 0 && v10 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16 * v10 + 8, 1919119952LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v10;
      for ( i = 0; i < *v4; i = v6 )
      {
        v6 = i + 1;
        Name = PepQueryName(a1, i + 1, 0x19u, (__int64)&v4[4 * i + 2]);
        if ( Name )
          goto LABEL_12;
      }
      Name = ((__int64 (__fastcall *)(unsigned int *))qword_140015930)(v4);
      if ( !Name )
      {
        qword_140015CC0 = (__int64)v4;
        return Name;
      }
LABEL_12:
      for ( j = 0; j < *v4; ++j )
      {
        v8 = *(void **)&v4[4 * j + 4];
        if ( v8 )
          ExFreePoolWithTag(v8, (ULONG)1919119952);
      }
      ExFreePoolWithTag(v4, (ULONG)1919119952);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return Name;
}
