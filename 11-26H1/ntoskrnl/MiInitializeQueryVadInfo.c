/*
 * XREFs of MiInitializeQueryVadInfo @ 0x1409249B0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiIsSoftwareEnclave @ 0x140499C18 (MiIsSoftwareEnclave.c)
 */

unsigned __int64 __fastcall MiInitializeQueryVadInfo(__int64 a1)
{
  int VadFlags; // eax
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r10
  char v6; // r8
  unsigned __int64 result; // rax
  __int64 v8; // rcx
  int v9; // r8d
  _DWORD *v10; // r9
  __int64 v11; // r10
  _DWORD *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx

  VadFlags = MiReadVadFlags(*(_QWORD *)(a1 + 136));
  v6 = VadFlags;
  if ( (VadFlags & 0x80000) != 0 )
  {
    if ( MiIsSoftwareEnclave(v4) )
      *v10 |= 0x40u;
    if ( (*(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32)) == 0x7FFFFFFFDLL )
    {
      *v10 |= 0x80u;
      v12 = (_DWORD *)(a1 + 72);
    }
    else
    {
      v12 = v10;
    }
    v13 = v9 & 0x1C;
    if ( v13 == 4 )
    {
      *v10 |= 8u;
    }
    else
    {
      v12 = v10;
      if ( v13 == 12 )
        *v10 |= 0x10u;
    }
    result = 1572864LL;
    if ( (v9 & 0x180000) == 0x180000 )
      *v12 |= 0x20u;
  }
  else
  {
    result = *(_QWORD *)(v5 + 80);
    v8 = *(_QWORD *)result;
    if ( (v6 & 0x1C) == 8
      || (v3 == 3 && *(_QWORD *)(a1 + 16) >= 0x30uLL || v3 == 7) && (result = *(_QWORD *)(v8 + 64)) != 0 )
    {
      result = *(_DWORD *)(v8 + 56) & 0x30000000;
      if ( (_DWORD)result == 0x10000000 )
        *(_DWORD *)(a1 + 72) |= 4u;
    }
    if ( v3 == 2 )
    {
      v14 = **(_QWORD **)(v5 + 80);
      result = *(_QWORD *)(v14 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)(a1 + 144) = result;
      if ( !result || (result = MiReferenceControlAreaFile(v14), (*(_QWORD *)(a1 + 144) = result) == 0LL) )
        *(_QWORD *)(a1 + 144) = 1LL;
    }
  }
  return result;
}
