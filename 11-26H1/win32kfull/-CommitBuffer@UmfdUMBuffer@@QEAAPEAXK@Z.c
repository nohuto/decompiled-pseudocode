/*
 * XREFs of ?CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z @ 0x1401AC984
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 * Callees:
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x140262374 (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 */

__int64 __fastcall UmfdUMBuffer::CommitBuffer(UmfdUMBuffer *this, unsigned int a2)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 *v6; // r14
  unsigned int v8; // eax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  if ( a2 > *((_DWORD *)this + 9) )
  {
    v4 = 0LL;
    if ( UmfdUMBuffer::AllocTemporaryBuffer(this, a2) )
      v4 = *((_QWORD *)this + 1);
  }
  else
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 1) )
    {
      BaseAddress = (PVOID)*((_QWORD *)this + 1);
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      *((_QWORD *)this + 1) = 0LL;
      *((_DWORD *)this + 4) = 0;
    }
    v5 = *((_DWORD *)this + 8);
    if ( (unsigned int)v3 <= v5 )
    {
      v6 = (__int64 *)((char *)this + 24);
LABEL_6:
      v4 = *v6;
      goto LABEL_7;
    }
    if ( (int)v3 + 4095 >= (unsigned int)v3 )
    {
      v8 = (v3 + 4095) & 0xFFFFF000;
      if ( v8 >= v5 && v8 >= (unsigned int)v3 && v8 <= *((_DWORD *)this + 9) )
      {
        v6 = (__int64 *)((char *)this + 24);
        RegionSize = ((_DWORD)v3 + 4095) & 0xFFFFF000;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 3, 0LL, &RegionSize, 0x1000u, 4u) >= 0
          && RegionSize >= v3 )
        {
          if ( RegionSize > 0xFFFFFFFF )
          {
            *((_DWORD *)this + 8) = -1;
            goto LABEL_7;
          }
          *((_DWORD *)this + 8) = RegionSize;
          goto LABEL_6;
        }
      }
    }
  }
LABEL_7:
  *(_QWORD *)this = v4;
  return v4;
}
