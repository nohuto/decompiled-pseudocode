/*
 * XREFs of ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x140262374
 * Callers:
 *     ?CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z @ 0x1401AC984 (-CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z.c)
 * Callees:
 *     ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x14024C2BC (-AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z.c)
 */

char __fastcall UmfdUMBuffer::AllocTemporaryBuffer(UmfdUMBuffer *this, __int64 a2)
{
  ULONG_PTR v2; // rdi
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID v6; // [rsp+60h] [rbp+20h] BYREF
  ULONG_PTR v7; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+38h] BYREF

  v2 = (unsigned int)a2;
  if ( *((_QWORD *)this + 1) )
  {
    if ( (unsigned int)a2 <= *((_DWORD *)this + 4) )
      return 1;
    BaseAddress[0] = *((PVOID *)this + 1);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
  LODWORD(v6) = 0;
  if ( UmfdUMBuffer::AlignSizeTo(v2, a2, (unsigned int *)&v6) )
  {
    v7 = (unsigned int)v6;
    v6 = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, 0LL, &v7, 0x3000u, 4u) >= 0 )
    {
      if ( v7 >= v2 )
      {
        if ( v7 <= 0xFFFFFFFF )
        {
          *((_DWORD *)this + 4) = v7;
          *((_QWORD *)this + 1) = v6;
          return 1;
        }
        *((_DWORD *)this + 4) = -1;
      }
      BaseAddress[0] = v6;
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return 0;
}
