/*
 * XREFs of ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x14034A5DC
 * Callers:
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x14034CFE0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x140239918 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void *__fastcall UMPDOBJ::UMPDAllocUserMem(UMPDOBJ *this, SIZE_T Length)
{
  unsigned int v2; // ebx
  SIZE_T v4; // rdx
  volatile void *v5; // rbx
  size_t Size; // [rsp+20h] [rbp-58h]
  volatile void *Address[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h]

  v2 = Length;
  Address[1] = this;
  Address[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  DWORD1(v9) = 117;
  LOBYTE(v9) = 0;
  *(_QWORD *)&v10 = *(_QWORD *)this;
  DWORD2(v10) = Length;
  LODWORD(Size) = 8;
  UMPDOBJ::Thunk(this, &v9, 0x20u, Address, Size);
  v4 = v2;
  v5 = Address[0];
  ProbeForRead(Address[0], v4, 1u);
  UMPDOBJ::ResetHeap(this);
  return (void *)v5;
}
