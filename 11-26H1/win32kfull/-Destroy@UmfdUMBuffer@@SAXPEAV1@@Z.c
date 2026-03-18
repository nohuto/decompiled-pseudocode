/*
 * XREFs of ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1401C4A14
 * Callers:
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1401C49E0 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdUMBuffer::Destroy(PVOID pv)
{
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_QWORD *)pv + 1) )
  {
    BaseAddress = (PVOID)*((_QWORD *)pv + 1);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( *((_QWORD *)pv + 3) )
  {
    BaseAddress = (PVOID)*((_QWORD *)pv + 3);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  EngFreeMem(pv);
}
