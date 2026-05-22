/*
 * XREFs of ?Unmap@AlpcSection@@CAJPEAX00@Z @ 0x1801133EC
 * Callers:
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010F7D0 (--1AlpcSection@@UEAA@XZ.c)
 *     ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x180110384 (-AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x180110540 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcSection::Unmap(void *a1, void *a2, void *a3)
{
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax

  v5 = NtAlpcDeleteSectionView(a2, 0LL, a1);
  if ( v5 >= 0 )
  {
    if ( !a3 )
      return 0LL;
    v5 = NtAlpcDeletePortSection(a2, 0LL, a3);
    if ( v5 >= 0 )
      return 0LL;
  }
  v6 = v5 | 0x10000000;
  result = 2147549183LL;
  if ( v6 < 0 )
    return (unsigned int)v6;
  return result;
}
